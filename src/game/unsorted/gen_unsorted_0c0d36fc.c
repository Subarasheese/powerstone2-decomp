/* game/unsorted: functions 0C0D36FC-0C0D3C72, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o10_float { char p[0x10]; float v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
int math_mat_get_translate(int, int);
int FUN_0c15aed8(int);
int nlRand(void);
int nlAddVector3op(int, int, int);
int FUN_0c0d36fc(int a4, int a5);
int FUN_0c0d37c2(int a4, int a5);

int FUN_0c0d36fc(int a4, int a5)
{
    int stk[4];
    int t0;
    register float u4;
    register float u6;
    register float u7;
    register int t8;
    register int t9;
    register int t14;

    *(unsigned int *)(((int)stk + 0)) = a4;
    t0 = nlRand();
    math_mat_get_translate(((*(int *)(((int)stk + 0))) + 0x64), (((int)stk + 0) + 0x4));
    nlAddVector3op((((int)stk + 0) + 0x4), (((int)stk + 0) + 0x4), (((((0x1 & t0) << 2) + (0x1 & t0)) << 2) + 0xC1C7F3C));
    u4 = (((struct oC_float *)((((((0x1 & t0) << 2) + (0x1 & t0)) << 2) + 0xC1C7F3C)))->v);
    u6 = (((struct o8_float *)((((((0x1 & t0) << 2) + (0x1 & t0)) << 2) + 0xC1C7F3C)))->v);
    u7 = (((((struct o10_float *)((((((0x1 & t0) << 2) + (0x1 & t0)) << 2) + 0xC1C7F3C)))->v)) * (float)a5);
    t8 = nlRand();
    t9 = ((~(((~t8) + 0x1) & 0xF)) + 0x1);
    if ((int)t8 >= 0) {
        t9 = (t8 & 0xF);
    }
    *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) + ((u6 + u4) - ((((float)t9 / (*(float *)0xC0D3808)) * (u4 - u7)))));
    if ((int)a5 > 0) {
        t14 = 0x0;
        for (;;) {
            FUN_0c15aed8((((int)stk + 0) + 0x4));
            t14 = (t14 + 0x1);
            *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) + ((((struct o10_float *)((((((0x1 & t0) << 2) + (0x1 & t0)) << 2) + 0xC1C7F3C)))->v)));
            if ((int)t14 >= (int)a5) {
                break;
            }
        }
    }
    return 0xC;
}

int FUN_0c0d37c2(int a4, int a5)
{
    register int t0;
    register int t1;

    (((struct o15_uchar *)(a4))->v) = a5;
    (((struct o16_uchar *)(a4))->v) = 0x0;
    t0 = nlRand();
    t1 = ((~(((~t0) + 0x1) & 0x3)) + 0x1);
    if ((int)t0 >= 0) {
        t1 = (t0 & 0x3);
    }
    *(unsigned short *)((a4 + 0x1C)) = ((short)(t1 + 0x1) * (short)0x5A);
    return ((short)(t1 + 0x1) * (short)0x5A);
}
