/* game/hit: functions 0C0C9DB8-0C0CA0C4, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o100_int { char p[0x100]; int v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o376C_uint { char p[0x376C]; unsigned int v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c0c216e(int);
int FUN_0c0c2870(int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c0c9de8(int);
int FUN_0c0c9e1a(void);
int FUN_0c187798(int, int);
int FUN_0c0c9e1e(int a4);

int FUN_0c0c9e1e(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t1 = *(signed char *)((a4 + 0x1));
    t2 = FUN_0c0c216e(a4);
    if (t2 == 0) {
        t2 = FUN_0c0c2870(a4);
        if (t2 != 0) {
            return FUN_0c0c2d56(a4, 0x6, (*(signed char *)((a4 + 0x1))));
        }
        t2 = *(signed char *)(((((short)t1 * (short)0x3938) + 0xC532498) + 0x3715));
        if ((t2 != 5) && ((t2 != 6) && ((t2 != 7) || (t0 = *(signed char *)(((((short)t1 * (short)0x3938) + 0xC532498) + 0x15)), t0 != 1)))) {
            (((struct oA4_uint *)(a4))->v) = 0x0;
            FUN_0c187798(0x0, t2);
            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 20.0f);
            *(unsigned int *)((a4 + 0x38)) = (*(int *)(((((short)t1 * (short)0x3938) + 0xC532498) + 0x38)));
        } else {
            (((struct o28_float *)(a4))->v) = 34.0f;
            (((struct o2C_float *)(a4))->v) = -21.7000008f;
            (((struct o30_float *)(a4))->v) = 0.0f;
            *(unsigned int *)((a4 + 0x34)) = 0x0;
            *(unsigned int *)((a4 + 0x38)) = 0x4000;
            *(unsigned int *)((a4 + 0x3C)) = 0x0;
            (((struct oA4_uint *)(a4))->v) = (((((struct o100_int *)((((short)t1 * (short)0x3938) + 0xC532498)))->v)) + 0x28);
            t0 = (((struct oC4_int *)(a4))->v);
            (((struct o74_float *)(t0))->v) = 0.0f;
            (((struct o70_float *)(t0))->v) = 0.0f;
            (((struct o6C_float *)(t0))->v) = 0.0f;
            t0 = (((struct oC4_int *)(a4))->v);
            (((struct o80_uint *)(t0))->v) = 0x0;
            (((struct o7C_uint *)(t0))->v) = 0x0;
            (((struct o78_uint *)(t0))->v) = 0x0;
        }
        t0 = *(signed char *)((a4 + 0x15));
        if (t0 != 0) {
            if (t0 != 1) {
            } else {
                FUN_0c0c9e1a();
            }
        } else {
            FUN_0c0c9de8(a4);
        }
        (((struct o376C_uint *)((((short)t1 * (short)0x3938) + 0xC532498)))->v) = a4;
        return 0x376C;
    }
    return FUN_0c0c2d56(a4, 0x6, (*(signed char *)((a4 + 0x1))));
}
