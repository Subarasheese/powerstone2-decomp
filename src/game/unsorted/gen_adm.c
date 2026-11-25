/* Straight-line functions with calls and guards (batch gen_adm): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o16_uchar { char p[0x16]; unsigned char v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
int FUN_0c144984(int, int, int);
int math_vec3_mul_xyz(int, float, float, float);
int nlAddVector3op(int, int, int);
int nlSubVector3op(int, int, int);
int FUN_0c144d6a(int a4);

int FUN_0c144d6a(int a4)
{
    int stk[5];
    register int t1;
    register float u10;
    register float u15;
    register int t16;
    register float u20;
    register int t23;
    register int t32;
    register int R1004;
    register int R1008;

    R1004 = *(int *)((int)stk + 0);
    R1008 = *(int *)((int)stk + 4);

    R1008 = (*(signed char *)((a4 + 0x2)));
    t1 = *(signed char *)((a4 + 0x16));
    if (t1 == 0) {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct o48_float *)(a4))->v) = 0.680000007f;
        (((struct o44_float *)(a4))->v) = 0.680000007f;
        (((struct o40_float *)(a4))->v) = 0.680000007f;
        (((struct o7C_uint *)(((((struct oC8_int *)(a4))->v))))->v) = 0x0;
        (((struct o78_uint *)(((((struct oC8_int *)(a4))->v))))->v) = 0x0;
        (((struct o78_uint *)(((((struct oCC_int *)(a4))->v))))->v) = 0x0;
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    }
    if ((t1 == 0) || (t1 == 1)) {
        u10 = (((struct o48_float *)(a4))->v);
        (((struct o48_float *)(a4))->v) = (u10 + 0.0319999978f);
        if (!(1.0f > (u10 + 0.0319999978f))) {
            (((struct o48_float *)(a4))->v) = 1.0f;
            *(unsigned short *)((a4 + 0x1C)) = 0xA;
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        }
        u15 = (((struct o48_float *)(a4))->v);
        (((struct o44_float *)(a4))->v) = u15;
        (((struct o40_float *)(a4))->v) = u15;
        t32 = 0x40;
    } else {
        t32 = t1;
        if (t1 != 2) {
        } else {
            t16 = R1008;
            R1004 = (((t16 << 1) + t16) << 2);
            nlSubVector3op((((int)stk + 0) + 0x8), ((R1004) + 0xC2028FC), ((((t16 << 1) + t16) << 2) + 0xC2028B4));
            u20 = *(float *)0xC144F2C;
            math_vec3_mul_xyz((((int)stk + 0) + 0x8), u20, u20, u20);
            nlAddVector3op((a4 + 0x28), (a4 + 0x28), (((int)stk + 0) + 0x8));
            t23 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t23 - 1);
            t32 = (short)(t23 - 1);
            if ((int)(short)(t23 - 1) <= 0) {
                { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)(((R1004) + 0xC2028FC)); }
                t32 = (FUN_0c144984(a4, 0x3, 0x0));
            }
        }
    }
    return t32;
}
