/* game/system: functions 0C05B2B0-0C05B768, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o298_uint { char p[0x298]; unsigned int v; };
struct o2A6_uchar { char p[0x2A6]; unsigned char v; };
struct o38_short { char p[0x38]; short v; };
struct o3C_short { char p[0x3C]; short v; };
struct o60_short { char p[0x60]; short v; };
struct o64_short { char p[0x64]; short v; };
struct o88_short { char p[0x88]; short v; };
struct o8C_short { char p[0x8C]; short v; };
int FUN_0c01e99c(void);
int FUN_0c06148a(void);
int game_reset_objects(void);
int FUN_0c05f7fa(void);
int FUN_0c07c436(void);
int nlWaitVSync(void);
int gfx_set_background_color(int, int, int);
int FUN_0c05b2b0(void);
int FUN_0c05b2da(void);
int FUN_0c05b30e(int a4);
void FUN_0c05b490(void);
void FUN_0c05b4ba(void);

int FUN_0c05b2b0(void)
{
    game_reset_objects();
    gfx_set_background_color(0x0, 0x0, 0x0);
    nlWaitVSync();
    nlWaitVSync();
    nlWaitVSync();
    return FUN_0c07c436();
}

int FUN_0c05b2da(void)
{
    register int t1;
    int t2;

    if ((*(int *)0xC4B1078) == 0) {
        t1 = FUN_0c06148a();
        if ((t1 == 0) && (t2 = *(int *)0xC31F2A8, t2 == 0)) {
            return 0x0;
        }
        FUN_0c05b2b0();
        *(unsigned int *)0xC5421D4 = 0x0;
        return 0xFFFFFFFF;
    }
    return 0x0;
}

int FUN_0c05b30e(int a4)
{
    int stk[1];

    register int R1;
    register int R2;
    register int R3;
    register int R7;
    int R14;
    register float F2;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    v0_4 = a4;
    *(unsigned int *)(((int)stk + 0)) = v0_4;
    v0_0 = (0x0);
    v0_1 = (0xC541F3C);
    v0_2 = (0x0);
    if (((*(int *)0xC83C6C0) == 0)) goto L_C05B330;
    L_C05B478:;
    *(unsigned int *)0xC83C6C0 = v0_2;
    v0_0 = (v0_2);
    L_C05B480:;
    return v0_0;
    L_C05B330:;
    if (((*(int *)0xC4B1078) == 0)) goto L_C05B33C;
    goto L_C05B478;
    L_C05B33C:;
    v0_3 = (0xC5426C4);
    R14 = (0x8000);
    v0_5 = ((v0_1 + 0x1));
    if (((unsigned char)(*(signed char *)(((v0_1 + 0x1) + 0x0))) != 7)) goto L_C05B3C4;
    v0_4 = (signed char)(FUN_0c01e99c()) != 0;
    if (v0_4) goto L_C05B372;
    v0_4 = (v0_3);
    if ((((unsigned short)(*(short *)((v0_3 + 0x14))) & R14) == 0)) goto L_C05B44E;
    if ((((unsigned short)(*(short *)((v0_4 + 0x10))) & 0x3C0) == 0x3C0)) goto L_C05B44C;
    L_C05B44E:;
    if ((v0_0 == 0)) goto L_C05B478;
    if (((*(int *)(((int)stk + 0))) != 0)) goto L_C05B462;
    FUN_0c05b2b0();
    (((struct o298_uint *)(v0_1))->v) = v0_2;
    L_C05B474:;
    v0_0 = (0xFFFFFFFF);
    goto L_C05B480;
    L_C05B462:;
    FUN_0c07c436();
    FUN_0c05f7fa();
    (((struct o2A6_uchar *)(v0_1))->v) = 0x1;
    goto L_C05B474;
    L_C05B44C:;
    v0_0 = (0x1);
    goto L_C05B44E;
    L_C05B372:;
    v0_4 = ((v0_3 + 0x50));
    if ((((unsigned short)(*(short *)(((v0_3 + 0x50) + 0x14))) & R14) == 0)) goto L_C05B44E;
    if ((((unsigned short)(*(short *)((v0_4 + 0x10))) & 0x3C0) != 0x3C0)) goto L_C05B44E;
    goto L_C05B44C;
    L_C05B3C4:;
    v0_4 = (v0_3);
    if (((unsigned char)(*(signed char *)((v0_5 + 0x0))) != 6)) goto L_C05B3E8;
    v0_5 = (v0_4);
    if ((((unsigned short)(*(short *)((v0_4 + 0x14))) & R14) == 0)) goto L_C05B44E;
    if ((((unsigned short)(*(short *)((v0_5 + 0x10))) & 0x3C0) != 0x3C0)) goto L_C05B44E;
    goto L_C05B44C;
    L_C05B3E8:;
    v0_5 = (v0_4);
    if ((((unsigned short)(*(short *)((v0_4 + 0x14))) & R14) == 0)) goto L_C05B3FE;
    if ((((unsigned short)(*(short *)((v0_5 + 0x10))) & 0x3C0) == 0x3C0)) goto L_C05B44C;
    L_C05B3FE:;
    if ((((unsigned short)((((struct o3C_short *)(v0_4))->v)) & R14) == 0)) goto L_C05B418;
    if ((((unsigned short)((((struct o38_short *)(v0_4))->v)) & 0x3C0) == 0x3C0)) goto L_C05B44C;
    L_C05B418:;
    if ((((unsigned short)((((struct o64_short *)(v0_4))->v)) & R14) == 0)) goto L_C05B432;
    if ((((unsigned short)((((struct o60_short *)(v0_4))->v)) & 0x3C0) == 0x3C0)) goto L_C05B44C;
    L_C05B432:;
    if ((((unsigned short)((((struct o8C_short *)(v0_4))->v)) & R14) == 0)) goto L_C05B44E;
    if ((((unsigned short)((((struct o88_short *)(v0_4))->v)) & 0x3C0) != 0x3C0)) goto L_C05B44E;
    goto L_C05B44C;
}

void FUN_0c05b490(void)
{
    
}

void FUN_0c05b4ba(void)
{
    
}
