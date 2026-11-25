/* Straight-line functions with calls and guards (batch gen_zk): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int nlRand(void);
int FUN_0c13954c(int a4, int a5, int a6, int a7);

int FUN_0c13954c(int a4, int a5, int a6, int a7)
{
    int stk[6];
    register int t0;
    register int t26;
    register int t1;
    register int t3;
    register int t4;
    register int t6;
    register int t7;
    register float u12;
    register float u13;
    register float u14;
    register float u18;
    register float u19;
    register float u20;
    register int t22;
    register int t23;
    register int t39;
    register int t44;
    register int R1004;
    register int R1020;
    register int R1024;

    R1004 = *(int *)((int)stk + 0);
    R1020 = *(int *)((int)stk + 16);
    R1024 = *(int *)((int)stk + 20);

    t0 = *(signed char *)((a4 + 0x14));
    t26 = 0;
    if (t0 != 0) {
        if (t0 != 1) {
            t1 = FUN_0c03f346(a4, a5, a6, a7);
        } else {
            t26 = 1;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0xF;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        t3 = nlRand();
        t4 = (t3 % 0x4);
        R1020 = t4;
        t6 = nlRand();
        t7 = (t6 % 0x10);
        R1024 = t7;
        R1004 = (a4 + 0x28);
        u12 = (((struct o28_float *)(a4))->v);
        u13 = ((float)(R1020) * (math_cos_angle16(((((R1024) << 8) << 2) << 2))));
        u14 = u12;
        u14 = u14 + 30.0f * u13;
        (((struct o28_float *)(a4))->v) = u14;
        R1004 = (a4 + 0x2C);
        u18 = (((struct o2C_float *)(a4))->v);
        u19 = ((float)(R1020) * (math_sin_angle16(((((R1024) << 8) << 2) << 2))));
        u20 = u18;
        u20 = u20 + 30.0f * u19;
        (((struct o2C_float *)(a4))->v) = u20;
        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 80.0f);
        t22 = nlRand();
        t23 = (t22 % 0x4);
        *(unsigned short *)((a4 + 0x1E)) = t23;
        t26 = 1;
    }
    if (t26) {
        if (((*(short *)((a4 + 0x1C))) & 1) != 0) {
            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) & 0x3);
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((((((struct oC4_int *)(a4))->v)) + 0x6C)); }
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), (*(short *)((a4 + 0x1E))), 0x17, (*(int *)0xC4B40CC));
        *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x2F;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC4_int *)(a4))->v)) + 0x6C)) = *(struct mv3 *)(((int)stk + 4)); }
        t39 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t39 + 0x1);
        t44 = (short)(t39 + 0x1);
        if ((int)(short)(t39 + 0x1) >= (int)0x8) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t44 = 0x14;
        }
    } else {
        t44 = t1;
    }
    return t44;
}
