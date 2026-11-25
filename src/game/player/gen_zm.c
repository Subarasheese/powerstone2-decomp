/* Straight-line functions with calls and guards (batch gen_zm): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o10_float { char p[0x10]; float v; };
struct o12E_short { char p[0x12E]; short v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o374A_uchar { char p[0x374A]; unsigned char v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o3770_int { char p[0x3770]; int v; };
struct o3770_uint { char p[0x3770]; unsigned int v; };
struct o37B0_float { char p[0x37B0]; float v; };
struct o382E_ushort { char p[0x382E]; unsigned short v; };
struct o3830_ushort { char p[0x3830]; unsigned short v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
int FUN_0c0582de(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c085d0c(int, int, int, int);
int FUN_0c0b49c8(int a4, int a5, int a6, int a7);

int FUN_0c0b49c8(int a4, int a5, int a6, int a7)
{
    int stk[10];
    register int t0;
    register float u6;
    register int t7;
    register int t9;
    register float u21;
    int t1;
    register int t36;

    t0 = (((struct o3770_int *)(a4))->v);
    if ((t0 != 0) && (t1 = *(signed char *)((t0 + 0x14)), t1 == 2)) {
        u6 = (((struct o0_float *)0xC0B4B0C)->v);
        t7 = *(signed char *)((a4 + 0x16));
        if (t7 != 0) {
        } else {
            (((struct o37B0_float *)(a4))->v) = 1.0f;
            *(int *)((int)stk + 8) = 0x33;
            *(int *)((int)stk + 4) = 0x5;
            t9 = (*(signed char *)((a4 + 0x1)));
            *(int *)((int)stk + 0) = t9;
            FUN_0c07e79c(a4, 0xFFFFFFFF, 0x5, 0x33, t9, 0x5, 0x33);
            (((struct o3830_ushort *)(a4))->v) = (((((struct o12E_short *)(a4))->v)) ^ 0xF);
            (((struct o382E_ushort *)(a4))->v) = 0x0;
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        }
        if ((t7 == 0) || (t7 == 1)) {
            (((struct o374B_uchar *)(a4))->v) = 0x2;
            (((struct o374A_uchar *)(a4))->v) = 0x1;
            *(float *)(((int)stk + 16)) = 0.0f;
            *(float *)(((int)stk + 12)) = 0.0f;
            *(float *)(((int)stk + 20)) = u6;
            FUN_0c0582de(((int)stk + 12), (((((struct o3770_int *)(a4))->v)) + 0x520));
            { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)(((int)stk + 12)); }
        } else {
            if (t7 != 2) {
            } else {
                (((struct o374B_uchar *)(a4))->v) = 0x2;
                (((struct o374A_uchar *)(a4))->v) = 0x1;
                *(float *)(((int)stk + 16)) = 0.0f;
                *(float *)(((int)stk + 12)) = 0.0f;
                *(float *)(((int)stk + 20)) = u6;
                FUN_0c0582de(((int)stk + 12), (((((struct o3770_int *)(a4))->v)) + 0x520));
                { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)(((int)stk + 12)); }
                u21 = (((struct o10_float *)0xC0B4B0C)->v);
                (((struct o48_float *)(a4))->v) = u21;
                (((struct o44_float *)(a4))->v) = u21;
                (((struct o40_float *)(a4))->v) = u21;
            }
        }
        (((struct o3770_uint *)(((((struct o3770_int *)(a4))->v))))->v) = a4;
        t36 = 0x3770;
    } else {
        t36 = (FUN_0c085d0c(a4, a5, a6, a7));
    }
    return t36;
}
