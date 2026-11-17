/* game/unsorted: functions 0C0925F8-0C092858, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o131_uchar { char p[0x131]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17C_float { char p[0x17C]; float v; };
struct o3728_uchar { char p[0x3728]; unsigned char v; };
struct o372A_uchar { char p[0x372A]; unsigned char v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o50_float { char p[0x50]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
int FUN_0c037bf6(int);
int FUN_0c038362(int);
int FUN_0c07043c(int, float, float, float, float);
int FUN_0c07ce58(int, int);
int FUN_0c07d1fc(int, int, int, int);
int FUN_0c07d774(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c07f56a(int);
int FUN_0c085cac(int, int, int, int);
int FUN_0c085d0c(int);
int math_vec3_accumulate(int, int);
int FUN_0c0925f8(int a4);
int FUN_0c0926e0(int a4);
int FUN_0c0927e0(int a4);
int FUN_0c092834(int a4);

int FUN_0c0925f8(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    (((struct o374B_uchar *)(a4))->v) = 0x1;
    FUN_0c037bf6(a4);
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        t0 = FUN_0c07ce58(a4, ((((short)(*(signed char *)((a4 + 0x2))) * (short)0x78) + 0xC25B194) + 0x30));
        if (t0 != 0) {
            *(unsigned int *)((a4 + 0x38)) = (FUN_0c07d774(a4));
        }
        FUN_0c07043c(a4, 35.0f, -3.5f, 600.0f, 1.0f);
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x2, 0xB, (t0), 0x2, 0xB);
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
        (((struct o131_uchar *)(a4))->v) = 0x0;
        *(unsigned short *)((a4 + 0x1C)) = 0x5;
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        t1 = 0x16;
    }
    return t1;
}

int FUN_0c0926e0(int a4)
{

    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register int R7;
    register float F2;
    register float F3;
    register float F4;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register float w0_0;
    v0_1 = a4;
    v0_2 = *(short *)((v0_1 + 0x1C));
    *(unsigned short *)((v0_1 + 0x1C)) = (v0_2 - 1);
    v0_0 = (v0_1);
    if (((int)(short)(v0_2 - 1) <= 0)) goto L_C0926FC;
    (((struct o374B_uchar *)(v0_0))->v) = 0x1;
    L_C0926FC:;
    FUN_0c037bf6(v0_1);
    math_vec3_accumulate((v0_0 + 0x28), (v0_0 + 0x4C));
    math_vec3_accumulate((v0_0 + 0x4C), (v0_0 + 0x58));
    if ((!(0.0f > ((((struct o17C_float *)(v0_0))->v))))) goto L_C092730;
    w0_0 = (((struct o50_float *)(v0_0))->v);
    (((struct o50_float *)(v0_0))->v) = (w0_0 / (1.0f + 1.0f));
    w0_0 = ((w0_0 / (1.0f + 1.0f)));
    L_C092730:;
    v0_1 = (0x131);
    if (((*(signed char *)((v0_0 + 0x131))) == 0)) goto L_C09276E;
    *(unsigned char *)((v0_0 + v0_1)) = 0x0;
    v0_1 = (FUN_0c07d1fc(v0_0, R5, R6, R7)) == 0;
    if (v0_1) goto L_C09276E;
    v0_2 = FUN_0c07f56a(v0_0);
    v0_1 = (v0_2);
    if ((v0_2 == 0)) goto L_C09276E;
    (((struct o372A_uchar *)(v0_0))->v) = (v0_1 - 1);
    (((struct o3728_uchar *)(v0_0))->v) = 0x1;
    return FUN_0c085cac(v0_0, 0x21, 0x0, R7);
    L_C09276E:;
    v0_1 = (0x50);
    if ((!(0.0f > ((((struct o50_float *)(v0_0))->v))))) goto L_C0927D8;
    v0_2 = FUN_0c07ecc6(v0_0, 0x0, 0x0);
    v0_1 = (v0_2);
    if ((v0_2 == 0)) goto L_C0927D8;
    v0_1 = *(signed char *)((v0_0 + 0x1));
    v0_2 = v0_1;
    FUN_0c07e79c(v0_0, v0_1, 0x2, 0xC, v0_2, 0x2, 0xC);
    v0_1 = *(int *)(((0x118 + v0_0) + 0x4));
    v0_2 = (((struct o118_int *)(v0_0))->v);
    (((struct oA0_float *)(v0_1))->v) = 1.0f;
    (((struct o9C_float *)(v0_1))->v) = 1.0f;
    (((struct oA0_float *)(v0_2))->v) = 1.0f;
    (((struct o9C_float *)(v0_2))->v) = 1.0f;
    v0_1 = *(int *)(((0x118 + v0_0) + 0x4));
    v0_2 = (((struct o118_int *)(v0_0))->v);
    (((struct o98_float *)(v0_1))->v) = 1.0f;
    (((struct o98_float *)(v0_2))->v) = 1.0f;
    (((struct o94_float *)(v0_1))->v) = 1.0f;
    (((struct o94_float *)(v0_2))->v) = 1.0f;
    (((struct o16_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x16))) + 0x1);
    v0_1 = (0x16);
    L_C0927D8:;
    return v0_1;
}

int FUN_0c0927e0(int a4)
{
    register int t0;

    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        return FUN_0c085d0c(a4);
    }
    return FUN_0c038362(a4);
}

int FUN_0c092834(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return FUN_0c0927e0(a4);
        }
        return FUN_0c0926e0(a4);
    }
    return FUN_0c0925f8(a4);
}
