/* game/player: functions 0C0BB70C-0C0BB97A, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o78_int { char p[0x78]; int v; };
float math_signed_sqrt(float);
int math_atan_angle16(float);
int FUN_0c0bb70c(int a4);
int FUN_0c0bb73e(int a4, int a5, float f4);
int FUN_0c0bb922(int a4);

int FUN_0c0bb70c(int a4)
{
    register int t1;
    register int t3;

    t1 = *(short *)((((unsigned short)(unsigned char)(*(signed char *)0xC472462) * (unsigned short)0x2F8) + 0xC5413E8));
    t3 = (unsigned short)((a4 - t1) + 0xD000);
    if ((int)(unsigned short)((a4 - t1) + 0xD000) < 0) {
        t3 = ((unsigned short)((a4 - t1) + 0xD000) + 0x1FFF);
    }
    return (*(short *)((0xC25E114 + ((unsigned char)(((int)t3 >> 13) & 0x7) << 1))));
}


int FUN_0c0bb922(int a4)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;
    register float u2;
    register float u3;

    t0 = *(signed char *)0xC472462;
    u0 = (((struct o28_float *)(a4))->v);
    u1 = (((struct o6C_float *)((((unsigned short)(unsigned char)t0 * (unsigned short)0x264) + 0xC471ACC)))->v);
    u2 = (((((struct o74_float *)((((unsigned short)(unsigned char)t0 * (unsigned short)0x264) + 0xC471ACC)))->v)) - ((((struct o30_float *)(a4))->v)));
    u2 = -u2;
    u3 = (u1 - u0);
    if ((u1 - u0) == 0.0f) {
        u3 = 9.99999997e-07f;
    }
    t0 = math_atan_angle16((u2 / u3));
    t1 = t0;
    if (0.0f > u3) {
        t1 = (t0 + 0x8000);
    }
    return (unsigned short)(t1 + 0x4000);
}
