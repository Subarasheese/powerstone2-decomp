/* game/hit: functions 0C066CD8-0C067898, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o11C_int { char p[0x11C]; int v; };
struct o124_uchar { char p[0x124]; unsigned char v; };
struct o125_uchar { char p[0x125]; unsigned char v; };
struct o126_uchar { char p[0x126]; unsigned char v; };
struct o128_short { char p[0x128]; short v; };
struct o128_ushort { char p[0x128]; unsigned short v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o133_uchar { char p[0x133]; unsigned char v; };
struct o135_uchar { char p[0x135]; unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o168_float { char p[0x168]; float v; };
struct o17C_float { char p[0x17C]; float v; };
struct o24_ushort { char p[0x24]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o371A_uchar { char p[0x371A]; unsigned char v; };
struct o371C_uchar { char p[0x371C]; unsigned char v; };
struct o371E_uchar { char p[0x371E]; unsigned char v; };
struct o371F_uchar { char p[0x371F]; unsigned char v; };
struct o372B_uchar { char p[0x372B]; unsigned char v; };
struct o374D_uchar { char p[0x374D]; unsigned char v; };
struct o374E_uchar { char p[0x374E]; unsigned char v; };
struct o374F_uchar { char p[0x374F]; unsigned char v; };
struct o3750_uchar { char p[0x3750]; unsigned char v; };
struct o37A0_float { char p[0x37A0]; float v; };
struct o37A8_float { char p[0x37A8]; float v; };
struct o3840_ushort { char p[0x3840]; unsigned short v; };
struct o38E5_uchar { char p[0x38E5]; unsigned char v; };
struct o404_uint { char p[0x404]; unsigned int v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c03733c(int, int, int);
int FUN_0c037646(int, int, int);
int FUN_0c037ac4(int, int, int, int, int);
int FUN_0c0392bc(int);
int FUN_0c03e6b2(int, int);
int FUN_0c0579f8(int, int, float, float, float, float);
int FUN_0c066cd8(int);
int FUN_0c066f38(int);
int FUN_0c066fbe(int);
int FUN_0c0673ca(int);
int FUN_0c067438(int);
int FUN_0c0676ce(int);
int FUN_0c085cac(int, int, int);
int FUN_0c0b266c(int);
int FUN_0c0b4fb4(int);
int FUN_0c14dc44(int);
int FUN_0c14f5da(int);
int FUN_0c067008(int a4);
int FUN_0c0674f4(int a4);

int FUN_0c067008(int a4)
{
    int t0;
    int t1;
    int t2;
    register int t3;
    register int t4;
    register int t5;

    *(unsigned char *)(((((short)(signed char)a4 * (short)0x3938) + 0xC532498) + 0x1)) = a4;
    (((struct o372B_uchar *)((((short)(signed char)a4 * (short)0x3938) + 0xC532498)))->v) = 0x0;
    (((struct o371A_uchar *)((((short)(signed char)a4 * (short)0x3938) + 0xC532498)))->v) = 0x0;
    FUN_0c0579f8(0x0, 0x0, 1.0f, 0.100000001f, (1.0f + 1.0f), 0.100000001f);
    FUN_0c03733c((((short)(signed char)a4 * (short)0x3938) + 0xC532498), 0x0, (*(int *)((((*(signed char *)(((0x371A + (((short)(signed char)a4 * (short)0x3938) + 0xC532498)) + 0x0))) << 2) + ((((signed char)a4 << 2) << 1) + 0xC4B40DC)))));
    FUN_0c037646((((short)(signed char)a4 * (short)0x3938) + 0xC532498), 0x0, (*(int *)((((((signed char)a4 << 2) << 1) + 0xC4B40DC) + 0x0))));
    t2 = *(signed char *)(((((short)(signed char)a4 * (short)0x3938) + 0xC532498) + 0x2));
    if ((t2 != 14) && ((t2 != 12) && (t2 != 13))) {
        FUN_0c037646((((short)(signed char)a4 * (short)0x3938) + 0xC532498), 0x1, (*(int *)(((((signed char)a4 << 2) << 1) + 0xC4B40E0))));
    }
    if (((unsigned char)(*(signed char *)0xC541F3D) == 4) && (t0 = *(signed char *)0xC541F41, (unsigned char)t0 == 6)) {
    } else {
        t0 = *(signed char *)(((((short)(signed char)a4 * (short)0x3938) + 0xC532498) + 0x2));
        if (t0 == 14) {
            FUN_0c066f38((((short)(signed char)a4 * (short)0x3938) + 0xC532498));
        } else {
            if (t0 == 15) {
                FUN_0c066fbe((((short)(signed char)a4 * (short)0x3938) + 0xC532498));
            }
        }
    }
    if (((unsigned char)(*(signed char *)0xC541F62) == 3) && (t1 = *(signed char *)(((((short)(signed char)a4 * (short)0x3938) + 0xC532498) + 0x2)), t1 == 1)) {
        t0 = 0xC1C5A4C;
        t1 = 0x0;
        for (;;) {
            if ((int)t1 >= (int)(*(signed char *)0xC1C5A5D)) {
                break;
            }
            t4 = *(signed char *)((t0 + 0x0));
            t2 = 0x468;
            t3 = t4;
            t2 = (t2 + (((short)(signed char)a4 * (short)0x3938) + 0xC532498));
            t5 = ((((((t4 << 2) << 1) + t3) << 2) << 2) + t2);
            t2 = 0x468;
            *(unsigned int *)((t5 + 0x8)) = 0x0;
            t4 = *(signed char *)((t0 + 0x0));
            t2 = (t2 + (((short)(signed char)a4 * (short)0x3938) + 0xC532498));
            t3 = t4;
            t5 = ((((((t4 << 2) << 1) + t3) << 2) << 2) + t2);
            t2 = 0x468;
            *(unsigned int *)((t5 + 0xC)) = 0x0;
            t4 = *(signed char *)((t0 + 0x0));
            t0 = (t0 + 0x1);
            t2 = (t2 + (((short)(signed char)a4 * (short)0x3938) + 0xC532498));
            t3 = t4;
            t1 = (t1 + 0x1);
            *(unsigned int *)((((((((t4 << 2) << 1) + t3) << 2) << 2) + t2) + 0x10)) = 0x0;
        }
        t0 = t2;
        t1 = t3;
        t2 = 0xC1C5A54;
        t3 = 0x0;
        for (;;) {
            if ((int)t3 >= (int)(*(signed char *)0xC1C5A5E)) {
                break;
            }
            t1 = (*(signed char *)((t2 + 0x0)));
            t0 = 0x468;
            t4 = t1;
            t1 = (t1 << 2);
            t1 = (t1 << 1);
            t1 = (t1 + t4);
            t1 = (t1 << 2);
            t0 = (t0 + (((short)(signed char)a4 * (short)0x3938) + 0xC532498));
            t1 = (t1 << 2);
            t1 = (t1 + t0);
            t0 = 0x468;
            t1 = (t1 + 0x10E0);
            *(unsigned int *)((t1 + 0x8)) = 0x0;
            t0 = (t0 + (((short)(signed char)a4 * (short)0x3938) + 0xC532498));
            t4 = *(signed char *)((t2 + 0x0));
            t1 = t4;
            t5 = ((((((t4 << 2) << 1) + t1) << 2) << 2) + t0);
            t0 = 0x468;
            *(unsigned int *)(((t5 + 0x10E0) + 0xC)) = 0x0;
            t4 = *(signed char *)((t2 + 0x0));
            t2 = (t2 + 0x1);
            t1 = t4;
            t0 = (t0 + (((short)(signed char)a4 * (short)0x3938) + 0xC532498));
            t3 = (t3 + 0x1);
            *(unsigned int *)(((((((((t4 << 2) << 1) + t1) << 2) << 2) + t0) + 0x10E0) + 0x10)) = 0x0;
        }
    }
    (((struct oA8_uchar *)((((short)(signed char)a4 * (short)0x3938) + 0xC532498)))->v) = 0x1;
    (((struct oAC_ushort *)((((short)(signed char)a4 * (short)0x3938) + 0xC532498)))->v) = 0x1F;
    (((struct oB0_float *)((((short)(signed char)a4 * (short)0x3938) + 0xC532498)))->v) = 1.0f;
    FUN_0c066cd8((((short)(signed char)a4 * (short)0x3938) + 0xC532498));
    if ((signed char)a4 != 0) {
        if ((signed char)a4 != 1) {
            if ((signed char)a4 != 2) {
                if ((signed char)a4 != 3) {
                } else {
                    (((struct oA9_uchar *)((((short)(signed char)a4 * (short)0x3938) + 0xC532498)))->v) = 0x30;
                    (((struct o24_ushort *)((((short)(signed char)a4 * (short)0x3938) + 0xC532498)))->v) = 0x4;
                }
            } else {
                (((struct oA9_uchar *)((((short)(signed char)a4 * (short)0x3938) + 0xC532498)))->v) = 0x28;
                (((struct o24_ushort *)((((short)(signed char)a4 * (short)0x3938) + 0xC532498)))->v) = 0x3;
            }
        } else {
            (((struct oA9_uchar *)((((short)(signed char)a4 * (short)0x3938) + 0xC532498)))->v) = 0x24;
            (((struct o24_ushort *)((((short)(signed char)a4 * (short)0x3938) + 0xC532498)))->v) = 0x2;
        }
    } else {
        (((struct oA9_uchar *)((((short)(signed char)a4 * (short)0x3938) + 0xC532498)))->v) = 0x22;
        (((struct o24_ushort *)((((short)(signed char)a4 * (short)0x3938) + 0xC532498)))->v) = 0x1;
    }
    FUN_0c0676ce(a4);
    t0 = *(signed char *)(((((short)(signed char)a4 * (short)0x3938) + 0xC532498) + 0x2));
    if ((t0 != 12) && (t0 != 13)) {
        (((struct o68_uint *)(((((struct oC8_int *)((((short)(signed char)a4 * (short)0x3938) + 0xC532498)))->v))))->v) = (((((struct o11C_int *)((((short)(signed char)a4 * (short)0x3938) + 0xC532498)))->v)) + 0x24);
        FUN_0c0392bc((((short)(signed char)a4 * (short)0x3938) + 0xC532498));
    }
    FUN_0c03e6b2((signed char)a4, 0x0);
    FUN_0c037ac4((((short)(signed char)a4 * (short)0x3938) + 0xC532498), 0x0, (signed char)a4, 0x0, 0x0);
    FUN_0c037ac4((((short)(signed char)a4 * (short)0x3938) + 0xC532498), 0x1, (signed char)a4, 0x0, 0x0);
    (((struct o168_float *)((((short)(signed char)a4 * (short)0x3938) + 0xC532498)))->v) = 0.0f;
    (((struct o404_uint *)((((short)(signed char)a4 * (short)0x3938) + 0xC532498)))->v) = 0x0;
    (((struct o133_uchar *)((((short)(signed char)a4 * (short)0x3938) + 0xC532498)))->v) = 0x0;
    (((struct o135_uchar *)((((short)(signed char)a4 * (short)0x3938) + 0xC532498)))->v) = 0x0;
    return 0x135;
}

int FUN_0c0674f4(int a4)
{
    int t0;
    register int t1;

    (((struct o14_uchar *)((((short)(signed char)a4 * (short)0x3938) + 0xC532498)))->v) = 0x0;
    (((struct o37A8_float *)((((short)(signed char)a4 * (short)0x3938) + 0xC532498)))->v) = 1.0f;
    (((struct o37A0_float *)((((short)(signed char)a4 * (short)0x3938) + 0xC532498)))->v) = -2.0f;
    if ((*(signed char *)(((((short)(signed char)a4 * (short)0x3938) + 0xC532498) + 0x371A))) != 0) {
        (((struct o371A_uchar *)((((short)(signed char)a4 * (short)0x3938) + 0xC532498)))->v) = 0x0;
        FUN_0c03733c((((short)(signed char)a4 * (short)0x3938) + 0xC532498), 0x0, (*(int *)(((((*(signed char *)(((0x371A + (((short)(signed char)a4 * (short)0x3938) + 0xC532498)) + 0x0))) << 2) + (0xC4B40DC + (((*(signed char *)(((((short)(signed char)a4 * (short)0x3938) + 0xC532498) + 0x1))) << 2) << 1))) + 0x0))));
    }
    (((struct o371C_uchar *)((((short)(signed char)a4 * (short)0x3938) + 0xC532498)))->v) = 0x0;
    (((struct o3840_ushort *)((((short)(signed char)a4 * (short)0x3938) + 0xC532498)))->v) = 0x270F;
    (((struct o371E_uchar *)((((short)(signed char)a4 * (short)0x3938) + 0xC532498)))->v) = a4;
    (((struct o371F_uchar *)((((short)(signed char)a4 * (short)0x3938) + 0xC532498)))->v) = a4;
    (((struct o30_float *)((((short)(signed char)a4 * (short)0x3938) + 0xC532498)))->v) = 0.0f;
    (((struct o2C_float *)((((short)(signed char)a4 * (short)0x3938) + 0xC532498)))->v) = 0.0f;
    (((struct o28_float *)((((short)(signed char)a4 * (short)0x3938) + 0xC532498)))->v) = 0.0f;
    (((struct o17C_float *)((((short)(signed char)a4 * (short)0x3938) + 0xC532498)))->v) = 1.0f;
    (((struct o124_uchar *)((((short)(signed char)a4 * (short)0x3938) + 0xC532498)))->v) = 0x1;
    (((struct o125_uchar *)((((short)(signed char)a4 * (short)0x3938) + 0xC532498)))->v) = 0x0;
    (((struct o126_uchar *)((((short)(signed char)a4 * (short)0x3938) + 0xC532498)))->v) = 0x0;
    (((struct o128_ushort *)((((short)(signed char)a4 * (short)0x3938) + 0xC532498)))->v) = ((int)0x1 << (int)(signed char)a4);
    t1 = (((struct o128_short *)((((short)(signed char)a4 * (short)0x3938) + 0xC532498)))->v);
    *(unsigned short *)(((0x12A + (((short)(signed char)a4 * (short)0x3938) + 0xC532498)) + 0x4)) = (~t1);
    *(unsigned short *)(((0x12A + (((short)(signed char)a4 * (short)0x3938) + 0xC532498)) + 0x2)) = (~t1);
    (((struct o12A_ushort *)((((short)(signed char)a4 * (short)0x3938) + 0xC532498)))->v) = (~t1);
    (((struct o160_float *)((((short)(signed char)a4 * (short)0x3938) + 0xC532498)))->v) = 1000.0f;
    FUN_0c14f5da(a4);
    (((struct o374D_uchar *)((((short)(signed char)a4 * (short)0x3938) + 0xC532498)))->v) = 0x0;
    (((struct o374E_uchar *)((((short)(signed char)a4 * (short)0x3938) + 0xC532498)))->v) = 0x0;
    (((struct o374F_uchar *)((((short)(signed char)a4 * (short)0x3938) + 0xC532498)))->v) = 0x0;
    (((struct o3750_uchar *)((((short)(signed char)a4 * (short)0x3938) + 0xC532498)))->v) = 0x0;
    FUN_0c067438((((short)(signed char)a4 * (short)0x3938) + 0xC532498));
    FUN_0c0673ca((((short)(signed char)a4 * (short)0x3938) + 0xC532498));
    t1 = *(signed char *)(((((short)(signed char)a4 * (short)0x3938) + 0xC532498) + 0x2));
    if (t1 != 12) {
        if (t1 != 13) {
            if (t1 != 14) {
                
            } else {
                (((struct o38E5_uchar *)((((short)(signed char)a4 * (short)0x3938) + 0xC532498)))->v) = 0x0;
                if (((unsigned char)(*(signed char *)0xC541F3D) == 4) && (t0 = *(signed char *)0xC541F41, (unsigned char)t0 == 6)) {
                } else {
                    FUN_0c14dc44((((short)(signed char)a4 * (short)0x3938) + 0xC532498));
                }
            }
            return (FUN_0c085cac((((short)(signed char)a4 * (short)0x3938) + 0xC532498), 0x0, 0x0));
        }
        return FUN_0c0b4fb4((((short)(signed char)a4 * (short)0x3938) + 0xC532498));
    }
    return FUN_0c0b266c((((short)(signed char)a4 * (short)0x3938) + 0xC532498));
}
