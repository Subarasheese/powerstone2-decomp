/* game/unsorted: functions 0C11E20C-0C11E5AA, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c11e20c(int a4);
int FUN_0c11e28e(int a4);
int FUN_0c11e2d0(int a4, int a5, int a6, int a7);

int FUN_0c11e20c(int a4)
{
    register int t0;

    t0 = *(int *)((((a4 << 2) + 0xC474104) + 0x0));
    *(unsigned int *)((((a4 << 2) + 0xC474104) + 0x0)) = (t0 + 0x1);
    if ((int)(t0 + 0x1) > (int)0x63) {
        *(unsigned int *)((0xC474104 + (a4 << 2))) = 0x63;
    }
    if ((int)(*(int *)((0xC474104 + (a4 << 2)))) < 0) {
        *(unsigned int *)((0xC474104 + (a4 << 2))) = 0x0;
    }
    if ((int)(*(int *)((0xC474104 + (a4 << 2)))) > 0) {
        if (((*(int *)((0xC473D04 + (a4 << 2)))) & 0x10) == 0) {
            *(unsigned int *)(((a4 << 2) + 0xC473D04)) = ((*(int *)(((a4 << 2) + 0xC473D04))) | 0x40000);
            if (((int)a4 >= 0) && ((int)a4 <= (int)0x78)) {
                *(unsigned int *)0xC473CE0 = 0x1;
            }
        } else {
            *(unsigned int *)(((a4 << 2) + 0xC473D04)) = ((*(int *)(((a4 << 2) + 0xC473D04))) & 0xFFFBFFFF);
        }
        *(unsigned int *)((0xC473D04 + (a4 << 2))) = ((*(int *)((0xC473D04 + (a4 << 2)))) | 0x10);
    }
    return (a4 << 2);
}

int FUN_0c11e28e(int a4)
{
    register int t8;
    register int t7;

    if ((int)(*(int *)((0xC474104 + (a4 << 2)))) > 0) {
        *(unsigned int *)((0xC474104 + (a4 << 2))) = ((*(int *)((0xC474104 + (a4 << 2)))) - 1);
    }
    t8 = (a4 << 2);
    if ((*(int *)((0xC474104 + (a4 << 2)))) == 0) {
        *(unsigned int *)(((0xC473D04 + (a4 << 2)) + 0x0)) = ((*(int *)(((0xC473D04 + (a4 << 2)) + 0x0))) & 0xFFFFFFBF);
        *(unsigned int *)(((0xC473D04 + (a4 << 2)) + 0x0)) = ((*(int *)(((0xC473D04 + (a4 << 2)) + 0x0))) & 0xFFFFFF7F);
        t7 = *(int *)(((0xC473D04 + (a4 << 2)) + 0x0));
        *(unsigned int *)(((0xC473D04 + (a4 << 2)) + 0x0)) = (((t7 & 0xFFFFFEFF) & 0xFFFFFDFF) & 0xFFFFFFDF);
        t8 = (((t7 & 0xFFFFFEFF) & 0xFFFFFDFF) & 0xFFFFFFDF);
    }
    return t8;
}

int FUN_0c11e2d0(int a4, int a5, int a6, int a7)
{
    int stk[8];

    register int R3;
    register int R13;
    register float F15;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_10;
    register int v0_11;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register int v0_9;
    v0_1 = a4;
    v0_0 = a5;
    v0_2 = a6;
    v0_3 = a7;
    if ((v0_3 == -1)) goto L_C11E2FE;
    if ((v0_3 == 0x98)) goto L_C11E2FE;
    if ((v0_3 == 0x99)) goto L_C11E2FE;
    v0_9 = (0x9D);
    if ((v0_3 == 0x9D)) goto L_C11E2FE;
    L_C11E598:;
    return v0_9;
    L_C11E2FE:;
    v0_4 = (0xFFFFFFFF);
    v0_5 = (0x0);
    v0_3 = (0xE);
    v0_6 = (0x0);
    L_C11E526:;
    if (((int)v0_6 > (int)0x78)) goto L_C11E530;
    if (!((v0_4 == -1))) goto L_C11E530;
    R13 = (v0_5);
    v0_7 = ((((v0_6 << 2) << 1) - v0_6));
    goto L_C11E51A;
    L_C11E530:;
    v0_9 = (v0_4);
    if ((v0_4 == -1)) goto L_C11E598;
    if ((v0_4 != v0_1)) goto L_C11E598;
    v0_9 = (R13);
    v0_0 = (((v0_1 << 2) + 0xC473D04));
    if ((R13 == 0)) goto L_C11E568;
    if ((v0_9 == 1)) goto L_C11E56E;
    if ((v0_9 == 2)) goto L_C11E574;
    if ((v0_9 == 3)) goto L_C11E57A;
    if ((v0_9 == 4)) goto L_C11E580;
    if ((v0_9 == 5)) goto L_C11E586;
    if ((v0_9 == 6)) goto L_C11E590;
    goto L_C11E598;
    L_C11E590:;
    v0_1 = (0x20000);
    L_C11E592:;
    *(unsigned int *)((v0_0 + 0x0)) = ((*(int *)((v0_0 + 0x0))) | v0_1);
    goto L_C11E598;
    L_C11E586:;
    v0_9 = (((*(int *)((v0_0 + 0x0))) | 0x10000));
    L_C11E58C:;
    *(unsigned int *)((v0_0 + 0x0)) = v0_9;
    goto L_C11E598;
    L_C11E580:;
    v0_1 = (0x8000);
    goto L_C11E592;
    L_C11E57A:;
    v0_9 = (((*(int *)((v0_0 + 0x0))) | 0x8));
    goto L_C11E58C;
    L_C11E574:;
    v0_9 = (((*(int *)((v0_0 + 0x0))) | 0x4));
    goto L_C11E58C;
    L_C11E56E:;
    v0_9 = (((*(int *)((v0_0 + 0x0))) | 0x2));
    goto L_C11E58C;
    L_C11E568:;
    v0_9 = (((*(int *)((v0_0 + 0x0))) | 0x1));
    goto L_C11E58C;
    L_C11E51A:;
    if (((int)R13 >= (int)0x7)) goto L_C11E524;
    v0_10 = *(short *)((0xC29620E + ((v0_7 + R13) * v0_3)));
    v0_9 = (v0_10);
    v0_8 = (0xC29620E);
    if ((v0_10 == 0xC0)) goto L_C11E366;
    if ((v0_9 == 0xC1)) goto L_C11E366;
    if ((v0_9 == 0xC2)) goto L_C11E366;
    L_C11E3F6:;
    if (!((v0_4 == -1))) goto L_C11E524;
    v0_10 = *(short *)(((((v0_7 + R13) * v0_3) + v0_8) + 0x2));
    v0_9 = (v0_10);
    if ((v0_10 == 0xC0)) goto L_C11E438;
    if ((v0_9 == 0xC1)) goto L_C11E438;
    if ((v0_9 == 0xC2)) goto L_C11E438;
    goto L_C11E4C4;
    L_C11E524:;
    v0_6 = ((v0_6 + 0x1));
    goto L_C11E526;
    L_C11E4C4:;
    if ((v0_4 != -1)) goto L_C11E524;
    *(unsigned int *)(((int)stk + 0)) = (((v0_7 + R13) * v0_3) + v0_8);
    v0_11 = *(short *)(((((v0_7 + R13) * v0_3) + v0_8) + 0x0));
    v0_9 = *(short *)(((*(int *)(((int)stk + 0))) + 0x2));
    *(unsigned int *)(((int)stk + 0)) = v0_9;
    v0_9 = (v0_9);
    v0_10 = (v0_11);
    if ((v0_11 != v0_0)) goto L_C11E4E8;
    if ((v0_9 == v0_2)) goto L_C11E4F2;
    L_C11E4E8:;
    if ((v0_10 != v0_2)) goto L_C11E518;
    if (((*(int *)(((int)stk + 0))) != v0_0)) goto L_C11E518;
    L_C11E4F2:;
    *(unsigned int *)(((int)stk + 24)) = ((*(int *)(((int)stk + 24))) + (*(short *)(((((v0_7 + R13) * v0_3) + v0_8) + 0xA))));
    *(unsigned int *)(((int)stk + 20)) = ((*(int *)(((int)stk + 20))) + (*(short *)(((((v0_7 + R13) * v0_3) + v0_8) + 0xC))));
    v0_4 = (v0_6);
    goto L_C11E524;
    L_C11E518:;
    R13 = ((R13 + 0x1));
    goto L_C11E51A;
    L_C11E438:;
    *(unsigned int *)(((int)stk + 4)) = ((*(short *)(((((v0_7 + R13) * v0_3) + v0_8) + 0x2))) - 192);
    *(unsigned int *)(((int)stk + 8)) = v0_5;
    *(unsigned int *)(((int)stk + 0)) = v0_5;
    v0_9 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 28)) = (((v0_7 + R13) * v0_3) + v0_8);
    *(unsigned int *)(((int)stk + 4)) = (((v0_7 + R13) * v0_3) + v0_8);
    v0_10 = (((v0_9 << 2) + 0xC292440));
    L_C11E4B8:;
    if (((*(short *)(((*(int *)((v0_10 + 0x0))) + ((*(int *)(((int)stk + 8))) << 1)))) != -1)) goto L_C11E470;
    goto L_C11E4C4;
    L_C11E470:;
    *(unsigned int *)(((int)stk + 16)) = (*(short *)(((*(int *)(((int)stk + 28))) + 0x0)));
    v0_9 = *(short *)(((*(int *)(((int)stk + 0))) + (*(int *)((v0_10 + 0x0)))));
    *(unsigned int *)(((int)stk + 12)) = v0_9;
    v0_9 = (v0_9);
    if (((*(int *)(((int)stk + 16))) != v0_0)) goto L_C11E488;
    if ((v0_9 == v0_2)) goto L_C11E494;
    L_C11E488:;
    if (((*(int *)(((int)stk + 16))) != v0_2)) goto L_C11E4AC;
    if (((*(int *)(((int)stk + 12))) != v0_0)) goto L_C11E4AC;
    L_C11E494:;
    *(unsigned int *)(((int)stk + 24)) = ((*(int *)(((int)stk + 24))) + (*(short *)(((*(int *)(((int)stk + 4))) + 0xA))));
    *(unsigned int *)(((int)stk + 20)) = ((*(int *)(((int)stk + 20))) + (*(short *)(((*(int *)(((int)stk + 4))) + 0xC))));
    v0_4 = (v0_6);
    goto L_C11E4C4;
    L_C11E4AC:;
    *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + 0x1);
    *(unsigned int *)(((int)stk + 0)) = ((*(int *)(((int)stk + 0))) + 0x2);
    goto L_C11E4B8;
    L_C11E366:;
    v0_9 = *(short *)(((((v0_7 + R13) * v0_3) + v0_8) + 0x0));
    *(unsigned int *)(((int)stk + 4)) = (v0_9 - 192);
    *(unsigned int *)(((int)stk + 8)) = v0_5;
    *(unsigned int *)(((int)stk + 0)) = v0_5;
    *(unsigned int *)(((int)stk + 28)) = ((((v0_7 + R13) * v0_3) + v0_8) + 0x2);
    *(unsigned int *)(((int)stk + 4)) = (((v0_7 + R13) * v0_3) + v0_8);
    v0_10 = ((((v0_9 - 192) << 2) + 0xC292440));
    L_C11E3EA:;
    if (((*(short *)(((*(int *)((v0_10 + 0x0))) + ((*(int *)(((int)stk + 8))) << 1)))) != -1)) goto L_C11E3A2;
    goto L_C11E3F6;
    L_C11E3A2:;
    *(unsigned int *)(((int)stk + 16)) = (*(short *)(((*(int *)(((int)stk + 0))) + (*(int *)((v0_10 + 0x0))))));
    v0_9 = *(short *)(((*(int *)(((int)stk + 28))) + 0x0));
    *(unsigned int *)(((int)stk + 12)) = v0_9;
    v0_9 = (v0_9);
    if (((*(int *)(((int)stk + 16))) != v0_0)) goto L_C11E3BA;
    if ((v0_9 == v0_2)) goto L_C11E3C6;
    L_C11E3BA:;
    if (((*(int *)(((int)stk + 16))) != v0_2)) goto L_C11E3DE;
    if (((*(int *)(((int)stk + 12))) != v0_0)) goto L_C11E3DE;
    L_C11E3C6:;
    *(unsigned int *)(((int)stk + 24)) = ((*(int *)(((int)stk + 24))) + (*(short *)(((*(int *)(((int)stk + 4))) + 0xA))));
    *(unsigned int *)(((int)stk + 20)) = ((*(int *)(((int)stk + 20))) + (*(short *)(((*(int *)(((int)stk + 4))) + 0xC))));
    v0_4 = (v0_6);
    goto L_C11E3F6;
    L_C11E3DE:;
    *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + 0x1);
    *(unsigned int *)(((int)stk + 0)) = ((*(int *)(((int)stk + 0))) + 0x2);
    goto L_C11E3EA;
}
