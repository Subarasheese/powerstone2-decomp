/* game/unsorted: functions 0C15BA84-0C15BC58, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o168_float { char p[0x168]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oA4_int { char p[0xA4]; int v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c037498(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int math_mat_transform_vector(int, int);
int math_mat_get_translate(int, int);
int FUN_0c15ba84(int a4, int a5, int a6, int a7);
int FUN_0c15bb04(int a4, int a5, int a6, int a7);

int FUN_0c15ba84(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    t0 = (((struct oC4_int *)(a4))->v);
    FUN_0c037498(t0, (unsigned char)(*(signed char *)((0xC2A2B08 + (*(short *)((a4 + 0x1C)))))), 0x2A, (*(int *)0xC4B40CC));
    if ((int)(*(short *)((a4 + 0x1C))) >= (int)0x6) {
        u0 = *(float *)0xC15BBB0;
        (((struct o18_float *)(t0))->v) = (((((struct o18_float *)(t0))->v)) - u0);
        (((struct o1C_float *)(t0))->v) = (((((struct o1C_float *)(t0))->v)) - u0);
        (((struct o20_float *)(t0))->v) = (((((struct o20_float *)(t0))->v)) - u0);
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
    t1 = (short)(t0 + 0x1);
    if ((int)(short)(t0 + 0x1) >= (int)0xA) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t1 = 0x14;
    }
    return t1;
}

int FUN_0c15bb04(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t0;
    register int t5;
    register int t6;
    register int t8;
    register int t21;
    register int t53;
    register int t83;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            t83 = t0;
            if (t0 == 2) {
                t5 = *(short *)((a4 + 0x1C));
                t6 = ((~(((~t5) + 0x1) & 0x1)) + 0x1);
                if ((int)t5 >= 0) {
                    t6 = (t5 & 0x1);
                }
                (((struct oA8_uchar *)(a4))->v) = t6;
                t8 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t8 - 1);
                t83 = (short)(t8 - 1);
                if ((int)(short)(t8 - 1) <= 0) {
                    t83 = (FUN_0c03f346(a4, a5, a6, a7));
                }
            }
        } else {
            if (!((((((struct o168_float *)((*(int *)((a4 + 0x10)))))->v)) + 20.0f) > ((((struct o2C_float *)(a4))->v)))) {
                t21 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t21 - 1);
                if ((short)(t21 - 1) == 0) {
                    *(unsigned short *)((a4 + 0x1C)) = 0x1E;
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t83 = 0x14;
                } else {
                    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
                    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
                    *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) + 0x38E);
                    *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0x71C);
                    t83 = 0x50;
                }
            } else {
                *(unsigned short *)((a4 + 0x1C)) = 0x1E;
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t83 = 0x14;
            }
        }
    } else {
        t53 = *(int *)((a4 + 0x10));
        if ((*(signed char *)((t53 + 0x3715))) == 22) {
            t83 = (FUN_0c03f346(a4, a5, a6, a7));
        } else {
            if (((*(signed char *)((t53 + 0x3715))) == 32) && (t83 = *(signed char *)((t53 + 0x3739)), t83 == 33)) {
            } else {
                math_mat_get_translate(((((struct oA4_int *)(a4))->v)), (a4 + 0x28));
                math_mat_transform_vector(((int)stk + 0), ((((struct oA4_int *)(a4))->v)));
                (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + (*(float *)(((int)stk + 0))));
                (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o4_float *)(((int)stk + 0)))->v)));
                (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o8_float *)(((int)stk + 0)))->v)));
                (((struct oA4_uint *)(a4))->v) = 0x0;
                (((struct o50_float *)(a4))->v) = 25.0f;
                (((struct o5C_float *)(a4))->v) = -2.0f;
                *(unsigned short *)((a4 + 0x1C)) = 0x3C;
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t83 = 0x14;
            }
        }
    }
    return t83;
}
