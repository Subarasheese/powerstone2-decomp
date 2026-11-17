/* game/player: functions 0C08E7B0-0C08E94C, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o3747_uchar { char p[0x3747]; unsigned char v; };
struct o446_uchar { char p[0x446]; unsigned char v; };
struct o447_uchar { char p[0x447]; unsigned char v; };
struct o50_float { char p[0x50]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
int FUN_0c037bf6(int);
int FUN_0c070320(int);
int FUN_0c07053a(int, int, float);
int FUN_0c07ce58(int, int);
int FUN_0c07d774(int);
int FUN_0c07da48(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c085cac(int, int, int);
int FUN_0c085d0c(int);
int FUN_0c14f824(int, int, int);
int math_vec3_accumulate(int, int);
int FUN_0c08e7b0(int a4);
int FUN_0c08e866(int a4, int a5, int a6);
int FUN_0c08e930(int a4, int a5, int a6);

int FUN_0c08e7b0(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = FUN_0c037bf6(a4);
    t1 = (unsigned char)t0;
    if ((unsigned char)t0 != 0) {
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x2, 0xE, (t0), 0x2, 0xE);
        t0 = *(int *)(((0x118 + a4) + 0x4));
        t2 = (((struct o118_int *)(a4))->v);
        (((struct oA0_float *)(t0))->v) = 1.0f;
        (((struct o9C_float *)(t0))->v) = 1.0f;
        (((struct oA0_float *)(t2))->v) = 1.0f;
        (((struct o9C_float *)(t2))->v) = 1.0f;
        t0 = *(int *)(((0x118 + a4) + 0x4));
        t2 = (((struct o118_int *)(a4))->v);
        (((struct o98_float *)(t0))->v) = 1.0f;
        (((struct o98_float *)(t2))->v) = 1.0f;
        (((struct o94_float *)(t0))->v) = 1.0f;
        (((struct o94_float *)(t2))->v) = 1.0f;
        (((struct o446_uchar *)(a4))->v) = 0x1;
        (((struct o447_uchar *)(a4))->v) = 0x1;
        *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + 0x8000);
        FUN_0c07ce58(a4, (((short)(*(signed char *)((a4 + 0x2))) * (short)0x78) + 0xC25B194));
        *(unsigned int *)((a4 + 0x38)) = (FUN_0c07d774(a4));
        FUN_0c07053a(a4, 0x2C, (*(float *)0xC08E908));
        (((struct o50_float *)(a4))->v) = 0.0f;
        (((struct o5C_float *)(a4))->v) = 0.0f;
        (((struct o3747_uchar *)(a4))->v) = 0x4;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t1 = 0x15;
    }
    return t1;
}

int FUN_0c08e866(int a4, int a5, int a6)
{
    int t0;

    if (((*(int *)0xC542260) & 3) == 0) {
        FUN_0c14f824((*(signed char *)((a4 + 0x1))), (a4 + 0x28), a6);
    }
    FUN_0c07da48(a4);
    FUN_0c070320(a4);
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
    if ((t0 != 0) && (t0 != 1)) {
        return FUN_0c085cac(a4, 0x6, 0x0);
    }
    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        return FUN_0c085d0c(a4);
    }
    return (unsigned char)t0;
}

int FUN_0c08e930(int a4, int a5, int a6)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c08e866(a4, a5, a6);
    }
    return FUN_0c08e7b0(a4);
}
