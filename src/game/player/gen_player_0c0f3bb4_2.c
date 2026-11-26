/* game/player: functions 0C0F3BB4-0C0F4A7A, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o11C_int { char p[0x11C]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o26_uchar { char p[0x26]; unsigned char v; };
struct o2C_float { char p[0x2C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAA_uchar { char p[0xAA]; unsigned char v; };
struct oAB_uchar { char p[0xAB]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c037bf6(int);
int FUN_0c038362(int);
extern int FUN_0c03f346();
int FUN_0c03f444(int, int, int);
int FUN_0c03fb78(int, int);
int FUN_0c05879c(int, int, int, float);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c064f80(int);
int FUN_0c0c2944(int, int, int, int, int);
int FUN_0c0cd8b4(int, int, int);
int FUN_0c0cf440(int, int, int);
int FUN_0c0f3bb4(int, int);
int FUN_0c0f3c7a(int, int);
int FUN_0c0f3d1c(int);
int FUN_0c0f3d88(int);
int FUN_0c0f3db8(int, int, int);
int FUN_0c0f3dc8(int, int);
int FUN_0c0f3e66(int, float);
int FUN_0c0f3e9e(int);
int FUN_0c0f3ee4(int);
extern int FUN_0c0f425c();
int FUN_0c0f4414(int);
int FUN_0c0f4448(int);
int FUN_0c0f44fc(int);
int FUN_0c0f4590(int);
int FUN_0c0f45c6(int);
extern int FUN_0c0f460c();
int FUN_0c0f485a(int);
int nlRand(void);
int math_vec3_accumulate(int, int);
int FUN_0c187798(int, int, int);
int FUN_0c0f3f68(int a4);
int FUN_0c0f4070(int a4);
int FUN_0c0f41ac(int a4);
int FUN_0c0f4662(int a4, int a5, int a6, int a7, float f4);
int FUN_0c0f4920(int a4, int a5, int a6, int a7);


int FUN_0c0f4070(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = FUN_0c0f3d1c(a4);
    t1 = *(signed char *)((a4 + 0x17));
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 != 2) {
                return t1;
            }
            t1 = FUN_0c0f3e66(a4, ((((struct o8_float *)((0xC1C585C + (((*(signed char *)(((0x41C + a4) + 0x3))) << 2) << 2))))->v)));
            if (t1 == 0) {
                t1 = (((struct o20_short *)(a4))->v);
                (((struct o20_ushort *)(a4))->v) = (t1 - 1);
                t2 = 0x20;
                if ((int)(short)(t1 - 1) <= 0) {
                    t2 = (FUN_0c0f3db8(a4, 0x5, 0x0));
                }
                t1 = t2;
            } else {
                t1 = (FUN_0c0f3db8(a4, 0x5, 0x0));
            }
            if (t0 == 0) {
                FUN_0c037bf6(a4);
                FUN_0c038362(a4);
                math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
                math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
                return FUN_0c0f3e9e(a4);
            }
            return t1;
        }
    } else {
        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
        (((struct o20_ushort *)(a4))->v) = (*(int *)((((((*(signed char *)(((0x41C + a4) + 0x3))) << 2) << 2) + 0xC1C585C) + 0xC)));
        t0 = nlRand();
        t1 = ((~(((~t0) + 0x1) & 0x1)) + 0x1);
        if ((int)t0 >= 0) {
            t1 = (t0 & 0x1);
        }
        FUN_0c0f3dc8(a4, t1);
    }
    t0 = (((struct o20_short *)(a4))->v);
    (((struct o20_ushort *)(a4))->v) = (t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
        (((struct o20_ushort *)(a4))->v) = (*(int *)((((((*(signed char *)(((0x41C + a4) + 0x3))) << 2) << 2) + 0xC1C585C) + 0xC)));
    }
    t0 = *(signed char *)(((0x41C + a4) + 0x3));
    return FUN_0c05879c(a4, (((short)(*(signed char *)(((0x41C + a4) + 0x2))) * (short)0x3938) + 0xC5324C0), (*(int *)(((((t0 << 2) << 2) + 0xC1C585C) + 0x4))), (*(float *)(((((t0 << 2) << 2) + 0xC1C585C) + 0x0))));
}



