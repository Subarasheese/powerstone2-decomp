/* Straight-line functions with calls and guards (batch gen_fe): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
int math_atan2_angle16(int, float, float);
int FUN_0c1667be(int a4, int a5, int a6, int a7);

int FUN_0c1667be(int a4, int a5, int a6, int a7)
{
    int stk[5];
    register int t0;
    register int t24;
    register int t46;
    register int t49;
    register int t50;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            t50 = (FUN_0c03f346(a4, a5, a6, a7));
        } else {
            if ((int)(*(short *)((a4 + 0x1C))) <= (int)0x14) {
                *(int *)((int)stk + 4) = 0x0;
                *(int *)((int)stk + 0) = 0x14;
                FUN_0c0588bc((a4 + 0x40), 0xC2A33FC, 0xC2A33F0, (*(short *)((a4 + 0x1C))), 0x14, 0x0);
                if ((int)(*(short *)((a4 + 0x1C))) <= (int)0x14) {
                    *(int *)((int)stk + 4) = 0x0;
                    *(int *)((int)stk + 0) = 0x14;
                    FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC2A3414, 0xC2A3408, (*(short *)((a4 + 0x1C))), 0x14, 0x0);
                }
            }
            if ((int)(*(short *)((a4 + 0x1C))) <= (int)0x4) {
                *(int *)((int)stk + 4) = 0x0;
                *(int *)((int)stk + 0) = 0x4;
                FUN_0c058a6e((((((struct oC4_int *)(a4))->v)) + 0x14), 0xC2A3354, 0xC2A3344, (*(short *)((a4 + 0x1C))), 0x4, 0x0);
            }
            t24 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t24 + 0x1);
            t50 = (short)(t24 + 0x1);
            if ((int)(short)(t24 + 0x1) > (int)0x14) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t50 = 0x14;
            }
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)((((((struct oC4_int *)(a4))->v)) + 0x6C)); }
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x9, 0x34, (*(int *)0xC4B40CC));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC4_int *)(a4))->v)) + 0x6C)) = *(struct mv3 *)(((int)stk + 8)); }
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0x3F;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x40)) = *(struct mv3 *)(0xC2A33F0); }
        *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x21F;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC4_int *)(a4))->v)) + 0x84)) = *(struct mv3 *)(0xC2A3408); }
        { struct mv4 { int w[4]; }; *(struct mv4 *)((((((struct oC4_int *)(a4))->v)) + 0x14)) = *(struct mv4 *)(0xC2A3344); }
        t46 = (((struct oC4_int *)(a4))->v);
        t49 = math_atan2_angle16(0x1, ((((struct o70_float *)(t46))->v)), ((((struct o6C_float *)(t46))->v)));
        (((struct o80_uint *)(t46))->v) = ((t49 - 16384) & 0xFFFF);
        t50 = ((t49 - 16384) & 0xFFFF);
    }
    return t50;
}
