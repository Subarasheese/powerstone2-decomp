/* Straight-line functions with calls and guards (batch gen_tp): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
int FUN_0c036de8(int);
int FUN_0c038e88(int);
int FUN_0c03ea04(int, int);
int FUN_0c03eff6(void);
int FUN_0c03f0aa(void);
extern int FUN_0c03f40c();
int FUN_0c0527e6(void);
int FUN_0c0573c0(int, int, int);
int FUN_0c0573cc(int, int, int);
int FUN_0c058bd4(void);
int FUN_0c058c32(void);
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
int FUN_0c0fb712(void);

int FUN_0c0fb712(void)
{
    int stk[3];
    int t0;
    int t35;
    int t17;
    int t18;
    int t23;
    int t49;
    int t51;
    int t53;

    t0 = *(signed char *)0xC541F43;
    if ((unsigned char)t0 != 0) {
    } else {
        (((struct o0_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F43) + 0x1);
        FUN_0c03eff6();
        FUN_0c0527e6();
        FUN_0c03ea04(0x3, 0x0);
        (((struct o0_uint *)0xC542440)->v) = 0xFF004000;
        (((struct o4_uint *)0xC542440)->v) = 0xFF004000;
        (((struct o8_uint *)0xC542440)->v) = 0xFF004000;
        FUN_0c0573c0(0xFFFFFFFF, 0x0, 0x1E);
        FUN_0c036de8(0x19);
        (((struct o1_uchar *)0xC541F43)->v) = 0x0;
        *(unsigned short *)0xC541F50 = 0x0;
        FUN_0c16f7ba();
        FUN_0c0fb56c();
        FUN_0c058c32();
        FUN_0c0fb54c();
    }
    if (((unsigned char)t0 == 0) || ((unsigned char)t0 == 1)) {
        if ((*(short *)0xC541F50) != 1) {
        } else {
            t17 = FUN_0c0fb608();
            if (t17 != 0) {
                t18 = FUN_0c0fb66a();
                if (t18 != 0) {
                    FUN_0c0fb5ca();
                }
                (((struct o0_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F43) + 0x1);
                (((struct o1_uchar *)0xC541F43)->v) = 0x0;
            } else {
                t23 = FUN_0c0fb66a();
                if (t23 != 0) {
                    FUN_0c0fb5ca();
                }
                (((struct o0_uchar *)0xC541F43)->v) = 0x3;
                (((struct o1_uchar *)0xC541F43)->v) = 0x0;
                *(unsigned short *)0xC541F50 = 0x0;
            }
        }
    } else {
        if ((unsigned char)t0 != 2) {
            if ((unsigned char)(*(signed char *)0xC541F44) == 0) {
                (((struct o1_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F44) + 0x1);
                *(unsigned short *)0xC541F52 = 0xC;
                FUN_0c0573cc(0xFFFFFFFF, 0x0, 0xA);
            } else {
            }
            t35 = *(short *)0xC541F52;
            *(unsigned short *)0xC541F52 = (t35 - 1);
            if ((int)(short)(t35 - 1) <= 0) {
                FUN_0c05f222();
                FUN_0c03f0aa();
            } else {
            }
        } else {
            if ((unsigned char)(*(signed char *)0xC541F44) == 0) {
                *(unsigned short *)0xC541F50 = 0x0;
                FUN_0c0fe4ec(0x1);
                (((struct o1_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F44) + 0x1);
                FUN_0c0fb592();
                FUN_0c058bd4();
            } else {
            }
            return FUN_0c0fe530();
        }
    }
    t49 = ((int (*)(int, int))(FUN_0c03f40c))(0x5, 0xC541F43);
    FUN_0c038e88(0x5);
    t51 = ((int (*)(int))(FUN_0c03f40c))(0x8);
    FUN_0c038e88(0x8);
    t53 = ((int (*)(int))(FUN_0c03f40c))(0x7);
    return (FUN_0c038e88(0x7));
}
