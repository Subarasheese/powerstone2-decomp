/* game/flow: functions 0C101D38-0C103FB0, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
extern int FUN_0c03f346();
float math_sin_angle16(int);
int FUN_0c103e18(int a4, int a5, int a6, int a7);

int FUN_0c103e18(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
        (((struct o22_ushort *)(a4))->v) = 0x0;
    }
    if ((int)((((struct o4_int *)0xC472CF0)->v)) > (int)0x2) {
        (((struct oA8_uchar *)(a4))->v) = 0x0;
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
    }
    t0 = (((struct o0_int *)0xC472CF0)->v);
    (((struct o28_float *)(a4))->v) = (*(float *)((((((((t0 << 1) + t0) << 2) << 1) + 0xC1FC68C) + ((((((struct o4_int *)0xC472CF0)->v)) << 2) << 1)) + 0x0)));
    t0 = (((struct o0_int *)0xC472CF0)->v);
    (((struct o2C_float *)(a4))->v) = ((((struct o4_float *)(((0xC1FC68C + ((((t0 << 1) + t0) << 2) << 1)) + ((((((struct o4_int *)0xC472CF0)->v)) << 2) << 1))))->v));
    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) * 0.976744175f);
    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) * 0.976744175f);
    if ((*(signed char *)((a4 + 0x15))) == 0) {
        (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) + 0x1);
        u0 = math_sin_angle16(((((((struct o22_short *)(a4))->v)) << 8) << 2));
        u1 = ((math_sin_angle16((((((((struct o22_short *)(a4))->v)) << 8) << 2) << 1))) * 0.0700000003f);
        u1 = u1 + 0.100000001f * u0;
        (((struct o40_float *)(a4))->v) = (u1 + 1.0f);
        (((struct o44_float *)(a4))->v) = (u1 + 1.0f);
        t0 = *(signed char *)0xC541F44;
        t1 = (unsigned char)t0;
        if ((unsigned char)t0 != 1) {
            t0 = (((struct oC4_int *)(a4))->v);
            *(unsigned short *)((t0 + 0x6)) = ((*(short *)((t0 + 0x6))) | 0x400);
            t0 = (((struct oC8_int *)(a4))->v);
            *(unsigned short *)((t0 + 0x6)) = ((*(short *)((t0 + 0x6))) | 0x200);
            t0 = *(int *)(((0xC4 + a4) + 0x4));
            t2 = (((struct oC4_int *)(a4))->v);
            (((struct o20_float *)(t0))->v) = 1.0f;
            (((struct o1C_float *)(t0))->v) = 1.0f;
            (((struct o18_float *)(t0))->v) = 1.0f;
            (((struct o14_float *)(t2))->v) = 1.0f;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            t1 = 0x15;
        }
        return t1;
    }
    t0 = (((struct oC8_int *)(a4))->v);
    (((struct o20_float *)(t0))->v) = (((((struct o20_float *)(t0))->v)) - 0.0333333351f);
    t0 = *(int *)(((0xC4 + a4) + 0x4));
    t1 = (((struct oC4_int *)(a4))->v);
    u0 = (((struct o20_float *)(t0))->v);
    (((struct o1C_float *)(t0))->v) = u0;
    (((struct o18_float *)(t0))->v) = u0;
    (((struct o14_float *)(t1))->v) = u0;
    if (0.0f > ((((struct oBC_float *)(a4))->v))) {
        return FUN_0c03f346(a4, (0xC4 + a4), 0xC472CF0, a7);
    }
    return 0xBC;
}
