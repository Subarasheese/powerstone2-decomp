/* game/player: functions 0C0A10B0-0C0A12AE, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
int FUN_0c070642(int);
int FUN_0c07075c(int);
int FUN_0c07099c(int);
int FUN_0c071074(int);
int FUN_0c07147c(int);
int FUN_0c071774(int);
int FUN_0c0720b4(int);
int FUN_0c07285e(int);
int FUN_0c072c34(int);
int FUN_0c0a1112(int);
int FUN_0c0a114c(int);
int FUN_0c0a11c4(int a4, int a5, int a6, int a7);

int FUN_0c0a11c4(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x3732));
    if ((unsigned int)t0 < (unsigned int)0xF) {
        switch ((t0 << 1)) {
            case 0:
            case 2:
            case 20:
            case 22:
            {
                t0 = ((int (*)(int, int, int, int))((*(int *)((((*(signed char *)((a4 + 0x3733))) << 2) + 0xC25D1C4)))))(a4, a5, a6, a7);
            }
                break;
            case 4:
            {
                FUN_0c0a114c(a4);
            }
                break;
            case 6:
            {
                FUN_0c070642(a4);
            }
                break;
            case 8:
            {
                FUN_0c07075c(a4);
            }
                break;
            case 10:
            {
                FUN_0c07099c(a4);
            }
                break;
            case 12:
            {
                FUN_0c0a1112(a4);
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
                FUN_0c0720b4(a4);
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
        t0 = ((int (*)(int, int, int, int))((*(int *)((((*(signed char *)((a4 + 0x3733))) << 2) + 0xC25D1C4)))))(a4, a5, a6, a7);
    }
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
    return 0x94;
}
