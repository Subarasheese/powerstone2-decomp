/* Straight-line functions with calls and guards (batch gen_qb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
int FUN_0c05ab12(int, int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c15aed8(int);
int math_mat_get_translate(int, int);
int nlRand(void);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c0e43f6(int a4);

int FUN_0c0e43f6(int a4)
{
    int stk[3];
    register int t0;
    register int t8;
    register int t3;
    register int t11;
    register int t12;
    register float u16;
    register int t17;
    register int t18;
    register float u22;
    register int t23;
    register int t24;
    register float u28;
    register int t45;
    register int t51;
    register int t40;

    t0 = *(signed char *)((a4 + 0x15));
    t8 = 0;
    if (t0 != 0) {
        if (t0 == 1) {
            t8 = 1;
        }
    } else {
        (((struct o12A_ushort *)(a4))->v) = 0x0;
        (((struct o12C_ushort *)(a4))->v) = 0x0;
        (((struct o12E_ushort *)(a4))->v) = 0x0;
        t3 = 0x3C;
        if ((*(signed char *)((a4 + 0x3))) == 2) {
            thunk_FUN_0c05abb2(0x47, (a4 + 0x28));
            t3 = 0x14;
        }
        *(unsigned short *)((a4 + 0x1C)) = t3;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t8 = 1;
    }
    if (t8) {
        if (((*(short *)((a4 + 0x1C))) & 7) == 0) {
            math_mat_get_translate((a4 + 0x64), ((int)stk + 0));
            t11 = nlRand();
            t12 = (t11 % 0x20);
            u16 = (*(float *)(((int)stk + 0)));
            u16 = u16 + 4.0f * ((float)(t12 - 16));
            *(float *)(((int)stk + 0)) = u16;
            t17 = nlRand();
            t18 = (t17 % 0x20);
            u22 = (*(float *)(((int)stk + 8)));
            u22 = u22 + 4.0f * ((float)(t18 - 16));
            *(float *)(((int)stk + 8)) = u22;
            t23 = nlRand();
            t24 = (t23 % 0x20);
            u28 = (*(float *)0xC0E45D0);
            u28 = u28 + 1.0f * ((float)(t24 - 16));
            *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) + u28);
            FUN_0c15aed8(((int)stk + 0));
        }
        if ((*(short *)((a4 + 0x1C))) == 10) {
            (((struct oA8_uchar *)(a4))->v) = 0x0;
        }
        if (((*(signed char *)((a4 + 0x3))) != 2) && ((t40 = *(short *)((a4 + 0x1C)), t40 == 10) || ((t40 == 20) || ((t40 == 50) || (t40 == 60))))) {
            math_mat_get_translate((a4 + 0x64), ((int)stk + 0));
            FUN_0c05ab12(0xD0, ((int)stk + 0));
        }
        t45 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t45 - 1);
        t51 = (short)(t45 - 1);
        if ((int)(short)(t45 - 1) <= 0) {
            t51 = (FUN_0c0c2d56(a4, 0x1, (*(signed char *)((a4 + 0x1)))));
        }
    } else {
        t51 = t0;
    }
    return t51;
}
