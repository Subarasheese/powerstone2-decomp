/* game/unsorted: functions 0C0E2A8C-0C0E2CB0, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
float math_cos_angle16(int);
int nlRand(void);
float math_sin_angle16(int);
int nlAddVector3op(int, int, int);
int FUN_0c187798(void);
int FUN_0c0e2a8c(int a4, int a5, int a6, int a7);
int FUN_0c0e2b30(int a4);

int FUN_0c0e2a8c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register float u0;

    if ((*(signed char *)0xC54223C) == 2) {
        t0 = *(signed char *)((a4 + 0x14));
        if (t0 != 0) {
            if (t0 != 1) {
                return t0;
            }
        } else {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            (((struct o15_uchar *)(a4))->v) = 0x0;
            (((struct oA8_uchar *)(a4))->v) = 0x1;
        }
        if ((*(signed char *)((a4 + 0x15))) == 0) {
            u0 = (((struct o40_float *)(a4))->v);
            (((struct o40_float *)(a4))->v) = (u0 + 0.266666681f);
            (((struct o48_float *)(a4))->v) = (u0 + 0.266666681f);
            (((struct o44_float *)(a4))->v) = (u0 + 0.266666681f);
            t0 = 0x40;
            if (!(1.0f > ((((struct o40_float *)(a4))->v)))) {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t0 = 0x15;
            }
            return t0;
        }
        nlAddVector3op((a4 + 0x28), (a4 + 0x28), (a4 + 0x4C));
        u0 = (((struct o40_float *)(a4))->v);
        (((struct o40_float *)(a4))->v) = (u0 - 0.0857142881f);
        (((struct o48_float *)(a4))->v) = (u0 - 0.0857142881f);
        (((struct o44_float *)(a4))->v) = (u0 - 0.0857142881f);
        if (!(((((struct o40_float *)(a4))->v)) > 0.0f)) {
            return ((int (*)(int))(FUN_0c03f346))(a4);
        }
        return 0x40;
    }
    return ((int (*)(int, int, int, int))(FUN_0c03f346))(a4, a5, a6, a7);
}

