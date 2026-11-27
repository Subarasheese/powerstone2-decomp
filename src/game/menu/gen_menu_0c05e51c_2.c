/* game/menu: functions 0C05E51C-0C05EDC0, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o5_uchar { char p[0x5]; unsigned char v; };
int FUN_0c038548(int);
int FUN_0c038566(void);
int FUN_0c038e88(int);
int res_cockpit_faces_release_all(void);
int FUN_0c03eff6(void);
int FUN_0c03f40c(int);
int FUN_0c05e59a(int, int);
int FUN_0c05e604(int, int, int);
int FUN_0c05e6b2(void);
int FUN_0c05e87c(void);
int FUN_0c05e9fc(void);
int FUN_0c05ea34(void);
int FUN_0c05ea98(void);
int FUN_0c05ec96(int, int);
int FUN_0c17106e(void);
int FUN_0c1758d4(int, int, int);
int FUN_0c176996(void);
int FUN_0c05e6e0(int a4, int a5, int a6);

int FUN_0c05e6e0(int a4, int a5, int a6)
{
    register int t0;
    register int t3;
    register int t27;
    register int t53;
    register int t78;

    t0 = *(signed char *)0xC541F42;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
        } else {
            t3 = *(signed char *)0xC541F43;
            if ((unsigned char)t3 != 0) {
                if ((unsigned char)t3 != 1) {
                    if ((unsigned char)t3 != 2) {
                        if ((unsigned char)t3 != 3) {
                            if ((unsigned char)t3 != 4) {
                                if ((unsigned char)t3 != 5) {
                                    if ((unsigned char)t3 != 6) {
                                        if (((unsigned char)t3 != 7) && ((unsigned char)t3 != 8)) {
                                            (((struct o0_uchar *)0xC541F40)->v) = 0x2;
                                            (((struct o1_uchar *)0xC541F40)->v) = 0x0;
                                        } else {
                                            (((struct o2_uchar *)0xC541F40)->v) = 0x0;
                                        }
                                    } else {
                                        FUN_0c05ec96(0xC541F42, a5);
                                    }
                                } else {
                                    FUN_0c05ea98();
                                }
                            } else {
                                FUN_0c176996();
                            }
                        } else {
                            FUN_0c05ea34();
                        }
                    } else {
                        FUN_0c05e9fc();
                    }
                } else {
                    FUN_0c17106e();
                }
            } else {
                FUN_0c1758d4(0xC541F42, a5, a6);
            }
            FUN_0c05e59a(0xC257A9C, 0x1);
            t27 = FUN_0c05e6b2();
            if (t27 != 0) {
                (((struct o2_uchar *)0xC541F40)->v) = 0x0;
                FUN_0c03eff6();
            }
        }
    } else {
        FUN_0c05e59a(0xC2579CC, 0x3);
        FUN_0c05e604(0xA, 0x3, 0xC2579FC);
        if (((unsigned short)(*(short *)0xC5426D8) & 0x200) != 0) {
            (((struct o2_uchar *)0xC541F40)->v) = ((*(signed char *)0xC541F42) + 0x1);
            (((struct o4_uchar *)0xC541F40)->v) = 0x0;
            (((struct o5_uchar *)0xC541F40)->v) = 0x0;
            if ((unsigned char)(*(signed char *)0xC541F43) == 2) {
                FUN_0c05e87c();
            }
        }
    }
    t53 = *(signed char *)0xC541F43;
    t78 = (unsigned char)t53;
    if ((unsigned char)t53 != 2) {
        t78 = (unsigned char)t53;
        if ((unsigned char)t53 != 3) {
            t78 = (unsigned char)t53;
            if ((unsigned char)t53 != 7) {
                FUN_0c038566();
                res_cockpit_faces_release_all();
                FUN_0c03f40c(0x9);
                FUN_0c038548(0x9);
                FUN_0c038e88(0x9);
                FUN_0c03f40c(0x5);
                FUN_0c038548(0x5);
                FUN_0c038e88(0x5);
                FUN_0c03f40c(0x8);
                t78 = (FUN_0c038e88(0x8));
            }
        }
    }
    return t78;
}
