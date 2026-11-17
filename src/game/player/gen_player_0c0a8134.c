/* game/player: functions 0C0A8134-0C0A82B2, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o118_int { char p[0x118]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
int FUN_0c037bf6(int);
int FUN_0c038362(int);
int FUN_0c066cd8(int);
int FUN_0c0705b8(int);
int FUN_0c070642(int);
int FUN_0c07075c(int, int, int, int, int, int, int, int, int);
int FUN_0c07099c(int);
int FUN_0c071074(int);
int FUN_0c07147c(int);
int FUN_0c071774(int);
int FUN_0c07285e(int);
int FUN_0c072c34(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c085d0c(int);
int FUN_0c0a96c0(int);
int FUN_0c0a8134(int a4);
int FUN_0c0a815e(int a4);
int FUN_0c0a818c(int a4, int a5, int a6, int a7);
int FUN_0c0a828e(int a4);

int FUN_0c0a8134(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x1));
    return (FUN_0c07e79c(a4, t0, 0x1, 0x3, (t0), 0x1, 0x3));
}

int FUN_0c0a815e(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x1));
    return (FUN_0c07e79c(a4, t0, 0x1, 0x4, (t0), 0x1, 0x4));
}

int FUN_0c0a818c(int a4, int a5, int a6, int a7)
{
    int stk[2];
    register int t1;
    register int t5;
    register int t23;
    register int t26;
    register int t27;
    register int t28;
    register int t29;

    FUN_0c066cd8(a4);
    t1 = *(signed char *)((a4 + 0x3732));
    if ((unsigned int)t1 < (unsigned int)0xF) {
        switch ((t1 << 1)) {
            case 0:
            case 2:
            case 20:
            case 22:
            {
                t5 = ((int (*)(int, int, int, int))((*(int *)((((*(signed char *)((a4 + 0x3733))) << 2) + 0xC25D43C)))))(a4, a5, a6, a7);
            }
                break;
            case 4:
            {
                FUN_0c0705b8(a4);
                (((struct o50_float *)(a4))->v) = ((((struct o0_float *)0xC0A82C0)->v));
                (((struct o5C_float *)(a4))->v) = ((((struct o4_float *)0xC0A82C0)->v));
            }
                break;
            case 6:
            {
                FUN_0c070642(a4);
            }
                break;
            case 8:
            {
                FUN_0c07075c(a4, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16));
            }
                break;
            case 10:
            {
                FUN_0c07099c(a4);
            }
                break;
            case 12:
            {
                FUN_0c0a815e(a4);
            }
                break;
            case 14:
            {
                FUN_0c071074(a4);
            }
                break;
            case 16:
            {
                FUN_0c07147c(a4);
            }
                break;
            case 18:
            {
                FUN_0c071774(a4);
            }
                break;
            case 24:
            {
                FUN_0c0a96c0(a4);
            }
                break;
            case 26:
            {
                FUN_0c07285e(a4);
            }
                break;
            default:
            {
                FUN_0c072c34(a4);
            }
                break;
        }
    } else {
        t23 = ((int (*)(int, int, int, int))((*(int *)((((*(signed char *)((a4 + 0x3733))) << 2) + 0xC25D43C)))))(a4, a5, a6, a7);
    }
    t26 = *(int *)(((0x118 + a4) + 0x4));
    t27 = (((struct o118_int *)(a4))->v);
    (((struct oA0_float *)(t26))->v) = 1.0f;
    (((struct o9C_float *)(t26))->v) = 1.0f;
    (((struct oA0_float *)(t27))->v) = 1.0f;
    (((struct o9C_float *)(t27))->v) = 1.0f;
    t28 = *(int *)(((0x118 + a4) + 0x4));
    t29 = (((struct o118_int *)(a4))->v);
    (((struct o98_float *)(t28))->v) = 1.0f;
    (((struct o98_float *)(t29))->v) = 1.0f;
    (((struct o94_float *)(t28))->v) = 1.0f;
    (((struct o94_float *)(t29))->v) = 1.0f;
    return 0x94;
}

int FUN_0c0a828e(int a4)
{
    register int t0;

    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        return FUN_0c085d0c(a4);
    }
    return FUN_0c038362(a4);
}
