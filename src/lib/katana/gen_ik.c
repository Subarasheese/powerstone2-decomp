/* Straight-line functions with calls and guards (batch gen_ik): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o2C_float { char p[0x2C]; float v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o50_float { char p[0x50]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c059e60(int, int);
int FUN_0c064f02(int);
int FUN_0c1171f0(int);
int FUN_0c1173dc(int, int, int, int);
extern int FUN_0c12d4cc();
int FUN_0c2db30c(void);
int FUN_0c2e715e(int);
int FUN_0c2e7200(int);
int FUN_0c2e732c(void);
int FUN_0c2e76c8(int, int, int, int);
int FUN_0c2e83ae(void);
int memset(int, int, int);
int nlRand(void);
int vmsfs_init_work_new(int);
int vmsfs_init_work_normal(int, int, int);
int vmsfs_setdevicetype(int);
int vmsfs_setretry(int);
int FUN_0c2bdfe2(int a4, int a5, int a6);
int FUN_0c12da56(int a4, int a5, int a6, int a7);
int FUN_0c1082b8(int a4, int a5, int a6, int a7);
int FUN_0c2e7248(int a4, int a5);

int FUN_0c2bdfe2(int a4, int a5, int a6)
{
    register int t0;
    register int t5;
    int t6;
    register int t19;
    register int t4;

    *(unsigned int *)0xC8C4600 = 0xC8C45EC;
    t0 = 0xC8C5044;
    for (;;) {
        *(unsigned int *)((t0 + 0x0)) = 0x0;
        t0 = (t0 + 0x4);
        if ((unsigned int)t0 >= (unsigned int)0xC8C5064) {
            break;
        }
    }
    memset(0xC8C45EC, 0x0, 0x14);
    memset(0xC8C4604, 0x0, 0xA40);
    vmsfs_setdevicetype(0x0);
    (((struct o8_uint *)0xC8C9504)->v) = 0x0;
    t5 = 0x0;
    t6 = 0x1;
    for (;;) {
        t5 = (t5 + 0x1);
        if ((a5 & t6) != 0) {
            t4 = ((((struct o8_int *)0xC8C9504)->v));
            t4 = (t4 + 0x1);
            (((struct o8_uint *)0xC8C9504)->v) = t4;
        }
        t6 = (t6 << 1);
        if ((int)t5 >= (int)0x8) {
            break;
        }
    }
    if (a6 != 0) {
        vmsfs_init_work_normal(a4, a5, a6);
        *(unsigned int *)(((*(int *)0xC8C4600) + 0x8)) = 0x0;
    } else {
        vmsfs_init_work_new(a4);
        *(unsigned int *)(((*(int *)0xC8C4600) + 0x8)) = 0x1;
    }
    (((struct o0_uint *)0xC8C9504)->v) = 0x8;
    (((struct o4_uint *)0xC8C9504)->v) = 0x0;
    vmsfs_setretry(0xA);
    t19 = (((struct o0_int *)0xC8C9504)->v);
    memset(0xC8C92C4, 0x0, (((((t19 << 2) << 1) + t19) << 2) << 1));
    FUN_0c2db30c();
    return 0x0;
}



int FUN_0c2e7248(int a4, int a5)
{
    int stk[4];
    register int t0;
    register int t39;
    register int t4;
    register int t7;
    register int t18;
    register int t26;
    register int t28;
    register int t33;
    register int t5;
    int t6;
    register int t34;

    t0 = *(signed char *)0xC8D644E;
    t39 = (unsigned char)t0;
    if (((unsigned char)t0 & 4) == 0) {
        t4 = *(signed char *)0xC8D644E;
        if (((0x10 & (unsigned char)t4) != 0) && ((t5 = *(signed char *)0xC8D6782, ((unsigned char)t5 & 64) != 0) || (((0x80 & (unsigned char)t4) == 0) && (t6 = *(signed char *)0xC8D677E, ((unsigned char)t6 & 8) != 0)))) {
            t7 = *(signed char *)0xC8D6782;
            (((struct o2_uchar *)0xC8D6780)->v) = (t7 & 0xBF);
            t34 = (t7 & 0xBF);
        } else {
            FUN_0c2e83ae();
            t26 = a5;
            if (a5 == 0) {
                t26 = (*(int *)((((unsigned char)a4 << 2) + 0xC301528)));
            }
            (((struct o0_uchar *)0xC8D6780)->v) = ((*(signed char *)0xC8D6780) | 0x1);
            if (((unsigned char)(*(signed char *)0xC8D644E) & 8) == 0) {
                t18 = 0x2;
                if ((int)(unsigned char)a4 > (int)0x9) {
                } else {
                    t18 = 0x1;
                    if ((int)(unsigned char)a4 > (int)0x63) {
                        t18 = 0x3;
                    }
                }
                FUN_0c2e76c8((unsigned char)a4, 0xA, t18, ((int)stk + 0));
                FUN_0c2e7200(((int)stk + 0));
                FUN_0c2e715e((*(signed char *)0xC8D6443));
            } else {
                FUN_0c2e732c();
                for (;;) {
                    if ((*(signed char *)((t26 + 0x0))) == 0) {
                        break;
                    }
                    t28 = *(signed char *)((t26 + 0x0));
                    t26 = (t26 + 0x1);
                    FUN_0c2e715e(t28);
                }
                FUN_0c2e732c();
            }
            t33 = *(signed char *)0xC8D6780;
            (((struct o0_uchar *)0xC8D6780)->v) = (t33 & 0xFE);
            t34 = (t33 & 0xFE);
        }
        t39 = t34;
    }
    return t39;
}
