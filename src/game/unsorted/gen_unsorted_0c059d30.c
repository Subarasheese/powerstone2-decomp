/* game/unsorted: functions 0C059D30-0C05A06C, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o8C_float { char p[0x8C]; float v; };
int FUN_0c05aad0(int, int, int);
int FUN_0c05ab24(int, int, int, int);
int FUN_0c05ab7e(int, int);
int FUN_0c059d30(void);
int FUN_0c059dae(int a4, int a5);
int FUN_0c059dd6(int a4, int a5, int a6);
int FUN_0c059df2(int a4, int a5);
int FUN_0c059e0e(int a4, int a5, int a6);
int FUN_0c059e1e(int a4, int a5, int a6);
int FUN_0c059e60(int a4, int a5);
int FUN_0c059e9a(int a4, int a5, int a6);
int FUN_0c059ed8(int a4, int a5, int a6);
int FUN_0c059ef6(int a4, int a5);
int FUN_0c059f04(int a4);
void FUN_0c059f20(int a4, int a5);
void FUN_0c059f78(int a4, int a5);
void FUN_0c059fae(int a4, int a5, int a6);
void FUN_0c059ff8(int a4, int a5);
int FUN_0c05a02e(int a4);
int FUN_0c05a044(void);

int FUN_0c059d30(void)
{
    register int t0;
    register int t24;
    register int t19;

    t0 = 0x0;
    for (;;) {
        FUN_0c059df2(t0, 0x4D);
        t24 = 0x3714;
        if ((*(signed char *)((((t0 * 0x3938) + 0xC532498) + 0x3714))) != 0) {
            if ((*(signed char *)((((t0 * 0x3938) + 0xC532498) + 0x2))) == 10) {
                FUN_0c059e60(((t0 * 0x3938) + 0xC532498), 0x21);
            }
            if ((*(signed char *)((((t0 * 0x3938) + 0xC532498) + 0x2))) == 11) {
                FUN_0c059e60(((t0 * 0x3938) + 0xC532498), 0x26);
            }
            if ((*(signed char *)((((t0 * 0x3938) + 0xC532498) + 0x2))) == 8) {
                FUN_0c059e60(((t0 * 0x3938) + 0xC532498), 0x22);
            }
            t19 = *(signed char *)((((t0 * 0x3938) + 0xC532498) + 0x2));
            t24 = t19;
            if (t19 == 2) {
                t24 = (FUN_0c059e60(((t0 * 0x3938) + 0xC532498), 0x22));
            }
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x4) {
            break;
        }
    }
    return t24;
}

int FUN_0c059dae(int a4, int a5)
{
    return FUN_0c05aad0((*(int *)(((a5 << 2) + 0xC1C305C))), (a4 & 0x3), (((a4 & 0x3) * 0x3938) + 0xC5324C0));
}

int FUN_0c059dd6(int a4, int a5, int a6)
{
    return FUN_0c05aad0((*(int *)(((a5 << 2) + 0xC1C305C))), (a4 & 0x3), a6);
}

int FUN_0c059df2(int a4, int a5)
{
    return FUN_0c05aad0(a5, a4, ((a4 * 0x3938) + 0xC5324C0));
}

int FUN_0c059e0e(int a4, int a5, int a6)
{
    return FUN_0c05aad0(a5, a4, a6);
}

int FUN_0c059e1e(int a4, int a5, int a6)
{
    if ((int)((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v)) == a5) {
        return FUN_0c059df2((*(signed char *)((a4 + 0x1))), a6);
    }
    return 0x8C;
}

int FUN_0c059e60(int a4, int a5)
{
    register int t5;
    register int t1;

    t5 = a5;
    if (((*(signed char *)((a4 + 0x2))) == 10) && ((t1 = *(signed char *)((a4 + 0x371A)), t1 != 0) && ((int)a5 < (int)0x18))) {
        t5 = (*(int *)(((a5 << 2) + 0xC1C308C)));
    }
    return FUN_0c05ab24(t5, (*(signed char *)((a4 + 0x1))), (*(signed char *)((a4 + 0x2))), (a4 + 0x28));
}

int FUN_0c059e9a(int a4, int a5, int a6)
{
    register int t5;
    register int t1;

    t5 = a5;
    if (((*(signed char *)((a4 + 0x2))) == 10) && ((t1 = *(signed char *)((a4 + 0x371A)), t1 != 0) && ((int)a5 < (int)0x18))) {
        t5 = (*(int *)(((a5 << 2) + 0xC1C308C)));
    }
    return FUN_0c05ab24(t5, (*(signed char *)((a4 + 0x1))), (*(signed char *)((a4 + 0x2))), a6);
}

int FUN_0c059ed8(int a4, int a5, int a6)
{
    if ((int)((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v)) == a5) {
        return FUN_0c059e60(a4, a6);
    }
    return 0x8C;
}

int FUN_0c059ef6(int a4, int a5)
{
    register int t0;

    t0 = 0xF;
    if (a5 == 0) {
        t0 = 0xD;
    }
    return FUN_0c059df2(a4, t0);
}

int FUN_0c059f04(int a4)
{
    FUN_0c059df2(a4, 0xF);
    return FUN_0c059e60(((a4 * 0x3938) + 0xC532498), 0x0);
}

void FUN_0c059f20(int a4, int a5)
{
    if ((int)a5 <= (int)0x7) {
        if ((int)(*(int *)((((a5 << 2) + 0xC1C30EC) + 0x0))) >= 0) {
            FUN_0c05ab7e((*(int *)((((a5 << 2) + 0xC1C30EC) + 0x0))), ((a4 * 0x3938) + 0xC5324C0));
    return;
        }
        return;
    }
}

void FUN_0c059f78(int a4, int a5)
{
    if ((int)a5 <= (int)0x7) {
        if ((int)(*(int *)((((a5 << 2) + 0xC1C310C) + 0x0))) >= 0) {
            FUN_0c05ab7e((*(int *)((((a5 << 2) + 0xC1C310C) + 0x0))), ((a4 * 0x3938) + 0xC5324C0));
    return;
        }
        return;
    }
}

void FUN_0c059fae(int a4, int a5, int a6)
{
    if ((int)a5 <= (int)0x7) {
        if ((int)(*(int *)((((a5 << 2) + 0xC1C312C) + 0x0))) >= 0) {
            if (a6 == 0) {
                FUN_0c05ab7e((*(int *)((((a5 << 2) + 0xC1C312C) + 0x0))), (((a4 * 0x3938) + 0xC532498) + 0x28));
    return;
            }
            FUN_0c05ab7e(((*(int *)((((a5 << 2) + 0xC1C312C) + 0x0))) + 0x1), (((a4 * 0x3938) + 0xC532498) + 0x28));
    return;
        }
        return;
    }
}

void FUN_0c059ff8(int a4, int a5)
{
    if ((int)a5 <= (int)0x7) {
        if ((int)(*(int *)((((a5 << 2) + 0xC1C314C) + 0x0))) >= 0) {
            FUN_0c05ab7e((*(int *)((((a5 << 2) + 0xC1C314C) + 0x0))), ((a4 * 0x3938) + 0xC5324C0));
    return;
        }
        return;
    }
}

int FUN_0c05a02e(int a4)
{
    return FUN_0c05ab7e(0x5, ((a4 * 0x3938) + 0xC5324C0));
}

int FUN_0c05a044(void)
{
    register int t0;
    register int t1;

    t0 = 0xC532498;
    for (;;) {
        t1 = FUN_0c059e60(t0, 0x18);
        t0 = (t0 + 0x3938);
        if ((unsigned int)t0 >= (unsigned int)0xC540978) {
            break;
        }
    }
    return t1;
}
