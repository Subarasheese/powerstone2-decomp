/* game/effect: functions 0C09209C-0C092284, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o16_uchar { char p[0x16]; unsigned char v; };
struct o50_float { char p[0x50]; float v; };
struct o5C_float { char p[0x5C]; float v; };
int FUN_0c037bf6(int);
int FUN_0c07d1fc(int);
int FUN_0c07d774(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c085d0c(int);
int FUN_0c09209c(int);
int math_vec3_accumulate(int, int);
int FUN_0c092154(int a4);
int FUN_0c092236(int a4);
int FUN_0c092260(int a4);

int FUN_0c092154(int a4)
{
    register int t0;
    register int t1;

    FUN_0c037bf6(a4);
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
    t1 = t0;
    if (t0 != 0) {
        if ((*(signed char *)((a4 + 0x131))) != 0) {
            t0 = FUN_0c07d1fc(a4);
            if (t0 != 0) {
                t0 = *(signed char *)((a4 + 0x1));
                FUN_0c07e79c(a4, t0, 0x2, 0x19, (t0), 0x2, 0x19);
                *(unsigned int *)((a4 + 0x38)) = (FUN_0c07d774(a4));
            } else {
                t0 = *(signed char *)((a4 + 0x1));
                FUN_0c07e79c(a4, t0, 0x2, 0x11, (t0), 0x2, 0x11);
                *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + 0x8000);
            }
        } else {
            t0 = *(signed char *)((a4 + 0x1));
            FUN_0c07e79c(a4, t0, 0x2, 0x11, (t0), 0x2, 0x11);
            *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + 0x8000);
        }
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        t1 = 0x16;
    }
    return t1;
}

int FUN_0c092236(int a4)
{
    register int t0;

    t0 = FUN_0c037bf6(a4);
    if ((unsigned char)t0 != 0) {
        (((struct o5C_float *)(a4))->v) = 0.0f;
        (((struct o50_float *)(a4))->v) = 0.0f;
        return FUN_0c085d0c(a4);
    }
    return (unsigned char)t0;
}

int FUN_0c092260(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return FUN_0c092236(a4);
        }
        return FUN_0c092154(a4);
    }
    return FUN_0c09209c(a4);
}
