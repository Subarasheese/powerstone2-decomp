/* Straight-line functions with calls and guards (batch gen_ew): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
struct o0_int { int v; };
struct o0_short { short v; };
struct o0_uint { unsigned int v; };
struct o0_ushort { unsigned short v; };
struct o12_ushort { char p[0x12]; unsigned short v; };
struct o2_short { char p[0x2]; short v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_uchar { char p[0x8]; unsigned char v; };
int FUN_0c042fe0(void);
int FUN_0c0d0488(void);
int FUN_0c0d0b60(int, int, int, int, int, int);
int FUN_0c0d0ec2(int, int, int, int);
int FUN_0c0d6422(int, int, int, int, float, float, float, float, float, float);
int FUN_0c0dcbec(void);
int FUN_0c0e2fe2(void);
int FUN_0c0e9596(int, int, int);
int FUN_0c0f1430(void);
int FUN_0c0f2060(int, int, int);
int FUN_0c0f5884(int, int, int);
int FUN_0c0f5f7c(int, int, int);
int FUN_0c0f6248(void);
int nlAddVector3op(int, int, int, Stk3);
int FUN_0c0cfc04(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9);

int FUN_0c0cfc04(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9)
{
    int stk[9];
    register int t0;
    register int t51;
    register int t53;
    register int t54;
    register int t57;
    register int t71;
    register int t119;
    register int t80;
    register int t81;
    register int t92;
    register int t95;
    int t59;
    register int t60;

    (((struct o8_uchar *)0xC540F90)->v) = 0x0;
    t0 = *(signed char *)0xC542237;
    switch (t0) {
    case 0:
        FUN_0c0d0ec2(a4, a5, a6, a7);
        break;
    case 1:
        FUN_0c0d6422(a4, a5, a6, a7, f4, f5, f6, f7, f8, f9);
        break;
    case 2:
        FUN_0c0dcbec();
        break;
    case 3:
        FUN_0c0e2fe2();
        break;
    case 4:
        FUN_0c0e9596(a4, a5, a6);
        break;
    case 5:
        FUN_0c0f1430();
        break;
    case 6:
        FUN_0c0f2060(a4, a5, a6);
        break;
    case 7:
        FUN_0c0f5884(a4, a5, a6);
        break;
    case 8:
        FUN_0c0f5f7c(a4, a5, a6);
        break;
    case 9:
        FUN_0c0f6248();
        break;
    }
    t51 = FUN_0c042fe0();
    if (t51 != 0) {
        (((struct o0_uint *)0xC5410F4)->v) = (((((struct o0_int *)0xC5410F4)->v)) + 0x1);
        t53 = (((struct o4_int *)0xC5410F4)->v);
        t54 = *(signed char *)0xC54235E;
        t57 = (((t53 << 2) + 0xC285748) + 0x10);
        if (t54 != 1) {
            t57 = (((t53 << 2) + 0xC285748) + 0x20);
            if (t54 != 2) {
                t57 = ((t53 << 2) + 0xC285748);
            }
        }
        if (((int)t53 < (int)0x3) && (t59 = *(short *)((t57 + 0x2)), t60 = (((struct o0_int *)0xC5410F4)->v), (int)t60 >= (int)t59)) {
            (((struct o4_uint *)0xC5410F4)->v) = (((((struct o4_int *)0xC5410F4)->v)) + 0x1);
        }
        (((struct o12_ushort *)0xC540F90)->v) = (*(short *)((t57 + 0x0)));
    }
    t71 = FUN_0c042fe0();
    t119 = t71;
    if (t71 != 0) {
        t119 = 0x618;
        if ((int)((((struct o0_int *)0xC540F90)->v)) < (int)((((struct o4_int *)0xC540F90)->v))) {
            (((struct o0_ushort *)0xC541064)->v) = (((((struct o0_short *)0xC541064)->v)) - 1);
            t119 = 0x6EC;
            if ((int)((((struct o0_short *)0xC541064)->v)) <= 0) {
                t92 = FUN_0c0d0488();
                t119 = t92;
                if ((int)t92 >= 0) {
                    t80 = *(int *)0xC540F14;
                    t81 = *(int *)((((((((struct o0_int *)0xC540F90)->v)) << 2) + 0xC540F18) + 0x0));
                    { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 8)) = *(struct mv3 *)(((((((t81 << 1) + t81) << 2) << 2) + t80) + 0x4)); }
                    if ((*(signed char *)(((((((t81 << 1) + t81) << 2) << 2) + t80) + 0x0))) == 1) {
                        nlAddVector3op(((int)stk + 8), ((int)stk + 8), ((*(int *)(((((*(signed char *)(((((((t81 << 1) + t81) << 2) << 2) + t80) + 0x1))) << 2) + 0xC540D94) + 0x0))) + 0x28), *(Stk3 *)(((int)stk + 8)));
                    }
                    *(int *)((int)stk + 4) = (0x10 + (((((t81 << 1) + t81) << 2) << 2) + t80));
                    *(int *)((int)stk + 0) = t92;
                    t95 = FUN_0c0d0b60((*(signed char *)(((((((t81 << 1) + t81) << 2) << 2) + t80) + 0x2))), (*(signed char *)(((((((t81 << 1) + t81) << 2) << 2) + t80) + 0x3))), 0x1, (((int)stk + 0) + 0x8), t92, (0x10 + (((((t81 << 1) + t81) << 2) << 2) + t80)));
                    t119 = t95;
                    if (t95 != 0) {
                        (((struct o0_ushort *)0xC541064)->v) = ((((struct o2_short *)0xC541064)->v));
                        (((struct o0_uint *)0xC540F90)->v) = (((((struct o0_int *)0xC540F90)->v)) + 0x1);
                        t119 = 0x618;
                    }
                }
            }
        }
    }
    return t119;
}
