/* Straight-line functions with calls and guards (batch gen_pf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o6_short { char p[0x6]; short v; };
struct o6_ushort { char p[0x6]; unsigned short v; };
int FUN_0c019a06(int);
int FUN_0c01c714(int, int, int);
int FUN_0c01cd2c(int);
int FUN_0c01e9e4(void);
int FUN_0c0573c0(int, int, int);
int FUN_0c0573cc(int, int, int);
int FUN_0c05aab6(int, int);
int memset(int, int, int);
int FUN_0c011492(void);

int FUN_0c011492(void)
{
    register int t0;
    register int t8;
    register int t10;
    register int t12;
    register int t17;
    register int t14;
    register int t18;
    register int t21;
    register int t22;
    register int t28;
    register int t24;

    t0 = *(signed char *)0xC30EF68;
    if ((unsigned char)t0 == 0) {
        FUN_0c0573c0(0xFF000000, 0x0, 0x14);
        (((struct o6_ushort *)0xC30EF66)->v) = 0x0;
        (((struct o2_uchar *)0xC30EF66)->v) = ((*(signed char *)0xC30EF68) + 0x1);
        FUN_0c01e9e4();
        memset(0xC30EF7C, 0x0, 0x20);
        FUN_0c019a06(0xC30EF69);
    }
    if (((unsigned char)t0 == 0) || ((unsigned char)t0 == 1)) {
        if ((int)((((struct o6_short *)0xC30EF66)->v)) < (int)0x14) {
            t8 = (((struct o6_short *)0xC30EF66)->v);
            (((struct o6_ushort *)0xC30EF66)->v) = (t8 + 0x1);
            return (t8 + 0x1);
        }
        FUN_0c01c714(0xC30EF69, 0x2, 0x2);
        t10 = FUN_0c01cd2c(0x40);
        if ((short)t10 != 0) {
            FUN_0c05aab6(((short)(short)t10 - 1), 0x4);
            (((struct o2_uchar *)0xC30EF66)->v) = 0x3;
            (((struct o3_uchar *)0xC30EF66)->v) = 0x2;
            (((struct o6_ushort *)0xC30EF66)->v) = 0x0;
            return FUN_0c0573cc(0xFF000000, 0x0, 0x14);
        }
        t12 = FUN_0c01cd2c(0x101);
        t17 = (short)t12;
        if ((short)t12 != 0) {
            FUN_0c05aab6(((short)(short)t12 - 1), 0x3);
            t14 = *(signed char *)0xC30EF69;
            t17 = (unsigned char)t14;
            if (((unsigned char)t14 == 0) || (((unsigned char)t14 == 1) || ((unsigned char)t14 == 2))) {
                (((struct o2_uchar *)0xC30EF66)->v) = ((*(signed char *)0xC30EF68) + 0x1);
                (((struct o6_ushort *)0xC30EF66)->v) = 0x0;
                t17 = 0x0;
            }
        }
        return t17;
    } else {
        if ((unsigned char)t0 == 2) {
            t18 = (((struct o6_short *)0xC30EF66)->v);
            (((struct o6_ushort *)0xC30EF66)->v) = (t18 + 0x1);
            if ((int)(short)(t18 + 0x1) >= (int)0x10) {
                (((struct o6_ushort *)0xC30EF66)->v) = 0x0;
                (((struct o2_uchar *)0xC30EF66)->v) = 0x3;
                FUN_0c0573cc(0xFF000000, 0x0, 0x14);
            } else {
                return (short)(t18 + 0x1);
            }
        } else if ((unsigned char)t0 == 3) {
        } else {
            if ((unsigned char)t0 == 4) {
                t21 = *(int *)((0xC20B858 + ((unsigned char)(*(signed char *)0xC30EF69) << 2)));
                return ((int (*)(void))(t21))();
            }
            return (unsigned char)t0;
        }
        t22 = (((struct o6_short *)0xC30EF66)->v);
        (((struct o6_ushort *)0xC30EF66)->v) = (t22 + 0x1);
        t28 = (short)(t22 + 0x1);
        if ((int)(short)(t22 + 0x1) >= (int)0x14) {
            t24 = *(signed char *)0xC30EF69;
            if ((unsigned char)t24 != 2) {
                t28 = (unsigned char)t24;
                if (((unsigned char)t24 == 0) || ((unsigned char)t24 == 1)) {
                    (((struct o2_uchar *)0xC30EF66)->v) = ((*(signed char *)0xC30EF68) + 0x1);
                    (((struct o4_uchar *)0xC30EF66)->v) = 0x0;
                    t28 = 0x0;
                }
            } else {
                (((struct o0_uchar *)0xC30EF66)->v) = 0x0;
                (((struct o2_uchar *)0xC30EF66)->v) = 0x0;
                t28 = 0x0;
            }
        }
        return t28;
    }
}
