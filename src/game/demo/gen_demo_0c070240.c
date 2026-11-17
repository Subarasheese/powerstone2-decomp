/* game/demo: functions 0C070240-0C0702F6, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o15_uchar { char p[0x15]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o374A_uchar { char p[0x374A]; unsigned char v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o37DC_float { char p[0x37DC]; float v; };
struct o37E4_float { char p[0x37E4]; float v; };
int FUN_0c037bf6(int);
int FUN_0c0dbe00(int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c070240(int a4);
int FUN_0c0702ae(int a4);
int FUN_0c0702c4(int a4);

int FUN_0c070240(int a4)
{
    register int t0;
    register float u0;
    register float u1;

    FUN_0c037bf6(a4);
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    if ((int)(short)(t0 - 1) > 0) {
        t0 = *(int *)((a4 + 0x38));
        *(unsigned int *)((a4 + 0x38)) = (unsigned short)(((int)((int)((-t0) + 0x8000) / (int)(*(short *)((a4 + 0x1C))))) + t0);
        u0 = *(float *)0xC070310;
        u1 = ((((struct o37DC_float *)(a4))->v));
        u1 = u1 + u0 * (math_sin_angle16((*(int *)((a4 + 0x38)))));
        (((struct o28_float *)(a4))->v) = u1;
        u1 = ((((struct o37E4_float *)(a4))->v));
        u1 = u1 + u0 * (math_cos_angle16((*(int *)((a4 + 0x38)))));
        (((struct o30_float *)(a4))->v) = u1;
        t0 = 0x30;
    } else {
        *(unsigned short *)((a4 + 0x1C)) = 0xA;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t0 = 0x15;
    }
    return t0;
}

int FUN_0c0702ae(int a4)
{
    register int t0;

    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        return FUN_0c0dbe00(a4);
    }
    return (short)(t0 - 1);
}

int FUN_0c0702c4(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
        } else {
            FUN_0c0702ae(a4);
        }
    } else {
        FUN_0c070240(a4);
    }
    (((struct o374A_uchar *)(a4))->v) = 0x2;
    (((struct o374B_uchar *)(a4))->v) = 0x2;
    return 0x374B;
}
