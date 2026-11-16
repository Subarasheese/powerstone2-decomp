/* Library code: C that behaves like this game's own bytes. */
/* vsprintf formatting core and helpers (0c0eb758-0c0ec11c) */

struct o94_uchar { char p[0x94]; unsigned char v; };
struct oC0_uint { char p[0xC0]; unsigned int v; };
int _divls(void);
int printf_int_to_text(int, int, int, int);
int printf_write_bytes(int, int, int);
int FUN_0c0eda64(int, int, int, int);
int strlen(int);

int FUN_0c0ec0f2(int a4);
int FUN_0c0ec102(int a4);


int FUN_0c0ec0f2(int a4)
{
    register int t0;

    t0 = *(int *)((a4 + 0x0));
    if (t0 == 1) {
        *(unsigned char *)(((*(int *)((a4 + 0x4))) + 0x0)) = 0x0;
    }
    return t0;
}


int FUN_0c0ec102(int a4)
{
    if ((*(int *)((a4 + 0x0))) == 1) {
        return 0x0;
    }
    return ((*(signed char *)((0x10 + (*(int *)((a4 + 0x4)))))) & 0x40);
}
