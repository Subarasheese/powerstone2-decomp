/* game/unsorted: functions 0C051538-0C05164E, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c051538(int a4, int a5, int a6);

int FUN_0c051538(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    int t2;
    register int t3;
    register int t4;
    int t5;
    register int t6;
    register int t7;
    register int t8;

    t6 = *(signed char *)((a4 + 0x14));
    if (t6 != 0) {
        if (t6 != 1) {
            return FUN_0c03f346(a4, 0x1E, a6, 0x0);
        }
        t6 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t6 - 1);
        t7 = (short)(t6 - 1);
        if ((short)(t6 - 1) == 0) {
            *(unsigned short *)((a4 + 0x1C)) = 0x1E;
            t6 = *(short *)((a4 + 0x1E));
            if (t6 != 0) {
                t8 = t6;
                if (t6 != 1) {
                } else {
                    *(unsigned short *)((a4 + 0x1E)) = 0x0;
                    if (((int)(unsigned char)(*(signed char *)0xC40F820) < (int)0x2) && ((t0 = *(signed char *)0xC40F821, (int)(unsigned char)t0 < (int)0x2) && ((t1 = *(signed char *)0xC40F822, (int)(unsigned char)t1 < (int)0x2) && (t2 = *(signed char *)0xC40F823, (int)(unsigned char)t2 < (int)0x2)))) {
                        *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x0;
                        t0 = 0xC4;
                    } else {
                        t1 = *(signed char *)0xC541F62;
                        if ((unsigned char)t1 != 0) {
                            if ((unsigned char)t1 != 1) {
                                t1 = (*(signed char *)0xC241470);
                            } else {
                                t1 = (*(signed char *)0xC24146B);
                            }
                            t2 = t1;
                        } else {
                            t2 = (*(signed char *)0xC241466);
                        }
                        t1 = (((struct oC4_int *)(a4))->v);
                        FUN_0c03744a(t1, 0x0, t2, (*(int *)0xC4B410C));
                        *(unsigned char *)((t1 + 0x0)) = 0x1;
                        *(unsigned short *)((t1 + 0x6)) = 0x1F;
                        (((struct o6C_float *)(t1))->v) = -234.0f;
                        (((struct o70_float *)(t1))->v) = -178.0f;
                        t0 = 0x70;
                    }
                    t8 = t0;
                }
                t0 = t8;
            } else {
                *(unsigned short *)((a4 + 0x1E)) = 0x1;
                *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x0;
                t0 = 0xC4;
            }
            t7 = t0;
        }
        return t7;
    }
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    *(unsigned short *)((a4 + 0x1C)) = 0x1E;
    *(unsigned short *)((a4 + 0x1E)) = 0x0;
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((short)(t0 - 1) == 0) {
        *(unsigned short *)((a4 + 0x1C)) = 0x1E;
        t0 = *(short *)((a4 + 0x1E));
        if (t0 != 0) {
            t2 = t0;
            if (t0 != 1) {
            } else {
                *(unsigned short *)((a4 + 0x1E)) = 0x0;
                if (((int)(unsigned char)(*(signed char *)0xC40F820) < (int)0x2) && ((t3 = *(signed char *)0xC40F821, (int)(unsigned char)t3 < (int)0x2) && ((t4 = *(signed char *)0xC40F822, (int)(unsigned char)t4 < (int)0x2) && (t5 = *(signed char *)0xC40F823, (int)(unsigned char)t5 < (int)0x2)))) {
                    *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x0;
                    t0 = 0xC4;
                } else {
                    t3 = *(signed char *)0xC541F62;
                    if ((unsigned char)t3 != 0) {
                        if ((unsigned char)t3 != 1) {
                            t3 = (*(signed char *)0xC241470);
                        } else {
                            t3 = (*(signed char *)0xC24146B);
                        }
                        t4 = t3;
                    } else {
                        t4 = (*(signed char *)0xC241466);
                    }
                    t3 = (((struct oC4_int *)(a4))->v);
                    FUN_0c03744a(t3, 0x0, t4, (*(int *)0xC4B410C));
                    *(unsigned char *)((t3 + 0x0)) = 0x1;
                    *(unsigned short *)((t3 + 0x6)) = 0x1F;
                    (((struct o6C_float *)(t3))->v) = -234.0f;
                    (((struct o70_float *)(t3))->v) = -178.0f;
                    t0 = 0x70;
                }
                t2 = t0;
            }
            t0 = t2;
        } else {
            *(unsigned short *)((a4 + 0x1E)) = 0x1;
            *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x0;
            t0 = 0xC4;
        }
        t1 = t0;
    }
    return t1;
}
