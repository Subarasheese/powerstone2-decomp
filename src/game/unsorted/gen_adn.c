/* Straight-line functions with calls and guards (batch gen_adn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o131_uchar { char p[0x131]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o50_float { char p[0x50]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
int FUN_0c037bf6(int, int, int);
int FUN_0c07d1fc(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07ecc6(int, int, int);
int math_vec3_accumulate(int, int);
int FUN_0c096214(int a4, int a5, int a6);

int FUN_0c096214(int a4, int a5, int a6)
{

    register int R2;
    register int R3;
    register int R7;
    register float F2;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register float w0_0;
    v0_1 = a4;
    v0_0 = a5;
    v0_2 = a6;
    FUN_0c037bf6(v0_1, v0_0, v0_2);
    math_vec3_accumulate((v0_1 + 0x28), (v0_1 + 0x4C));
    math_vec3_accumulate((v0_1 + 0x4C), (v0_1 + 0x58));
    v0_0 = (v0_1);
    w0_0 = (1.0f);
    if (((*(signed char *)((v0_1 + 0x131))) == 0)) goto L_C0962A6;
    v0_1 = (FUN_0c07d1fc(v0_0)) == 0;
    if (v0_1) goto L_C0962A6;
    (((struct o131_uchar *)(v0_0))->v) = 0x0;
    v0_1 = *(signed char *)((v0_0 + 0x1));
    v0_2 = v0_1;
    FUN_0c07e79c(v0_0, v0_1, 0x2, 0xC, v0_2, 0x2, 0xC);
    v0_1 = *(int *)(((0x118 + v0_0) + 0x4));
    v0_2 = (((struct o118_int *)(v0_0))->v);
    (((struct oA0_float *)(v0_1))->v) = w0_0;
    (((struct o9C_float *)(v0_1))->v) = w0_0;
    (((struct oA0_float *)(v0_2))->v) = w0_0;
    (((struct o9C_float *)(v0_2))->v) = w0_0;
    v0_1 = *(int *)(((0x118 + v0_0) + 0x4));
    v0_2 = (((struct o118_int *)(v0_0))->v);
    (((struct o98_float *)(v0_1))->v) = w0_0;
    (((struct o98_float *)(v0_2))->v) = w0_0;
    (((struct o94_float *)(v0_1))->v) = w0_0;
    (((struct o94_float *)(v0_2))->v) = w0_0;
    (((struct o16_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x16))) + 0x1);
    v0_1 = (0x16);
    L_C09630C:;
    return v0_1;
    L_C0962A6:;
    v0_1 = (0x50);
    if ((!(0.0f > ((((struct o50_float *)(v0_0))->v))))) goto L_C09630C;
    v0_2 = FUN_0c07ecc6(v0_0, 0x0, 0x0);
    v0_1 = (v0_2);
    if ((v0_2 == 0)) goto L_C09630C;
    v0_1 = *(signed char *)((v0_0 + 0x1));
    v0_2 = v0_1;
    FUN_0c07e79c(v0_0, v0_1, 0x2, 0xB, v0_2, 0x2, 0xB);
    v0_1 = *(int *)(((0x118 + v0_0) + 0x4));
    v0_2 = (((struct o118_int *)(v0_0))->v);
    (((struct oA0_float *)(v0_1))->v) = w0_0;
    (((struct o9C_float *)(v0_1))->v) = w0_0;
    (((struct oA0_float *)(v0_2))->v) = w0_0;
    (((struct o9C_float *)(v0_2))->v) = w0_0;
    v0_1 = *(int *)(((0x118 + v0_0) + 0x4));
    v0_2 = (((struct o118_int *)(v0_0))->v);
    (((struct o98_float *)(v0_1))->v) = w0_0;
    (((struct o98_float *)(v0_2))->v) = w0_0;
    (((struct o94_float *)(v0_1))->v) = w0_0;
    (((struct o94_float *)(v0_2))->v) = w0_0;
    (((struct o16_uchar *)(v0_0))->v) = 0x4;
    v0_1 = (0x16);
    goto L_C09630C;
}
