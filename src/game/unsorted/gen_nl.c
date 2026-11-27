/* Straight-line functions with calls and guards (batch gen_nl): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oD0_int { char p[0xD0]; int v; };
struct oD4_int { char p[0xD4]; int v; };
int FUN_0c037498(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c0585a8(int, int, int, float);
int FUN_0c169524(int, int, int);
int FUN_0c16957c(int, int, int);
int FUN_0c16958a(int, int, int, int);
int math_vec3_accumulate(int, int);
int thunk_FUN_0c058310(int, int);
int FUN_0c16a112(int a4, int a5, int a6, int a7);

int FUN_0c16a112(int a4, int a5, int a6, int a7)
{
    int stk[4];
    register int t1;
    register int t24;
    register int t3;
    register float u29;
    register int t30;
    register int t36;
    register int t38;
    register float u42;
    register int t44;
    register float u45;
    register int t46;
    register int t48;
    register int t50;
    register int t52;
    register int t54;
    register int t56;
    register int t58;
    register int t77;
    register int t12;
    register int t13;
    register int t31;
    register int R1004;

    R1004 = *(int *)((int)stk + 0);

    R1004 = (((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532498);
    t1 = *(signed char *)((a4 + 0x14));
    t24 = 0;
    if (t1 != 0) {
        if (t1 != 1) {
            t3 = t1;
            if (t1 == 2) {
            } else {
                t3 = (FUN_0c03f346(a4, a5, a6, a7));
            }
        } else {
            t24 = 1;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0x12C;
        if ((*(signed char *)((a4 + 0x2))) == 0) {
            t12 = 0xCC;
            t13 = (*(int *)((a4 + 0x10)));
        } else {
            t12 = 0xD4;
            t13 = (*(int *)((a4 + 0x10)));
        }
        thunk_FUN_0c058310(((*(int *)((t13 + t12))) + 0x28), (a4 + 0x28));
        FUN_0c16957c(a4, 0x2, 0x2);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        *(unsigned short *)((((((struct oC8_int *)(a4))->v)) + 0x6)) = 0x31;
        (((struct o78_uint *)(((((struct oCC_int *)(a4))->v))))->v) = 0x4000;
        (((struct o78_uint *)(((((struct oD0_int *)(a4))->v))))->v) = 0x0;
        (((struct o78_uint *)(((((struct oD4_int *)(a4))->v))))->v) = 0xFFFFC000;
        FUN_0c169524(a4, 0x29, 0x63);
        t24 = 1;
    }
    if (t24) {
        (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + 0.100000001f);
        if (((((struct o48_float *)(a4))->v)) > 0.5f) {
            (((struct o48_float *)(a4))->v) = 1.0f;
        }
        u29 = (((struct o48_float *)(a4))->v);
        (((struct o44_float *)(a4))->v) = u29;
        (((struct o40_float *)(a4))->v) = u29;
        t30 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t30 - 1);
        if (((int)(short)(t30 - 1) <= 0) || (t31 = *(signed char *)((a4 + 0x131)), t31 != 0)) {
            (((struct o14_uchar *)(a4))->v) = 0x63;
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x4)) = *(struct mv3 *)(((R1004) + 0x380C)); }
        *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) + 100.0f);
        FUN_0c0585a8(a4, (((int)stk + 0) + 0x4), 0x2D8, 4.0f);
        t36 = (((struct oC4_int *)(a4))->v);
        (((struct o7C_uint *)(t36))->v) = (((((struct o7C_int *)(t36))->v)) - 0x1555);
        t38 = (((struct oC8_int *)(a4))->v);
        u42 = 1.0f;
        if (((*(short *)((a4 + 0x1C))) & 1) != 0) {
        } else {
            u42 = (*(float *)0xC16A3E4);
        }
        (((struct o84_float *)(t38))->v) = u42;
        t44 = (((struct oC8_int *)(a4))->v);
        u45 = (((struct o84_float *)(t44))->v);
        (((struct o8C_float *)(t44))->v) = u45;
        (((struct o88_float *)(t44))->v) = u45;
        t46 = (((struct oCC_int *)(a4))->v);
        (((struct o78_uint *)(t46))->v) = (((((struct o78_int *)(t46))->v)) + 0x71C);
        t48 = (((struct oCC_int *)(a4))->v);
        (((struct o7C_uint *)(t48))->v) = (((((struct o7C_int *)(t48))->v)) + 0x1C71);
        t50 = (((struct oD0_int *)(a4))->v);
        (((struct o78_uint *)(t50))->v) = (((((struct o78_int *)(t50))->v)) + 0x71C);
        t52 = (((struct oD0_int *)(a4))->v);
        (((struct o7C_uint *)(t52))->v) = (((((struct o7C_int *)(t52))->v)) + 0x1C71);
        t54 = (((struct oD4_int *)(a4))->v);
        (((struct o78_uint *)(t54))->v) = (((((struct o78_int *)(t54))->v)) + 0x71C);
        t56 = (((struct oD4_int *)(a4))->v);
        (((struct o7C_uint *)(t56))->v) = (((((struct o7C_int *)(t56))->v)) + 0x1C71);
        t58 = FUN_0c16958a(a4, 0x2, 0x2, 0x4);
        if (t58 != 0) {
            FUN_0c037498(((((struct oCC_int *)(a4))->v)), (*(signed char *)(((0x41C + a4) + 0x1))), 0x40, (*(int *)0xC4B40CC));
            FUN_0c037498(((((struct oD0_int *)(a4))->v)), (*(signed char *)(((0x41C + a4) + 0x1))), 0x40, (*(int *)0xC4B40CC));
            FUN_0c037498(((((struct oD4_int *)(a4))->v)), (*(signed char *)(((0x41C + a4) + 0x1))), 0x40, (*(int *)0xC4B40CC));
        }
        math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
        t77 = (math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58)));
    } else {
        t77 = t3;
    }
    return t77;
}
