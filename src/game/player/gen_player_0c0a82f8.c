/* game/player: functions 0C0A82F8-0C0A8772, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
int FUN_0c037bf6(int);
int FUN_0c038362(int);
int FUN_0c085d0c(int);
int FUN_0c098558(int, int, float, float, float);
int FUN_0c0a82f8(int a4, int a5, float f4, float f5, float f6);
int FUN_0c0a873a(int a4);

/* manual: player slot record +0x6/+0x8C/+0x88/+0x84 update by the speed gauge value; 1170 cases, see notes */
int FUN_0c0a82f8(int a4, int a5, float f4, float f5, float f6)
{
    float g;
    float v;
    int t0;
    int t1;
    int p;

    g = (((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v);
    t0 = *(signed char *)(a4 + 0x371A);
    t1 = 0x4;
    if ((signed char)t0 == 0) {
        t1 = 0x0;
    }
    p = ((short)t0 * (short)0x10E0) + (0x468 + a4) + t1 * 144;
    *(unsigned short *)(p + 0x6) = 0x1F;
    if (16.0f > g) {
        if (g == 11.0f) {
            v = 3.0f;
        } else if (6.0f > g) {
            v = 1.0f;
        } else {
            v = ((struct o8C_float *)p)->v + 0.200000003f;
            if (v > 3.0f) {
                v = 3.0f;
            }
        }
    } else {
        v = ((struct o8C_float *)p)->v - 0.5f;
        if (1.0f > v) {
            v = 1.0f;
        }
    }
    ((struct o8C_float *)p)->v = v;
    ((struct o88_float *)p)->v = v;
    ((struct o84_float *)p)->v = v;
    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        return FUN_0c085d0c(a4);
    }
    return FUN_0c038362(a4);
}

int FUN_0c0a873a(int a4)
{
    register int t1;

    FUN_0c098558(a4, 0xE, 10.0f, 12.0f, 1.39999998f);
    t1 = FUN_0c037bf6(a4);
    if ((unsigned char)t1 != 0) {
        return FUN_0c085d0c(a4);
    }
    return FUN_0c038362(a4);
}
