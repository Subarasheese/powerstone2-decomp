/* game/player: functions 0C092908-0C092F2C, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o118_int { char p[0x118]; int v; };
struct o131_uchar { char p[0x131]; unsigned char v; };
struct o14_float { char p[0x14]; float v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o446_uchar { char p[0x446]; unsigned char v; };
struct o447_uchar { char p[0x447]; unsigned char v; };
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
struct oC_float { char p[0xC]; float v; };
int FUN_0c037bf6(int);
int FUN_0c038362(int);
int FUN_0c07053a(int, int, float);
int FUN_0c07283a(int);
int FUN_0c07d1fc(int, int, int, int);
int FUN_0c07d774(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c085204(int, float);
int FUN_0c085d0c(int);
int math_vec3_accumulate(int, int);
int FUN_0c092908(int a4);
int FUN_0c092a0c(int a4, int a5, int a6, int a7);
int FUN_0c092b18(int a4);
int FUN_0c092bf0(int a4);
int FUN_0c092c28(int a4, int a5, int a6, int a7);

int FUN_0c092908(int a4)
{
    register int t0;
    register int t1;

    (((struct o374B_uchar *)(a4))->v) = 0x1;
    if ((*(short *)((a4 + 0x1C))) != 0) {
        *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + ((int)((int)(unsigned short)((FUN_0c07d774(a4)) - (*(int *)((a4 + 0x38)))) / (int)(*(short *)((a4 + 0x1C))))));
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
    }
    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x2, 0x7, (t0), 0x2, 0x7);
        t0 = *(int *)(((0x118 + a4) + 0x4));
        t1 = (((struct o118_int *)(a4))->v);
        (((struct oA0_float *)(t0))->v) = 1.0f;
        (((struct o9C_float *)(t0))->v) = 1.0f;
        (((struct oA0_float *)(t1))->v) = 1.0f;
        (((struct o9C_float *)(t1))->v) = 1.0f;
        t0 = *(int *)(((0x118 + a4) + 0x4));
        t1 = (((struct o118_int *)(a4))->v);
        (((struct o98_float *)(t0))->v) = 1.0f;
        (((struct o98_float *)(t1))->v) = 1.0f;
        (((struct o94_float *)(t0))->v) = 1.0f;
        (((struct o94_float *)(t1))->v) = 1.0f;
        (((struct o446_uchar *)(a4))->v) = 0x1;
        (((struct o447_uchar *)(a4))->v) = 0x1;
        *(unsigned int *)((a4 + 0x38)) = (FUN_0c07d774(a4));
        FUN_0c07053a(a4, 0x1E, 30.0f);
        (((struct o50_float *)(a4))->v) = 0.0f;
        (((struct o60_float *)(a4))->v) = 0.0f;
        (((struct o5C_float *)(a4))->v) = 0.0f;
        (((struct o58_float *)(a4))->v) = 0.0f;
        (((struct o131_uchar *)(a4))->v) = 0x0;
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    }
    return FUN_0c085204(a4, 0.0f);
}



int FUN_0c092bf0(int a4)
{
    register int t2;

    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    t2 = FUN_0c037bf6(a4);
    if ((unsigned char)t2 != 0) {
        return FUN_0c085d0c(a4);
    }
    return (unsigned char)t2;
}

int FUN_0c092c28(int a4, int a5, int a6, int a7)
{
    register int t2;

    if ((*(signed char *)((a4 + 0x371A))) != 0) {
        return FUN_0c07283a(a4);
    }
    t2 = *(signed char *)((a4 + 0x16));
    if (t2 != 0) {
        if (t2 != 1) {
            if (t2 != 2) {
                if (t2 != 3) {
                    return t2;
                }
                return FUN_0c092bf0(a4);
            }
            return FUN_0c092b18(a4);
        }
        return FUN_0c092a0c(a4, a5, a6, a7);
    }
    return FUN_0c092908(a4);
}
