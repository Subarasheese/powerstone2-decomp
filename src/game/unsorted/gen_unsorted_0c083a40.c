/* game/unsorted: functions 0C083A40-0C083DDA, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o15_uchar { char p[0x15]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o3715_uchar { char p[0x3715]; unsigned char v; };
struct o3717_uchar { char p[0x3717]; unsigned char v; };
struct o3718_uchar { char p[0x3718]; unsigned char v; };
struct o372C_uchar { char p[0x372C]; unsigned char v; };
struct o374A_uchar { char p[0x374A]; unsigned char v; };
struct o3756_uchar { char p[0x3756]; unsigned char v; };
struct o375C_uchar { char p[0x375C]; unsigned char v; };
struct o375D_uchar { char p[0x375D]; unsigned char v; };
struct o37A0_float { char p[0x37A0]; float v; };
struct o382E_ushort { char p[0x382E]; unsigned short v; };
struct o3840_short { char p[0x3840]; short v; };
struct o42C_ushort { char p[0x42C]; unsigned short v; };
struct o430_short { char p[0x430]; short v; };
struct o430_ushort { char p[0x430]; unsigned short v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
int FUN_0c042ff8(void);
int FUN_0c043064(void);
int FUN_0c059e60(int, int);
int FUN_0c05aaf6(int);
int FUN_0c067438(int);
int FUN_0c073eb8(int, int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07e868(int, int, int, int);
int FUN_0c081dfc(int, int, int, int);
int FUN_0c085cac(int, int, int, int);
int FUN_0c0f2034(void);
int FUN_0c1603c2(int);
int FUN_0c179ac0(void);
int FUN_0c187798(int, int, int);
int FUN_0c083a40(int a4, int a5, int a6, int a7);
int FUN_0c083cf0(int a4, int a5, int a6, int a7, float f4);


int FUN_0c083cf0(int a4, int a5, int a6, int a7, float f4)
{
    int t0;
    register int t1;
    register int t2;
    float u0;

    t1 = *(signed char *)0xC542237;
    if (t1 != 2) {
        if (t1 == 6) {
            t1 = FUN_0c0f2034();
            if (t1 != 0) {
                t1 = *(short *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x2F8) + 0xC5413E8));
                t2 = (unsigned short)((-t1) + 0x5000);
                if ((int)(unsigned short)((-t1) + 0x5000) < 0) {
                    t2 = ((unsigned short)((-t1) + 0x5000) + 0x1FFF);
                }
                (((struct o42C_ushort *)(a4))->v) = (*(short *)((((((int)t2 >> 13) & 0x7) << 1) + 0xC2594F4)));
                *(unsigned int *)((a4 + 0x38)) = 0x8000;
                if (((*(signed char *)((a4 + 0x3715))) != 5) && ((u0 = (((struct o30_float *)(a4))->v), 1900.0f > u0) && (u0 > 1100.0f))) {
                    (((struct o430_ushort *)(a4))->v) = (((((struct o430_short *)(a4))->v)) | 0x100);
                }
            }
        }
        return 0x0;
    }
    if (((*(signed char *)((a4 + 0x3715))) == 0) && (t0 = *(signed char *)0xC54098D, t0 == 6)) {
        (((struct o3717_uchar *)(a4))->v) = 0x17;
        (((struct o3718_uchar *)(a4))->v) = 0x6;
        FUN_0c085cac(a4, 0x17, 0x6, a7);
        return 0x1;
    }
    return 0x0;
}
