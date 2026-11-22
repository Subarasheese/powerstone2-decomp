/* Hand-fixed generated C: FUN_0c183628 takes a struct by value on the stack (the caller's r15, which its frame reaches as r15 + 8)
   and copies its bit fields into 0C8A6F48. The generated frame has the caller's stack at stk + 12 but stored the stack
   arguments from stk + 8, so every field came from the word before; they are stored one word up. */

struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o2_ushort { char p[0x2]; unsigned short v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oB_uchar { char p[0xB]; unsigned char v; };

void FUN_0c183628(int a4, int a5, int a6, int a7, int a8, int a9)
{
    int stk[12];
    register int t19;

    stk[3] = a8;
    stk[4] = a9;
    if ((*(signed char *)0xC874FB8) != 0) {
        *(unsigned short *)(((int)stk + 4)) = (_builtin_get_imask());
        _builtin_set_imask(0xF);
        (((struct o0_uchar *)0xC8A6F48)->v) = (((*(signed char *)0xC8A6F48) & 0xFE) | (*(signed char *)(((((int)stk + 4) + 0x8) + 0x0))));
        (((struct o0_uchar *)0xC8A6F48)->v) = ((*(signed char *)(((((int)stk + 4) + 0x8) + 0x1))) | ((*(signed char *)0xC8A6F48) & 0xFD));
        (((struct o1_uchar *)0xC8A6F48)->v) = ((*(signed char *)(((((int)stk + 4) + 0x8) + 0x2))) | ((*(signed char *)0xC8A6F49) & 0xFC));
        (((struct o1_uchar *)0xC8A6F48)->v) = ((*(signed char *)(((((int)stk + 4) + 0x8) + 0x4))) | ((*(signed char *)0xC8A6F49) & 0xFB));
        (((struct o1_uchar *)0xC8A6F48)->v) = ((*(signed char *)(((((int)stk + 4) + 0x8) + 0x3))) | ((*(signed char *)0xC8A6F49) & 0xC7));
        (((struct o1_uchar *)0xC8A6F48)->v) = ((*(signed char *)(((((int)stk + 4) + 0x8) + 0x5))) | ((*(signed char *)0xC8A6F49) & 0xBF));
        (((struct o2_ushort *)0xC8A6F48)->v) = (*(signed char *)(((((int)stk + 4) + 0x8) + 0x6)));
        if ((-((((((*(signed char *)0xC8A6F57) & 32) == 0)) ? 1 : 0) - 1)) != 1) {
            for (;;) {
            }
        }
        (((struct oB_uchar *)0xC8A6F48)->v) = ((*(signed char *)0xC8A6F53) | 0x20);
        t19 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)0xC874F8C) + 0x8)))))(0xC8A6F50, (((int)stk + 4) + 0x8), a6, a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
        (((struct o8_uint *)0xC8A6F48)->v) = 0x0;
        _builtin_set_imask(((unsigned int)((((*(short *)(((int)stk + 4))) & 0xF) << 2) << 2) >> 4));
    }
}
