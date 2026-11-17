/* game/unsorted: functions 0C143FF0-0C144694, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o130_uchar { char p[0x130]; unsigned char v; };
struct o132_uchar { char p[0x132]; unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o40_float { char p[0x40]; float v; };
struct o41C_float { char p[0x41C]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03f444(int, int, int);
int math_mat_get_translate(int, int);
int FUN_0c059e9a(int, int, int);
int FUN_0c0b21ac(int, int);
int FUN_0c0b21d8(void);
float FUN_0c0b2264(int, int, float);
int FUN_0c143814(int, int, int);
int FUN_0c14403a(int, int, int);
int FUN_0c1440f0(int, int, int, int);
int FUN_0c1441a6(int, int);
int FUN_0c144234(int a4, float f4);
int FUN_0c1443ec(int a4, int a5);
int FUN_0c144644(int a4);

int FUN_0c144234(int a4, float f4)
{
    int stk[3];
    register int t1;
    register int t4;
    register int t74;

    if ((*(signed char *)((a4 + 0x132))) == 0) {
    } else {
        (((struct o132_uchar *)(a4))->v) = 0x0;
        t1 = FUN_0c0b21d8();
        if (t1 != 0) {
            (((struct o130_uchar *)(a4))->v) = 0x0;
        } else {
            (((struct o130_uchar *)(a4))->v) = 0xA;
        }
        t4 = *(signed char *)((a4 + 0x1B));
        if (t4 != 0) {
            if (t4 != 1) {
            } else {
                (((struct o160_float *)(a4))->v) = (((((struct o41C_float *)(a4))->v)) - (FUN_0c0b2264(a4, 0x2, (((((struct o41C_float *)(a4))->v)) - ((((struct o160_float *)(a4))->v))))));
                if (!(((((struct o160_float *)(a4))->v)) > 1000.0f)) {
                    (((struct o14_uchar *)(a4))->v) = 0x2;
                    (((struct o1B_uchar *)(a4))->v) = 0x2;
                    (((struct o130_uchar *)(a4))->v) = 0x0;
                    FUN_0c14403a(a4, (*(signed char *)((a4 + 0x2))), 0x2);
                    math_mat_get_translate((((((struct oC4_int *)(a4))->v)) + 0x28), ((int)stk + 0));
                    FUN_0c059e9a((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532498), 0x24, ((int)stk + 0));
                    FUN_0c059e9a((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532498), 0x15, ((int)stk + 0));
                    FUN_0c143814(a4, ((int)stk + 0), 0x1);
                }
            }
        } else {
            (((struct o160_float *)(a4))->v) = (((((struct o41C_float *)(a4))->v)) - (FUN_0c0b2264(a4, 0x1, (((((struct o41C_float *)(a4))->v)) - ((((struct o160_float *)(a4))->v))))));
            if (!(((((struct o160_float *)(a4))->v)) > 1000.0f)) {
                (((struct o1B_uchar *)(a4))->v) = 0x1;
                (((struct o130_uchar *)(a4))->v) = 0x0;
                FUN_0c14403a(a4, (*(signed char *)((a4 + 0x2))), 0x1);
                FUN_0c0b21ac(a4, 0x2);
                (((struct o160_float *)(a4))->v) = (((((struct o160_float *)(a4))->v)) + 1000.0f);
                math_mat_get_translate((((((struct oC4_int *)(a4))->v)) + 0x28), ((int)stk + 0));
                FUN_0c059e9a((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532498), 0x23, ((int)stk + 0));
                FUN_0c059e9a((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532498), 0xA, ((int)stk + 0));
                FUN_0c143814(a4, ((int)stk + 0), 0x0);
            }
        }
    }
    (((struct o41C_float *)(a4))->v) = ((((struct o160_float *)(a4))->v));
    if ((int)(*(signed char *)((a4 + 0x130))) > 0) {
        FUN_0c1440f0(a4, (*(signed char *)((a4 + 0x2))), (*(signed char *)((a4 + 0x1B))), 0x1);
        (((struct o130_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x130))) - 1);
        t74 = 0x130;
    } else {
        t74 = (FUN_0c1440f0(a4, (*(signed char *)((a4 + 0x2))), (*(signed char *)((a4 + 0x1B))), 0x0));
    }
    return t74;
}

int FUN_0c1443ec(int a4, int a5)
{
    register int t0;
    register int t7;

    t0 = FUN_0c03f444(0x2, 0x0, 0x2);
    t7 = 0x0;
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x4)) = 0xC144494;
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned char *)((t0 + 0x2)) = a5;
        (((struct oAC_ushort *)(t0))->v) = 0x4010;
        (((struct oA9_uchar *)(t0))->v) = (*(signed char *)((a4 + 0xA9)));
        *(unsigned int *)((t0 + 0x10)) = a4;
        (((struct o48_float *)(t0))->v) = 1.0f;
        (((struct o44_float *)(t0))->v) = 1.0f;
        (((struct o40_float *)(t0))->v) = 1.0f;
        FUN_0c14403a(t0, a5, 0x0);
        (((struct oA4_uint *)(t0))->v) = ((*(int *)(((((*(int *)(((a5 * 0x38) + 0xC20275C))) << 2) + (0xC4 + a4)) + 0x0))) + 0x28);
        FUN_0c1441a6(t0, 0x0);
        t7 = t0;
    }
    return t7;
}

int FUN_0c144644(int a4)
{
    (((struct o14_uchar *)(a4))->v) = 0x1;
    (((struct o1B_uchar *)(a4))->v) = 0x0;
    FUN_0c14403a(a4, (*(signed char *)((a4 + 0x2))), 0x0);
    FUN_0c1441a6(a4, 0x2);
    FUN_0c0b21ac(a4, 0x1);
    (((struct o160_float *)(a4))->v) = (((((struct o160_float *)(a4))->v)) + 1000.0f);
    (((struct o41C_float *)(a4))->v) = ((((struct o160_float *)(a4))->v));
    return 0x160;
}
