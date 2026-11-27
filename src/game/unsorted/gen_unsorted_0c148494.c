/* game/unsorted: functions 0C148494-0C148974, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o12E_short { char p[0x12E]; short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o22_short { char p[0x22]; short v; };
struct o2C_float { char p[0x2C]; float v; };
struct o372E_uchar { char p[0x372E]; unsigned char v; };
struct o376C_uint { char p[0x376C]; unsigned int v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o41D_uchar { char p[0x41D]; unsigned char v; };
struct o420_ushort { char p[0x420]; unsigned short v; };
struct o425_uchar { char p[0x425]; unsigned char v; };
struct o964_uint { char p[0x964]; unsigned int v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oAA_uchar { char p[0xAA]; unsigned char v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c04307c(void);
int FUN_0c0c212c(int);
int FUN_0c0c2ab6(int, int);
int FUN_0c14873c(int);
int FUN_0c187798(int, int, int);
int FUN_0c148494(int a4, int a5, int a6);
int FUN_0c148550(int a4);
int FUN_0c14861e(int a4);
int FUN_0c148690(int a4);
int FUN_0c148862(int a4, int a5, int a6, int a7);


int FUN_0c148550(int a4)
{
    register int t2;

    t2 = *(signed char *)((0x15 + (*(int *)(((((short)(*(signed char *)0xC542363) * (short)0x3938) + 0xC535D90) + 0x1C)))));
    if (t2 == 5) {
        return FUN_0c148494(a4, 0x2, (*(signed char *)((a4 + 0x1))));
    }
    return t2;
}

int FUN_0c14861e(int a4)
{
    int t0;
    register int t1;

    t1 = *(signed char *)((a4 + 0x1));
    if (((*(signed char *)(((((short)t1 * (short)0x3938) + 0xC532498) + 0x3721))) == (*(signed char *)((a4 + 0x41C)))) && (t0 = *(signed char *)(((((short)t1 * (short)0x3938) + 0xC532498) + 0x3715)), t0 == 18)) {
        t0 = FUN_0c04307c();
        if (t0 != 0) {
            return FUN_0c148494(a4, 0x2, (*(signed char *)((a4 + 0x1))));
        }
        (((struct o376C_uint *)((((short)t1 * (short)0x3938) + 0xC532498)))->v) = a4;
        return 0x376C;
    }
    return FUN_0c148494(a4, 0x2, (*(signed char *)((a4 + 0x1))));
}

int FUN_0c148690(int a4)
{
    int t0;
    register int t1;
    register int t2;

    t1 = *(signed char *)((a4 + 0x1));
    t2 = (((struct o22_short *)(a4))->v);
    if (((*(signed char *)(((((short)t1 * (short)0x3938) + 0xC532498) + 0x3721))) == (*(signed char *)((a4 + 0x41C)))) && (t0 = *(signed char *)(((((short)t1 * (short)0x3938) + 0xC532498) + 0x3715)), t0 == 18)) {
        t0 = FUN_0c04307c();
        if (t0 != 0) {
            return FUN_0c148494(a4, 0x2, (*(signed char *)((a4 + 0x1))));
        }
        t0 = *(signed char *)((a4 + 0x15));
        if (t0 != 0) {
            if (t0 != 1) {
            } else {
                (((struct o964_uint *)((((short)t2 * (short)0x3938) + 0xC532498)))->v) = ((*(int *)(((((short)t2 * (short)0x3938) + 0xC532498) + 0x38))) - (*(int *)(((((short)t1 * (short)0x3938) + 0xC532498) + 0x38))));
            }
        } else {
            FUN_0c148494(a4, 0x5, (*(signed char *)((a4 + 0x1))));
            FUN_0c0c2ab6(a4, 0x15);
            (((struct o12E_ushort *)(a4))->v) = (((((struct o12E_short *)(a4))->v)) & (~((int)0x1 << (int)(*(signed char *)((a4 + 0x1))))));
            (((struct o12C_ushort *)(a4))->v) = 0x0;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        }
        (((struct o376C_uint *)((((short)t1 * (short)0x3938) + 0xC532498)))->v) = a4;
        return 0x376C;
    }
    return FUN_0c148494(a4, 0x2, (*(signed char *)((a4 + 0x1))));
}


