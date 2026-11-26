/* Straight-line functions with calls and guards (batch gen_xz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o2C_float { char p[0x2C]; float v; };
struct o3770_int { char p[0x3770]; int v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
int FUN_0c037bf6(int, int, int);
int FUN_0c038362(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c085d0c(int);
int FUN_0c07ae98(int a4, int a5, int a6);

int FUN_0c07ae98(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t4;
    register int t5;
    register int t6;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        t0 = a5;
        t1 = a6;
    } else {
        t2 = *(signed char *)((a4 + 0x2));
        if (t2 != 8) {
            if (t2 != 10) {
                t2 = *(signed char *)((a4 + 0x1));
                FUN_0c07e79c(a4, t2, 0x0, 0xF, (t2), 0x0, 0xF);
            } else {
                if ((*(signed char *)((a4 + 0x371A))) != 0) {
                    t2 = *(signed char *)((a4 + 0x1));
                    t0 = 0x23;
                    t4 = (t2);
                    t5 = t2;
                    t2 = 0x23;
                } else {
                    t6 = *(signed char *)((a4 + 0x1));
                    t0 = 0xF;
                    t4 = (t6);
                    t5 = t6;
                    t2 = 0xF;
                }
                FUN_0c07e79c(a4, t5, 0x0, t2, t4, 0x0, t0);
            }
        } else {
            if ((*(signed char *)((a4 + 0x371A))) != 0) {
                t2 = *(signed char *)((a4 + 0x1));
                t0 = 0x29;
                t4 = (t2);
                t5 = t2;
                t2 = 0x29;
            } else {
                t6 = *(signed char *)((a4 + 0x1));
                t0 = 0xF;
                t4 = (t6);
                t5 = t6;
                t2 = 0xF;
            }
            FUN_0c07e79c(a4, t5, 0x0, t2, t4, 0x0, t0);
        }
        t2 = *(int *)(((0x118 + a4) + 0x4));
        t0 = (((struct o118_int *)(a4))->v);
        (((struct oA0_float *)(t2))->v) = 1.0f;
        (((struct o9C_float *)(t2))->v) = 1.0f;
        (((struct oA0_float *)(t0))->v) = 1.0f;
        (((struct o9C_float *)(t0))->v) = 1.0f;
        t2 = *(int *)(((0x118 + a4) + 0x4));
        t0 = (((struct o118_int *)(a4))->v);
        (((struct o98_float *)(t2))->v) = 1.0f;
        (((struct o98_float *)(t0))->v) = 1.0f;
        (((struct o94_float *)(t2))->v) = 1.0f;
        (((struct o94_float *)(t0))->v) = 1.0f;
        *(unsigned short *)((a4 + 0x1C)) = 0xA;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t1 = t2;
    }
    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - 1.0f);
    t2 = FUN_0c037bf6(a4, t0, t1);
    if ((unsigned char)t2 == 0) {
        FUN_0c038362(a4);
        t0 = *(short *)((a4 + 0x1C));
        if (t0 != 0) {
            if ((*(signed char *)((0x3715 + ((((struct o3770_int *)(a4))->v))))) != 33) {
                return FUN_0c085d0c(a4);
            }
            t1 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
            return (t1 - 1);
        }
        return t0;
    }
    return FUN_0c085d0c(a4);
}
