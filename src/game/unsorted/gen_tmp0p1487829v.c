/* scratch */
int FUN_0c085cac(int, int, int, int);
void FUN_0c0497d8(int a4, int a5, int a6, int a7);

void FUN_0c0497d8(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t10;
    register int t11;

    t0 = 0xC532498;
    t1 = 0x0;
    for (;;) {
        if ((unsigned int)t0 >= (unsigned int)0xC540978) {
            break;
        }
        t2 = (*(signed char *)((t0 + (0x3714))));
        t0 = (t0 + 0x3938);
        if (t2 != 0) {
            t1 = (t1 + 0x1);
        }
    }
    t0 = 0x0;
    if (t1 != 1) {
        t2 = 0x1;
        if (t1 != 2) {
            t3 = 0x3;
            if (t1 != 3) {
                t3 = 0x6;
            }
            t2 = t3;
        }
        t0 = t2;
    }
    t2 = 0xC1B7C64;
    t3 = t0;
    t4 = t0;
    t5 = t1;
    t1 = 0x0;
    t6 = ((((t0 << 1) + t0) << 2) + 0xC1B7C64);
    t0 = 0xC532498;
    t7 = 0xC532498;
    for (;;) {
        if ((unsigned int)t0 >= (unsigned int)0xC540978) {
            break;
        }
        t2 = (*(signed char *)((t0 + 0x3714)));
        t8 = t3;
        if (t2 != 0) {
            t5 = 0x1D;
            t1 = 0x0;
            t4 = t7;
            FUN_0c085cac(t4, t5, t1, a7);
            t3 = 0xC187798;
            t9 = t7;
            t2 = t6;
            t9 = (t9 + 0x28);
            { struct mv3 { int w[3]; }; *(struct mv3 *)(t9) = *(struct mv3 *)(t2); }
            t6 = (t6 + 0xC);
            *(unsigned int *)((t7 + 0x38)) = 0x8000;
            t8 = 0xC187798;
        } else {
            t9 = t4;
            t10 = t5;
            t11 = t1;
        }
        t0 = (t0 + 0x3938);
        t3 = t8;
        t4 = t9;
        t5 = t10;
        t1 = t11;
        t7 = (t7 + 0x3938);
    }
}

