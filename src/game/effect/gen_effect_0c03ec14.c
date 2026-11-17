/* game/effect: functions 0C03EC14-0C03EDF8, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o14_float { char p[0x14]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
int FUN_0c0e2390(int, int, int);
int FUN_0c17c450(int);
extern int FUN_0c187798();
int FUN_0c03ec14(int a4, int a5, int a6);
int FUN_0c03ec80(int a4, int a5, int a6);

int FUN_0c03ec14(int a4, int a5, int a6)
{
    int stk[6];
    register int t0;
    register int t2;
    register int t1;

    (((struct o2C_float *)(a4))->v) = 1.0f;
    t0 = ((int (*)(int, int, int))(FUN_0c187798))(((a5 * 0x2F8) + 0xC5410FC), a5, a6);
    t2 = ((int (*)(int))(FUN_0c187798))(t1);
    FUN_0c0e2390((a4 + 0x4), (((int)stk + 0) + 0xC), ((int)stk + 0));
    FUN_0c17c450((a4 + 0x4));
    (((struct o4_float *)((a4 + 0x4)))->v) = (((((struct o4_float *)((a4 + 0x4)))->v)) + ((((struct o14_float *)(a4))->v)));
    return (FUN_0c17c450((a4 + 0x4)));
}

int FUN_0c03ec80(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register float u0;
    register float u1;
    float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;

    t3 = *(signed char *)0xC5421DC;
    t4 = 0xC5421DC;
    t5 = 0x0;
    t6 = 0xC542460;
    for (;;) {
        t8 = t4;
        u3 = u0;
        u4 = u1;
        if ((*(signed char *)((t6 + 0x0))) != 0) {
            t7 = (*(signed char *)((t6 + 0x1)));
            t7 = (unsigned char)t7;
            if (t7 != 1) {
                
                t8 = t4;
                u5 = u0;
                u6 = u1;
            } else {
                t7 = (FUN_0c03ec14(t6, t3, a6));
            }
            u3 = u5;
            u4 = u6;
        }
        u0 = u3;
        u1 = u4;
        t7 = 0x30;
        t4 = t8;
        u1 = (*(float *)((t6 + t7)));
        t7 = 0x2C;
        u0 = (*(float *)((t6 + t7)));
        t5 = (t5 + 0x1);
        t7 = 0x34;
        u0 = (u0 * u1);
        *(float *)((t6 + t7)) = u0;
        t6 = (t6 + 0x4C);
        if ((int)t5 >= (int)0x8) {
            break;
        }
    }
    t3 = t7;
    t5 = t4;
    t4 = t0;
    t0 = 0xC542460;
    t6 = t1;
    t1 = 0x0;
    u3 = u0;
    u0 = u1;
    for (;;) {
        if ((*(signed char *)((t0 + 0x0))) != 0) {
            t4 = 0x0;
            for (;;) {
                if ((int)t4 >= (int)0x8) {
                    break;
                }
                if (t1 != t4) {
                    t6 = (t4 * 0x4C);
                    t6 = (t6 + 0xC542460);
                    t5 = (*(signed char *)((t6 + 0x0)));
                    if (t5 != 0) {
                        t3 = 0x34;
                        u3 = (*(float *)((t0 + t3)));
                        u0 = (*(float *)((t6 + t3)));
                        if ((u3 > u0) && (u2 = *(float *)((t0 + t3)), t2 = (u3 > u0), u3 = u2, u0 = 0.0f, u3 != u0)) {
                            t7 = t3;
                            t7 = (t7 + t0);
                            u3 = (*(float *)((t6 + t3)));
                            u0 = (*(float *)((t7 + 0x0)));
                            u3 = (u3 / u0);
                            *(float *)((t6 + t3)) = u3;
                        }
                    }
                }
                t4 = (t4 + 0x1);
            }
        }
        t1 = (t1 + 0x1);
        t0 = (t0 + 0x4C);
        if ((int)t1 >= (int)0x8) {
            break;
        }
    }
    t0 = t3;
    t1 = 0xC542460;
    t2 = 0x8;
    u1 = u3;
    u2 = u0;
    for (;;) {
        if ((*(signed char *)((t1 + 0x0))) != 0) {
            t0 = 0x34;
            u2 = (*(float *)((t1 + t0)));
            t0 = 0x20;
            u1 = (*(float *)((t1 + t0)));
            t0 = 0x40;
            u1 = (u1 * u2);
            *(float *)((t1 + t0)) = u1;
            t0 = 0x34;
            u2 = (*(float *)((t1 + t0)));
            t0 = 0x24;
            u1 = (*(float *)((t1 + t0)));
            t0 = 0x44;
            u1 = (u1 * u2);
            *(float *)((t1 + t0)) = u1;
            t0 = 0x34;
            u2 = (*(float *)((t1 + t0)));
            t0 = 0x28;
            u1 = (*(float *)((t1 + t0)));
            t0 = 0x48;
            u1 = (u1 * u2);
            *(float *)((t1 + t0)) = u1;
        }
        t2 = (t2 - 0x1);
        t1 = (t1 + 0x4C);
        if (t2 == 0) {
            break;
        }
    }
    t2 = t0;
    if (((((struct o0_int *)0xC3DC268)->v)) != 0) {
        t0 = (((struct o0_int *)0xC3DC268)->v);
        (((struct o0_uint *)0xC3DC268)->v) = (t0 - 1);
        u0 = (((struct o8_float *)0xC3DC268)->v);
        if ((int)(t0 - 1) < (int)0x1E) {
            t0 = (((struct o0_int *)0xC3DC268)->v);
            u1 = u0;
            u1 = u1 + (((float)(0x1E - t0) / 30.0f)) * ((((struct o0_float *)0xC5424A0)->v));
            (((struct o0_float *)0xC5424A0)->v) = u1;
            if (((((struct o0_float *)0xC5424A0)->v)) > 1.0f) {
                (((struct o0_float *)0xC5424A0)->v) = 1.0f;
            }
            u1 = ((((struct o8_float *)0xC3DC268)->v));
            u1 = u1 + (((float)(0x1E - t0) / 30.0f)) * ((((struct o4_float *)0xC5424A0)->v));
            (((struct o4_float *)0xC5424A0)->v) = u1;
            if (u1 > 1.0f) {
                (((struct o4_float *)0xC5424A0)->v) = 1.0f;
            }
            u1 = ((((struct o8_float *)0xC3DC268)->v));
            u1 = u1 + (((float)(0x1E - t0) / 30.0f)) * ((((struct o8_float *)0xC5424A0)->v));
            (((struct o8_float *)0xC5424A0)->v) = u1;
            if (u1 > 1.0f) {
                (((struct o8_float *)0xC5424A0)->v) = 1.0f;
            }
        } else {
            (((struct o40_float *)(t1))->v) = u0;
            (((struct o44_float *)(t1))->v) = ((((struct o8_float *)0xC3DC268)->v));
            (((struct o48_float *)(t1))->v) = ((((struct o8_float *)0xC3DC268)->v));
        }
        t2 = 0x48;
    }
    return t2;
}
