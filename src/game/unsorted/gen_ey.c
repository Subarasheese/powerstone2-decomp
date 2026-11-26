/* Straight-line functions with calls and guards (batch gen_ey): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o126_uchar { char p[0x126]; unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o19_uchar { char p[0x19]; unsigned char v; };
struct o1A_uchar { char p[0x1A]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oD0_int { char p[0xD0]; int v; };
int FUN_0c037498(int, int, int, int);
int FUN_0c03f346(int);
int FUN_0c03f444(int, int, int, int);
int FUN_0c042fe0(void);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c07e2f4(int, int);
int FUN_0c0c212c(int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c0cff96(int, int);
int FUN_0c0d45cc(int);
int FUN_0c0d47e0(int);
int FUN_0c0d4894(int);
int FUN_0c0d4984(int);
int FUN_0c0d4a30(int);
int FUN_0c0d4ad0(int);
int FUN_0c0d4bac(int);
int FUN_0c0d4d24(int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int nlRand(void);
int thunk_FUN_0c058310(int, int);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c12d85c(int a4, int a5, int a6, int a7);
int FUN_0c0d5030(int a4);

int FUN_0c12d85c(int a4, int a5, int a6, int a7)
{
    int stk[6];
    register int t0;
    register int t48;
    register int t2;
    register int t5;
    register int t19;
    register int t20;
    register int t24;
    register int t26;
    register float u27;
    register float u28;
    register float t29;
    register float u32;
    register float t33;
    register float u36;
    int R1012;

    R1012 = *(int *)((int)stk + 12);

    *(unsigned char *)(((int)stk + 16)) = a5;
    t0 = FUN_0c03f444(0x1, 0x0, 0x1, a7);
    t48 = t0;
    if (t0 == 0) {
    } else {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t0 + 0x4)) = 0xC12DA56;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x34)) = *(struct mv3 *)((a4 + 0x34)); }
        (((struct o54_float *)(t0))->v) = 0.0f;
        (((struct o50_float *)(t0))->v) = 0.0f;
        (((struct o4C_float *)(t0))->v) = 0.0f;
        (((struct o48_float *)(t0))->v) = 1.0f;
        (((struct o44_float *)(t0))->v) = 1.0f;
        (((struct o40_float *)(t0))->v) = 1.0f;
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        R1012 = 0x0;
        *(int *)((int)stk + 8) = 0x0;
        t2 = *(signed char *)((t0 + 0x1));
        *(int *)((int)stk + 4) = (~((int)0x1 << (int)t2));
        *(int *)((int)stk + 0) = 0x100;
        FUN_0c064d24(t0, 0x1, 0x32, 0x2, 0x100, (~((int)0x1 << (int)t2)), 0x0, 0x0);
        FUN_0c07e2f4(t0, 0x63);
        t5 = *(signed char *)((t0 + 0x1));
        *(unsigned char *)(((int)stk + 20)) = t5;
        FUN_0c037498(((((struct oC4_int *)(t0))->v)), (*(signed char *)(((int)stk + 20))), 0x0, (*(int *)((((signed char)t5 << 2) + 0xC4B40FC))));
        *(unsigned char *)((((((struct oC4_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(t0))->v)) + 0x6)) = 0xF;
        *(unsigned int *)((t0 + 0x10)) = a4;
        if ((*(signed char *)(((int)stk + 16))) == 127) {
            thunk_FUN_0c058310((((((struct oC4_int *)((((short)(*(signed char *)((t0 + 0x1))) * (short)0x3938) + 0xC532498)))->v)) + 0x28), (t0 + 0x28));
        } else {
            thunk_FUN_0c058310((((((struct oC4_int *)((((short)(*(signed char *)((t0 + 0x1))) * (short)0x3938) + 0xC532498)))->v)) + 0x28), (t0 + 0x28));
            t19 = *(signed char *)(((int)stk + 16));
            *(unsigned int *)(((int)stk + 16)) = (((unsigned char)(t19 & 0xF) << 2) + 0xC2A115C);
            t20 = *(short *)(((((unsigned char)(t19 & 0xF) << 2) + 0xC2A115C) + 0x0));
            t24 = (int)((int)(nlRand()) % (int)(*(short *)(((*(int *)(((int)stk + 16))) + 0x2))));
            t26 = (int)((int)(nlRand()) % (int)0x168);
            u27 = (((struct o0_float *)0xC12DAD0)->v);
            u28 = (((struct o4_float *)0xC12DAD0)->v);
            R1012 = (t0 + 0x28);
            t29 = math_sin_angle16((int)(((float)t26 * u27) / u28));
            u32 = ((((struct o28_float *)(t0))->v));
            u32 = u32 + ((float)(t20 + t24)) * t29;
            (((struct o28_float *)(t0))->v) = u32;
            R1012 = (t0 + 0x30);
            t33 = math_cos_angle16((int)(((float)t26 * u27) / u28));
            u36 = ((((struct o30_float *)(t0))->v));
            u36 = u36 + ((float)(t20 + t24)) * t33;
            (((struct o30_float *)(t0))->v) = u36;
        }
        (((struct o2C_float *)(t0))->v) = (((((struct o2C_float *)(t0))->v)) + 800.0f);
        (((struct o50_float *)(t0))->v) = 0.0f;
        (((struct o5C_float *)(t0))->v) = -1.0f;
        (((struct o60_float *)(t0))->v) = 0.0f;
        (((struct o58_float *)(t0))->v) = 0.0f;
        (((struct o58_float *)(t0))->v) = ((((struct o2C_float *)(a4))->v));
        *(unsigned short *)((t0 + 0x1C)) = 0xB4;
        (((struct o14_uchar *)(t0))->v) = 0x0;
        t48 = 0x14;
    }
    return t48;
}

