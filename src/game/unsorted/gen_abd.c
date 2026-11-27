/* Straight-line functions with calls and guards (batch gen_abd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o16_uchar { char p[0x16]; unsigned char v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o3715_uchar { char p[0x3715]; unsigned char v; };
struct o372C_uchar { char p[0x372C]; unsigned char v; };
struct o3747_uchar { char p[0x3747]; unsigned char v; };
struct o374A_uchar { char p[0x374A]; unsigned char v; };
struct o37A4_float { char p[0x37A4]; float v; };
struct o37BC_float { char p[0x37BC]; float v; };
struct o382E_ushort { char p[0x382E]; unsigned short v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
int FUN_0c067734(int);
int FUN_0c07d6cc(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07eaf4(int);
int FUN_0c07ebd0(int);
int FUN_0c082aa4(int a4, int a5);

int FUN_0c082aa4(int a4, int a5)
{
    int stk[4];
    register int t25;
    register int t38;
    register int t69;
    int t8;
    int t26;
    register int R1004;
    register int R1008;
    register int R1012;

    R1004 = *(int *)((int)stk + 0);
    R1008 = *(int *)((int)stk + 4);
    R1012 = *(int *)((int)stk + 8);

    *(unsigned char *)(((int)stk + 12)) = a5;
    (((struct o3715_uchar *)(a4))->v) = 0xF;
    FUN_0c067734(a4);
    *(unsigned short *)((a4 + 0x1C)) = 0x1E;
    *(unsigned short *)((a4 + 0x1E)) = 0x0;
    (((struct o22_ushort *)(a4))->v) = 0x0;
    (((struct o3747_uchar *)(a4))->v) = 0x4;
    (((struct o37A4_float *)(a4))->v) = 0.0f;
    (((struct o382E_ushort *)(a4))->v) = 0x0;
    (((struct o374A_uchar *)(a4))->v) = 0x1;
    (((struct o5C_float *)(a4))->v) = 0.0f;
    (((struct o60_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 0.0f;
    (((struct o50_float *)(a4))->v) = 0.0f;
    (((struct o54_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    if ((*(signed char *)((a4 + 0x371D))) == 2) {
        (((struct o16_uchar *)(a4))->v) = 0x2;
        R1012 = 0x5A;
        R1008 = 0x4;
        R1004 = 0xFFFFFFFF;
        t69 = (FUN_0c07e79c(a4, 0xFFFFFFFF, 0x4, 0x5A, 0xFFFFFFFF, 0x4, 0x5A));
    } else {
        if ((((((struct o37BC_float *)(a4))->v)) == 0.0f) && (t8 = *(signed char *)((a4 + 0x3742)), t8 == 0)) {
            if ((*(signed char *)((a4 + 0x372C))) == 1) {
                *(volatile signed char *)((a4 + 0x2));
                R1012 = 0x38;
                R1008 = 0x4;
                R1004 = 0xFFFFFFFF;
                FUN_0c07e79c(a4, 0xFFFFFFFF, 0x4, 0x38, 0xFFFFFFFF, 0x4, 0x38);
            } else {
                *(volatile signed char *)((a4 + 0x2));
                R1012 = 0x37;
                R1008 = 0x4;
                R1004 = 0xFFFFFFFF;
                FUN_0c07e79c(a4, 0xFFFFFFFF, 0x4, 0x37, 0xFFFFFFFF, 0x4, 0x37);
            }
            (((struct o20_ushort *)(a4))->v) = 0x0;
        } else {
            if ((*(signed char *)((a4 + 0x3742))) != 0) {
                (((struct o37BC_float *)(a4))->v) = (*(float *)((0xC25AFA8 + ((*(signed char *)((a4 + 0x2))) << 2))));
            }
            t25 = FUN_0c07ebd0(a4);
            if ((t25 == 0) && (t26 = *(signed char *)(((int)stk + 12)), t26 == 0)) {
                if ((*(signed char *)((a4 + 0x372C))) == 1) {
                    *(volatile signed char *)((a4 + 0x2));
                    R1012 = 0x38;
                    R1008 = 0x4;
                    R1004 = 0xFFFFFFFF;
                    FUN_0c07e79c(a4, 0xFFFFFFFF, 0x4, 0x38, 0xFFFFFFFF, 0x4, 0x38);
                } else {
                    *(volatile signed char *)((a4 + 0x2));
                    R1012 = 0x37;
                    R1008 = 0x4;
                    R1004 = 0xFFFFFFFF;
                    FUN_0c07e79c(a4, 0xFFFFFFFF, 0x4, 0x37, 0xFFFFFFFF, 0x4, 0x37);
                }
                (((struct o20_ushort *)(a4))->v) = 0xA;
            } else {
                R1012 = 0x39;
                R1008 = 0x4;
                R1004 = 0xFFFFFFFF;
                FUN_0c07e79c(a4, 0xFFFFFFFF, 0x4, 0x39, 0xFFFFFFFF, 0x4, 0x39);
                *(unsigned int *)((a4 + 0x38)) = (FUN_0c07d6cc(a4));
                (((struct o16_uchar *)(a4))->v) = 0x1;
                *(unsigned short *)((a4 + 0x1C)) = 0x3C;
                *(unsigned short *)((a4 + 0x1E)) = 0x0;
                (((struct o20_ushort *)(a4))->v) = 0x4;
                t38 = *(signed char *)(((int)stk + 12));
                switch (t38) {
                case 0:
                    *(unsigned int *)((a4 + 0x38)) = ((unsigned short)((*(short *)((0xC5413E8 + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x2F8)))) + (FUN_0c07eaf4(a4))) & 0xFFFF);
                    break;
                case 1:
                    *(unsigned short *)((a4 + 0x1E)) = 0x14;
                    break;
                case 2:
                    *(unsigned short *)((a4 + 0x1E)) = 0x14;
                    *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + 0x8000);
                    break;
                }
            }
        }
        (((struct o372C_uchar *)(a4))->v) = 0x0;
        t69 = 0x372C;
    }
    return t69;
}
