/* loops.c: functions whose loop body the compiler placed before the function's entry (the entry branches to the loop's
   test, the test branches back into the body). The decomp lists the entry as the function, so its C calls the body's
   address as if it were a function of its own (tools/8-build/rawcalls.py lists such calls); equiv.py passes that C, as
   its simulator runs the original bytes there, but the native build has nothing at that address. These are the whole
   functions, body included, from their disassembly. */
#include <stdint.h>

#define B(a) (*(volatile uint8_t *)(uintptr_t)(a))

/* FUN_0c0167cc(src, dst) (entry 0x0C0167CC; its loop body is FUN_0c01678e, 0x0C01678E): the string at src written to dst
   with the letters as Shift-JIS full-width ones (0x82, then 'A'..'Z' + 31 or 'a'..'z' + 32; the byte after a letter is
   skipped, as the original's delay slot does), any other byte copied with the byte after it (a two-byte character);
   dst is ended with 0 */
static uint32_t sjis_wide_from(uint32_t s, uint32_t d, uint32_t c)
{
    for (;;) {
        if (c >= 'A' && c <= 'Z') {
            B(d++) = 0x82;
            B(d++) = (uint8_t)(c + 31);
            s++;
        } else if (c >= 'a' && c <= 'z') {
            B(d++) = 0x82;
            B(d++) = (uint8_t)(c + 32);
            s++;
        } else {
            B(d++) = (uint8_t)c;
            B(d++) = B(s++);
        }
        c = B(s++);
        if (!c) {
            B(d) = 0;
            return c;
        }
    }
}

int32_t sjis_wide(uint32_t s, uint32_t d) __asm__("FUN_0c0167cc");
int32_t sjis_wide(uint32_t s, uint32_t d)
{
    uint32_t c = B(s++);
    if (!c) {
        B(d) = 0;
        return 0;
    }
    return (int32_t)sjis_wide_from(s, d, c);
}

int32_t sjis_wide_thunk(uint32_t s, uint32_t d) __asm__("thunk_FUN_0c0167cc");
int32_t sjis_wide_thunk(uint32_t s, uint32_t d) { return sjis_wide(s, d); }

/* the loop body entered with the character already read (r6) and src past it */
int32_t sjis_wide_body(uint32_t s, uint32_t d, uint32_t c) __asm__("FUN_0c01678e");
int32_t sjis_wide_body(uint32_t s, uint32_t d, uint32_t c) { return (int32_t)sjis_wide_from(s, d, c & 0xFF); }

/* FUN_0c03e08c(dst, src): the string's bytes copied, without its 0; returns the end of dst */
uint32_t str_copy_end(uint32_t d, uint32_t s) __asm__("FUN_0c03e08c");
uint32_t str_copy_end(uint32_t d, uint32_t s)
{
    while (B(s))
        B(d++) = B(s++);
    return d;
}

uint32_t str_copy_end_thunk(uint32_t d, uint32_t s) __asm__("thunk_FUN_0c03e08c");
uint32_t str_copy_end_thunk(uint32_t d, uint32_t s) { return str_copy_end(d, s); }

/* stringEquals(a, b): 1 when the strings are the same, else 0 */
int32_t string_equals(uint32_t a, uint32_t b) __asm__("stringEquals");
int32_t string_equals(uint32_t a, uint32_t b)
{
    while (B(a)) {
        if (B(b++) != B(a++))
            return 0;
    }
    return B(b) == 0;
}

int32_t string_equals_thunk(uint32_t a, uint32_t b) __asm__("thunk_FUN_0c2ba37c");
int32_t string_equals_thunk(uint32_t a, uint32_t b) { return string_equals(a, b); }

/* copyBytes(src, dst, n): n bytes from src to dst, one at a time */
void copy_bytes(uint32_t s, uint32_t d, int32_t n) __asm__("copyBytes");
void copy_bytes(uint32_t s, uint32_t d, int32_t n)
{
    while (n > 0) {
        B(d++) = B(s++);
        n--;
    }
}

void copy_bytes_thunk(uint32_t s, uint32_t d, int32_t n) __asm__("thunk_FUN_0c2c2156");
void copy_bytes_thunk(uint32_t s, uint32_t d, int32_t n) { copy_bytes(s, d, n); }
