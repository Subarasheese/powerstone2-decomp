/* game/unsorted: functions 0C15BFF8-0C15C308, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o378C_float { char p[0x378C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
extern int FUN_0c03f346();
int thunk_FUN_0c058310(int, int);
float math_sin_angle16(int);
int FUN_0c17c4d0(int);
int FUN_0c187798(int, int, int);
int FUN_0c15c1c0(int a4, int a5, int a6, int a7);

int FUN_0c15c1c0(int a4, int a5, int a6, int a7)
{
    int stk[6];
    register int t0;
    register int t5;
    register float u21;
    register float u22;
    register float u26;
    register float u27;
    register float u31;
    register float u32;
    register float t35;
    register float u37;
    register int t52;
    register float u68;
    register float u69;
    register float u73;
    register float u74;
    register float u78;
    register float u79;
    register float t82;
    register float u84;
    register int t92;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            t92 = t0;
            if (t0 == 2) {
                t92 = (((int (*)(int, int, int, int))(FUN_0c03f346))(a4, a5, a6, a7));
            }
        } else {
            t5 = *(int *)((a4 + 0x10));
            *(volatile signed char *)((t5 + 0x1));
            FUN_0c187798(a4, a5, a6);
            thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC53256C))) + 0x28), ((int)stk + 0));
            *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) - (*(float *)(((int)stk + 0))));
            *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 16))) - (*(float *)(((int)stk + 4))));
            *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 20))) - (*(float *)(((int)stk + 8))));
            FUN_0c17c4d0((((int)stk + 0) + 0xC));
            u21 = ((*(float *)(((int)stk + 12))) * ((((struct o378C_float *)(t5))->v)));
            u22 = (*(float *)(((int)stk + 0)));
            u22 = u22 + 150.0f * u21;
            (((struct o28_float *)(a4))->v) = u22;
            u26 = ((*(float *)(((int)stk + 20))) * ((((struct o378C_float *)(t5))->v)));
            u27 = (*(float *)(((int)stk + 8)));
            u27 = u27 + 150.0f * u26;
            (((struct o30_float *)(a4))->v) = u27;
            u31 = ((*(float *)(((int)stk + 16))) * ((((struct o378C_float *)(t5))->v)));
            u32 = (*(float *)(((int)stk + 4)));
            u32 = u32 + 150.0f * u31;
            (((struct o2C_float *)(a4))->v) = u32;
            *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x5);
            t35 = math_sin_angle16((int)(((float)(*(short *)((a4 + 0x1C))) * 65536.0f) / 360.0f));
            u37 = (((((struct o378C_float *)(t5))->v)) * 1.5f);
            u37 = u37 + 0.100000001f * t35;
            (((struct o48_float *)(a4))->v) = u37;
            (((struct o44_float *)(a4))->v) = u37;
            (((struct o40_float *)(a4))->v) = u37;
            if (((*(signed char *)((t5 + 0x3715))) == 17) && (t92 = *(signed char *)((t5 + 0x3741)), t92 == 5)) {
            } else {
                t92 = (((int (*)(int))(FUN_0c03f346))(a4));
            }
        }
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t52 = *(int *)((a4 + 0x10));
        *(volatile signed char *)((t52 + 0x1));
        FUN_0c187798(a4, a5, a6);
        thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC53256C))) + 0x28), ((int)stk + 0));
        *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) - (*(float *)(((int)stk + 0))));
        *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 16))) - (*(float *)(((int)stk + 4))));
        *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 20))) - (*(float *)(((int)stk + 8))));
        FUN_0c17c4d0((((int)stk + 0) + 0xC));
        u68 = ((*(float *)(((int)stk + 12))) * ((((struct o378C_float *)(t52))->v)));
        u69 = (*(float *)(((int)stk + 0)));
        u69 = u69 + 150.0f * u68;
        (((struct o28_float *)(a4))->v) = u69;
        u73 = ((*(float *)(((int)stk + 20))) * ((((struct o378C_float *)(t52))->v)));
        u74 = (*(float *)(((int)stk + 8)));
        u74 = u74 + 150.0f * u73;
        (((struct o30_float *)(a4))->v) = u74;
        u78 = ((*(float *)(((int)stk + 16))) * ((((struct o378C_float *)(t52))->v)));
        u79 = (*(float *)(((int)stk + 4)));
        u79 = u79 + 150.0f * u78;
        (((struct o2C_float *)(a4))->v) = u79;
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x5);
        t82 = math_sin_angle16((int)(((float)(*(short *)((a4 + 0x1C))) * 65536.0f) / 360.0f));
        u84 = (((((struct o378C_float *)(t52))->v)) * 1.5f);
        u84 = u84 + 0.100000001f * t82;
        (((struct o48_float *)(a4))->v) = u84;
        (((struct o44_float *)(a4))->v) = u84;
        (((struct o40_float *)(a4))->v) = u84;
        if (((*(signed char *)((t52 + 0x3715))) == 17) && (t92 = *(signed char *)((t52 + 0x3741)), t92 == 5)) {
        } else {
            t92 = (((int (*)(int))(FUN_0c03f346))(a4));
        }
    }
    return t92;
}
