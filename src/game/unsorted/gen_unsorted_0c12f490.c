/* game/unsorted: functions 0C12F490-0C12F694, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c037498(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c12f490(int a4, int a5, int a6, int a7, float f4);

int FUN_0c12f490(int a4, int a5, int a6, int a7, float f4)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = *(signed char *)(((*(int *)((a4 + 0x10))) + 0x3715));
    if ((t0 != 26) && ((t0 != 33) && (t0 != 20))) {
        (((struct o14_uchar *)(a4))->v) = 0xFFFFFFFF;
    }
    if ((*(signed char *)((a4 + 0x14))) != 0) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                if ((*(signed char *)((0x1B + (*(int *)((a4 + 0x10)))))) == 2) {
                    *(unsigned short *)((a4 + 0x1E)) = 0x4;
                    *(unsigned short *)((a4 + 0x1C)) = 0x4;
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                    t1 = 0x15;
                } else {
                    t2 = *(signed char *)((0x1B + (*(int *)((a4 + 0x10)))));
                    t3 = t2;
                    if (t2 == 3) {
                        *(unsigned short *)((a4 + 0x1E)) = 0x14;
                        *(unsigned short *)((a4 + 0x1C)) = 0x14;
                        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                        t3 = 0x15;
                    }
                    t1 = t3;
                }
                t2 = t1;
            } else {
                t1 = t0;
                if (t0 == 3) {
                    t0 = *(short *)((a4 + 0x1C));
                    t3 = *(short *)((a4 + 0x1E));
                    t4 = (((struct oC4_int *)(a4))->v);
                    (((struct o18_float *)(t4))->v) = ((float)t0 / (float)t3);
                    (((struct o1C_float *)(t4))->v) = ((float)t0 / (float)t3);
                    (((struct o20_float *)(t4))->v) = ((float)t0 / (float)t3);
                    t4 = (((struct oC8_int *)(a4))->v);
                    (((struct o18_float *)(t4))->v) = ((float)t0 / (float)t3);
                    (((struct o1C_float *)(t4))->v) = ((float)t0 / (float)t3);
                    (((struct o20_float *)(t4))->v) = ((float)t0 / (float)t3);
                    if (!(((float)t0 / (float)t3) > 0.0f)) {
                        t0 = (((struct oC4_int *)(a4))->v);
                        (((struct o20_float *)(t0))->v) = 0.0f;
                        (((struct o1C_float *)(t0))->v) = 0.0f;
                        (((struct o18_float *)(t0))->v) = 0.0f;
                        t0 = (((struct oC8_int *)(a4))->v);
                        (((struct o20_float *)(t0))->v) = 0.0f;
                        (((struct o1C_float *)(t0))->v) = 0.0f;
                        (((struct o18_float *)(t0))->v) = 0.0f;
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    }
                    t0 = *(short *)((a4 + 0x1C));
                    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
                    t1 = (t0 - 1);
                }
                t2 = t1;
            }
            t0 = t2;
        } else {
            t1 = *(signed char *)((0x1B + (*(int *)((a4 + 0x10)))));
            t2 = t1;
            if (t1 == 1) {
                t1 = (((struct oC4_int *)(a4))->v);
                (((struct o80_uint *)(t1))->v) = (((((struct o80_int *)(t1))->v)) + 0xE38);
                t1 = (((struct oC8_int *)(a4))->v);
                (((struct o80_uint *)(t1))->v) = (((((struct o80_int *)(t1))->v)) - 0xE38);
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t2 = 0x15;
            }
            t0 = t2;
        }
        t1 = t0;
    } else {
        t0 = *(short *)((a4 + 0x1C));
        t2 = (((struct oC4_int *)(a4))->v);
        (((struct o7C_uint *)(t2))->v) = (((((struct o7C_int *)(t2))->v)) - 0x3CA);
        (((struct o18_float *)(t2))->v) = ((float)t0 / 15.0f);
        (((struct o1C_float *)(t2))->v) = ((float)t0 / 15.0f);
        (((struct o20_float *)(t2))->v) = ((float)t0 / 15.0f);
        t2 = (((struct oC8_int *)(a4))->v);
        (((struct o7C_uint *)(t2))->v) = (((((struct o7C_int *)(t2))->v)) + 0x3CA);
        (((struct o18_float *)(t2))->v) = ((float)t0 / 15.0f);
        (((struct o1C_float *)(t2))->v) = ((float)t0 / 15.0f);
        (((struct o20_float *)(t2))->v) = ((float)t0 / 15.0f);
        if (!(1.0f > ((float)t0 / 15.0f))) {
            t0 = (((struct oC4_int *)(a4))->v);
            (((struct o20_float *)(t0))->v) = 1.0f;
            (((struct o1C_float *)(t0))->v) = 1.0f;
            (((struct o18_float *)(t0))->v) = 1.0f;
            (((struct o7C_uint *)(t0))->v) = (((((struct o7C_int *)(t0))->v)) + 0x2AAA);
            FUN_0c037498(t0, (*(int *)0xC201E5C), 0x5, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
            t0 = (((struct oC8_int *)(a4))->v);
            (((struct o20_float *)(t0))->v) = 1.0f;
            (((struct o1C_float *)(t0))->v) = 1.0f;
            (((struct o18_float *)(t0))->v) = 1.0f;
            (((struct o7C_uint *)(t0))->v) = (((((struct o7C_int *)(t0))->v)) - 0x2AAA);
            FUN_0c037498(t0, (*(int *)0xC201E5C), 0x5, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        }
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
        t1 = (t0 + 0x1);
    }
    return t1;
}
