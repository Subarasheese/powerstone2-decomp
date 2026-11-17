/* game/demo: functions 0C05C5F0-0C05D106, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
extern int FUN_0c036de8();
int FUN_0c038548(int);
int FUN_0c038e88(int);
int FUN_0c03eff6(void);
extern int FUN_0c03f40c();
int FUN_0c0573c0(int, int, int);
int FUN_0c0573cc(int, int, int);
int FUN_0c05aaf6(int);
int game_reset_objects(void);
int FUN_0c05cf9a(int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c05d05c(void);
int FUN_0c0f6cac(void);
int FUN_0c0f7874(void);
int FUN_0c05cdc0(int a4, int a5, int a6);

int FUN_0c05cdc0(int a4, int a5, int a6)
{
    int stk[3];
    register int t0;
    register int t9;
    register int t13;
    register int t24;
    register int t31;
    register int t38;
    register int t6;

    t0 = *(signed char *)0xC541F42;
    if ((unsigned char)t0 != 0) {
        if (((unsigned char)t0 != 1) && (((unsigned char)t0 != 2) && ((unsigned char)t0 != 3))) {
            if ((unsigned char)t0 != 4) {
                t6 = 0xC541F42;
            } else {
                (((struct o1_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F42) + 0x1);
                FUN_0c036de8(0x14, a5, a6);
                FUN_0c0573c0(0xFFFFFFFF, 0x0, 0x1E);
                FUN_0c05aaf6(0x8D);
            }
            FUN_0c0f7874();
            t9 = *(signed char *)0xC541F44;
            if ((unsigned char)t9 != 0) {
                if ((unsigned char)t9 != 1) {
                    if ((unsigned char)t9 != 2) {
                        if ((unsigned char)t9 != 3) {
                        } else {
                            t13 = *(short *)0xC541F50;
                            *(unsigned short *)0xC541F50 = (t13 - 1);
                            if ((int)(short)(t13 - 1) <= 0) {
                                (((struct o0_uchar *)0xC541F41)->v) = 0x0;
                                (((struct o1_uchar *)0xC541F41)->v) = 0x0;
                                (((struct o2_uchar *)0xC541F41)->v) = 0x0;
                            }
                        }
                    } else {
                        if (((*(int *)0xC542098) & 32) != 0) {
                            FUN_0c05cf9a(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
                        }
                        FUN_0c05d05c();
                        FUN_0c0f6cac();
                        t24 = *(short *)0xC541F50;
                        *(unsigned short *)0xC541F50 = (t24 - 1);
                        if ((int)(short)(t24 - 1) <= 0) {
                            (((struct o3_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F44) + 0x1);
                            *(unsigned short *)0xC541F50 = 0x21;
                            FUN_0c0573cc(0xFFFFFFFF, 0x0, 0x1E);
                        }
                    }
                } else {
                    t31 = *(short *)0xC541F50;
                    *(unsigned short *)0xC541F50 = (t31 - 1);
                    if ((int)(short)(t31 - 1) <= 0) {
                        (((struct o3_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F44) + 0x1);
                        *(unsigned short *)0xC541F50 = 0x12C;
                    }
                }
            } else {
                (((struct o3_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F44) + 0x1);
                *(unsigned short *)0xC541F50 = 0xB4;
                t38 = *(short *)0xC541F50;
                *(unsigned short *)0xC541F50 = (t38 - 1);
                if ((int)(short)(t38 - 1) <= 0) {
                    (((struct o3_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F44) + 0x1);
                    *(unsigned short *)0xC541F50 = 0x12C;
                }
            }
        } else {
            (((struct o1_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F42) + 0x1);
        }
    } else {
        (((struct o1_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F42) + 0x1);
        (((struct o2_uchar *)0xC541F41)->v) = 0x0;
        (((struct o3_uchar *)0xC541F41)->v) = 0x0;
        game_reset_objects();
        FUN_0c0573cc(0xFFFFFFFF, 0x0, 0x2);
        FUN_0c03eff6();
    }
    FUN_0c03f40c(0x5);
    FUN_0c038548(0x5);
    FUN_0c038e88(0x5);
    FUN_0c03f40c(0x8);
    return FUN_0c038e88(0x8);
}
