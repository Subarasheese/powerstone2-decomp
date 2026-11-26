/* Straight-line functions with calls and guards (batch gen_aae): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o126_uchar { char p[0x126]; unsigned char v; };
struct o128_ushort { char p[0x128]; unsigned short v; };
struct o12E_short { char p[0x12E]; short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o19_uchar { char p[0x19]; unsigned char v; };
struct o376C_uint { char p[0x376C]; unsigned int v; };
struct oAA_uchar { char p[0xAA]; unsigned char v; };
struct oAB_uchar { char p[0xAB]; unsigned char v; };
int FUN_0c0c2ab6(int, int);
int FUN_0c0c2d56(int, int, int, int, float);
int FUN_0c0d4672(int);
int FUN_0c0d4ad0(int a4, int a5, int a6, int a7, float f4);

int FUN_0c0d4ad0(int a4, int a5, int a6, int a7, float f4)
{
    int t0;
    register int t1;
    register int t2;

    t1 = *(signed char *)((a4 + 0x1));
    if (((*(signed char *)(((((short)t1 * (short)0x3938) + 0xC532498) + 0x3721))) == (*(signed char *)((a4 + 0x41C)))) && (t0 = *(signed char *)(((((short)t1 * (short)0x3938) + 0xC532498) + 0x3715)), t0 == 31)) {
        t0 = *(signed char *)((a4 + 0x15));
        if (t0 != 0) {
        } else {
            FUN_0c0c2d56(a4, 0x5, (*(signed char *)((a4 + 0x1))), a7, f4);
            (((struct oAA_uchar *)(a4))->v) = 0x1;
            (((struct oAB_uchar *)(a4))->v) = 0x5;
            FUN_0c0c2ab6(a4, 0x38);
            (((struct o126_uchar *)(a4))->v) = 0x3;
            (((struct o128_ushort *)(a4))->v) = ((int)0x1 << (int)(*(signed char *)((a4 + 0x1))));
            (((struct o12E_ushort *)(a4))->v) = (((((struct o12E_short *)(a4))->v)) | 0xFF);
            (((struct o12E_ushort *)(a4))->v) = (((((struct o12E_short *)(a4))->v)) & (~((int)0x1 << (int)(*(signed char *)((a4 + 0x1))))));
            (((struct o19_uchar *)(a4))->v) = 0x0;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        }
        if ((t0 == 0) || (t0 == 1)) {
            t0 = FUN_0c0d4672(a4);
            t2 = t0;
            if (t0 == 0) {
                (((struct o376C_uint *)((((short)t1 * (short)0x3938) + 0xC532498)))->v) = a4;
                t2 = 0x376C;
            }
            t0 = t2;
        } else {
            (((struct o376C_uint *)((((short)t1 * (short)0x3938) + 0xC532498)))->v) = a4;
            t0 = 0x376C;
        }
        t1 = t0;
    } else {
        FUN_0c0c2d56(a4, 0x2, (*(signed char *)((a4 + 0x1))), a7, f4);
        (((struct oAA_uchar *)(a4))->v) = 0x1;
        (((struct oAB_uchar *)(a4))->v) = 0x5;
        FUN_0c0c2ab6(a4, 0x38);
        (((struct o126_uchar *)(a4))->v) = 0x3;
        t0 = (((struct o12E_short *)(a4))->v);
        (((struct o12E_ushort *)(a4))->v) = (t0 | 0xFF);
        t1 = (t0 | 0xFF);
    }
    return t1;
}
