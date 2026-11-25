/* game/unsorted: functions 0C0817BC-0C081A12, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o168_float { char p[0x168]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o3715_uchar { char p[0x3715]; unsigned char v; };
struct o3724_uchar { char p[0x3724]; unsigned char v; };
struct o3788_float { char p[0x3788]; float v; };
struct o37A0_float { char p[0x37A0]; float v; };
struct o37A4_float { char p[0x37A4]; float v; };
struct o37C0_float { char p[0x37C0]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
int FUN_0c037bf6(int);
int FUN_0c064ee4(int, int);
int FUN_0c067734(int);
int FUN_0c07d6cc(int);
int FUN_0c07d774(int);
int FUN_0c07daea(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07e868(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c085d0c(int);
int FUN_0c0817bc(int a4, int a5);
int FUN_0c081972(int a4, int a5);
int FUN_0c0819c2(int a4, int a5);
struct o1C_ushort { char p[0x1C]; unsigned short v; };


int FUN_0c0817bc(int a4, int a5)
{
    int stk[8];
    int t36;
    int t37;
    int t38;
    int t39;
    int t32;

    *(unsigned char *)(((int)stk + 12)) = a5;
    (((struct o3715_uchar *)(a4))->v) = 0x6;
    (((struct o37C0_float *)(a4))->v) = ((((struct o168_float *)(a4))->v));
    (((struct o3788_float *)(a4))->v) = ((((struct o2C_float *)(a4))->v));
    FUN_0c067734(a4);
    if ((*(signed char *)(((int)stk + 12))) == 2) {
        FUN_0c07daea(a4);
        return FUN_0c085d0c(a4);
    }
    switch ((*(signed char *)(a4 + 0x371D))) {
    case 2:
        break;
    case 3:
        *(int *)((int)stk + 8) = 0xA0;
        *(int *)((int)stk + 4) = 0x3;
        *(int *)((int)stk + 0) = 0xFFFFFFFF;
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0xA0, 0xFFFFFFFF, 0x3, 0xA0);
        break;
    case 5:
        *(int *)((int)stk + 8) = 0xBC;
        *(int *)((int)stk + 4) = 0x3;
        *(int *)((int)stk + 0) = 0xFFFFFFFF;
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0xBC, 0xFFFFFFFF, 0x3, 0xBC);
        break;
    case 6:
        *(int *)((int)stk + 8) = 0xD9;
        *(int *)((int)stk + 4) = 0x3;
        *(int *)((int)stk + 0) = 0xFFFFFFFF;
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0xD9, 0xFFFFFFFF, 0x3, 0xD9);
        break;
    default:
        (((struct o5C_float *)(a4))->v) = 0.0f;
        (((struct o60_float *)(a4))->v) = 0.0f;
        (((struct o58_float *)(a4))->v) = 0.0f;
        (((struct o50_float *)(a4))->v) = 0.0f;
        (((struct o54_float *)(a4))->v) = 0.0f;
        (((struct o4C_float *)(a4))->v) = 0.0f;
        (((struct o1C_ushort *)(a4))->v) = 0x4;
        (((struct o3724_uchar *)(a4))->v) = 0x0;
        if (((((struct o160_float *)(a4))->v)) == 0.0f) {
            if ((*(signed char *)(a4 + 0x372C)) == 0) {
                *(int *)((int)stk + 8) = 0x2A;
                *(int *)((int)stk + 4) = 0x4;
                *(int *)((int)stk + 0) = 0xFFFFFFFF;
                FUN_0c07e79c(a4, 0xFFFFFFFF, 0x4, 0x2A, 0xFFFFFFFF, 0x4, 0x2A);
            } else {
                *(int *)((int)stk + 8) = 0x34;
                *(int *)((int)stk + 4) = 0x4;
                *(int *)((int)stk + 0) = 0xFFFFFFFF;
                FUN_0c07e79c(a4, 0xFFFFFFFF, 0x4, 0x34, 0xFFFFFFFF, 0x4, 0x34);
            }
        } else {
            FUN_0c07e868(a4, 0x8, 0x0, 0x0, *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4), *(int *)((int)stk + 12 + 8), *(int *)((int)stk + 12 + 12), *(int *)((int)stk + 12 + 16), *(int *)((int)stk + 12 + 20), *(int *)((int)stk + 12 + 24), *(int *)((int)stk + 12 + 28));
        }
        break;
    }
    t32 = FUN_0c064ee4(a4, 0x2);
    if (t32 != 0) {
        FUN_0c07daea(a4);
        return FUN_0c085d0c(a4);
    }
    (((struct o37A4_float *)(a4))->v) = ((((struct o37A0_float *)(a4))->v));
    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - 5.0f);
    t36 = *(int *)(((0x118 + a4) + 0x4));
    t37 = (((struct o118_int *)(a4))->v);
    (((struct oA0_float *)(t36))->v) = 1.0f;
    (((struct o9C_float *)(t36))->v) = 1.0f;
    (((struct oA0_float *)(t37))->v) = 1.0f;
    (((struct o9C_float *)(t37))->v) = 1.0f;
    t38 = *(int *)(((0x118 + a4) + 0x4));
    t39 = (((struct o118_int *)(a4))->v);
    (((struct o98_float *)(t38))->v) = 1.0f;
    (((struct o98_float *)(t39))->v) = 1.0f;
    (((struct o94_float *)(t38))->v) = 1.0f;
    (((struct o94_float *)(t39))->v) = 1.0f;
    FUN_0c037bf6(a4);
    (((struct o15_uchar *)(a4))->v) = 0x0;
    return FUN_0c07daea(a4);
}

int FUN_0c081972(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t3;

    t0 = FUN_0c07d6cc(a4);
    t1 = *(int *)((a4 + 0x38));
    t3 = (unsigned short)(t1 - t0);
    if ((0x8000 & (unsigned short)(t1 - t0)) != 0) {
        t3 = ((unsigned short)(t1 - t0) | 0xFFFF0000);
    }
    if (((int)t3 >= (int)(-a5)) && ((int)t3 <= (int)a5)) {
        *(unsigned int *)((a4 + 0x38)) = t0;
    } else {
        if ((int)t3 > 0) {
            *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) - a5);
        } else {
            *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + a5);
        }
        *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) & 0xFFFF);
    }
    return t0;
}

int FUN_0c0819c2(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t3;

    t0 = FUN_0c07d774(a4);
    t1 = *(int *)((a4 + 0x38));
    t3 = (unsigned short)(t1 - t0);
    if ((0x8000 & (unsigned short)(t1 - t0)) != 0) {
        t3 = ((unsigned short)(t1 - t0) | 0xFFFF0000);
    }
    if (((int)t3 >= (int)(-a5)) && ((int)t3 <= (int)a5)) {
        *(unsigned int *)((a4 + 0x38)) = t0;
    } else {
        if ((int)t3 > 0) {
            *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) - a5);
        } else {
            *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + a5);
        }
        *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) & 0xFFFF);
    }
    return t0;
}
