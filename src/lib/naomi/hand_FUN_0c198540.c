/* Hand-fixed generated C: FUN_0c198540's stack arguments are at the original's r15 + 36 and r15 + 40 (stk + 40 and stk + 44 in
   the generated frame, where stk + 4 is the original's r15); the generated C stored them at stk[4] and stk[5], so the halfword
   read at stk + 4 + 0x28 came from elsewhere in the frame. They are stored at stk[10] and stk[11]. */


struct o28_short { char p[0x28]; short v; };

int FUN_0c198540(int a4, int a5, int a6, int a7, int a8, int a9)
{
    int stk[14];
    register int t0;
    register int t2;
    register int t3;
    register int t1;
    register int t4;
    int t10;
    int t18;
    register int t19;
    int t22;

    stk[10] = a8;
    stk[11] = a9;
    *(unsigned int *)(((int)stk + 4)) = (((a4 == 0)) ? 1 : 0);
    *(unsigned int *)(((int)stk + 8)) = (((a6 == 0)) ? 1 : 0);
    t0 = (((a6 == 0)) ? 1 : 0);
    t2 = 0x0;
    t3 = 0x0;
    for (;;) {
        if ((int)t3 >= (int)0x20) {
            t0 = t2;
            if (t0 == 1) {
                t3 = (unsigned char)((signed char)(a8 >> 0));
                t0 = t3;
                *(unsigned int *)((t4 + 0x4)) = a5;
                if (t0 == 2) {
                    t0 = ((((struct o28_short *)(((int)stk + 4)))->v));
                    t0 = (t0 | 0x1);
                    *(unsigned short *)((t4 + 0xE)) = t0;
                    t0 = 0x28;
                    t0 = (*(short *)((((int)stk + 4) + t0)));
                    t0 = (unsigned short)t0;
                    if (!((t0 & 4) == 0)) {
                        *(unsigned int *)((t4 + 0x4)) = 0xFFFFFFFF;
                    }
                } else {
                    if (t0 == 1) {
                        t0 = 0x9;
                        *(unsigned short *)((t4 + 0xE)) = t0;
                    } else {
                        t0 = t3;
                        if ((t0 != 3) && (((~a5) & a4) != 0)) {
                            t0 = 0xF;
                            *(unsigned short *)((t4 + 0xE)) = t0;
                            *(unsigned int *)((t4 + 0x4)) = 0xFFFFFFFF;
                        } else {
                            t0 = 0xB;
                            *(unsigned short *)((t4 + 0xE)) = t0;
                        }
                    }
                }
                t0 = 0x18;
                *(unsigned int *)((t4 + 0x14)) = 0x0;
                *(unsigned int *)((t4 + 0x10)) = 0x0;
                *(unsigned char *)((t4 + t0)) = 0x0;
                t0 = 0x19;
                *(unsigned char *)((t4 + t0)) = ((signed char)(a8 >> 0));
                t0 = a7;
                *(unsigned int *)((t4 + 0x0)) = a4;
                *(unsigned short *)((t4 + 0xC)) = t0;
                *(unsigned int *)((t4 + 0x8)) = a6;
                t0 = 0x0;
                return t0;
            }
            t0 = 0xFFFFFFFF;
            return t0;
        }
        *(unsigned int *)(((int)stk + 12)) = 0xC8A8FDC;
        if (((*(int *)((((t3 * 0x1C) + 0xC8A8FDC) + 0x0))) == a4) && (t10 = *(short *)((((t3 * 0x1C) + 0xC8A8FDC) + 0xE)), t0 = t10, t0 = (unsigned short)t0, (t0 & 1) != 0)) {
            t1 = (*(int *)(((int)stk + 4)));
            if ((t1 != 0) && ((a5 == 0) && (t18 = *(int *)(((int)stk + 8)), t19 = (t1 == 0), t1 = t18, t1 != 0))) {
                t0 = (unsigned char)((signed char)(a8 >> 0));
                if (t0 != 1) {
                    break;
                }
                t3 = (t3 + 0x1);
                continue;
            }
            t0 = 0xFFFFFFFF;
            return t0;
        }
        if ((t2 == 0) && (t22 = *(short *)((((t3 * 0x1C) + 0xC8A8FDC) + 0xE)), t0 = t22, t0 == 0)) {
            t4 = t3;
            t1 = (*(int *)(((int)stk + 12)));
            t2 = 0x1;
            t4 = (t4 * 0x1C);
            t4 = (t4 + t1);
        }
        t3 = (t3 + 0x1);
    }
    return 0xFFFFFFFF;
}
