/* game/unsorted: functions 0C0F6090-0C0F6348, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o4_float { char p[0x4]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oC0_uint { char p[0xC0]; unsigned int v; };
int FUN_0c03ea04(int, int);
int FUN_0c042fe0(void);
int FUN_0c052c00(int, int, int);
int FUN_0c059c16(int, int);
int FUN_0c0cfecc(int, int, int);
int FUN_0c0d02a6(void);
int FUN_0c0d0378(int, int);
int FUN_0c0d04b4(int);
int FUN_0c0f6090(void);
int FUN_0c0f6188(int a4);
int FUN_0c0f61fa(int a4);
int FUN_0c0f620e(void);
int FUN_0c0f6212(void);
int FUN_0c0f6248(void);

int FUN_0c0f6188(int a4)
{
    register int t13;
    register int t14;

    *(unsigned char *)0xC54223C = a4;
    (((struct o0_float *)0xC541098)->v) = (*(float *)(((a4 << 2) + 0xC1CE58C)));
    (((struct o4_float *)0xC541098)->v) = (*(float *)(((a4 << 2) + 0xC1CE590)));
    *(unsigned short *)0xC540996 = 0x0;
    if ((*(signed char *)0xC54098D) != 4) {
        FUN_0c059c16((*(signed char *)0xC542237), (*(signed char *)0xC54223C));
    }
    t13 = *(signed char *)0xC542237;
    t14 = *(signed char *)0xC54223C;
    FUN_0c0d04b4(((((((t13 << 2) << 1) + t13) << 2) + 0xC286D34) + (((t14 << 1) + t14) << 2)));
    return FUN_0c03ea04(0x2, 0x0);
}

int FUN_0c0f61fa(int a4)
{
    *(volatile signed char *)0xC54223C;
    return FUN_0c052c00(0x2000, 0x1555, a4);
}

int FUN_0c0f620e(void)
{
    return FUN_0c0f61fa(0xA);
}

int FUN_0c0f6212(void)
{
    register int t0;
    register int t4;

    t0 = *(signed char *)0xC54223C;
    t4 = FUN_0c0cfecc((*(int *)(((((t0 << 2) << 1) + 0xC1CE6C0) + 0x0))), 0xC540996, (*(int *)(((((t0 << 2) << 1) + 0xC1CE6C0) + 0x4))));
    if ((int)t4 < 0) {
        return 0xFFFFFFFF;
    }
    return 0x0;
}

int FUN_0c0f6248(void)
{

    register int R1;
    register int R2;
    register int R3;
    register int R4;
    register int R5;
    register int R6;
    register int R7;
    register int R9;
    register int R10;
    register int R11;
    register int R12;
    register int R13;
    register float F12;
    register float F14;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    v0_2 = *(signed char *)0xC54098C;
    v0_0 = (v0_2);
    v0_1 = (0xC540978);
    if ((v0_2 == 0)) goto L_C0F629C;
    if ((v0_0 == 1)) goto L_C0F62B2;
    L_C0F6342:;
    return v0_0;
    L_C0F62B2:;
    FUN_0c0f6090();
    v0_2 = *(signed char *)((v0_1 + 0x15));
    v0_0 = (v0_2);
    if ((v0_2 == 0)) goto L_C0F62DA;
    if ((v0_0 == 1)) goto L_C0F62E6;
    if ((v0_0 == 2)) goto L_C0F62FC;
    if ((v0_0 == 3)) goto L_C0F6342;
    if ((v0_0 == 4)) goto L_C0F631C;
    if ((v0_0 == 5)) goto L_C0F632A;
    if ((v0_0 == 6)) goto L_C0F6342;
    goto L_C0F6342;
    L_C0F632A:;
    v0_2 = FUN_0c0f6212();
    v0_0 = (v0_2);
    if ((v0_2 == 0)) goto L_C0F6342;
    (((struct o15_uchar *)(v0_1))->v) = ((*(signed char *)((v0_1 + 0x15))) + 0x1);
    return FUN_0c0d02a6();
    L_C0F631C:;
    FUN_0c0f6188((*(signed char *)0xC54223C));
    (((struct o15_uchar *)(v0_1))->v) = ((*(signed char *)((v0_1 + 0x15))) + 0x1);
    goto L_C0F632A;
    L_C0F62FC:;
    v0_2 = FUN_0c042fe0();
    v0_0 = (v0_2);
    if ((v0_2 == 0)) goto L_C0F6342;
    (((struct o15_uchar *)(v0_1))->v) = ((*(signed char *)((v0_1 + 0x15))) + 0x1);
    FUN_0c0f620e();
    return FUN_0c0d0378(0x0, 0xB);
    L_C0F62E6:;
    v0_2 = FUN_0c0f6212();
    v0_0 = (v0_2);
    if ((v0_2 == 0)) goto L_C0F6342;
    (((struct o15_uchar *)(v0_1))->v) = ((*(signed char *)((v0_1 + 0x15))) + 0x1);
    return ((int (*)(int, int, int, int))(0xC0F61F4))(R4, R5, R6, R7);
    L_C0F62DA:;
    FUN_0c0f6188(0x0);
    (((struct o15_uchar *)(v0_1))->v) = ((*(signed char *)((v0_1 + 0x15))) + 0x1);
    goto L_C0F62E6;
    L_C0F629C:;
    (((struct o14_uchar *)(v0_1))->v) = ((*(signed char *)((v0_1 + 0x14))) + 0x1);
    (((struct oC0_uint *)(v0_1))->v) = 0x0;
    (((struct oA8_uchar *)(v0_1))->v) = 0x0;
    (((struct o15_uchar *)(v0_1))->v) = 0x0;
    goto L_C0F62B2;
}
