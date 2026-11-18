/* game/unsorted: functions 0C0303FC-0C030DBE, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o44_ushort { char p[0x44]; unsigned short v; };
struct o4A_uchar { char p[0x4A]; unsigned char v; };
struct o4B_uchar { char p[0x4B]; unsigned char v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o56_uchar { char p[0x56]; unsigned char v; };
struct o58_ushort { char p[0x58]; unsigned short v; };
struct o5_uchar { char p[0x5]; unsigned char v; };
struct o6C_uint { char p[0x6C]; unsigned int v; };
struct o70_short { char p[0x70]; short v; };
struct o70_ushort { char p[0x70]; unsigned short v; };
struct o78_int { char p[0x78]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o80_uchar { char p[0x80]; unsigned char v; };
struct o81_uchar { char p[0x81]; unsigned char v; };
struct o82_uchar { char p[0x82]; unsigned char v; };
int FUN_0c04309a(int);
int FUN_0c05aab6(int, int);
int FUN_0c0303fc(int a4);
int FUN_0c030412(int a4);
int FUN_0c030436(void);
int FUN_0c030442(int a4);
int FUN_0c0304e8(int a4, int a5);
void FUN_0c0305d8(int a4);
int FUN_0c03062a(int a4);
int FUN_0c03063c(int a4, int a5);
int FUN_0c03069a(int a4);
int FUN_0c0306de(int a4, int a5);
int FUN_0c030728(int a4);
int FUN_0c030866(int a4);
int FUN_0c030baa(int a4);
int FUN_0c030c2c(int a4, int a5);

int FUN_0c0303fc(int a4)
{
    (((struct o7C_uint *)(a4))->v) = 0x1;
    *(unsigned char *)(((a4 + 0x1) + 0x3)) = 0x0;
    *(unsigned char *)(((a4 + 0x1) + 0x2)) = 0x0;
    *(unsigned char *)(((a4 + 0x1) + 0x1)) = 0x0;
    *(unsigned char *)(((a4 + 0x1) + 0x0)) = 0x0;
    return 0x0;
}

int FUN_0c030412(int a4)
{
    register int t0;

    t0 = (((struct o78_int *)(a4))->v);
    if (((unsigned short)(*(short *)((0xC5426D8 + ((((t0 << 2) + t0) << 2) << 1)))) & 0x8000) != 0) {
        return 0x1;
    }
    return 0x0;
}

int FUN_0c030436(void)
{
    *(volatile signed char *)0xC5429B5;
    return 0x1;
}

int FUN_0c030442(int a4)
{
    (((struct o0_uchar *)0xC3BD444)->v) = ((*(signed char *)0xC3BD444) | ((int)0x1 << (int)((((struct o78_int *)(a4))->v))));
    (((struct o1_uchar *)0xC3BD444)->v) = ((*(signed char *)0xC3BD445) | ((int)0x1 << (int)((((struct o78_int *)(a4))->v))));
    (((struct o2_uchar *)0xC3BD444)->v) = ((int)0x1 << (int)((((struct o78_int *)(a4))->v)));
    (((struct o4_uchar *)0xC3BD444)->v) = ((*(signed char *)0xC3BD448) & (~((int)0x1 << (int)((((struct o78_int *)(a4))->v)))));
    (((struct o5_uchar *)0xC3BD444)->v) = ((*(signed char *)0xC3BD449) & (~((int)0x1 << (int)((((struct o78_int *)(a4))->v)))));
    (((struct o81_uchar *)(a4))->v) = 0x0;
    (((struct o58_ushort *)(a4))->v) = 0x0;
    (((struct o80_uchar *)(a4))->v) = 0x0;
    (((struct o44_ushort *)(a4))->v) = 0x0;
    *(unsigned int *)((a4 + 0x24)) = 0x0;
    *(unsigned int *)((a4 + 0x20)) = 0x0;
    (((struct o82_uchar *)(a4))->v) = 0xFFFFFFFF;
    return FUN_0c04309a(((((struct o78_int *)(a4))->v)));
}


void FUN_0c0305d8(int a4)
{
    int t0;
    register int t1;

    if ((*(signed char *)0xC542254) == 0) {
        if (((*(signed char *)0xC5429B5) == 0) && (t0 = (((struct o78_int *)(a4))->v), t1 = *(int *)((0xC5423D0 + ((t0 << 2) << 2))), t1 != 2)) {
            (((struct o7C_uint *)(a4))->v) = 0x0;
            *(unsigned char *)(((a4 + 0x1) + 0x3)) = 0x0;
            *(unsigned char *)(((a4 + 0x1) + 0x2)) = 0x0;
            *(unsigned char *)(((a4 + 0x1) + 0x1)) = 0x0;
            *(unsigned char *)(((a4 + 0x1) + 0x0)) = 0x0;
            return;
        }
        t0 = FUN_0c0304e8(a4, 0x0);
        if (t0 != 0) {
            FUN_0c05aab6(0x0, 0x3);
    return;
        }
        return;
    }
}

int FUN_0c03062a(int a4)
{
    (((struct o44_ushort *)(a4))->v) = 0x0;
    (((struct o4A_uchar *)(a4))->v) = 0x0;
    (((struct o4B_uchar *)(a4))->v) = 0x0;
    return 0x4B;
}

int FUN_0c03063c(int a4, int a5)
{
    register int t0;
    register int t9;
    int t2;
    int t5;

    t0 = (((struct o78_int *)(a4))->v);
    t9 = 0x78;
    if ((((unsigned char)(*(signed char *)0xC3BD445) & ((int)0x1 << (int)t0)) == 0) && (t2 = *(signed char *)0xC3BD447, ((unsigned char)t2 & ((int)0x1 << (int)t0)) == 0)) {
        FUN_0c03062a(a4);
        if (((*(signed char *)0xC542264) == 0) && (t5 = *(signed char *)0xC5429AC, t5 != 0)) {
            (((struct o7C_uint *)(a4))->v) = 0x3;
        } else {
            (((struct o7C_uint *)(a4))->v) = 0x4;
        }
        *(unsigned char *)(((a4 + 0x1) + 0x3)) = 0x0;
        *(unsigned char *)(((a4 + 0x1) + 0x2)) = 0x0;
        *(unsigned char *)(((a4 + 0x1) + 0x1)) = 0x0;
        *(unsigned char *)(((a4 + 0x1) + 0x0)) = 0x0;
        t9 = 0x0;
    }
    return t9;
}

int FUN_0c03069a(int a4)
{
    register int t6;

    (((struct o0_uchar *)0xC3BD445)->v) = ((*(signed char *)0xC3BD445) | ((int)0x1 << (int)((((struct o78_int *)(a4))->v))));
    (((struct o1_uchar *)0xC3BD445)->v) = ((int)0x1 << (int)((((struct o78_int *)(a4))->v)));
    (((struct o3_uchar *)0xC3BD445)->v) = ((*(signed char *)0xC3BD448) | ((int)0x1 << (int)((((struct o78_int *)(a4))->v))));
    t6 = (int)((unsigned int)(*(int *)((a4 + 0x20))) % (unsigned int)0x64);
    if ((unsigned int)t6 < (unsigned int)0x63) {
        *(unsigned int *)((a4 + 0x20)) = ((*(int *)((a4 + 0x20))) + 0x1);
    }
    return t6;
}


int FUN_0c030728(int a4)
{

    register int R1;
    register int R2;
    register int R3;
    register int R9;
    register int R10;
    register int R11;
    register int R12;
    register int R13;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    v0_0 = a4;
    v0_4 = *(signed char *)((v0_0 + 0x2));
    v0_2 = (v0_4);
    v0_1 = (0x9);
    v0_3 = (0x59);
    if ((v0_4 == 0)) goto L_C03073C;
    if ((v0_2 == 1)) goto L_C03074C;
    L_C030860:;
    return v0_2;
    L_C03074C:;
    v0_4 = (0x4);
    if (((*(signed char *)0xC5423C1) == 0)) goto L_C030760;
    (((struct o4A_uchar *)(v0_0))->v) = v0_1;
    (((struct o4B_uchar *)(v0_0))->v) = v0_3;
    v0_2 = (0x4B);
    L_C030760:;
    v0_1 = (0x0);
    if (((*(signed char *)0xC542264) == 0)) goto L_C0307BC;
    (((struct o4A_uchar *)(v0_0))->v) = v0_1;
    (((struct o4B_uchar *)(v0_0))->v) = v0_1;
    (((struct o7C_uint *)(v0_0))->v) = v0_4;
    *(unsigned char *)(((v0_0 + 0x1) + 0x3)) = v0_1;
    *(unsigned char *)(((v0_0 + 0x1) + 0x2)) = v0_1;
    *(unsigned char *)(((v0_0 + 0x1) + 0x1)) = v0_1;
    *(unsigned char *)(((v0_0 + 0x1) + 0x0)) = v0_1;
    return v0_1;
    L_C0307BC:;
    if (((*(signed char *)0xC542254) != 0)) goto L_C030860;
    if (((*(signed char *)(((((((struct o78_int *)(v0_0))->v)) * 0x98) + 0xC541D2A))) != 0)) goto L_C03081C;
    v0_5 = *(signed char *)((v0_0 + 0x4B));
    (((struct o4B_uchar *)(v0_0))->v) = (v0_5 - 1);
    v0_2 = (0x4B);
    if (((int)(signed char)((v0_5 - 1) + 0x1) > 0)) goto L_C0307F2;
    (((struct o4A_uchar *)(v0_0))->v) = ((*(signed char *)(((v0_0 + 0x4A) + 0x0))) - 1);
    *(unsigned char *)((v0_0 + v0_2)) = v0_3;
    L_C0307F2:;
    if (((int)(*(signed char *)(((v0_0 + 0x4A) + 0x0))) >= (int)0x7)) goto L_C03081C;
    v0_2 = (((struct o78_int *)(v0_0))->v);
    if ((((unsigned short)(*(short *)((((((v0_2 << 2) + v0_2) << 2) << 1) + 0xC542868))) & 0x3CF) == 0)) goto L_C03081C;
    (((struct o4B_uchar *)(v0_0))->v) = v0_1;
    L_C03081C:;
    v0_3 = ((v0_0 + 0x4A));
    if (((int)(*(signed char *)(((v0_0 + 0x4A) + 0x0))) > 0)) goto L_C03084E;
    if (((int)(*(signed char *)((v0_3 + 0x1))) > 0)) goto L_C03084E;
    (((struct o4A_uchar *)(v0_0))->v) = v0_1;
    (((struct o4B_uchar *)(v0_0))->v) = v0_1;
    (((struct o7C_uint *)(v0_0))->v) = v0_4;
    *(unsigned char *)(((v0_0 + 0x1) + 0x3)) = v0_1;
    *(unsigned char *)(((v0_0 + 0x1) + 0x2)) = v0_1;
    *(unsigned char *)(((v0_0 + 0x1) + 0x1)) = v0_1;
    *(unsigned char *)(((v0_0 + 0x1) + 0x0)) = v0_1;
    return v0_1;
    L_C03084E:;
    v0_0 = FUN_0c0306de(v0_0, 0x1);
    v0_2 = (v0_0);
    if ((v0_0 == 0)) goto L_C030860;
    return FUN_0c05aab6(0x0, 0x3);
    L_C03073C:;
    (((struct o4A_uchar *)(v0_0))->v) = v0_1;
    (((struct o4B_uchar *)(v0_0))->v) = v0_3;
    v0_2 = *(signed char *)((v0_0 + 0x2));
    *(unsigned char *)((v0_0 + 0x2)) = (v0_2 + 0x1);
    v0_2 = ((v0_2 + 0x1));
    goto L_C03074C;
}

int FUN_0c030866(int a4)
{
    register int t0;
    register int t1;
    register int t3;

    t0 = (((struct o78_int *)(a4))->v);
    (((struct o6C_uint *)(a4))->v) = (unsigned short)(*(short *)(((((((t0 << 2) + t0) << 2) << 1) + 0xC542854) + 0x14)));
    t0 = (((struct o78_int *)(a4))->v);
    t1 = *(short *)(((((((t0 << 2) + t0) << 2) << 1) + 0xC542854) + 0x10));
    if (((unsigned short)t1 & 0x3C00) != 0) {
        if ((int)((((struct o70_short *)(a4))->v)) < (int)0xF) {
            (((struct o70_ushort *)(a4))->v) = (((((struct o70_short *)(a4))->v)) + 0x1);
        }
    } else {
        (((struct o70_ushort *)(a4))->v) = 0x0;
    }
    t0 = (unsigned short)t1;
    if ((int)((((struct o70_short *)(a4))->v)) >= (int)0xF) {
        t1 = *(short *)(((a4 + 0x70) + 0x2));
        *(unsigned short *)(((a4 + 0x70) + 0x2)) = (t1 ^ 0x1);
        t0 = (short)(t1 ^ 0x1);
        if ((short)(t1 ^ 0x1) != 0) {
            t1 = (((struct o78_int *)(a4))->v);
            t3 = *(short *)(((0xC542854 + ((((t1 << 2) + t1) << 2) << 1)) + 0x10));
            (((struct o6C_uint *)(a4))->v) = (unsigned short)t3;
            t0 = (unsigned short)t3;
        }
    }
    return t0;
}

int FUN_0c030baa(int a4)
{
    (((struct o0_uchar *)0xC3BD444)->v) = ((*(signed char *)0xC3BD444) & (~((int)0x1 << (int)((((struct o78_int *)(a4))->v)))));
    (((struct o4_uchar *)0xC3BD444)->v) = ((*(signed char *)0xC3BD448) & (~((int)0x1 << (int)((((struct o78_int *)(a4))->v)))));
    (((struct o5_uchar *)0xC3BD444)->v) = ((*(signed char *)0xC3BD449) & (~((int)0x1 << (int)((((struct o78_int *)(a4))->v)))));
    (((struct o81_uchar *)(a4))->v) = 0x0;
    (((struct o56_uchar *)(a4))->v) = 0x0;
    (((struct o80_uchar *)(a4))->v) = 0x0;
    (((struct o58_ushort *)(a4))->v) = 0x0;
    *(unsigned int *)((a4 + 0x24)) = 0x0;
    *(unsigned int *)((a4 + 0x20)) = 0x0;
    return FUN_0c04309a(((((struct o78_int *)(a4))->v)));
}

int FUN_0c030c2c(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t3;

    t0 = *(signed char *)0xC541F41;
    t1 = (unsigned char)t0;
    if ((unsigned char)t0 != 7) {
        t1 = (unsigned char)t0;
        if ((unsigned char)t0 != 8) {
            t0 = *(signed char *)((a4 + 0x2));
            if (t0 != 0) {
                t3 = t0;
                if (t0 != 1) {
                } else {
                    if ((*(short *)((a4 + 0xA))) != 0) {
                        *(unsigned short *)((a4 + 0xA)) = ((*(short *)((a4 + 0xA))) - 1);
                    }
                    t0 = *(short *)((a4 + 0xA));
                    t3 = t0;
                    if (t0 == 0) {
                        (((struct o7C_uint *)(a4))->v) = 0x0;
                        *(unsigned char *)(((a4 + 0x1) + 0x3)) = 0x0;
                        *(unsigned char *)(((a4 + 0x1) + 0x2)) = 0x0;
                        *(unsigned char *)(((a4 + 0x1) + 0x1)) = 0x0;
                        *(unsigned char *)(((a4 + 0x1) + 0x0)) = 0x0;
                        t3 = 0x0;
                    }
                }
                t0 = t3;
            } else {
                FUN_0c030baa(a4);
                *(unsigned short *)((a4 + 0xA)) = 0xB4;
                t3 = *(signed char *)((a4 + 0x2));
                *(unsigned char *)((a4 + 0x2)) = (t3 + 0x1);
                t0 = (t3 + 0x1);
            }
            t1 = t0;
        }
    }
    return t1;
}
