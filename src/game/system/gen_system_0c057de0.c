/* game/system: functions 0C057DE0-0C058198, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlCalcPoint44(int, int);
int nlCalcPoint(int, int);
int nlSelectMatrixStack(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nl_sprite_draw(int);
int FUN_0c187798(void);
int draw_project_point_sprite(int a4, float f4);
int draw_project_point_sprite_z01(int a4);

int draw_project_point_sprite(int a4, float f4)
{
    int stk[38];
    register int t1;
    register int t2;
    register int t4;
    register float u20;
    register int t5;

    *(unsigned int *)(((int)stk + 0)) = a4;
    nlPushMatrix(0x0);
    t1 = *(int *)(((int)stk + 0));
    t2 = t1;
    t4 = (((int)stk + 0) + 0x48);
    for (;;) { t5 = *(int *)t2; t2 = (t2 + 4); if ((unsigned int)((t1 + 80)) < (unsigned int)t2) break; *(unsigned int *)t4 = t5; t4 = (t4 + 4); }
    FUN_0c187798();
    nlSelectMatrixStack(0x2);
    nlCalcPoint((((int)stk + 0) + 0x3C), (((int)stk + 0) + 0x30));
    FUN_0c187798();
    *(float *)(((int)stk + 36)) = ((*(float *)(((int)stk + 36))) + 1.0f);
    nlSelectMatrixStack(0x3);
    nlCalcPoint44((((int)stk + 0) + 0x30), (((int)stk + 0) + 0x14));
    nlCalcPoint44((((int)stk + 0) + 0x24), (((int)stk + 0) + 0x4));
    nlSelectMatrixStack(0x1);
    nlPopMatrix(0x1);
    *(float *)(((int)stk + 60)) = (((((*(float *)(((int)stk + 20))) / (*(float *)(((int)stk + 32)))) + 1.0f) / (1.0f + 1.0f)) * 640.0f);
    u20 = (((((*(float *)(((int)stk + 24))) / (*(float *)(((int)stk + 32)))) + 1.0f) / (1.0f + 1.0f)) * 480.0f);
    u20 = -u20;
    *(float *)(((int)stk + 64)) = (u20 + 480.0f);
    *(float *)(((int)stk + 68)) = (-((*(float *)(((int)stk + 56))) * 1.0f));
    *(volatile float *)(((int)stk + 16));
    *(volatile float *)(((int)stk + 4));
    *(volatile float *)(((int)stk + 60));
    FUN_0c187798();
    *(float *)(((int)stk + 88)) = ((*(float *)(((int)stk + 88))) * f4);
    *(float *)(((int)stk + 92)) = ((*(float *)(((int)stk + 92))) * f4);
    *(unsigned int *)(((int)stk + 120)) = 0x2;
    *(unsigned int *)(((int)stk + 128)) = 0xFFFFFFFF;
    *(unsigned int *)(((int)stk + 132)) = 0x0;
    return (nl_sprite_draw((((int)stk + 0) + 0x48)));
}

int draw_project_point_sprite_z01(int a4)
{
    int stk[38];
    register int t1;
    register int t2;
    register int t4;
    register float u20;
    register float u22;
    register float u23;
    register float u24;
    register float u27;
    register int t5;

    *(unsigned int *)(((int)stk + 0)) = a4;
    nlPushMatrix(0x0);
    t1 = *(int *)(((int)stk + 0));
    t2 = t1;
    t4 = (((int)stk + 0) + 0x48);
    for (;;) { t5 = *(int *)t2; t2 = (t2 + 4); if ((unsigned int)((t1 + 80)) < (unsigned int)t2) break; *(unsigned int *)t4 = t5; t4 = (t4 + 4); }
    FUN_0c187798();
    nlSelectMatrixStack(0x2);
    nlCalcPoint((((int)stk + 0) + 0x3C), (((int)stk + 0) + 0x30));
    FUN_0c187798();
    *(float *)(((int)stk + 36)) = ((*(float *)(((int)stk + 36))) + 1.0f);
    nlSelectMatrixStack(0x3);
    nlCalcPoint44((((int)stk + 0) + 0x30), (((int)stk + 0) + 0x14));
    nlCalcPoint44((((int)stk + 0) + 0x24), (((int)stk + 0) + 0x4));
    nlSelectMatrixStack(0x1);
    nlPopMatrix(0x1);
    *(float *)(((int)stk + 60)) = (((((*(float *)(((int)stk + 20))) / (*(float *)(((int)stk + 32)))) + 1.0f) / (1.0f + 1.0f)) * 640.0f);
    u20 = (((((*(float *)(((int)stk + 24))) / (*(float *)(((int)stk + 32)))) + 1.0f) / (1.0f + 1.0f)) * 480.0f);
    u20 = -u20;
    *(float *)(((int)stk + 64)) = (u20 + 480.0f);
    *(float *)(((int)stk + 68)) = (-((*(float *)(((int)stk + 56))) * 1.0f));
    u22 = *(float *)(((int)stk + 16));
    u23 = *(float *)(((int)stk + 4));
    u24 = *(float *)(((int)stk + 60));
    *(float *)(((int)stk + 76)) = u24;
    *(float *)(((int)stk + 80)) = (*(float *)(((int)stk + 64)));
    *(float *)(((int)stk + 84)) = 0.100000001f;
    u27 = ((((u23 / u22) + 1.0f) / (1.0f + 1.0f)) * 640.0f);
    *(float *)(((int)stk + 88)) = ((*(float *)(((int)stk + 88))) * (u27 - u24));
    *(float *)(((int)stk + 92)) = ((*(float *)(((int)stk + 92))) * (u27 - u24));
    *(unsigned int *)(((int)stk + 120)) = 0x2;
    *(unsigned int *)(((int)stk + 128)) = 0xFFFFFFFF;
    *(unsigned int *)(((int)stk + 132)) = 0x0;
    return (nl_sprite_draw((((int)stk + 0) + 0x48)));
}
