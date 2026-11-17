/* game/player: functions 0C096764-0C097960, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o131_uchar { char p[0x131]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
int FUN_0c037bf6(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
float FUN_0c096764(int a4);
int FUN_0c09793e(int a4);

float FUN_0c096764(int a4)
{
    register int t0;
    register float t6;

    t0 = *(signed char *)((a4 + 0x1));
    FUN_0c07e79c(a4, t0, 0x1, 0xB, (t0), 0x1, 0xB);
    (((struct o4C_float *)(a4))->v) = ((math_cos_angle16(((-(*(int *)((a4 + 0x38)))) + 0x14000))) * 15.0f);
    (((struct o50_float *)(a4))->v) = -10.0f;
    t6 = math_sin_angle16(((-(*(int *)((a4 + 0x38)))) + 0x14000));
    (((struct o54_float *)(a4))->v) = (t6 * 15.0f);
    (((struct o58_float *)(a4))->v) = 0.0f;
    (((struct o5C_float *)(a4))->v) = 0.0f;
    (((struct o60_float *)(a4))->v) = 0.0f;
    (((struct o131_uchar *)(a4))->v) = 0x0;
    *(unsigned short *)((a4 + 0x1C)) = 0x3;
    return (t6 * 15.0f);
}

int FUN_0c09793e(int a4)
{
    register int t0;
    register int t2;

    t0 = FUN_0c037bf6(a4);
    t2 = (unsigned char)t0;
    if ((unsigned char)t0 != 0) {
        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
        t2 = 0x17;
    }
    return t2;
}
