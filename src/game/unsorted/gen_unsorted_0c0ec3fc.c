/* game/unsorted: functions 0C0EC3FC-0C0EC69C, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o41C_int { char p[0x41C]; int v; };
struct o41C_uint { char p[0x41C]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct oC4_int { char p[0xC4]; int v; };
float math_cos_angle16(int);
int FUN_0c179ac0(void);
int FUN_0c0ec3fc(int a4, int a5, int a6);
int FUN_0c0ec438(int a4);
float FUN_0c0ec550(int a4, float f4);

int FUN_0c0ec3fc(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = a4;
    if ((int)(a4 - (*(int *)((a5 + 0x0)))) > (int)0x8000) {
        t0 = (a4 - 0x10000);
    }
    t1 = *(int *)((a5 + 0x0));
    t2 = t0;
    if ((int)(t0 - (*(int *)((a5 + 0x0)))) < (int)0xFFFF8000) {
        t2 = (t0 + 0x10000);
    }
    t0 = (int)((int)(t2 - t1) / (int)(a6 + 0x1));
    *(unsigned int *)((a5 + 0x0)) = (unsigned short)((*(int *)((a5 + 0x0))) + t0);
    return t0;
}

int FUN_0c0ec438(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            
            t1 = t0;
        } else {
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            if ((int)(short)(t0 - 1) <= 0) {
                *(unsigned short *)((a4 + 0x1C)) = (((int)((int)(FUN_0c179ac0()) % (int)0x3C)) + 0x3C);
                *(unsigned short *)((a4 + 0x1E)) = ((int)((int)(FUN_0c179ac0()) % (int)0x14));
            }
            t0 = 0x0;
            t2 = 0x0;
            for (;;) {
                t4 = *(short *)((a4 + 0x1E));
                FUN_0c0ec3fc((*(int *)((((0xC1CCC90 + ((((t4 << 2) << 1) + t4) << 2)) + t0) + 0x0))), ((*(int *)((((0xC4 + a4) + t2) + 0x0))) + 0x78), 0x3C);
                t4 = *(short *)((a4 + 0x1E));
                FUN_0c0ec3fc((*(int *)((((0xC1CCC90 + ((((t4 << 2) << 1) + t4) << 2)) + t0) + 0x4))), ((*(int *)((((0xC4 + a4) + t2) + 0x0))) + 0x7C), 0x3C);
                t4 = *(int *)((((0xC4 + a4) + t2) + 0x0));
                t5 = 0x1;
                if ((*(signed char *)((a4 + 0x2))) != 0) {
                    t5 = 0xFFFFFFFF;
                }
                t6 = *(short *)((a4 + 0x1E));
                t3 = FUN_0c0ec3fc((t5 * (*(int *)((((((((t6 << 2) << 1) + t6) << 2) + 0xC1CCC90) + t0) + 0x8)))), (t4 + 0x80), 0x3C);
                t2 = (t2 + 0x4);
                t0 = (t0 + 0xC);
                if ((unsigned int)t2 >= (unsigned int)0xC) {
                    break;
                }
            }
            t1 = t3;
        }
        t0 = t1;
    } else {
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0x78;
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
        t1 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
        if ((int)(short)(t1 - 1) <= 0) {
            *(unsigned short *)((a4 + 0x1C)) = (((int)((int)(FUN_0c179ac0()) % (int)0x3C)) + 0x3C);
            *(unsigned short *)((a4 + 0x1E)) = ((int)((int)(FUN_0c179ac0()) % (int)0x14));
        }
        t1 = 0x0;
        t2 = 0x0;
        for (;;) {
            t4 = *(short *)((a4 + 0x1E));
            FUN_0c0ec3fc((*(int *)((((0xC1CCC90 + ((((t4 << 2) << 1) + t4) << 2)) + t1) + 0x0))), ((*(int *)((((0xC4 + a4) + t2) + 0x0))) + 0x78), 0x3C);
            t4 = *(short *)((a4 + 0x1E));
            FUN_0c0ec3fc((*(int *)((((0xC1CCC90 + ((((t4 << 2) << 1) + t4) << 2)) + t1) + 0x4))), ((*(int *)((((0xC4 + a4) + t2) + 0x0))) + 0x7C), 0x3C);
            t4 = *(int *)((((0xC4 + a4) + t2) + 0x0));
            t5 = 0x1;
            if ((*(signed char *)((a4 + 0x2))) != 0) {
                t5 = 0xFFFFFFFF;
            }
            t6 = *(short *)((a4 + 0x1E));
            t3 = FUN_0c0ec3fc((t5 * (*(int *)((((((((t6 << 2) << 1) + t6) << 2) + 0xC1CCC90) + t1) + 0x8)))), (t4 + 0x80), 0x3C);
            t2 = (t2 + 0x4);
            t1 = (t1 + 0xC);
            if ((unsigned int)t2 >= (unsigned int)0xC) {
                break;
            }
        }
        t0 = t3;
    }
    return t0;
}

float FUN_0c0ec550(int a4, float f4)
{
    register int t0;
    register float u0;
    register float u1;
    register float u2;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
        } else {
            u0 = math_cos_angle16((int)(((float)(*(short *)(((*(int *)0xC540E1C) + 0x1E))) * ((((struct o0_float *)0xC0EC620)->v))) / ((((struct o4_float *)0xC0EC620)->v))));
            u1 = (((-u0) + 1.0f) / (1.0f + 1.0f));
            if (0.0f > (((-u0) + 1.0f) / (1.0f + 1.0f))) {
                u1 = 0.0f;
            }
            u0 = u1;
            if (u1 > 1.0f) {
                u0 = 1.0f;
            }
            u1 = (float)((((struct o41C_int *)(a4))->v));
            u1 = u1 + u0 * (float)(*(int *)((0xC1CCF60 + (((*(signed char *)((a4 + 0x2))) - 2) << 2))));
            (((struct o80_uint *)(((((struct oC4_int *)(a4))->v))))->v) = (int)u1;
            u1 = u0;
        }
        u0 = u1;
    } else {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        (((struct o41C_uint *)(a4))->v) = ((((struct o80_int *)(((((struct oC4_int *)(a4))->v))))->v));
        u1 = math_cos_angle16((int)(((float)(*(short *)(((*(int *)0xC540E1C) + 0x1E))) * ((((struct o0_float *)0xC0EC620)->v))) / ((((struct o4_float *)0xC0EC620)->v))));
        u2 = (((-u1) + 1.0f) / (1.0f + 1.0f));
        if (0.0f > (((-u1) + 1.0f) / (1.0f + 1.0f))) {
            u2 = 0.0f;
        }
        u1 = u2;
        if (u2 > 1.0f) {
            u1 = 1.0f;
        }
        u2 = (float)((((struct o41C_int *)(a4))->v));
        u2 = u2 + u1 * (float)(*(int *)((0xC1CCF60 + (((*(signed char *)((a4 + 0x2))) - 2) << 2))));
        (((struct o80_uint *)(((((struct oC4_int *)(a4))->v))))->v) = (int)u2;
        u0 = u1;
    }
    return u0;
}
