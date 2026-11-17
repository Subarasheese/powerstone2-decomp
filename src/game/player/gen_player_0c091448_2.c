/* game/player: functions 0C091448-0C091EB0, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o16_uchar { char p[0x16]; unsigned char v; };
struct o374A_uchar { char p[0x374A]; unsigned char v; };
struct o3770_int { char p[0x3770]; int v; };
int FUN_0c037bf6(int);
int FUN_0c038362(int);
int FUN_0c07db58(int, int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07ec9a(int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c085cac(int, int, int);
int FUN_0c085d0c(int, int, int, int);
int FUN_0c091498(int);
int FUN_0c0915ac(int);
int FUN_0c0918ea(int);
int FUN_0c091a44(int);
int FUN_0c091ad0(int);
int math_vec3_accumulate(int, int);
int FUN_0c0918bc(int a4, int a5, int a6, int a7);
int FUN_0c091b30(int a4, int a5, int a6, int a7);
int FUN_0c091bba(int a4);
int FUN_0c091d8a(int a4, int a5, int a6);

int FUN_0c0918bc(int a4, int a5, int a6, int a7)
{
    int t1;
    register int t2;

    if ((((*(signed char *)((a4 + 0x15))) != 0) && (t1 = *(short *)((a4 + 0x1C)), (int)t1 >= (int)0x8A)) || (t2 = (((struct o3770_int *)(a4))->v), t2 != 0)) {
        if ((*(signed char *)((a4 + 0x15))) == 0) {
            return FUN_0c091498(a4);
        }
        return FUN_0c0915ac(a4);
    }
    return FUN_0c085d0c(a4, a5, a6, a7);
}

int FUN_0c091b30(int a4, int a5, int a6, int a7)
{
    int t0;

    if (((int)(*(signed char *)((a4 + 0x16))) < (int)0x2) && (t0 = (((struct o3770_int *)(a4))->v), t0 == 0)) {
        return FUN_0c085d0c(a4, a5, a6, a7);
    }
    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c091ad0(a4);
        }
        return FUN_0c091a44(a4);
    }
    return FUN_0c0918ea(a4);
}

int FUN_0c091bba(int a4)
{
    FUN_0c037bf6(a4);
    return FUN_0c038362(((((struct o3770_int *)(a4))->v)));
}

int FUN_0c091d8a(int a4, int a5, int a6)
{
    register int t0;

    (((struct o374A_uchar *)(a4))->v) = 0x0;
    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
        } else {
            FUN_0c07db58(a4, a5, a6);
            FUN_0c07e79c(a4, 0xFFFFFFFF, 0x4, 0x4F, 0xFFFFFFFF, 0x4, 0x4F);
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        }
        t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
        if (t0 != 0) {
            if (t0 == 2) {
                FUN_0c07ec9a(a4);
            }
        } else {
            math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
        }
        t0 = FUN_0c037bf6(a4);
        if ((unsigned char)t0 != 0) {
            return FUN_0c085cac(a4, 0xE, 0x1);
        }
        return FUN_0c038362(a4);
    }
    FUN_0c037bf6(a4);
    return FUN_0c038362(a4);
}
