/* game/unsorted: functions 0C081A3C-0C082922, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o24_short { char p[0x24]; short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o3715_uchar { char p[0x3715]; unsigned char v; };
struct o3716_uchar { char p[0x3716]; unsigned char v; };
struct o3717_uchar { char p[0x3717]; unsigned char v; };
struct o371D_uchar { char p[0x371D]; unsigned char v; };
struct o3721_uchar { char p[0x3721]; unsigned char v; };
struct o3728_uchar { char p[0x3728]; unsigned char v; };
struct o3729_uchar { char p[0x3729]; unsigned char v; };
struct o372D_uchar { char p[0x372D]; unsigned char v; };
struct o372E_uchar { char p[0x372E]; unsigned char v; };
struct o3743_uchar { char p[0x3743]; unsigned char v; };
struct o374A_uchar { char p[0x374A]; unsigned char v; };
struct o3757_uchar { char p[0x3757]; unsigned char v; };
struct o3768_uint { char p[0x3768]; unsigned int v; };
struct o376C_int { char p[0x376C]; int v; };
struct o376C_uint { char p[0x376C]; unsigned int v; };
struct o3770_int { char p[0x3770]; int v; };
struct o3770_uint { char p[0x3770]; unsigned int v; };
struct o37F4_float { char p[0x37F4]; float v; };
struct o37FC_float { char p[0x37FC]; float v; };
struct o382A_ushort { char p[0x382A]; unsigned short v; };
struct o382E_ushort { char p[0x382E]; unsigned short v; };
struct o3832_ushort { char p[0x3832]; unsigned short v; };
struct o383A_ushort { char p[0x383A]; unsigned short v; };
struct o383C_ushort { char p[0x383C]; unsigned short v; };
struct o3840_ushort { char p[0x3840]; unsigned short v; };
struct o90_float { char p[0x90]; float v; };
int FUN_0c059df2(int, int);
int FUN_0c05aaf6(int);
int FUN_0c064f80(int);
int FUN_0c067734(int);
int FUN_0c07c4b0(int, int);
int math_angle_between_points_xz(int, int);
int FUN_0c07d720(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07eaf4(int);
int FUN_0c07ebd0(int);
int FUN_0c081dfc(int, int, int);
int FUN_0c081ec2(int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c15e960(int, int);
int FUN_0c160c38(int);
int FUN_0c160f66(int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c081e68(int a4);
int FUN_0c081ee8(int a4, int a5);
int FUN_0c082310(int a4, int a5, int a6, int a7);
int FUN_0c0827d8(int a4);

int FUN_0c081e68(int a4)
{
    register int t0;
    register int t5;

    t0 = *(signed char *)((a4 + 0x3721));
    t5 = (unsigned char)t0;
    if (((unsigned char)t0 != 0xC0) && (((unsigned char)t0 != 0xC4) && (((unsigned char)t0 != 0xC7) && ((unsigned char)t0 != 0xCC)))) {
        if (((unsigned char)t0 == 70) || (((unsigned char)t0 == 72) || ((unsigned char)t0 == 71))) {
            (((struct o371D_uchar *)(a4))->v) = 0x0;
        }
        FUN_0c0c2d56(((((struct o376C_int *)(a4))->v)), 0xB, (*(signed char *)((a4 + 0x1))));
        (((struct o3721_uchar *)(a4))->v) = 0x0;
        (((struct o376C_uint *)(a4))->v) = 0x0;
        t5 = 0x376C;
    }
    return t5;
}



int FUN_0c0827d8(int a4)
{
    register int t0;

    (((struct o3715_uchar *)(a4))->v) = 0xC;
    (((struct o371D_uchar *)(a4))->v) = 0x1;
    t0 = FUN_0c07ebd0(a4);
    if (t0 != 0) {
        *(unsigned int *)((a4 + 0x38)) = ((*(int *)((0xC5413E8 + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x2F8)))) + (FUN_0c07eaf4(a4)));
    }
    t0 = FUN_0c064f80(a4);
    if (t0 != 0) {
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x2, 0x2, (t0), 0x2, 0x2);
        t0 = 0xE;
    } else {
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x2, 0x16, 0xFFFFFFFF, 0x2, 0x16);
        t0 = 0xB;
    }
    *(unsigned short *)((a4 + 0x1C)) = t0;
    (((struct o372D_uchar *)(a4))->v) = 0x0;
    t0 = 0x3731;
    if ((*(signed char *)((a4 + 0x3731))) == 0) {
        (((struct o372D_uchar *)(a4))->v) = 0x8;
        t0 = 0x372D;
    }
    return t0;
}
