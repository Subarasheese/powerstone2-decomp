/* Straight-line functions with calls and guards (batch gen_zu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o34_float { char p[0x34]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o8_int { char p[0x8]; int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int math_vec3_accumulate(int, int);
int FUN_0c15a404(int a4, int a5, int a6, int a7);

int FUN_0c15a404(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
    }
    if ((t0 == 0) || (t0 == 1)) {
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), (0x7 & (*(short *)((a4 + 0x1E)))), 0x9, (*(int *)0xC4B40CC));
        u0 = (((struct o34_float *)0xC2A2AB4)->v);
        u1 = (((((((struct o38_float *)0xC2A2AB4)->v)) - u0) * (float)(*(short *)((a4 + 0x1C)))) / (float)((((struct o8_int *)0xC2A2AB4)->v)));
        (((struct o48_float *)(a4))->v) = (u0 + u1);
        (((struct o44_float *)(a4))->v) = (u0 + u1);
        (((struct o40_float *)(a4))->v) = (u0 + u1);
        math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
        math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
        t1 = (((struct o0_int *)0xC2A2AB4)->v);
        if (((int)((int)(*(short *)((a4 + 0x1C))) % (int)t1)) == (t1 - 1)) {
            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
        }
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
        t1 = *(short *)((a4 + 0x1C));
        t2 = t1;
        if (t1 != ((((struct o4_int *)0xC2A2AB4)->v))) {
        } else {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t2 = 0x14;
        }
        return t2;
    } else {
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
}
