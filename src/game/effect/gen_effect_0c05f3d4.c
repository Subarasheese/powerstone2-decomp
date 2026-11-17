/* game/effect: functions 0C05F3D4-0C05F770, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o12_uchar { char p[0x12]; unsigned char v; };
struct o13_uchar { char p[0x13]; unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
int FUN_0c038ec2(int);
int FUN_0c03f40c(int, int);
int FUN_0c042fe0(void);
int FUN_0c04331a(void);
int FUN_0c043326(void);
int FUN_0c05aab6(int, int);
int game_reset_objects(void);
int FUN_0c05b1d4(void);
int FUN_0c05b21e(void);
int FUN_0c05f7a0(int);
int FUN_0c07c436(void);
int memset(int, int, int);
int FUN_0c05f3d4(void);
void FUN_0c05f42a(int a4);
int FUN_0c05f430(void);
int FUN_0c05f436(void);
int FUN_0c05f59c(void);
int FUN_0c05f604(void);
int FUN_0c05f63a(void);
int FUN_0c05f65c(void);
int FUN_0c05f690(int a4, int a5);
int FUN_0c05f6fc(void);
int FUN_0c05f71a(void);
int FUN_0c05f76a(void);

int FUN_0c05f3d4(void)
{
    register int t0;
    register int t1;
    register int t2;

    FUN_0c05f604();
    *(unsigned int *)0xC5421D8 = 0x0;
    t0 = *(signed char *)0xC541F41;
    if ((unsigned char)t0 == 5) {
        t1 = FUN_0c042fe0();
        if (t1 != 0) {
            t2 = FUN_0c05f63a();
            if (t2 != 0) {
                return FUN_0c05f690(0x1, 0x0);
            }
            t2 = FUN_0c05f65c();
            if ((t2 & (unsigned char)(*(signed char *)0xC3BD447)) != 0) {
                return FUN_0c05f690(0x0, t2);
            }
            return t2;
        }
        return t1;
    }
    return (unsigned char)t0;
}

void FUN_0c05f42a(int a4)
{
    *(unsigned char *)0xC46E1CE = a4;
}

int FUN_0c05f430(void)
{
    return (*(signed char *)0xC46E1CE);
}

int FUN_0c05f436(void)
{

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register int v0_9;
    FUN_0c05f604();
    v0_3 = *(signed char *)0xC46E1BA;
    v0_6 = (v0_3);
    v0_2 = (0x0);
    v0_0 = (0x1);
    v0_1 = (0xC46E1B8);
    if ((v0_3 == 0)) goto L_C05F45E;
    if ((v0_6 == 1)) goto L_C05F4CE;
    L_C05F580:;
    FUN_0c03f40c(0x7, R5);
    return FUN_0c038ec2(0x7);
    L_C05F4CE:;
    v0_9 = *(signed char *)(((v0_1 + 0x3) + 0x0));
    v0_6 = (v0_9);
    v0_3 = (0xC3BD447);
    v0_4 = (0x4);
    v0_7 = ((v0_1 + 0x3));
    v0_8 = (0x1E);
    v0_5 = (0xC46E1A8);
    if ((v0_9 == 0)) goto L_C05F4E8;
    if ((v0_6 == 1)) goto L_C05F4FA;
    v0_6 = (FUN_0c05f63a()) != 0;
    if (v0_6) goto L_C05F580;
    *(unsigned char *)((v0_1 + 0x2)) = v0_2;
    *(unsigned char *)((v0_1 + 0x3)) = v0_2;
    if (((*(int *)((v0_5 + 0x8))) == 0)) goto L_C05F580;
    v0_7 = (v0_2);
    R5 = ((v0_5 + 0x8));
    L_C05F55C:;
    if (!((((((int)v0_0 << (int)v0_7) & (*(int *)((R5 + 0x0)))) & (unsigned char)(*(signed char *)((v0_3 + 0x0)))) == 0))) goto L_C05F56C;
    v0_2 = (int)(v0_7 + 0x1) < (int)v0_4;
    v0_7 = ((v0_7 + 0x1));
    if (v0_2) goto L_C05F55C;
    goto L_C05F580;
    L_C05F56C:;
    (((struct o14_uchar *)(v0_1))->v) = v0_7;
    (((struct o15_uchar *)(v0_1))->v) = ((int)v0_0 << (int)v0_7);
    goto L_C05F580;
    L_C05F4FA:;
    v0_6 = *(signed char *)((v0_1 + 0xD));
    *(unsigned char *)((v0_1 + 0xD)) = (v0_6 - 1);
    if (((int)(signed char)(v0_6 - 1) > (int)v0_8)) goto L_C05F50C;
    *(unsigned char *)((v0_1 + 0x3)) = ((*(signed char *)((v0_1 + 0x3))) + 0x1);
    L_C05F50C:;
    v0_6 = (FUN_0c05f63a()) == 0;
    if (v0_6) goto L_C05F51A;
    *(unsigned char *)((v0_1 + 0xD)) = v0_8;
    L_C05F51A:;
    if (((*(int *)((v0_5 + 0x8))) == 0)) goto L_C05F580;
    v0_7 = (v0_2);
    R5 = ((v0_5 + 0x8));
    L_C05F526:;
    if ((((((int)v0_0 << (int)v0_7) & (*(int *)((R5 + 0x0)))) & (unsigned char)(*(signed char *)((v0_3 + 0x0)))) != 0)) goto L_C05F56C;
    v0_2 = (int)(v0_7 + 0x1) < (int)v0_4;
    v0_7 = ((v0_7 + 0x1));
    if (v0_2) goto L_C05F526;
    goto L_C05F580;
    L_C05F4E8:;
    *(unsigned char *)((v0_7 + 0x0)) = ((*(signed char *)((v0_7 + 0x0))) + 0x1);
    *(unsigned char *)((v0_1 + 0xD)) = v0_8;
    *(unsigned char *)((v0_1 + 0xE)) = v0_2;
    goto L_C05F4FA;
    L_C05F45E:;
    v0_3 = (FUN_0c05f63a()) == 0;
    if (v0_3) goto L_C05F474;
    *(unsigned char *)((v0_1 + 0x2)) = v0_0;
    *(unsigned char *)((v0_1 + 0x3)) = v0_2;
    goto L_C05F580;
    L_C05F474:;
    if (((*(signed char *)((v0_1 + 0x3))) != 0)) goto L_C05F480;
    *(unsigned char *)((v0_1 + 0x3)) = ((*(signed char *)((v0_1 + 0x3))) + 0x1);
    L_C05F480:;
    v0_0 = *(signed char *)((v0_1 + 0x16));
    v0_6 = (v0_0);
    if ((v0_0 != 0)) goto L_C05F48C;
    goto L_C05F580;
    L_C05F48C:;
    if ((v0_6 == 1)) goto L_C05F4C6;
    if ((v0_6 == 2)) goto L_C05F4A0;
    if ((v0_6 == 3)) goto L_C05F4B0;
    if ((v0_6 == 4)) goto L_C05F4BA;
    goto L_C05F580;
    L_C05F4BA:;
    FUN_0c043326();
    L_C05F4C0:;
    game_reset_objects();
    L_C05F4C6:;
    FUN_0c05f6fc();
    goto L_C05F580;
    L_C05F4B0:;
    FUN_0c04331a();
    goto L_C05F4C0;
    L_C05F4A0:;
    game_reset_objects();
    FUN_0c05f7a0(0x4);
    goto L_C05F580;
}

int FUN_0c05f59c(void)
{
    register int t0;
    register int t1;

    t0 = 0x0;
    t1 = 0x0;
    for (;;) {
        if ((*(int *)(((((((t0 << 2) + t0) << 2) << 1) + 0xC5426C4) + 0x0))) != 0) {
            t1 = (t1 | ((int)0x1 << (int)t0));
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x4) {
            break;
        }
    }
    return t1;
}

int FUN_0c05f604(void)
{
    int t1;

    (((struct o4_uint *)0xC46E1A8)->v) = ((((struct o0_int *)0xC46E1A8)->v));
    t1 = FUN_0c05f59c();
    (((struct o0_uint *)0xC46E1A8)->v) = t1;
    (((struct o8_uint *)0xC46E1A8)->v) = ((~((((struct o4_int *)0xC46E1A8)->v))) & t1);
    (((struct oC_uint *)0xC46E1A8)->v) = ((~((((struct o0_int *)0xC46E1A8)->v))) & ((((struct o4_int *)0xC46E1A8)->v)));
    return t1;
}

int FUN_0c05f63a(void)
{
    register int t0;
    int t2;

    t0 = *(signed char *)0xC3BD447;
    if ((((*(int *)0xC46E1A8) & (unsigned char)t0) != (unsigned char)t0) && (t2 = *(signed char *)0xC5429B4, t2 != 1)) {
        return 0x1;
    }
    return 0x0;
}

int FUN_0c05f65c(void)
{
    register int t0;

    t0 = 0x0;
    for (;;) {
        if (((unsigned short)(*(short *)(((((((t0 << 2) + t0) << 2) << 1) + 0xC5426C4) + 0x14))) & 0x8000) != 0) {
            break;
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x4) {
            return 0x0;
        }
    }
    return ((int)0x1 << (int)t0);
}

int FUN_0c05f690(int a4, int a5)
{
    int stk[1];
    register int t5;

    *(unsigned char *)(((int)stk + 0)) = a4;
    *(unsigned int *)0xC5421D8 = 0x1;
    *(unsigned char *)0xC541F3D = 0xA;
    FUN_0c07c436();
    FUN_0c05b21e();
    FUN_0c05aab6(0x0, 0x3);
    memset(0xC46E1B8, 0x0, 0x17);
    (((struct o14_uchar *)0xC46E1BA)->v) = 0x0;
    (((struct o0_uchar *)0xC46E1BA)->v) = (*(signed char *)(((int)stk + 0)));
    (((struct o1_uchar *)0xC46E1BA)->v) = 0x0;
    (((struct o13_uchar *)0xC46E1BA)->v) = a5;
    t5 = 0x0;
    for (;;) {
        if ((((int)0x1 << (int)t5) & (signed char)a5) != 0) {
            break;
        }
        t5 = (t5 + 0x1);
        if ((int)t5 >= (int)0x4) {
            return 0x15;
        }
    }
    (((struct o12_uchar *)0xC46E1BA)->v) = t5;
    return 0x14;
}

int FUN_0c05f6fc(void)
{
    *(unsigned int *)0xC5421D8 = 0x0;
    *(unsigned char *)0xC541F3D = 0x2;
    FUN_0c05b1d4();
    return memset(0xC46E1B8, 0x0, 0x17);
}

int FUN_0c05f71a(void)
{
    if ((*(int *)0xC5421D8) != 0) {
        return ((*(signed char *)0xC46E1CC) + 0x1);
    }
    return 0x0;
}

int FUN_0c05f76a(void)
{
    return (*(signed char *)0xC46E1CD);
}
