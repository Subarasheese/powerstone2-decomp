/* game/menu/option: functions 0C0FA908-0C0FB8F0, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
int FUN_0c036de8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c038e88(int);
int FUN_0c03ea04(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c03eff6(void);
int FUN_0c03f0aa(void);
extern int FUN_0c03f40c();
int FUN_0c0527e6(void);
int FUN_0c0573c0(int, int, int);
int FUN_0c0573cc(int, int, int);
int FUN_0c058bd4(void);
int FUN_0c058c32(void);
int FUN_0c05b122(int);
int FUN_0c05f222(void);
int FUN_0c0fb54c(void);
int FUN_0c0fb56c(void);
int FUN_0c0fb592(void);
int FUN_0c0fb5ca(void);
int FUN_0c0fb608(void);
int FUN_0c0fb66a(void);
int FUN_0c0fe4ec(int);
int FUN_0c0fe530(void);
int FUN_0c16f7ba(void);
int syCfgSetSoundMode(int);
int FUN_0c0fb712(void);
int FUN_0c0fb8b0(int a4);

int FUN_0c0fb712(void)
{
    int stk[3];
    register int t0;
    register int t11;
    register int t18;
    register int t20;
    register int t22;
    register int t34;
    register int t35;
    register int t40;
    register int t49;
    register int t51;
    register int t53;
    register int t66;
    register int t67;
    register int t72;
    register int t79;
    register int t81;
    register int t83;
    register int t16;
    register int t47;

    t0 = *(signed char *)0xC541F43;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            if ((unsigned char)t0 != 2) {
                if ((unsigned char)(*(signed char *)0xC541F44) == 0) {
                    (((struct o1_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F44) + 0x1);
                    *(unsigned short *)0xC541F52 = 0xC;
                    FUN_0c0573cc(0xFFFFFFFF, 0x0, 0xA);
                } else {
                    t16 = 0xC541F43;
                }
                t11 = *(short *)0xC541F52;
                *(unsigned short *)0xC541F52 = (t11 - 1);
                if ((int)(short)(t11 - 1) <= 0) {
                    FUN_0c05f222();
                    FUN_0c03f0aa();
                } else {
                }
                t18 = ((int (*)(int, int))(FUN_0c03f40c))(0x5, t16);
                FUN_0c038e88(0x5);
                t20 = ((int (*)(int))(FUN_0c03f40c))(0x8);
                FUN_0c038e88(0x8);
                t22 = ((int (*)(int))(FUN_0c03f40c))(0x7);
                return (FUN_0c038e88(0x7));
            }
            if ((unsigned char)(*(signed char *)0xC541F44) == 0) {
                *(unsigned short *)0xC541F50 = 0x0;
                FUN_0c0fe4ec(0x1);
                (((struct o1_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F44) + 0x1);
                FUN_0c0fb592();
                FUN_0c058bd4();
            }
            return FUN_0c0fe530();
        }
        if ((*(short *)0xC541F50) != 1) {
            t47 = 0xC541F43;
        } else {
            t34 = FUN_0c0fb608();
            if (t34 != 0) {
                t35 = FUN_0c0fb66a();
                if (t35 != 0) {
                    FUN_0c0fb5ca();
                }
                (((struct o0_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F43) + 0x1);
                (((struct o1_uchar *)0xC541F43)->v) = 0x0;
            } else {
                t40 = FUN_0c0fb66a();
                if (t40 != 0) {
                    FUN_0c0fb5ca();
                }
                (((struct o0_uchar *)0xC541F43)->v) = 0x3;
                (((struct o1_uchar *)0xC541F43)->v) = 0x0;
                *(unsigned short *)0xC541F50 = 0x0;
            }
        }
        t49 = ((int (*)(int, int))(FUN_0c03f40c))(0x5, t47);
        FUN_0c038e88(0x5);
        t51 = ((int (*)(int))(FUN_0c03f40c))(0x8);
        FUN_0c038e88(0x8);
        t53 = ((int (*)(int))(FUN_0c03f40c))(0x7);
        return (FUN_0c038e88(0x7));
    }
    (((struct o0_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F43) + 0x1);
    FUN_0c03eff6();
    FUN_0c0527e6();
    FUN_0c03ea04(0x3, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
    (((struct o0_uint *)0xC542440)->v) = 0xFF004000;
    (((struct o4_uint *)0xC542440)->v) = 0xFF004000;
    (((struct o8_uint *)0xC542440)->v) = 0xFF004000;
    FUN_0c0573c0(0xFFFFFFFF, 0x0, 0x1E);
    FUN_0c036de8(0x19, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
    (((struct o1_uchar *)0xC541F43)->v) = 0x0;
    *(unsigned short *)0xC541F50 = 0x0;
    FUN_0c16f7ba();
    FUN_0c0fb56c();
    FUN_0c058c32();
    FUN_0c0fb54c();
    if ((*(short *)0xC541F50) != 1) {
    } else {
        t66 = FUN_0c0fb608();
        if (t66 != 0) {
            t67 = FUN_0c0fb66a();
            if (t67 != 0) {
                FUN_0c0fb5ca();
            }
            (((struct o0_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F43) + 0x1);
            (((struct o1_uchar *)0xC541F43)->v) = 0x0;
        } else {
            t72 = FUN_0c0fb66a();
            if (t72 != 0) {
                FUN_0c0fb5ca();
            }
            (((struct o0_uchar *)0xC541F43)->v) = 0x3;
            (((struct o1_uchar *)0xC541F43)->v) = 0x0;
            *(unsigned short *)0xC541F50 = 0x0;
        }
    }
    t79 = ((int (*)(int))(FUN_0c03f40c))(0x5);
    FUN_0c038e88(0x5);
    t81 = ((int (*)(int))(FUN_0c03f40c))(0x8);
    FUN_0c038e88(0x8);
    t83 = ((int (*)(int))(FUN_0c03f40c))(0x7);
    return (FUN_0c038e88(0x7));
}

int FUN_0c0fb8b0(int a4)
{
    syCfgSetSoundMode((((a4 == 0)) ? 1 : 0));
    return FUN_0c05b122(a4);
}
