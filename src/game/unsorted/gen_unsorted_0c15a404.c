/* game/unsorted: functions 0C15A404-0C15B40E, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o8_int { char p[0x8]; int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c15acb0(int, int, int);
float math_cos_angle16(int);
int FUN_0c179ac0(void);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int FUN_0c187798(void);
int FUN_0c15a404(int a4, int a5, int a6, int a7);
int FUN_0c15a5aa(int a4, int a5, int a6);
int FUN_0c15a65c(int a4, int a5, int a6, int a7);
int FUN_0c15a808(int a4, int a5, int a6);
int FUN_0c15a8bc(int a4, int a5, int a6, int a7);
int FUN_0c15acfe(int a4, int a5, int a6, int a7);
int FUN_0c15af80(int a4, int a5, int a6);
int FUN_0c15b00c(int a4, int a5, int a6, int a7);

int FUN_0c15a404(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            FUN_0c03744a(((((struct oC4_int *)(a4))->v)), (0x7 & (*(short *)((a4 + 0x1E)))), 0x9, (*(int *)0xC4B40CC));
            t0 = (((struct o4_int *)0xC2A2AB4)->v);
            u0 = ((float)((*(short *)((a4 + 0x1C))) - t0) / (float)(((((struct o8_int *)0xC2A2AB4)->v)) - t0));
            u0 = -u0;
            (((struct oBC_float *)(a4))->v) = (u0 + 1.0f);
            (((struct oB8_float *)(a4))->v) = (u0 + 1.0f);
            (((struct oB4_float *)(a4))->v) = (u0 + 1.0f);
            u0 = (((struct o34_float *)0xC2A2AB4)->v);
            u1 = (((((((struct o38_float *)0xC2A2AB4)->v)) - u0) * (float)(*(short *)((a4 + 0x1C)))) / (float)((((struct o8_int *)0xC2A2AB4)->v)));
            (((struct o48_float *)(a4))->v) = (u0 + u1);
            (((struct o44_float *)(a4))->v) = (u0 + u1);
            (((struct o40_float *)(a4))->v) = (u0 + u1);
            math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
            math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
            t0 = (((struct o0_int *)0xC2A2AB4)->v);
            if (((int)((int)(*(short *)((a4 + 0x1C))) % (int)t0)) == (t0 - 1)) {
                *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
            }
            *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
            t0 = *(short *)((a4 + 0x1C));
            t1 = t0;
            if (t0 == ((((struct o8_int *)0xC2A2AB4)->v))) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t1 = 0x14;
            }
            return t1;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
    }
    FUN_0c03744a(((((struct oC4_int *)(a4))->v)), (0x7 & (*(short *)((a4 + 0x1E)))), 0x9, (*(int *)0xC4B40CC));
    u0 = (((struct o34_float *)0xC2A2AB4)->v);
    u1 = (((((((struct o38_float *)0xC2A2AB4)->v)) - u0) * (float)(*(short *)((a4 + 0x1C)))) / (float)((((struct o8_int *)0xC2A2AB4)->v)));
    (((struct o48_float *)(a4))->v) = (u0 + u1);
    (((struct o44_float *)(a4))->v) = (u0 + u1);
    (((struct o40_float *)(a4))->v) = (u0 + u1);
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    t0 = (((struct o0_int *)0xC2A2AB4)->v);
    if (((int)((int)(*(short *)((a4 + 0x1C))) % (int)t0)) == (t0 - 1)) {
        *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
    }
    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
    t0 = *(short *)((a4 + 0x1C));
    t1 = t0;
    if (t0 != ((((struct o4_int *)0xC2A2AB4)->v))) {
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t1 = 0x14;
    }
    return t1;
}


int FUN_0c15a65c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            FUN_0c03744a(((((struct oC4_int *)(a4))->v)), (0x7 & (*(short *)((a4 + 0x1E)))), 0x9, (*(int *)0xC4B40CC));
            t0 = (((struct o4_int *)0xC2A2AC0)->v);
            u0 = ((float)((*(short *)((a4 + 0x1C))) - t0) / (float)(((((struct o8_int *)0xC2A2AC0)->v)) - t0));
            u0 = -u0;
            (((struct oBC_float *)(a4))->v) = (u0 + 1.0f);
            (((struct oB8_float *)(a4))->v) = (u0 + 1.0f);
            (((struct oB4_float *)(a4))->v) = (u0 + 1.0f);
            u0 = (((struct o30_float *)0xC2A2AC0)->v);
            u1 = (((((((struct o34_float *)0xC2A2AC0)->v)) - u0) * (float)(*(short *)((a4 + 0x1C)))) / (float)((((struct o8_int *)0xC2A2AC0)->v)));
            (((struct o48_float *)(a4))->v) = (u0 + u1);
            (((struct o44_float *)(a4))->v) = (u0 + u1);
            (((struct o40_float *)(a4))->v) = (u0 + u1);
            math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
            math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
            t0 = (((struct o0_int *)0xC2A2AC0)->v);
            if (((int)((int)(*(short *)((a4 + 0x1C))) % (int)t0)) == (t0 - 1)) {
                *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
            }
            *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
            t0 = *(short *)((a4 + 0x1C));
            t1 = t0;
            if (t0 == ((((struct o8_int *)0xC2A2AC0)->v))) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t1 = 0x14;
            }
            return t1;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
    }
    FUN_0c03744a(((((struct oC4_int *)(a4))->v)), (0x7 & (*(short *)((a4 + 0x1E)))), 0x9, (*(int *)0xC4B40CC));
    u0 = (((struct o30_float *)0xC2A2AC0)->v);
    u1 = (((((((struct o34_float *)0xC2A2AC0)->v)) - u0) * (float)(*(short *)((a4 + 0x1C)))) / (float)((((struct o8_int *)0xC2A2AC0)->v)));
    (((struct o48_float *)(a4))->v) = (u0 + u1);
    (((struct o44_float *)(a4))->v) = (u0 + u1);
    (((struct o40_float *)(a4))->v) = (u0 + u1);
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    t0 = (((struct o0_int *)0xC2A2AC0)->v);
    if (((int)((int)(*(short *)((a4 + 0x1C))) % (int)t0)) == (t0 - 1)) {
        *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
    }
    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
    t0 = *(short *)((a4 + 0x1C));
    t1 = t0;
    if (t0 != ((((struct o4_int *)0xC2A2AC0)->v))) {
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t1 = 0x14;
    }
    return t1;
}



int FUN_0c15acfe(int a4, int a5, int a6, int a7)
{
    int stk[13];
    register int t2;
    register int t7;
    register float u24;
    register float u26;
    register float u28;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned int *)(((int)stk + 4)) = 0x0;
        *(unsigned int *)(((int)stk + 12)) = 0xC2A2AE4;
        *(unsigned int *)(((int)stk + 8)) = (((int)stk + 4) + 0xC);
        t2 = 0x14;
        for (;;) {
            if ((int)(*(int *)(((int)stk + 4))) >= (int)(*(int *)(((*(int *)(((int)stk + 12))) + 0x0)))) {
                break;
            }
            t7 = (*(int *)(((int)stk + 8)));
            *(int *)((int)stk + 0) = t7;
            t2 = (FUN_0c179ac0());
            if ((int)t2 >= 0) {
                t2 = (t2 & 0xF);
            } else {
                t2 = (~t2);
                t2 = (t2 + 0x1);
                t2 = (t2 & 0xF);
                t2 = (~t2);
                t2 = (t2 + 0x1);
            }
            t2 = (t2 << 8);
            t2 = (t2 << 2);
            t2 = (t2 << 2);
            *(unsigned int *)((t7 + 0x0)) = t2;
            t2 = (FUN_0c179ac0());
            if ((int)t2 >= 0) {
                t2 = (t2 & 0xF);
            } else {
                t2 = (~t2);
                t2 = (t2 + 0x1);
                t2 = (t2 & 0xF);
                t2 = (~t2);
                t2 = (t2 + 0x1);
            }
            t2 = (t2 << 8);
            t2 = (t2 << 2);
            t2 = (t2 << 2);
            *(unsigned int *)((((((int)stk + 4) + 0xC) + 0x4) + 0x0)) = t2;
            t2 = (FUN_0c179ac0());
            if ((int)t2 >= 0) {
                t2 = (t2 & 0xF);
            } else {
                t2 = (~t2);
                t2 = (t2 + 0x1);
                t2 = (t2 & 0xF);
                t2 = (~t2);
                t2 = (t2 + 0x1);
            }
            t2 = (t2 << 8);
            t2 = (t2 << 2);
            t2 = (t2 << 2);
            *(unsigned int *)((((((int)stk + 4) + 0xC) + 0x8) + 0x0)) = t2;
            t2 = 0x24;
            *(float *)((((int)stk + 4) + t2)) = (math_cos_angle16((*(int *)(((*(int *)(((int)stk + 8))) + 0x0)))));
            t2 = 0x28;
            *(float *)((((int)stk + 4) + t2)) = (math_sin_angle16((*(int *)((((((int)stk + 4) + 0xC) + 0x4) + 0x0)))));
            t2 = 0x2C;
            *(float *)((((int)stk + 4) + t2)) = (math_sin_angle16((*(int *)((((((int)stk + 4) + 0xC) + 0x8) + 0x0)))));
            t2 = 0x24;
            u24 = *(float *)((((int)stk + 4) + t2));
            t2 = 0x24;
            *(float *)((((int)stk + 4) + t2)) = (u24 * ((((struct o0_float *)0xC2A2B00)->v)));
            t2 = 0x28;
            u26 = *(float *)((((int)stk + 4) + t2));
            t2 = 0x28;
            *(float *)((((int)stk + 4) + t2)) = (u26 * ((((struct o0_float *)0xC2A2B00)->v)));
            t2 = 0x2C;
            u28 = *(float *)((((int)stk + 4) + t2));
            t2 = 0x2C;
            *(float *)((((int)stk + 4) + t2)) = (u28 * ((((struct o0_float *)0xC2A2B00)->v)));
            t2 = 0x18;
            *(float *)((((int)stk + 4) + t2)) = ((((struct o4_float *)0xC2A2B00)->v));
            t2 = 0x1C;
            *(float *)((((int)stk + 4) + t2)) = ((((struct o4_float *)0xC2A2B00)->v));
            t2 = 0x20;
            *(float *)((((int)stk + 4) + t2)) = ((((struct o4_float *)0xC2A2B00)->v));
            t2 = (FUN_0c15acb0((a4 + 0x28), (((int)stk + 4) + 0x24), (((int)stk + 4) + 0x18)));
            *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x1);
        }
    }
    return (FUN_0c03f346(a4, a5, a6, a7));
}




