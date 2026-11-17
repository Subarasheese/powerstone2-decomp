/* game/player: functions 0C08B714-0C08BA6A, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17C_float { char p[0x17C]; float v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o376C_int { char p[0x376C]; int v; };
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c085eac(int, int);
int FUN_0c0c224c(int, int);
int FUN_0c0c3010(int, int, int);
int FUN_0c08b714(int a4);
int FUN_0c08ba4e(int a4, int a5, int a6, int a7);

int FUN_0c08b714(int a4)
{
    int stk[5];
    register int t13;

    if (((((struct o17C_float *)(a4))->v)) > 0.0f) {
        *(int *)((int)stk + 8) = 0xEE;
        *(int *)((int)stk + 4) = 0x3;
        *(int *)((int)stk + 0) = 0xFFFFFFFF;
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0xEE, 0xFFFFFFFF, 0x3, 0xEE);
        FUN_0c0c224c(a4, ((((struct o376C_int *)(a4))->v)));
        FUN_0c085eac(a4, 0x6);
        FUN_0c0c3010(((((struct o376C_int *)(a4))->v)), (*(signed char *)((a4 + 0x1))), 0x0);
        (((struct o16_uchar *)(a4))->v) = 0x0;
        t13 = 0x16;
    } else {
        *(int *)((int)stk + 8) = 0x7;
        *(int *)((int)stk + 4) = 0x3;
        *(int *)((int)stk + 0) = 0xFFFFFFFF;
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0x7, 0xFFFFFFFF, 0x3, 0x7);
        FUN_0c085eac(a4, 0x6);
        *(unsigned short *)((a4 + 0x1E)) = 0xD;
        FUN_0c0c3010(((((struct o376C_int *)(a4))->v)), (*(signed char *)((a4 + 0x1))), 0x1);
        (((struct o16_uchar *)(a4))->v) = 0x1;
        (((struct o17_uchar *)(a4))->v) = 0x0;
        t13 = 0x17;
    }
    return t13;
}

int FUN_0c08ba4e(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return ((int (*)(int, int, int, int))(0xC08BA32))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC08B7E0))(a4, a5, a6, a7);
}
