/* Straight-line functions with calls and guards (batch gen_ps): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o126_uchar { char p[0x126]; unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o420_ushort { char p[0x420]; unsigned short v; };
struct o422_uchar { char p[0x422]; unsigned char v; };
struct o423_uchar { char p[0x423]; unsigned char v; };
struct o424_uchar { char p[0x424]; unsigned char v; };
struct o428_uchar { char p[0x428]; unsigned char v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAA_uchar { char p[0xAA]; unsigned char v; };
struct oAB_uchar { char p[0xAB]; unsigned char v; };
extern int FUN_0c03f346();
int FUN_0c0c2a80(int);
int FUN_0c0c2ab6(int, int);
extern int FUN_0c0c2d56();
extern int FUN_0c0c4770();
int FUN_0c0c4b76(int, int, int);
int FUN_0c0c4bcc(int);
int FUN_0c0c4c1c(int);
int FUN_0c0c5024(int);
int FUN_0c0c52c4(int);
int FUN_0c0c8c08(int);
int FUN_0c0c8c36(int);
int FUN_0c0cf440(int, int, int);
int FUN_0c0efb30(int, int);
extern int FUN_0c0efee0();
int FUN_0c0f02aa(int);
int FUN_0c0f02c4(int);
int FUN_0c0f085c(int, int);
int nlRand(void);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c0f0370(int a4, int a5, int a6, int a7, float f4);

int FUN_0c0f0370(int a4, int a5, int a6, int a7, float f4)
{
    int stk[6];
    register int t0;
    register int t3;
    register int t23;
    register int t24;
    register int t36;
    register int t40;
    register int t43;
    register int t46;
    register int t50;
    register int t52;
    register int t54;
    register int t55;
    register int t58;
    register int t20;
    register int t30;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 == 1) {
        } else {
            return ((int (*)(int, int, int, int))(FUN_0c03f346))(a4, a5, a6, a7);
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct o41C_uchar *)(a4))->v) = 0xC3;
        (((struct o424_uchar *)(a4))->v) = 0xA;
        t3 = ((int (*)(int, int, int, int, float))(FUN_0c0c2d56))(a4, 0x0, (*(signed char *)((a4 + 0x1))), a7, f4);
        FUN_0c0c2ab6(a4, (*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0x12))));
        (((struct o420_ushort *)(a4))->v) = (*(short *)(((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0x1A)));
        (((struct o160_float *)(a4))->v) = (float)(*(short *)(((0xC2738B8 + ((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34)) + 0x1A)));
        (((struct o422_uchar *)(a4))->v) = 0x0;
        (((struct o423_uchar *)(a4))->v) = 0xFFFFFFFF;
        if ((int)(*(signed char *)((a4 + 0x2))) >= (int)0x10) {
            { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)((((((*(signed char *)((a4 + 0x2))) & 0xF) << 2) << 2) + 0xC1CD27C)); }
            *(unsigned int *)((a4 + 0x38)) = (*(int *)(((0xC1CD27C + ((((*(signed char *)((a4 + 0x2))) & 0xF) << 2) << 2)) + 0xC)));
            t20 = 0xF;
        }
        (((struct o126_uchar *)(a4))->v) = 0x0;
        (((struct oAA_uchar *)(a4))->v) = 0x1;
        (((struct oAB_uchar *)(a4))->v) = 0x4;
        if ((int)(*(signed char *)0xC54098D) >= (int)0xE) {
            return ((int (*)(int, int))(FUN_0c03f346))(a4, t20);
        }
        t23 = nlRand();
        t24 = (t23 % 0x2);
        if (t24 != 0) {
            t30 = ((int)((int)(nlRand()) % (int)0xA));
        } else {
            t30 = ((int)((int)(nlRand()) % (int)0x5));
        }
        *(unsigned short *)(((0x428 + a4) + 0x4)) = (((short)t30 * (short)0x3C) + 0x1E0);
        (((struct o428_uchar *)(a4))->v) = 0x0;
    }
    t36 = *(signed char *)((a4 + 0x41D));
    if ((unsigned int)t36 >= (unsigned int)0xC) {
        return t36;
    }
    switch ((t36 << 1)) {
        case 0:
        {
            return ((int (*)(int))(FUN_0c0c4770))(a4);
        }
        case 2:
        {
            return ((int (*)(int))(FUN_0c0efee0))(a4);
        }
        case 4:
        {
            FUN_0c0c4b76(a4, 0x0, 0x0);
            FUN_0c0f02c4(a4);
            t40 = FUN_0c0f02aa(a4);
            t43 = t40;
            if (t40 == 0) {
            } else {
                t43 = (((int (*)(int, int, int))(FUN_0c0c2d56))(a4, 0x1, (*(signed char *)((a4 + 0x1)))));
            }
            return t43;
        }
        case 6:
        {
            return FUN_0c0c4bcc(a4);
        }
        case 8:
        {
            return FUN_0c0c4c1c(a4);
        }
        case 10:
        {
            return FUN_0c0c5024(a4);
        }
        case 12:
        {
            return FUN_0c0c52c4(a4);
        }
        case 14:
        {
            return FUN_0c0c8c08(a4);
        }
        case 16:
        {
            FUN_0c0c8c36(a4);
            t46 = *(signed char *)((a4 + 0x41D));
            if (t46 == 10) {
                (((struct o428_uchar *)(a4))->v) = 0x1;
            }
            return t46;
        }
        case 18:
        case 20:
        {
            FUN_0c0f085c((a4 + 0x28), 0x0);
            t50 = ((int (*)(int, int, int))(FUN_0c0c2d56))(a4, 0xB, (*(signed char *)((a4 + 0x1))));
            FUN_0c0cf440((a4 + 0x28), 0x0, 0x0);
            t52 = thunk_FUN_0c05abb2(0x31, (a4 + 0x28));
            if ((*(signed char *)(((0x428 + a4) + 0x0))) != 0) {
                t54 = nlRand();
                t55 = (t54 % 0x2);
                if (t55 != 0) {
                    t58 = (int)((int)(nlRand()) % (int)0x3);
                    return FUN_0c0efb30((a4 + 0x28), t58);
                }
                return t55;
            }
            return t52;
        }
        default:
        {
            return FUN_0c0c2a80(a4);
        }
    }
}
