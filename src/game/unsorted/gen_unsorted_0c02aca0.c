/* game/unsorted: functions 0C02ACA0-0C02AE2C, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o4_short { char p[0x4]; short v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o6_short { char p[0x6]; short v; };
struct o6_ushort { char p[0x6]; unsigned short v; };
struct o8_short { char p[0x8]; short v; };
struct o8_ushort { char p[0x8]; unsigned short v; };
struct oC_uchar { char p[0xC]; unsigned char v; };
int FUN_0c018e74(int);
int FUN_0c02aca0(void);
int FUN_0c02ae12(int a4);

int FUN_0c02aca0(void)
{
    int stk[1];
    register int t28;
    register int t44;
    register int t71;
    int t19;
    int t25;
    register int t29;
    register int t30;

    *(unsigned short *)(((int)stk + 0)) = ((((struct o4_short *)0xC30AF90)->v));
    if ((*(short *)(((int)stk + 0))) != 0) {
        if ((int)(*(short *)(((int)stk + 0))) >= 0) {
            (((struct o0_uchar *)0xC305400)->v) = (*(signed char *)0xC309858);
            (((struct o1_uchar *)0xC305400)->v) = (*(signed char *)0xC309859);
            (((struct o2_uchar *)0xC305400)->v) = (*(signed char *)0xC30985A);
            (((struct o3_uchar *)0xC305400)->v) = (*(signed char *)0xC30985B);
            (((struct o0_uchar *)0xC309859)->v) = 0x9;
            (((struct o1_uchar *)0xC309859)->v) = 0x0;
            (((struct o2_uchar *)0xC309859)->v) = 0x0;
            (((struct o3_uchar *)0xC309859)->v) = 0x3;
            (((struct oC_uchar *)0xC30AF90)->v) = 0x2;
            (((struct o4_ushort *)0xC30AF90)->v) = 0xFFFFFFFF;
        }
    } else {
        if (((*(signed char *)0xC309859) != 0) && (t19 = *(signed char *)0xC30AF9C, t19 == 0)) {
            if (((*(short *)0xC542864) == 0) && (t25 = *(signed char *)0xC30EF9C, t25 == 0)) {
            } else {
                (((struct o0_uint *)0xC30AF90)->v) = 0xD2F0;
            }
            t28 = (((struct o0_int *)0xC30AF90)->v);
            (((struct o0_uint *)0xC30AF90)->v) = (t28 - 1);
            if (((int)(t28 - 1) < 0) && ((t29 = *(signed char *)0xC309859, (int)t29 < (int)0xA) || (t30 = *(signed char *)0xC309859, t30 == 13))) {
                (((struct o0_uchar *)0xC305400)->v) = (*(signed char *)0xC309858);
                (((struct o1_uchar *)0xC305400)->v) = (*(signed char *)0xC309859);
                (((struct o2_uchar *)0xC305400)->v) = (*(signed char *)0xC30985A);
                (((struct o3_uchar *)0xC305400)->v) = (*(signed char *)0xC30985B);
                (((struct o0_uchar *)0xC309859)->v) = 0x9;
                (((struct o1_uchar *)0xC309859)->v) = 0x0;
                (((struct o2_uchar *)0xC309859)->v) = 0x0;
                (((struct o3_uchar *)0xC309859)->v) = 0x3;
                (((struct oC_uchar *)0xC30AF90)->v) = 0x1;
            }
        }
        if ((*(signed char *)0xC30AF9C) == 0) {
            t44 = (((struct o8_short *)0xC30AF90)->v);
            (((struct o8_ushort *)0xC30AF90)->v) = (t44 - 1);
            if ((int)(short)(t44 - 1) < 0) {
                if ((int)((((struct o6_short *)0xC30AF90)->v)) <= 0) {
                    (((struct o0_uchar *)0xC305400)->v) = (*(signed char *)0xC309858);
                    (((struct o1_uchar *)0xC305400)->v) = (*(signed char *)0xC309859);
                    (((struct o2_uchar *)0xC305400)->v) = (*(signed char *)0xC30985A);
                    (((struct o3_uchar *)0xC305400)->v) = (*(signed char *)0xC30985B);
                    (((struct o0_uchar *)0xC309859)->v) = 0x9;
                    (((struct o1_uchar *)0xC309859)->v) = 0x0;
                    (((struct o2_uchar *)0xC309859)->v) = 0x0;
                    (((struct o3_uchar *)0xC309859)->v) = 0x3;
                    (((struct o8_ushort *)0xC30AF90)->v) = 0x0;
                    (((struct oC_uchar *)0xC30AF90)->v) = 0x2;
                } else {
                    (((struct o8_ushort *)0xC30AF90)->v) = 0x1C20;
                    (((struct o6_ushort *)0xC30AF90)->v) = 0x0;
                }
            }
        }
    }
    t71 = *(int *)((((*(signed char *)0xC309859) << 2) + 0xC20E788));
    return ((int (*)(int, int, int, int))(t71))(0x0, 0xC30985B, 0xC30985A, 0xC30AF9C);
}

int FUN_0c02ae12(int a4)
{
    register int t0;

    if ((signed char)a4 != 0) {
        t0 = 0x11;
        if ((signed char)a4 == 1) {
            t0 = 0x2A;
        }
        return FUN_0c018e74(t0);
    }
    return (signed char)a4;
}
