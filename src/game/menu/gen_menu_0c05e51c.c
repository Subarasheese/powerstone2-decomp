/* game/menu: functions 0C05E51C-0C05EDC0, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_short { short v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o4_short { char p[0x4]; short v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
int FUN_0c036de8(int);
int FUN_0c03eff6(void);
int FUN_0c04a99c(void);
int FUN_0c04d76c(void);
int FUN_0c0522be(int);
int FUN_0c0573c0(int, int, int);
extern int FUN_0c05e6e0();
int FUN_0c05f7a0(int);
int dbg_set_cell_size(int, int);
int nlPuts(int);
int nlLocate(int, int);
int FUN_0c17a550(int);
int FUN_0c05e51c(int a4, int a5, int a6);
int FUN_0c05e53c(void);
int FUN_0c05e566(int a4, int a5, int a6, int a7);
int FUN_0c05e59a(int a4, int a5);
int FUN_0c05e5ca(int a4, int a5, int a6);
int FUN_0c05e604(int a4, int a5, int a6);
int FUN_0c05e6b2(void);
int FUN_0c05e83e(void);
int FUN_0c05e9fc(void);
int FUN_0c05ea34(void);
int FUN_0c05ea5e(int a4, int a5);
int FUN_0c05ec96(int a4, int a5);

int FUN_0c05e51c(int a4, int a5, int a6)
{
    register int t0;

    t0 = *(signed char *)0xC541F40;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            return FUN_0c05e83e();
        }
        return ((int (*)(int, int, int))(FUN_0c05e6e0))(a4, a5, a6);
    }
    FUN_0c05e53c();
    return ((int (*)(void))(FUN_0c05e6e0))();
}

int FUN_0c05e53c(void)
{
    (((struct o0_uchar *)0xC541F40)->v) = ((*(signed char *)0xC541F40) + 0x1);
    (((struct o1_uchar *)0xC541F40)->v) = 0x0;
    (((struct o2_uchar *)0xC541F40)->v) = 0x0;
    FUN_0c0522be((*(int *)0xC241B54));
    FUN_0c03eff6();
    return FUN_0c036de8(0x1);
}

int FUN_0c05e566(int a4, int a5, int a6, int a7)
{
    dbg_set_cell_size(0x10, 0x10);
    nlLocate(a5, a6);
    FUN_0c17a550(a7);
    nlPuts(a4);
    return dbg_set_cell_size(0x8, 0x8);
}

int FUN_0c05e59a(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;

    if ((int)a5 > 0) {
        t0 = 0x0;
        t1 = (0x0 + a4);
        for (;;) {
            t2 = FUN_0c05e566((*(int *)((t1 + 0xC))), (*(int *)((t1 + 0x0))), (*(int *)((t1 + 0x4))), (*(int *)((t1 + 0x8))));
            t0 = (t0 + 0x1);
            t1 = (t1 + 0x10);
            if ((int)t0 >= (int)a5) {
                break;
            }
        }
        t0 = t2;
    }
    return t0;
}

int FUN_0c05e5ca(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;

    if ((int)a5 > 0) {
        t0 = 0x0;
        t1 = (0x0 + a4);
        for (;;) {
            t2 = FUN_0c05e566((*(int *)((t1 + 0xC))), (*(int *)((t1 + 0x0))), ((*(int *)((t1 + 0x4))) + a6), (*(int *)((t1 + 0x8))));
            t0 = (t0 + 0x1);
            t1 = (t1 + 0x10);
            if ((int)t0 >= (int)a5) {
                break;
            }
        }
        t0 = t2;
    }
    return t0;
}

int FUN_0c05e604(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    t0 = *(short *)0xC5426D8;
    if (((unsigned short)t0 & 0x2000) != 0) {
        t1 = *(signed char *)(((0xC541F40 + a5) + 0x0));
        if (t1 == 0) {
            *(unsigned char *)(((0xC541F40 + a5) + 0x0)) = (0xFF + a4);
        } else {
            *(unsigned char *)(((0xC541F40 + a5) + 0x0)) = (t1 - 1);
        }
    } else {
        if (((unsigned short)t0 & 0x1000) != 0) {
            if ((unsigned char)(*(signed char *)(((0xC541F40 + a5) + 0x0))) == (a4 - 1)) {
                *(unsigned char *)(((0xC541F40 + a5) + 0x0)) = 0x0;
            } else {
                *(unsigned char *)(((0xC541F40 + a5) + 0x0)) = ((*(signed char *)(((0xC541F40 + a5) + 0x0))) + 0x1);
            }
        }
    }
    t0 = *(signed char *)((a5 + 0xC541F40));
    FUN_0c05e566(0xC1C4258, ((*(int *)((((((unsigned char)t0 << 2) << 2) + a6) + 0x0))) - 2), (*(int *)((((((unsigned char)t0 << 2) << 2) + a6) + 0x4))), 0xFFFFFFFF);
    return FUN_0c05e59a(a6, a4);
}

int FUN_0c05e6b2(void)
{
    register int t0;
    int t1;
    int t4;

    t0 = (((struct o4_short *)0xC5426D4)->v);
    if ((((unsigned short)t0 & 0x8000) != 0) && (t1 = (((struct o0_short *)0xC5426D4)->v), ((unsigned short)t1 & 128) != 0)) {
        return 0x1;
    }
    if (((0x80 & (unsigned short)t0) != 0) && (t4 = (((struct o0_short *)0xC5426D4)->v), ((unsigned short)t4 & 0x8000) != 0)) {
        return 0x1;
    }
    return 0x0;
}

int FUN_0c05e83e(void)
{
    *(unsigned char *)0xC541F5E = 0x0;
    return FUN_0c05f7a0(0x0);
}

int FUN_0c05e9fc(void)
{
    register int t0;
    register int t1;

    FUN_0c04a99c();
    t0 = *(signed char *)0xC541F42;
    t1 = t0;
    if (t0 == 0) {
        FUN_0c0573c0(0xFFFFFFFF, 0x0, 0x1E);
        (((struct o0_uchar *)0xC541F43)->v) = 0x2;
        (((struct o1_uchar *)0xC541F43)->v) = 0x0;
        t0 = FUN_0c03eff6();
        (((struct o8_uint *)0xC542440)->v) = 0xFF000000;
        (((struct o4_uint *)0xC542440)->v) = 0xFF000000;
        (((struct o0_uint *)0xC542440)->v) = 0xFF000000;
        t1 = t0;
    }
    return t1;
}

int FUN_0c05ea34(void)
{
    register int t1;
    register int t3;

    FUN_0c04d76c();
    t1 = *(signed char *)0xC541F42;
    t3 = t1;
    if (t1 == 0) {
        FUN_0c0573c0(0xFF000000, 0x0, 0x1E);
        (((struct o0_uchar *)0xC541F43)->v) = 0x3;
        (((struct o1_uchar *)0xC541F43)->v) = 0x0;
        t3 = 0x0;
    }
    return t3;
}

int FUN_0c05ea5e(int a4, int a5)
{
    register int t0;
    register int t9;
    register int t10;

    t0 = *(short *)0xC5426D8;
    if (((unsigned short)t0 & 0x800) != 0) {
        if ((*(signed char *)((a5 + 0x0))) == 0) {
            *(unsigned char *)((a5 + 0x0)) = (a4 - 1);
        } else {
            *(unsigned char *)((a5 + 0x0)) = ((*(signed char *)((a5 + 0x0))) - 1);
        }
    } else {
        if (((unsigned short)t0 & 0x400) != 0) {
            t9 = *(signed char *)((a5 + 0x0));
            t10 = (t9 + 0x1);
            if (t9 == (a4 - 1)) {
                t10 = 0x0;
            }
            *(unsigned char *)((a5 + 0x0)) = t10;
        }
    }
    return (unsigned short)t0;
}

int FUN_0c05ec96(int a4, int a5)
{

    register int R1;
    register int R2;
    register int R3;
    register int R6;
    register int R9;
    register int R10;
    register int R11;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    v0_0 = a5;
    v0_2 = *(signed char *)0xC541F44;
    v0_0 = ((unsigned char)v0_2);
    v0_3 = (0xC541F3C);
    v0_1 = (0xC541F44);
    if (((unsigned char)v0_2 == 0)) goto L_C05ECE4;
    if ((v0_0 == 1)) goto L_C05ECEE;
    L_C05EDB6:;
    return v0_0;
    L_C05ECEE:;
    FUN_0c05e59a(0xC257DBC, 0x3);
    FUN_0c05e604(0x6, 0x5, 0xC257DDC);
    v0_1 = *(signed char *)((v0_3 + 0x9));
    v0_0 = ((unsigned char)v0_1);
    v0_2 = (0xC5429A8);
    v0_3 = (0xC5429C8);
    if (((unsigned char)v0_1 == 0)) goto L_C05ED20;
    if ((v0_0 == 1)) goto L_C05ED26;
    if ((v0_0 == 2)) goto L_C05ED2E;
    if ((v0_0 == 3)) goto L_C05ED36;
    if ((v0_0 == 4)) goto L_C05ED3E;
    if (!((v0_0 == 5))) goto L_C05ED50;
    v0_1 = (0x2);
    v0_0 = ((v0_2 + 0xE));
    goto L_C05ED4C;
    L_C05ED50:;
    FUN_0c05e59a(((((*(signed char *)((v0_3 + 0x1C2))) << 2) << 2) + 0xC257E3C), 0x1);
    FUN_0c05e59a(((((*(signed char *)((v0_3 + 0x1C3))) << 2) << 2) + 0xC257E6C), 0x1);
    FUN_0c05e59a(((((*(signed char *)((v0_3 + 0x1C4))) << 2) << 2) + 0xC257F6C), 0x1);
    FUN_0c05e59a(((((*(signed char *)((v0_2 + 0xB))) << 2) << 2) + 0xC257EDC), 0x1);
    FUN_0c05e59a(((((*(signed char *)((v0_2 + 0xC))) << 2) << 2) + 0xC257F3C), 0x1);
    FUN_0c05e59a(((((*(signed char *)((v0_2 + 0xE))) << 2) << 2) + 0xC257FFC), 0x1);
    v0_0 = *(signed char *)((v0_3 + 0x1C2));
    *(unsigned char *)((v0_2 + 0xA)) = v0_0;
    v0_0 = (v0_0);
    goto L_C05EDB6;
    L_C05ED4C:;
    FUN_0c05ea5e(v0_1, v0_0);
    goto L_C05ED50;
    L_C05ED3E:;
    v0_0 = ((v0_2 + 0xC));
    L_C05ED42:;
    v0_1 = (0x3);
    goto L_C05ED4C;
    L_C05ED36:;
    v0_1 = (0x6);
    v0_0 = ((v0_2 + 0xB));
    goto L_C05ED4C;
    L_C05ED2E:;
    v0_1 = (0x9);
    v0_0 = ((0x1C4 + v0_3));
    goto L_C05ED4C;
    L_C05ED26:;
    v0_1 = (0x7);
    v0_0 = ((0x1C3 + v0_3));
    goto L_C05ED4C;
    L_C05ED20:;
    v0_0 = ((0x1C2 + v0_3));
    goto L_C05ED42;
    L_C05ECE4:;
    *(unsigned char *)((v0_1 + 0x0)) = ((*(signed char *)((v0_1 + 0x0))) + 0x1);
    *(unsigned char *)((v0_3 + 0x9)) = 0x0;
    goto L_C05ECEE;
}
