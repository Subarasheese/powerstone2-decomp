/* Straight-line functions with calls and guards (batch gen_hu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
struct o0_float { float v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
int FUN_0c03f346(int);
int FUN_0c056be6(int, int, int);
int FUN_0c058854(int, int, int, int);
int FUN_0c15ab94(int, int, int, int, Stk3);
int FUN_0c15ae2e(int, int, int, int, Stk3);
int FUN_0c17c450(int);
int math_atan2_angle16(int, float, float);
int nlCalcPoint(int, int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlSubVector3op(int, int, int, Stk3);
int nlUnitMatrix(void);
int FUN_0c15ae60(int a4, int a5, int a6, int a7);
int FUN_0c03ec14(int a4, int a5);
int FUN_0c1155d0(int a4, float f4);
int FUN_0c056dc6(void);
int FUN_0c058542(int a4, float f4);

int FUN_0c15ae60(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t0;
    register int t7;
    register int t20;
    register int t26;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
            } else {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                *(unsigned short *)((a4 + 0x1C)) = 0x0;
                { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)((a4 + 0x28)); }
                FUN_0c15ab94(((int)stk + 0), a5, a6, a7, *(Stk3 *)(((int)stk + 0)));
            }
            t26 = (FUN_0c03f346(a4));
        } else {
            t7 = *(short *)((a4 + 0x1C));
            if (t7 == (*(int *)0xC2A2AAC)) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t26 = 0x14;
            } else {
                *(unsigned short *)((a4 + 0x1C)) = (t7 + 0x1);
                t26 = (t7 + 0x1);
            }
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)((a4 + 0x28)); }
        FUN_0c15ae2e(((int)stk + 0), a5, a6, a7, *(Stk3 *)(((int)stk + 0)));
        t20 = *(short *)((a4 + 0x1C));
        if (t20 == (*(int *)0xC2A2AAC)) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t26 = 0x14;
        } else {
            *(unsigned short *)((a4 + 0x1C)) = (t20 + 0x1);
            t26 = (t20 + 0x1);
        }
    }
    return t26;
}

int FUN_0c03ec14(int a4, int a5)
{
    int stk[6];

    (((struct o2C_float *)(a4))->v) = 1.0f;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0xC)) = *(struct mv3 *)((0xC8 + ((a5 * 0x2F8) + 0xC5410FC))); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)((0xF8 + ((a5 * 0x2F8) + 0xC5410FC))); }
    nlSubVector3op((a4 + 0x4), (((int)stk + 0) + 0xC), ((int)stk + 0), *(Stk3 *)(((int)stk + 0)));
    FUN_0c17c450((a4 + 0x4));
    (((struct o4_float *)((a4 + 0x4)))->v) = (((((struct o4_float *)((a4 + 0x4)))->v)) + ((((struct o14_float *)(a4))->v)));
    return (FUN_0c17c450((a4 + 0x4)));
}

int FUN_0c1155d0(int a4, float f4)
{
    int stk[4];
    register float u2;
    register float u3;
    register int t5;

    *(float *)(((int)stk + 0)) = f4;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x4)) = *(struct mv3 *)(0xC2A0C78); }
    (((struct o4_float *)(((int)stk + 0)))->v) = (((((struct o0_float *)0xC473CA8)->v)) - ((((struct o28_float *)(a4))->v)));
    u2 = (((struct o30_float *)(a4))->v);
    u3 = (((struct o8_float *)0xC473CA8)->v);
    (((struct o8_float *)((((int)stk + 0) + 0x4)))->v) = (u3 - u2);
    t5 = math_atan2_angle16(0xC473CA8, ((((struct o4_float *)(((int)stk + 0)))->v)), (u3 - u2));
    return (FUN_0c058854((a4 + 0x38), t5, (*(int *)((a4 + 0x38))), ((int)(((((*(float *)(((int)stk + 0))) * ((((struct o0_float *)0xC115700)->v))) / ((((struct o4_float *)0xC115700)->v)))) + ((((struct o8_float *)0xC115700)->v))) & 0xFFFF)));
}

int FUN_0c056dc6(void)
{
    int stk[32];
    register int t0;
    register int t2;
    register int t3;

    t0 = 0xC1B9734;
    t2 = ((int)stk + 0);
    for (;;) { t3 = *(int *)t0; t0 = (t0 + 4); if ((unsigned int)((0xC1B9734 + 128)) < (unsigned int)t0) break; *(unsigned int *)t2 = t3; t2 = (t2 + 4); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x40)) = *(struct mv3 *)(0xC5411C4); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0x34)) = *(struct mv3 *)(0xC5411F4); }
    return (FUN_0c056be6(0xC2419C4, ((int)stk + 0), ((int)stk + 0)));
}

int FUN_0c058542(int a4, float f4)
{
    int stk[3];

    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)(0xC1C22FC); }
    *(float *)(((int)stk + 8)) = f4;
    nlUnitMatrix();
    nlRotateAY((*(int *)((a4 + 0x38))));
    nlRotateAX((*(int *)((a4 + 0x34))));
    return (nlCalcPoint(((int)stk + 0), (a4 + 0x4C)));
}
