/* Straight-line functions with calls and guards (batch gen_vy): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o3830_ushort { char p[0x3830]; unsigned short v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
int FUN_0c037bf6(int, int, int);
int FUN_0c038362(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c133aec(int);
int FUN_0c1362e4(int, int);
int FUN_0c0a2cd4(int a4, int a5, int a6, float f4);

int FUN_0c0a2cd4(int a4, int a5, int a6, float f4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = *(signed char *)((a4 + 0x15));
    t1 = 0;
    if (t0 != 0) {
        if (t0 == 1) {
            t2 = a5;
            t3 = a6;
            t1 = 1;
        }
    } else {
        t4 = *(signed char *)((a4 + 0x17));
        switch (t4) {
        case 0:
            if ((*(signed char *)((a4 + 0x371A))) != 0) {
                t4 = *(signed char *)((a4 + 0x1));
                FUN_0c07e79c(a4, t4, 0x6, 0x9, (t4), 0x6, 0x9);
                FUN_0c133aec(a4);
            } else {
                t4 = *(signed char *)((a4 + 0x1));
                FUN_0c07e79c(a4, t4, 0x6, 0x2, (t4), 0x6, 0x2);
                FUN_0c1362e4(a4, 0x3);
            }
            break;
        case 1:
            if ((*(signed char *)((a4 + 0x371A))) != 0) {
                t4 = *(signed char *)((a4 + 0x1));
                FUN_0c07e79c(a4, t4, 0x6, 0x9, (t4), 0x6, 0x9);
                FUN_0c133aec(a4);
            } else {
                t4 = *(signed char *)((a4 + 0x1));
                FUN_0c07e79c(a4, t4, 0x6, 0x3, (t4), 0x6, 0x3);
                FUN_0c1362e4(a4, 0x4);
            }
            break;
        case 2:
            t4 = *(signed char *)((a4 + 0x1));
            FUN_0c07e79c(a4, t4, 0x6, 0x4, (t4), 0x6, 0x4);
            break;
        case 3:
            t4 = *(signed char *)((a4 + 0x1));
            FUN_0c07e79c(a4, t4, 0x6, 0x4, (t4), 0x6, 0x4);
            break;
        }
        t4 = *(int *)(((0x118 + a4) + 0x4));
        t2 = (((struct o118_int *)(a4))->v);
        (((struct oA0_float *)(t4))->v) = 1.0f;
        (((struct o9C_float *)(t4))->v) = 1.0f;
        (((struct oA0_float *)(t2))->v) = 1.0f;
        (((struct o9C_float *)(t2))->v) = 1.0f;
        t4 = *(int *)(((0x118 + a4) + 0x4));
        t2 = (((struct o118_int *)(a4))->v);
        (((struct o98_float *)(t4))->v) = 1.0f;
        (((struct o98_float *)(t2))->v) = 1.0f;
        (((struct o94_float *)(t4))->v) = 1.0f;
        (((struct o94_float *)(t2))->v) = 1.0f;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t3 = t4;
        t1 = 1;
    }
    if (t1) {
        FUN_0c037bf6(a4, t2, t3);
        FUN_0c038362(a4);
        t1 = *(signed char *)((a4 + 0x17));
        t2 = t1;
        if ((t1 == 0) || (t1 == 1)) {
            t1 = 0x371A;
            if ((*(signed char *)((a4 + 0x371A))) == 0) {
                (((struct o374B_uchar *)(a4))->v) = 0x1;
                (((struct o3830_ushort *)(a4))->v) = 0x0;
                t1 = 0x3830;
            }
            t2 = t1;
        }
        t1 = t2;
    } else {
        t1 = t0;
    }
    return t1;
}
