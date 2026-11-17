/* game/player: functions 0C088068-0C088150, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17C_float { char p[0x17C]; float v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o376C_int { char p[0x376C]; int v; };
struct o37A0_float { char p[0x37A0]; float v; };
struct o37D4_float { char p[0x37D4]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c085eac(int, int);
int FUN_0c0c224c(int, int);
int FUN_0c088068(int a4);

int FUN_0c088068(int a4)
{
    int stk[6];

    if (((((struct o17C_float *)(a4))->v)) > 0.0f) {
        *(int *)((int)stk + 8) = 0x4F;
        *(int *)((int)stk + 4) = 0x3;
        *(int *)((int)stk + 0) = 0xFFFFFFFF;
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0x4F, 0xFFFFFFFF, 0x3, 0x4F);
        FUN_0c0c224c(a4, ((((struct o376C_int *)(a4))->v)));
        FUN_0c085eac(a4, 0x3);
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
        (((struct o20_ushort *)(a4))->v) = 0x1E;
        (((struct o16_uchar *)(a4))->v) = 0x0;
    } else {
        *(int *)((int)stk + 8) = 0x51;
        *(int *)((int)stk + 4) = 0x3;
        *(int *)((int)stk + 0) = 0xFFFFFFFF;
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0x51, 0xFFFFFFFF, 0x3, 0x51);
        FUN_0c0c224c(a4, ((((struct o376C_int *)(a4))->v)));
        FUN_0c085eac(a4, 0x3);
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
        (((struct o20_ushort *)(a4))->v) = 0x1E;
        (((struct o60_float *)(a4))->v) = 0.0f;
        (((struct o58_float *)(a4))->v) = 0.0f;
        (((struct o54_float *)(a4))->v) = 0.0f;
        (((struct o4C_float *)(a4))->v) = 0.0f;
        (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) / 8.0f);
        (((struct o37D4_float *)(a4))->v) = ((((struct o5C_float *)(a4))->v));
        if (!(0.0f > ((((struct o5C_float *)(a4))->v)))) {
            (((struct o5C_float *)(a4))->v) = ((((struct o37A0_float *)(a4))->v));
        }
        (((struct o5C_float *)(a4))->v) = (((((struct o5C_float *)(a4))->v)) / 16.0f);
        (((struct o16_uchar *)(a4))->v) = 0x1;
    }
    (((struct o17_uchar *)(a4))->v) = 0x0;
    (((struct o22_ushort *)(a4))->v) = 0x0;
    return 0x22;
}
