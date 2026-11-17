/* game/player: functions 0C08B4E0-0C08B580, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17C_float { char p[0x17C]; float v; };
struct o376C_int { char p[0x376C]; int v; };
struct o37A0_float { char p[0x37A0]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o5C_float { char p[0x5C]; float v; };
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c085eac(int, int);
int FUN_0c0c224c(int, int);
int FUN_0c0c3010(int, int, int);
int FUN_0c08b4e0(int a4);

int FUN_0c08b4e0(int a4)
{
    int stk[5];
    register int t14;

    if (((((struct o17C_float *)(a4))->v)) > 0.0f) {
        *(int *)((int)stk + 8) = 0xCF;
        *(int *)((int)stk + 4) = 0x3;
        *(int *)((int)stk + 0) = 0xFFFFFFFF;
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0xCF, 0xFFFFFFFF, 0x3, 0xCF);
        FUN_0c0c224c(a4, ((((struct o376C_int *)(a4))->v)));
        FUN_0c085eac(a4, 0x6);
        FUN_0c0c3010(((((struct o376C_int *)(a4))->v)), (*(signed char *)((a4 + 0x1))), 0x0);
        t14 = 0x16;
    } else {
        *(int *)((int)stk + 8) = 0xEF;
        *(int *)((int)stk + 4) = 0x3;
        *(int *)((int)stk + 0) = 0xFFFFFFFF;
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0xEF, 0xFFFFFFFF, 0x3, 0xEF);
        FUN_0c085eac(a4, 0x6);
        FUN_0c0c3010(((((struct o376C_int *)(a4))->v)), (*(signed char *)((a4 + 0x1))), 0x1);
        (((struct o50_float *)(a4))->v) = 0.0f;
        (((struct o5C_float *)(a4))->v) = ((((struct o37A0_float *)(a4))->v));
        (((struct o16_uchar *)(a4))->v) = 0x1;
        t14 = 0x17;
    }
    *(unsigned char *)((a4 + t14)) = 0x0;
    return t14;
}
