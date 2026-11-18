/* Straight-line functions with calls and guards (batch gen_ds): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int get_fat(int, int, int, int);
int search_fat_backward(int, int, int, int);
int search_subst_fat_top(int a4);

int search_subst_fat_top(int a4)
{

    register int R3;
    register int R5;
    register int R6;
    register int R7;
    register int R8;
    register int R9;
    register int R10;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    v0_2 = a4;
    v0_0 = R10;
    v0_6 = R9;
    v0_7 = R8;
    v0_3 = *(int *)((((v0_2 * 0x148) + 0xC8C4604) + 0x1C));
    v0_4 = *(int *)((v0_3 + 0x20));
    v0_5 = *(int *)((v0_3 + 0x1C));
    v0_1 = *(int *)((v0_3 + 0x10));
    R10 = (v0_2);
    v0_0 = (0xFFFC);
    v0_1 = (v0_1);
    v0_2 = (v0_3);
    R8 = (v0_5);
    R9 = (((v0_4 + v0_5) - 1));
    L_C2C1140:;
    v0_3 = search_fat_backward(R10, v0_0, R8, R9);
    v0_2 = (v0_3);
    if (((int)v0_3 >= 0)) goto L_C2C1156;
    v0_0 = (0xFFFFFFFF);
    L_C2C1182:;
    return v0_0;
    L_C2C1156:;
    v0_3 = (0x0);
    if (((int)v0_1 <= 0)) goto L_C2C1178;
    L_C2C115C:;
    v0_4 = (unsigned short)(get_fat(R10, (v0_2 - v0_3), R6, R7)) == v0_0;
    if (v0_4) goto L_C2C1172;
    R9 = (((v0_2 - v0_3) - 1));
    L_C2C1178:;
    if ((v0_3 != v0_1)) goto L_C2C1140;
    v0_0 = (((v0_2 - v0_1) + 0x1));
    goto L_C2C1182;
    L_C2C1172:;
    v0_4 = (int)(v0_3 + 0x1) < (int)v0_1;
    v0_3 = ((v0_3 + 0x1));
    if (v0_4) goto L_C2C115C;
    goto L_C2C1178;
}
