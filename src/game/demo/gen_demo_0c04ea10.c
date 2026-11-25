/* game/demo: functions 0C04EA10-0C04F098, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o3C_int { char p[0x3C]; int v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c04ea10(int a4, int a5, int a6, int a7);
int FUN_0c04eaa4(int a4, int a5);

int FUN_0c04ea10(int a4, int a5, int a6, int a7)
{
    register int t0;
    register float u0;
    register float u1;

    u0 = (((struct o0_float *)0xC04EAE8)->v);
    u1 = (((struct o4_float *)0xC04EAE8)->v);
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    return FUN_0c03f346(a4, a5, a6, a7);
                }
                (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + u0);
                (((struct oB0_float *)(a4))->v) = (((((struct oB0_float *)(a4))->v)) - u1);
                t0 = 0xB0;
                if (0.0f > ((((struct oB0_float *)(a4))->v))) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t0 = 0x14;
                }
                return t0;
            }
            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 0.0130000003f);
            t0 = 0x2C;
            if (((((struct o2C_float *)(a4))->v)) > ((((struct oC_float *)0xC04EAE8)->v))) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t0 = 0x14;
            }
            return t0;
        }
    } else {
        (((struct oB0_float *)(a4))->v) = 0.0f;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + u0);
    (((struct oB0_float *)(a4))->v) = (((((struct oB0_float *)(a4))->v)) + u1);
    t0 = 0xB0;
    if (!(((((struct oB0_float *)(a4))->v)) > 1.0f)) {
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t0 = 0x14;
    }
    return t0;
}

