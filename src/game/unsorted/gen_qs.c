/* Straight-line functions with calls and guards (batch gen_qs): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o160_float { char p[0x160]; float v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o2C_float { char p[0x2C]; float v; };
struct o3715_uchar { char p[0x3715]; unsigned char v; };
struct o3723_uchar { char p[0x3723]; unsigned char v; };
struct o3724_uchar { char p[0x3724]; unsigned char v; };
struct o3725_uchar { char p[0x3725]; unsigned char v; };
struct o3726_uchar { char p[0x3726]; unsigned char v; };
struct o3727_uchar { char p[0x3727]; unsigned char v; };
struct o372E_uchar { char p[0x372E]; unsigned char v; };
struct o3730_uchar { char p[0x3730]; unsigned char v; };
struct o374A_uchar { char p[0x374A]; unsigned char v; };
struct o3788_float { char p[0x3788]; float v; };
struct o37A0_float { char p[0x37A0]; float v; };
struct o37A4_float { char p[0x37A4]; float v; };
struct o3818_short { char p[0x3818]; short v; };
struct o382E_ushort { char p[0x382E]; unsigned short v; };
struct o38A2_ushort { char p[0x38A2]; unsigned short v; };
struct o38DC_uchar { char p[0x38DC]; unsigned char v; };
struct o50_float { char p[0x50]; float v; };
struct o5C_float { char p[0x5C]; float v; };
int FUN_0c059e60(int, int);
int FUN_0c059ef6(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07e868(int, int);
int FUN_0c07eaf4(int);
int FUN_0c07ebd0(int);
int FUN_0c07ebfc(int);
int FUN_0c080d2a(int);
int FUN_0c081006(int);
int FUN_0c0812d2(int);
int FUN_0c081378(int);
int FUN_0c081516(int, int);
int FUN_0c1575d4(int, int);
int FUN_0c08159c(int a4, int a5, int a6, int a7);

int FUN_0c08159c(int a4, int a5, int a6, int a7)
{
    int stk[8];
    register int t28;
    register int t33;
    register int t55;
    register int t56;
    register int t23;
    register int R1004;
    register int R1008;
    register int R1012;

    R1004 = *(int *)((int)stk + 0);
    R1008 = *(int *)((int)stk + 4);
    R1012 = *(int *)((int)stk + 8);

    (((struct o3715_uchar *)(a4))->v) = 0x5;
    (((struct o372E_uchar *)(a4))->v) = 0x0;
    (((struct o22_ushort *)(a4))->v) = 0x0;
    (((struct o3723_uchar *)(a4))->v) = a5;
    (((struct o3730_uchar *)(a4))->v) = (FUN_0c07ebfc(a4));
    (((struct o3788_float *)(a4))->v) = ((((struct o2C_float *)(a4))->v));
    if ((int)(*(signed char *)((a4 + 0x3723))) >= (int)0x7) {
        if (!(((((struct o37A0_float *)(a4))->v)) > ((((struct o5C_float *)(a4))->v)))) {
            (((struct o5C_float *)(a4))->v) = ((((struct o37A0_float *)(a4))->v));
        }
        if (((((struct o50_float *)(a4))->v)) > ((((struct o37A4_float *)(a4))->v))) {
            (((struct o50_float *)(a4))->v) = ((((struct o37A4_float *)(a4))->v));
        }
        if (((((struct o160_float *)(a4))->v)) == 0.0f) {
            if ((*(signed char *)((a4 + 0x372C))) == 0) {
                R1012 = 0x29;
                R1008 = 0x4;
                R1004 = 0xFFFFFFFF;
                t23 = (FUN_0c07e79c(a4, 0xFFFFFFFF, 0x4, 0x29, 0xFFFFFFFF, 0x4, 0x29));
            } else {
                R1012 = 0x32;
                R1008 = 0x4;
                R1004 = 0xFFFFFFFF;
                t23 = (FUN_0c07e79c(a4, 0xFFFFFFFF, 0x4, 0x32, 0xFFFFFFFF, 0x4, 0x32));
            }
            return t23;
        }
        if ((*(signed char *)((a4 + 0x371D))) != 0) {
            return 0x371D;
        }
        if ((unsigned short)((((struct o3818_short *)(a4))->v)) == 0x43C) {
            return 0x3818;
        }
        return FUN_0c07e868(a4, 0x9);
    }
    t28 = *(signed char *)((a4 + 0x3723));
    switch (t28) {
    case 4:
        (((struct o374A_uchar *)(a4))->v) = 0xA;
        (((struct o382E_ushort *)(a4))->v) = 0x0;
        FUN_0c1575d4((*(signed char *)((a4 + 0x1))), 0x0);
        FUN_0c059e60(a4, 0x0);
        FUN_0c081516(a4, 0x0);
        FUN_0c080d2a(a4);
        break;
    case 0:
        FUN_0c081516(a4, 0x0);
        FUN_0c080d2a(a4);
        break;
    case 2:
        *(unsigned int *)((a4 + 0x38)) = ((*(int *)((0xC5413E8 + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x2F8)))) + (FUN_0c07eaf4(a4)));
        FUN_0c081516(a4, 0x1);
        FUN_0c081006(a4);
        break;
    case 6:
        t33 = FUN_0c07ebd0(a4);
        if (t33 != 0) {
            *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(short *)((0xC5413E8 + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x2F8)))) + (FUN_0c07eaf4(a4)));
        }
        R1012 = 0x2;
        R1008 = 0x0;
        R1004 = 0xFFFFFFFF;
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x0, 0x2, 0xFFFFFFFF, 0x0, 0x2);
        return FUN_0c0812d2(a4);
    case 3:
        FUN_0c081378(a4);
        (((struct o3724_uchar *)(a4))->v) = 0x0;
        (((struct o3726_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x3726))) + 0x1);
        return 0x3726;
    default:
        FUN_0c081516(a4, 0x0);
        FUN_0c080d2a(a4);
        break;
    }
    FUN_0c059ef6((*(signed char *)((a4 + 0x1))), 0x0);
    (((struct o3725_uchar *)(a4))->v) = 0x0;
    (((struct o3724_uchar *)(a4))->v) = 0x0;
    (((struct o3726_uchar *)(a4))->v) = 0x0;
    (((struct o3727_uchar *)(a4))->v) = 0x0;
    (((struct o38DC_uchar *)(a4))->v) = 0x0;
    t55 = *(signed char *)((a4 + 0x389C));
    t56 = (unsigned char)t55;
    if ((unsigned char)t55 == 120) {
        (((struct o38A2_ushort *)(a4))->v) = 0x0;
        t56 = 0x38A2;
    }
    return t56;
}
