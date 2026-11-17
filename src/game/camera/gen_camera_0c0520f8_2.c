/* game/camera: functions 0C0520F8-0C052816, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o204_float { char p[0x204]; float v; };
struct o208_int { char p[0x208]; int v; };
struct o208_uint { char p[0x208]; unsigned int v; };
struct o20C_int { char p[0x20C]; int v; };
struct o20C_uint { char p[0x20C]; unsigned int v; };
struct o210_int { char p[0x210]; int v; };
struct o210_uint { char p[0x210]; unsigned int v; };
struct o214_int { char p[0x214]; int v; };
struct o214_uint { char p[0x214]; unsigned int v; };
struct o218_int { char p[0x218]; int v; };
struct o218_uint { char p[0x218]; unsigned int v; };
struct o220_int { char p[0x220]; int v; };
struct o220_uint { char p[0x220]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
int FUN_0c052184(int, int, int, int);
int FUN_0c052370(int);
int FUN_0c052378(int);
int cam_set_view_matrix(int);
float math_cos_angle16(int);
int FUN_0c0521ea(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11);
int FUN_0c0523ce(int a4, int a5, int a6, int a7);
void FUN_0c0524bc(int a4, int a5, int a6, int a7);
float FUN_0c052640(int a4, int a5, int a6);

int FUN_0c0521ea(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{
    int stk[9];
    register int t0;
    register int t6;

    *(unsigned int *)(((int)stk + 20)) = a4;
    *(unsigned int *)(((int)stk + 24)) = a5;
    *(unsigned char *)(((int)stk + 28)) = a6;
    *(unsigned char *)(((int)stk + 32)) = a7;
    t0 = 0x0;
    for (;;) {
        *(int *)((int)stk + 16) = a11;
        *(int *)((int)stk + 12) = a10;
        *(int *)((int)stk + 8) = ((signed char)(a9 >> 0));
        *(int *)((int)stk + 4) = ((signed char)(a8 >> 0));
        *(int *)((int)stk + 0) = ((*(signed char *)(((int)stk + 32))));
        t6 = FUN_0c052184(t0, (*(int *)(((int)stk + 20))), (*(int *)(((int)stk + 24))), (*(signed char *)(((int)stk + 28))));
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x4) {
            break;
        }
    }
    return t6;
}

int FUN_0c0523ce(int a4, int a5, int a6, int a7)
{
    register int t5;

    if ((*(signed char *)((a4 + 0x3))) == 0) {
        FUN_0c052370(a4);
    }
    t5 = *(int *)((a4 + 0x14));
    if (t5 != -1) {
        if ((*(int *)((a4 + 0x14))) != 0) {
            *(unsigned int *)((a4 + 0x14)) = ((*(int *)((a4 + 0x14))) - 1);
            return t5;
        }
        FUN_0c052378(a4);
        return ((int (*)(int, int, int, int))(0xC052340))(a4, a5, a6, a7);
    }
    return t5;
}

void FUN_0c0524bc(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    if ((*(signed char *)0xC54232C) != 0) {
        t3 = 0xC5410FC;
        for (;;) {
            FUN_0c0523ce(t3, a5, a6, a7);
            cam_set_view_matrix(t3);
            t3 = (t3 + 0x2F8);
            if ((unsigned int)t3 >= (unsigned int)0xC5416EC) {
                break;
            }
        }
    } else {
        FUN_0c0523ce(0xC5410FC, a5, a6, a7);
        cam_set_view_matrix(0xC5410FC);
        t3 = 0xC5410FC;
        t4 = 0xC5413F4;
        for (;;) { t0 = *(int *)t3; t3 = (t3 + 4); if ((unsigned int)((0xC5410FC + 760)) < (unsigned int)t3) break; *(unsigned int *)t4 = t0; t4 = (t4 + 4); }
    }
    t0 = 0xC5410FC;
    t3 = 0xC5416EC;
    for (;;) { t1 = *(int *)t0; t0 = (t0 + 4); if ((unsigned int)((0xC5410FC + 760)) < (unsigned int)t0) break; *(unsigned int *)t3 = t1; t3 = (t3 + 4); }
    t0 = 0xC5413F4;
    t1 = 0xC5419E4;
    for (;;) { t2 = *(int *)t0; t0 = (t0 + 4); if ((unsigned int)((0xC5413F4 + 760)) < (unsigned int)t0) break; *(unsigned int *)t1 = t2; t1 = (t1 + 4); }
    *(unsigned char *)0xC5410FC = 0x0;
    *(unsigned char *)0xC5413F4 = 0x1;
    *(unsigned char *)0xC5416EC = 0x2;
    *(unsigned char *)0xC5419E4 = 0x3;
}

float FUN_0c052640(int a4, int a5, int a6)
{
    int t0;
    register int t1;
    register float u0;
    register float u1;

    if ((((((struct o214_int *)(a4))->v)) != -1) && (t0 = (((struct o210_int *)(a4))->v), t0 != 0)) {
        (((struct o210_uint *)(a4))->v) = (((((struct o210_int *)(a4))->v)) - 1);
    }
    if (((((struct o210_int *)(a4))->v)) == 0) {
        (((struct o204_float *)(a4))->v) = 0.0f;
        (((struct o208_uint *)(a4))->v) = 0x0;
        (((struct o214_uint *)(a4))->v) = 0xFFFFFFFF;
        (((struct o218_uint *)(a4))->v) = 0x63;
    }
    t0 = (((struct o218_int *)(a4))->v);
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    (((struct o204_float *)(a4))->v) = 0.0f;
                    (((struct o208_uint *)(a4))->v) = 0x0;
                    (((struct o214_uint *)(a4))->v) = 0xFFFFFFFF;
                    (((struct o218_uint *)(a4))->v) = 0x63;
                } else {
                    if ((int)((((struct o20C_int *)(a4))->v)) > (int)0x8000) {
                        (((struct o20C_uint *)(a4))->v) = 0x8000;
                    }
                    (((struct o220_uint *)(a4))->v) = (((((struct o220_int *)(a4))->v)) + ((((struct o20C_int *)(a4))->v)));
                    (((struct o220_uint *)(a4))->v) = (((((struct o220_int *)(a4))->v)) & 0xFFFF);
                    t0 = (((struct o208_int *)(a4))->v);
                    u0 = math_cos_angle16(((((struct o220_int *)(a4))->v)));
                    (((struct o204_float *)(a4))->v) = ((float)t0 * u0);
                    u1 = u0;
                }
                u0 = u1;
            } else {
                (((struct o20C_uint *)(a4))->v) = (((((struct o20C_int *)(a4))->v)) + ((int)((int)0x8000 / (int)((((struct o214_int *)(a4))->v)))));
                if ((int)((((struct o20C_int *)(a4))->v)) > (int)0x8000) {
                    (((struct o20C_uint *)(a4))->v) = 0x8000;
                }
                (((struct o220_uint *)(a4))->v) = (((((struct o220_int *)(a4))->v)) + ((((struct o20C_int *)(a4))->v)));
                (((struct o220_uint *)(a4))->v) = (((((struct o220_int *)(a4))->v)) & 0xFFFF);
                t0 = (((struct o208_int *)(a4))->v);
                u1 = math_cos_angle16(((((struct o220_int *)(a4))->v)));
                (((struct o204_float *)(a4))->v) = ((float)t0 * u1);
                u0 = u1;
            }
            u1 = u0;
        } else {
            t0 = (int)((int)(((((struct o208_int *)(a4))->v)) * ((((struct o210_int *)(a4))->v))) / (int)((((struct o214_int *)(a4))->v)));
            if ((int)((((struct o20C_int *)(a4))->v)) > (int)0x8000) {
                (((struct o20C_uint *)(a4))->v) = 0x8000;
            }
            (((struct o220_uint *)(a4))->v) = (((((struct o220_int *)(a4))->v)) + ((((struct o20C_int *)(a4))->v)));
            (((struct o220_uint *)(a4))->v) = (((((struct o220_int *)(a4))->v)) & 0xFFFF);
            u0 = math_cos_angle16(((((struct o220_int *)(a4))->v)));
            (((struct o204_float *)(a4))->v) = ((float)t0 * u0);
            u1 = u0;
        }
        u0 = u1;
    } else {
        t0 = (((struct o214_int *)(a4))->v);
        t1 = (int)((int)(((((struct o208_int *)(a4))->v)) * ((((struct o210_int *)(a4))->v))) / (int)t0);
        (((struct o20C_uint *)(a4))->v) = (((((struct o20C_int *)(a4))->v)) + ((int)((int)0x8000 / (int)t0)));
        if ((int)((((struct o20C_int *)(a4))->v)) > (int)0x8000) {
            (((struct o20C_uint *)(a4))->v) = 0x8000;
        }
        (((struct o220_uint *)(a4))->v) = (((((struct o220_int *)(a4))->v)) + ((((struct o20C_int *)(a4))->v)));
        (((struct o220_uint *)(a4))->v) = (((((struct o220_int *)(a4))->v)) & 0xFFFF);
        u1 = math_cos_angle16(((((struct o220_int *)(a4))->v)));
        (((struct o204_float *)(a4))->v) = ((float)t1 * u1);
        u0 = u1;
    }
    (((struct o4_float *)(a5))->v) = (((((struct o4_float *)(a5))->v)) + ((((struct o204_float *)(a4))->v)));
    (((struct o4_float *)(a6))->v) = (((((struct o4_float *)(a6))->v)) + ((((struct o204_float *)(a4))->v)));
    return u0;
}
