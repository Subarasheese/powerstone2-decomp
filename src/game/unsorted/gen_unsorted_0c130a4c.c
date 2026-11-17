/* game/unsorted: functions 0C130A4C-0C130D3E, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4_float { char p[0x4]; float v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c179ac0(void);
float math_sin_angle16(int);
int FUN_0c130a4c(int a4, int a5, int a6, int a7);
int FUN_0c130acc(int a4, int a5, int a6, int a7);
int FUN_0c130cf6(int a4, int a5, int a6, int a7);

int FUN_0c130a4c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register float u0;
    float s1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    *(unsigned int *)((a4 + 0x3C)) = ((*(int *)((a4 + 0x3C))) + 0x71C);
    u0 = math_sin_angle16((int)(((float)(*(short *)((a4 + 0x1E))) * ((((struct o0_float *)0xC130B34)->v))) / ((((struct o4_float *)0xC130B34)->v))));
    s1 = _builtin_fabsf(u0);
    (((struct o40_float *)(a4))->v) = (s1 * (1.0f + 1.0f));
    (((struct o48_float *)(a4))->v) = (s1 * (1.0f + 1.0f));
    (((struct o44_float *)(a4))->v) = (s1 * (1.0f + 1.0f));
    *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x222);
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    if ((short)(t0 - 1) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        return 0x14;
    }
    return (short)(t0 - 1);
}

int FUN_0c130acc(int a4, int a5, int a6, int a7)
{
    register int t0;
    int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;

    t2 = *(signed char *)((a4 + 0x14));
    t3 = *(int *)((a4 + 0x10));
    if (t2 != 0) {
        if (t2 != 1) {
            if (t2 != 2) {
                if (t2 != 3) {
                    return t2;
                }
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            t2 = (((struct oC4_int *)(a4))->v);
            u0 = (((struct o18_float *)(t2))->v);
            (((struct o18_float *)(t2))->v) = (u0 - 0.100000001f);
            if (!((u0 - 0.100000001f) > 0.0f)) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t4 = 0x14;
            } else {
                u0 = (((struct o18_float *)(t2))->v);
                (((struct o20_float *)(t2))->v) = u0;
                (((struct o1C_float *)(t2))->v) = u0;
                t4 = 0x1C;
            }
            return t4;
        }
        u0 = 1.0f;
        if (((*(int *)0xC542260) & 1) == 0) {
            u0 = 1.10000002f;
        }
        *(unsigned int *)((a4 + 0x3C)) = ((*(int *)((a4 + 0x3C))) + (int)(((float)((int)((int)(FUN_0c179ac0()) % (int)0x1E)) * ((((struct o0_float *)0xC130C64)->v))) / ((((struct o4_float *)0xC130C64)->v))));
        (((struct o40_float *)(a4))->v) = u0;
        (((struct o48_float *)(a4))->v) = u0;
        (((struct o44_float *)(a4))->v) = u0;
        t2 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t2 - 1);
        t4 = 0x15;
        if (((int)(short)(t2 - 1) > 0) && ((t0 = *(signed char *)((t3 + 0x3715)), t0 == 26) && (t1 = *(signed char *)((t3 + 0x15)), (int)t1 <= (int)0x2))) {
        } else {
            t0 = (((struct oC4_int *)(a4))->v);
            *(unsigned short *)((t0 + 0x6)) = ((*(short *)((t0 + 0x6))) | 0x200);
            (((struct o20_float *)(t0))->v) = 1.0f;
            (((struct o1C_float *)(t0))->v) = 1.0f;
            (((struct o18_float *)(t0))->v) = 1.0f;
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t4 = 0x14;
        }
        return t4;
    }
    u0 = (((struct o44_float *)(a4))->v);
    (((struct o44_float *)(a4))->v) = (u0 + 0.100000001f);
    if ((u0 + 0.100000001f) > 1.0f) {
        (((struct o44_float *)(a4))->v) = 1.0f;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    u0 = (((struct o44_float *)(a4))->v);
    (((struct o40_float *)(a4))->v) = u0;
    (((struct o48_float *)(a4))->v) = u0;
    *(unsigned short *)((a4 + 0x1E)) = 0x0;
    return 0x0;
}

int FUN_0c130cf6(int a4, int a5, int a6, int a7)
{
    register int t0;
    register float u0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        return 0x14;
    }
    u0 = (((struct o48_float *)(a4))->v);
    (((struct o48_float *)(a4))->v) = (u0 + 0.119999997f);
    (((struct o44_float *)(a4))->v) = (u0 + 0.119999997f);
    (((struct o40_float *)(a4))->v) = (u0 + 0.119999997f);
    return 0x40;
}
