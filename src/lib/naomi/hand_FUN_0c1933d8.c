/* @runtime _slow_strcpy=0C187990 */
/* @runtime _quick_strcpy=0C1878F0 */
/* Hand-written: FUN_0c1933d8(a4, a5, a6, a7, a8): a table entry (a4 * 5 + a5 words from 0C20A6CC) selects the work. Entry 0: the
   string a6 is copied to the next 128-byte slot (index *a7) of the buffer at 0C8B1674, the slot's address is kept in the pointer
   table at 0C8B1664 (word a5) and *a7 counts up. Entry 1: the decimal digits of a6 make a number, stored in the next short (index
   *a8) of the array at 0C8B1874; its address goes to the same pointer table (word a5) and *a8 counts up. Returns the entry, or
   0C8B1664 after the number. */
extern char *_builtin_strcpy(char *, const char *);

int FUN_0c1933d8(int a4, int a5, int a6, int a7, int a8)
{
    register int t;
    register int n;
    register int v;
    register int i;

    t = *(int *)(0xC20A6CC + a4 * 20 + a5 * 4);
    if (t == 0) {
        n = *(int *)a7;
        _builtin_strcpy((char *)(0xC8B1674 + n * 128), (char *)a6);
        *(int *)(0xC8B1664 + a5 * 4) = 0xC8B1674 + n * 128;
        *(int *)a7 = n + 1;
    }
    t = *(int *)(0xC20A6CC + a4 * 20 + a5 * 4);
    if (t != 1) {
        return t;
    }
    n = *(int *)a8;
    v = 0;
    i = 0;
    while (*(unsigned char *)(a6 + i) != 0) {
        v = v * 10 + (*(unsigned char *)(a6 + i) - 48);
        i++;
    }
    *(short *)(0xC8B1874 + n * 2) = v;
    *(int *)(0xC8B1664 + a5 * 4) = 0xC8B1874 + n * 2;
    *(int *)a8 = n + 1;
    return 0xC8B1664;
}
