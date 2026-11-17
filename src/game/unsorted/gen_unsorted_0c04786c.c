/* game/unsorted: functions 0C04786C-0C0479EC, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oD4_int { char p[0xD4]; int v; };
struct oD8_int { char p[0xD8]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c04786c(int a4, int a5, int a6, int a7);

int FUN_0c04786c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, 0x1E, a6, a7);
        }
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        *(unsigned short *)((a4 + 0x1C)) = 0x1E;
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
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
                t0 = *(signed char *)0xC541F62;
                if ((unsigned char)t0 != 0) {
                    if ((unsigned char)t0 != 1) {
                        t0 = ((unsigned char)(*(signed char *)0xC40F820) + 0x32);
                    } else {
                        t0 = ((unsigned char)(*(signed char *)0xC40F820) + 0x2D);
                    }
                    t3 = t0;
                } else {
                    t3 = ((unsigned char)(*(signed char *)0xC40F820) + 0x28);
                }
                t0 = (((struct oD4_int *)(a4))->v);
                FUN_0c03744a(t0, 0x0, t3, (*(int *)0xC4B410C));
                *(unsigned char *)((t0 + 0x0)) = 0x1;
                *(unsigned short *)((t0 + 0x6)) = 0x1F;
                (((struct o6C_float *)(t0))->v) = -220.0f;
                (((struct o70_float *)(t0))->v) = -180.0f;
                t0 = *(signed char *)0xC541F62;
                if ((unsigned char)t0 != 0) {
                    if ((unsigned char)t0 != 1) {
                        t0 = ((unsigned char)(*(signed char *)0xC40F821) + 0x32);
                    } else {
                        t0 = ((unsigned char)(*(signed char *)0xC40F821) + 0x2D);
                    }
                    t3 = t0;
                } else {
                    t3 = ((unsigned char)(*(signed char *)0xC40F821) + 0x28);
                }
                t0 = (((struct oD8_int *)(a4))->v);
                FUN_0c03744a(t0, 0x0, t3, (*(int *)0xC4B410C));
                *(unsigned char *)((t0 + 0x0)) = 0x1;
                *(unsigned short *)((t0 + 0x6)) = 0x1F;
                (((struct o6C_float *)(t0))->v) = 220.0f;
                (((struct o70_float *)(t0))->v) = -180.0f;
                t2 = 0x70;
            }
            t0 = t2;
        } else {
            *(unsigned short *)((a4 + 0x1E)) = 0x1;
            *(unsigned char *)((((((struct oD4_int *)(a4))->v)) + 0x0)) = 0x0;
            *(unsigned char *)((((((struct oD8_int *)(a4))->v)) + 0x0)) = 0x0;
            t0 = 0xD8;
        }
        t1 = t0;
    }
    return t1;
}
