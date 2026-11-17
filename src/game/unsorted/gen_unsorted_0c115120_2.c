/* game/unsorted: functions 0C115120-0C115DBE, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o8_float { char p[0x8]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
int FUN_0c037bf6(int);
int FUN_0c038566(void);
int res_cockpit_faces_release_all(void);
int FUN_0c03f346(int, int, int, int);
int FUN_0c115120(int, int, int, int, int, int, int, int, int, int, int, int);
extern int FUN_0c115c38();
float FUN_0c0e2340(int);
int FUN_0c187798(int, int, int);
int FUN_0c115292(int a4, int a5, int a6, float f4);
int FUN_0c11563c(int a4, int a5, int a6, float f4);
int FUN_0c115cc6(int a4, int a5, int a6, int a7, float f4);

int FUN_0c115292(int a4, int a5, int a6, float f4)
{
    int stk[2];
    register int t0;
    register int t13;
    register int t1;
    register int t3;
    register int t4;
    register int t5;
    register int t6;

    t0 = *(signed char *)0xC5324AC;
    t13 = t0;
    if (t0 == 0) {
        t1 = FUN_0c037bf6(0xC532498);
        t13 = (unsigned char)t1;
        if ((unsigned char)t1 != 0) {
            FUN_0c115120(0x1, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
            t3 = (((struct o4_int *)0xC5325B0)->v);
            t4 = (((struct o0_int *)0xC5325B0)->v);
            (((struct oA0_float *)(t3))->v) = 1.0f;
            (((struct o9C_float *)(t3))->v) = 1.0f;
            (((struct oA0_float *)(t4))->v) = 1.0f;
            (((struct o9C_float *)(t4))->v) = 1.0f;
            t5 = (((struct o4_int *)0xC5325B0)->v);
            t6 = (((struct o0_int *)0xC5325B0)->v);
            (((struct o98_float *)(t5))->v) = 1.0f;
            (((struct o98_float *)(t6))->v) = 1.0f;
            (((struct o94_float *)(t5))->v) = 1.0f;
            (((struct o94_float *)(t6))->v) = 1.0f;
            t13 = 0x94;
        }
    }
    return t13;
}

int FUN_0c11563c(int a4, int a5, int a6, float f4)
{
    int stk[4];
    register float t6;
    register int t1;

    *(float *)(((int)stk + 0)) = f4;
    FUN_0c187798(a4, a5, a6);
    *(float *)(((int)stk + 4)) = (((((struct o0_float *)0xC473CA8)->v)) - ((((struct o28_float *)(t1))->v)));
    *(float *)(((int)stk + 12)) = (((((struct o8_float *)0xC473CA8)->v)) - ((((struct o30_float *)(t1))->v)));
    t6 = FUN_0c0e2340((((int)stk + 0) + 0x4));
    return ((((*(float *)(((int)stk + 0))) > t6)) ? 1 : 0);
}

int FUN_0c115cc6(int a4, int a5, int a6, int a7, float f4)
{
    int stk[6];
    register int t0;
    register int t1;
    register int t6;
    register int t10;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 99) {
                return t0;
            }
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        t1 = ((int (*)(int, int, int, int, float))(FUN_0c115c38))(a4, a5, a6, a7, f4);
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o0_uchar *)0xC535BAD)->v) = 0x1;
        (((struct o1_uchar *)0xC535BAD)->v) = 0x1;
        (((struct o18_float *)0xC5324C0)->v) = 1.04999995f;
        (((struct o1C_float *)0xC5324C0)->v) = 1.04999995f;
        (((struct o20_float *)0xC5324C0)->v) = 1.04999995f;
        (((struct o0_float *)0xC5324C0)->v) = -73.0f;
        (((struct o4_float *)0xC5324C0)->v) = 0.0f;
        (((struct o8_float *)0xC5324C0)->v) = 128.0f;
        (((struct o10_uint *)0xC5324C0)->v) = 0xD200;
        FUN_0c115120(0x1, a5, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
        t6 = 0x32;
        for (;;) {
            FUN_0c037bf6(0xC532498);
            FUN_0c038566();
            res_cockpit_faces_release_all();
            t6 = (t6 - 0x1);
            if (t6 == 0) {
                break;
            }
        }
        t10 = ((int (*)(void))(FUN_0c115c38))();
    }
    FUN_0c038566();
    return (res_cockpit_faces_release_all());
}
