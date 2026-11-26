/* Straight-line functions with calls and guards (batch gen_su): generated from the code and checked by tests. Calls are
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
int FUN_0c05cf8e(void);
int FUN_0c0f6cac(void);
int FUN_0c0f7874(void);
int FUN_0c05ca80(void);

int FUN_0c05ca80(void)
{
    int stk[3];
    register int t0;
    register int t8;
    register int t13;
    register int t18;
    register int t29;

    t0 = *(signed char *)0xC541F42;
    if ((unsigned char)t0 != 0) {
    } else {
        (((struct o1_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F42) + 0x1);
        (((struct o2_uchar *)0xC541F41)->v) = 0x0;
        (((struct o3_uchar *)0xC541F41)->v) = 0x0;
        FUN_0c03eff6();
        FUN_0c036de8(0x2);
        FUN_0c0573c0(0xFFFFFFFF, 0x0, 0x1E);
    }
    if (((unsigned char)t0 == 0) || ((unsigned char)t0 == 1)) {
        FUN_0c0f7874();
        t8 = *(signed char *)0xC541F44;
        if ((unsigned char)t8 == 0) {
            (((struct o3_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F44) + 0x1);
            *(unsigned short *)0xC541F50 = 0xB4;
        }
        if (((unsigned char)t8 == 0) || ((unsigned char)t8 == 1)) {
            t13 = *(short *)0xC541F50;
            *(unsigned short *)0xC541F50 = (t13 - 1);
            if ((int)(short)(t13 - 1) <= 0) {
                (((struct o3_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F44) + 0x1);
                *(unsigned short *)0xC541F50 = 0x12C;
            }
        } else {
            if ((unsigned char)t8 != 2) {
                if ((unsigned char)t8 != 3) {
                } else {
                    t18 = *(short *)0xC541F50;
                    *(unsigned short *)0xC541F50 = (t18 - 1);
                    if ((int)(short)(t18 - 1) <= 0) {
                        (((struct o0_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F41) + 0x1);
                        (((struct o1_uchar *)0xC541F41)->v) = 0x0;
                        (((struct o2_uchar *)0xC541F41)->v) = 0x0;
                    }
                }
            } else {
                if (((*(int *)0xC542098) & 16) != 0) {
                    FUN_0c05cf8e();
                }
                FUN_0c0f6cac();
                t29 = *(short *)0xC541F50;
                *(unsigned short *)0xC541F50 = (t29 - 1);
                if ((int)(short)(t29 - 1) <= 0) {
                    (((struct o3_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F44) + 0x1);
                    *(unsigned short *)0xC541F50 = 0x21;
                    FUN_0c0573cc(0xFFFFFFFF, 0x0, 0x1E);
                }
            }
        }
    }
    FUN_0c03f40c(0x5);
    FUN_0c038548(0x5);
    FUN_0c038e88(0x5);
    FUN_0c03f40c(0x8);
    return FUN_0c038e88(0x8);
}
