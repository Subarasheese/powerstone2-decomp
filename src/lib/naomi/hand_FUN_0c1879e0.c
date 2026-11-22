/* Hand-written: FUN_0c1879e0 compares two strings, strcmp's way. Its code compares a word at a time when both pointers are
   word-aligned (cmp/str finds a zero byte) and a byte at a time otherwise; either way it returns the difference of the first two
   bytes (sign-extended) that differ, or of the terminator and the other string's byte. */
int FUN_0c1879e0(const char *s1, const char *s2)
{
    int c1;
    int c2;

    do {
        c1 = *(const signed char *)s1++;
        c2 = *(const signed char *)s2++;
    } while (c1 != 0 && c1 == c2);
    return c1 - c2;
}
