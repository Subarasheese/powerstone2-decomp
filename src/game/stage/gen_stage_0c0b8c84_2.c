/* game/stage: functions 0C0B8C84-0C0B930C, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o12E_short { char p[0x12E]; short v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o3770_int { char p[0x3770]; int v; };
struct o3830_ushort { char p[0x3830]; unsigned short v; };
struct o445_uchar { char p[0x445]; unsigned char v; };
struct o4C_float { char p[0x4C]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
int FUN_0c037bf6(int, int, int);
int FUN_0c038362(int);
int FUN_0c07d086(int, int, float);
int FUN_0c07e79c(int, int, int, int, int, int, int);
extern int FUN_0c085d0c();
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c0b8e2e(int a4, int a5, int a6, int a7);

int FUN_0c0b8e2e(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    if (((((struct o3770_int *)(a4))->v)) != 0) {
        if ((*(short *)((a4 + 0x1C))) != 0) {
            t0 = FUN_0c037bf6(a4, a5, a6);
            if ((unsigned char)t0 != 0) {
                return ((int (*)(int))(FUN_0c085d0c))(a4);
            }
            return FUN_0c038362(a4);
        }
        t0 = (((struct o3770_int *)(a4))->v);
        (((struct o3830_ushort *)(t0))->v) = (((((struct o12E_short *)(t0))->v)) ^ 0xF);
        (((struct o374B_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x1;
        t0 = FUN_0c037bf6(a4, a5, a6);
        if ((unsigned char)t0 != 0) {
            (((struct o4C_float *)(a4))->v) = ((math_cos_angle16(((-(*(int *)((a4 + 0x38)))) + 0x14000))) * 10.0f);
            (((struct o54_float *)(a4))->v) = ((math_sin_angle16(((-(*(int *)((a4 + 0x38)))) + 0x14000))) * 10.0f);
            t0 = *(signed char *)((a4 + 0x1));
            FUN_0c07e79c(a4, t0, 0x2, 0x1D, (t0), 0x2, 0x1D);
            t0 = *(int *)(((0x118 + a4) + 0x4));
            t1 = (((struct o118_int *)(a4))->v);
            (((struct oA0_float *)(t0))->v) = 1.0f;
            (((struct o9C_float *)(t0))->v) = 1.0f;
            (((struct oA0_float *)(t1))->v) = 1.0f;
            (((struct o9C_float *)(t1))->v) = 1.0f;
            t0 = *(int *)(((0x118 + a4) + 0x4));
            t1 = (((struct o118_int *)(a4))->v);
            (((struct o98_float *)(t0))->v) = 1.0f;
            (((struct o98_float *)(t1))->v) = 1.0f;
            (((struct o94_float *)(t0))->v) = 1.0f;
            (((struct o94_float *)(t1))->v) = 1.0f;
            FUN_0c07e79c(((((struct o3770_int *)(a4))->v)), 0xFFFFFFFF, 0x3, 0xDF, 0xFFFFFFFF, 0x3, 0xDF);
            t0 = (((struct o3770_int *)(a4))->v);
            t1 = *(int *)(((t0 + 0x118) + 0x4));
            t2 = (((struct o118_int *)(t0))->v);
            (((struct oA0_float *)(t1))->v) = 1.0f;
            (((struct o9C_float *)(t1))->v) = 1.0f;
            (((struct oA0_float *)(t2))->v) = 1.0f;
            (((struct o9C_float *)(t2))->v) = 1.0f;
            t0 = (((struct o3770_int *)(a4))->v);
            t1 = *(int *)(((t0 + 0x118) + 0x4));
            t2 = (((struct o118_int *)(t0))->v);
            (((struct o98_float *)(t1))->v) = 1.0f;
            (((struct o98_float *)(t2))->v) = 1.0f;
            (((struct o94_float *)(t1))->v) = 1.0f;
            (((struct o94_float *)(t2))->v) = 1.0f;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            t0 = 0x15;
        } else {
            FUN_0c07d086(a4, 0x0, 0.0f);
            FUN_0c038362(a4);
            t1 = *(short *)((a4 + 0x1E));
            *(unsigned short *)((a4 + 0x1E)) = (t1 - 1);
            t2 = (short)(t1 - 1);
            if ((short)(t1 - 1) == 0) {
                (((struct o445_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x1;
                t2 = 0x445;
            }
            t0 = t2;
        }
        return t0;
    }
    return ((int (*)(int, int, int, int))(FUN_0c085d0c))(a4, a5, a6, a7);
}
