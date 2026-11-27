/* Straight-line functions with calls and guards (batch gen_wn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o11_uchar { char p[0x11]; unsigned char v; };
struct o12_uchar { char p[0x12]; unsigned char v; };
struct o13_uchar { char p[0x13]; unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o2_ushort { char p[0x2]; unsigned short v; };
struct o35_uchar { char p[0x35]; unsigned char v; };
struct o36_uchar { char p[0x36]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o46_uchar { char p[0x46]; unsigned char v; };
struct o4E_uchar { char p[0x4E]; unsigned char v; };
struct o4F_uchar { char p[0x4F]; unsigned char v; };
struct o50_uchar { char p[0x50]; unsigned char v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o8_ushort { char p[0x8]; unsigned short v; };
struct oA_ushort { char p[0xA]; unsigned short v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oD_uchar { char p[0xD]; unsigned char v; };
int FUN_0c059bd6(int);
int FUN_0c0bbf8e(void);
int FUN_0c0c41c4(int, int, int, int);
int FUN_0c11f942(void);
int FUN_0c04055c(void);
struct o20_int { char p[0x20]; int v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o24_int { char p[0x24]; int v; };


int FUN_0c04055c(void)
{
    int t1;
    int t3;
    int t4;
    int t2;
    int t5;
    int t0;

    (((struct o0_uchar *)0xC542320)->v) = 0x0;
    (((struct o36_uchar *)0xC542228)->v) = 0x0;
    (((struct o2_ushort *)0xC542320)->v) = 0x0;
    FUN_0c0bbf8e();
    (((struct o13_uchar *)0xC542228)->v) = 0x0;
    (((struct o11_uchar *)0xC542228)->v) = 0x0;
    (((struct o12_uchar *)0xC542228)->v) = 0x0;
    (((struct o35_uchar *)0xC542228)->v) = 0x0;
    (((struct oD_uchar *)0xC542228)->v) = 0x0;
    (((struct o14_uchar *)0xC542228)->v) = 0x0;
    (((struct o0_uchar *)0xC542378)->v) = 0x0;
    t1 = 0x0;
    for (;;) {
        t2 = (0xC54233C + t1);
        t1 = (t1 + 0x1);
        *(unsigned char *)(t2) = 0x0;
        if ((int)t1 >= (int)0x8) {
            break;
        }
    }
    (((struct o8_ushort *)0xC542228)->v) = (*(int *)((((*(signed char *)0xC542237) << 2) + 0xC1B7A64)));
    (((struct oA_ushort *)0xC542228)->v) = 0x3C;
    (((struct o2_ushort *)0xC542378)->v) = 0x0;
    (((struct o0_uint *)0xC542228)->v) = 0x0;
    (((struct o8_uint *)0xC40DC4C)->v) = 0x0;
    t1 = 0x0;
    for (;;) {
        (((struct o4F_uchar *)(((t1 * 0x98) + 0xC541CDC)))->v) = 0x0;
        *(unsigned char *)(((((t1 * 0x98) + 0xC541CDC) + 0x50) + 0x4)) = 0x0;
        *(unsigned char *)(((((t1 * 0x98) + 0xC541CDC) + 0x50) + 0x3)) = 0x0;
        *(unsigned char *)(((((t1 * 0x98) + 0xC541CDC) + 0x50) + 0x2)) = 0x0;
        *(unsigned char *)(((((t1 * 0x98) + 0xC541CDC) + 0x50) + 0x1)) = 0x0;
        (((struct o50_uchar *)(((t1 * 0x98) + 0xC541CDC)))->v) = 0x0;
        *(unsigned short *)((((t1 * 0x98) + 0xC541CDC) + 0x18)) = 0x0;
        *(unsigned short *)((((t1 * 0x98) + 0xC541CDC) + 0x1A)) = 0x0;
        *(unsigned short *)((((t1 * 0x98) + 0xC541CDC) + 0x1C)) = 0x0;
        (((struct o46_uchar *)(((t1 * 0x98) + 0xC541CDC)))->v) = 0x0;
        (((struct o4E_uchar *)(((t1 * 0x98) + 0xC541CDC)))->v) = 0x0;
        t2 = (t1 * 0x3938);
        if ((*(signed char *)((((t1 * 0x3938) + 0xC532498) + 0x3714))) != 0) {
            (((struct o8_uint *)0xC40DC4C)->v) = (((((struct o8_int *)0xC40DC4C)->v)) | ((int)0x1 << (int)t1));
            (((struct oA8_uchar *)(((t1 * 0x3938) + 0xC532498)))->v) = 0x1;
            t2 = ((t1 * 0x3938) + 0xC532498);
        }
        t3 = (((t1 * 0x98) + 0xC541CDC) + 0x50);
        t1 = (t1 + 0x1);
        if ((int)t1 >= (int)0x4) {
            break;
        }
    }
    t4 = *(signed char *)0xC3BD447;
    (((struct o4_uint *)0xC40DC4C)->v) = (unsigned char)t4;
    (((struct o0_uint *)0xC40DC4C)->v) = (unsigned char)t4;
    if ((*(signed char *)0xC5429B4) == 2) {
        FUN_0c11f942();
    } else {
        t4 = t2;
        t2 = t1;
        t1 = t3;
        t3 = 0xC40DC54;
    }
    FUN_0c0c41c4(t4, t2, t1, t3);
    t1 = *(signed char *)0xC5429B4;
    if ((t1 != 0) && (t1 != 4)) {
    } else {
        t2 = t1;
        t3 = t1;
        t1 = 0x0;
        t4 = t0;
        for (;;) {
            if ((((int)0x1 << (int)t1) & (unsigned char)(*(signed char *)0xC3BD447)) != 0) {
                t3 = ((t1 * 0x98) + 0xC541CDC);
                t4 = ((((struct o24_int *)(t3))->v));
                t0 = (t4 - ((int)((unsigned int)t4 % (unsigned int)0x64)));
                t2 = ((int)((unsigned int)((((struct o20_int *)(t3))->v)) % (unsigned int)0x64));
                (((struct o20_uint *)(t3))->v) = (t0 + t2);
            }
            t1 = (t1 + 0x1);
            if ((int)t1 >= (int)0x4) {
                break;
            }
        }
        t0 = t1;
        t1 = 0x64;
        t2 = t4;
    }
    t3 = *(signed char *)0xC541F3D;
    t4 = (unsigned char)t3;
    if ((unsigned char)t3 == 2) {
        t3 = *(signed char *)0xC5429B4;
        if (t3 != 0) {
            if (t3 != 1) {
                if (t3 != 2) {
                    t5 = t3;
                    if (t3 != 4) {
                    } else {
                        t5 = (FUN_0c059bd6(0x3));
                    }
                    t3 = t5;
                } else {
                    t3 = (FUN_0c059bd6(0x3));
                }
                t5 = t3;
            } else {
                t5 = (FUN_0c059bd6(0x1));
            }
            t3 = t5;
        } else {
            t3 = (FUN_0c059bd6(0x0));
        }
        t4 = t3;
    }
    return t4;
}
