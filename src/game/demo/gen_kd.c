/* Straight-line functions with calls and guards (batch gen_kd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
int FUN_0c036de8(int);
int FUN_0c038548(int);
int FUN_0c038e88(int);
int FUN_0c03eff6(void);
int FUN_0c03f40c(int);
int FUN_0c0573c0(int, int, int);
int FUN_0c0573cc(int, int, int);
int FUN_0c05aaf6(int);
int FUN_0c05cf9a(void);
int FUN_0c05d05c(void);
int FUN_0c0f6cac(void);
int FUN_0c0f7874(void);
int game_reset_objects(void);
int FUN_0c05cdc0(int a4, int a5, int a6);

int FUN_0c05cdc0(int a4, int a5, int a6)
{
    int stk[3];
    register int t0;
    register int t9;
    register int t14;
    register int t19;
    register int t30;

    t0 = *(signed char *)0xC541F42;
    if ((unsigned char)t0 != 0) {
        if (((unsigned char)t0 != 1) && (((unsigned char)t0 != 2) && ((unsigned char)t0 != 3))) {
            if ((unsigned char)t0 != 4) {
            } else {
                (((struct o1_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F42) + 0x1);
                FUN_0c036de8(0x14);
                FUN_0c0573c0(0xFFFFFFFF, 0x0, 0x1E);
                FUN_0c05aaf6(0x8D);
            }
            FUN_0c0f7874();
            t9 = *(signed char *)0xC541F44;
            if ((unsigned char)t9 == 0) {
                (((struct o3_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F44) + 0x1);
                *(unsigned short *)0xC541F50 = 0xB4;
            }
            if (((unsigned char)t9 == 0) || ((unsigned char)t9 == 1)) {
                t14 = *(short *)0xC541F50;
                *(unsigned short *)0xC541F50 = (t14 - 1);
                if ((int)(short)(t14 - 1) <= 0) {
                    (((struct o3_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F44) + 0x1);
                    *(unsigned short *)0xC541F50 = 0x12C;
                }
            } else {
                if ((unsigned char)t9 != 2) {
                    if ((unsigned char)t9 != 3) {
                    } else {
                        t19 = *(short *)0xC541F50;
                        *(unsigned short *)0xC541F50 = (t19 - 1);
                        if ((int)(short)(t19 - 1) <= 0) {
                            (((struct o0_uchar *)0xC541F41)->v) = 0x0;
                            (((struct o1_uchar *)0xC541F41)->v) = 0x0;
                            (((struct o2_uchar *)0xC541F41)->v) = 0x0;
                        }
                    }
                } else {
                    if (((*(int *)0xC542098) & 32) != 0) {
                        FUN_0c05cf9a();
                    }
                    FUN_0c05d05c();
                    FUN_0c0f6cac();
                    t30 = *(short *)0xC541F50;
                    *(unsigned short *)0xC541F50 = (t30 - 1);
                    if ((int)(short)(t30 - 1) <= 0) {
                        (((struct o3_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F44) + 0x1);
                        *(unsigned short *)0xC541F50 = 0x21;
                        FUN_0c0573cc(0xFFFFFFFF, 0x0, 0x1E);
                    }
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
