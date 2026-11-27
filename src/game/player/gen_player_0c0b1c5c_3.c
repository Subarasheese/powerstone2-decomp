/* game/player: functions 0C0B1C5C-0C0B4AFC, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o19_uchar { char p[0x19]; unsigned char v; };
struct o26A0_uint { char p[0x26A0]; unsigned int v; };
struct o26A4_uint { char p[0x26A4]; unsigned int v; };
struct o3715_uchar { char p[0x3715]; unsigned char v; };
struct o3716_uchar { char p[0x3716]; unsigned char v; };
struct o3717_uchar { char p[0x3717]; unsigned char v; };
struct o371D_uchar { char p[0x371D]; unsigned char v; };
struct o3728_uchar { char p[0x3728]; unsigned char v; };
struct o3729_uchar { char p[0x3729]; unsigned char v; };
struct o3732_uchar { char p[0x3732]; unsigned char v; };
struct o3739_uchar { char p[0x3739]; unsigned char v; };
struct o3770_int { char p[0x3770]; int v; };
struct o3770_uint { char p[0x3770]; unsigned int v; };
struct o37A0_float { char p[0x37A0]; float v; };
struct o37B0_float { char p[0x37B0]; float v; };
struct o382A_ushort { char p[0x382A]; unsigned short v; };
struct o445_uchar { char p[0x445]; unsigned char v; };
struct o4E0_int { char p[0x4E0]; int v; };
struct o4E0_uint { char p[0x4E0]; unsigned int v; };
struct o584_float { char p[0x584]; float v; };
struct o8C_float { char p[0x8C]; float v; };
int FUN_0c037bf6(int, int, int);
int FUN_0c038362(int);
int FUN_0c059dae(int, int);
int FUN_0c073566(int, int);
int FUN_0c07363a(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c081dfc(int, int, int, int);
int FUN_0c0b3a7e(int, int, int);
int FUN_0c143dd8(int);
int FUN_0c0b2888(int a4, int a5, int a6, int a7);
int FUN_0c0b47a0(int a4, int a5, int a6, int a7, float f4);

int FUN_0c0b2888(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    (((struct o14_uchar *)(a4))->v) = 0x0;
    (((struct o3715_uchar *)(a4))->v) = a5;
    (((struct o19_uchar *)(a4))->v) = 0x0;
    (((struct o18_uchar *)(a4))->v) = 0x0;
    (((struct o17_uchar *)(a4))->v) = 0x0;
    (((struct o16_uchar *)(a4))->v) = 0x0;
    (((struct o3716_uchar *)(a4))->v) = (*(signed char *)((a4 + 0x3715)));
    (((struct o3715_uchar *)(a4))->v) = a5;
    (((struct o37A0_float *)(a4))->v) = -2.0f;
    if (a5 != 7) {
        if (a5 != 32) {
            if (a5 != 33) {
                (((struct o584_float *)(a4))->v) = 1.0f;
                (((struct o4E0_uint *)(a4))->v) = 0x0;
                (((struct o26A4_uint *)(a4))->v) = 0x0;
                (((struct o26A0_uint *)(a4))->v) = 0x0;
                t0 = 0x26A0;
            } else {
                (((struct o14_uchar *)(a4))->v) = 0x2;
                (((struct o371D_uchar *)(a4))->v) = 0x0;
                (((struct o3729_uchar *)(a4))->v) = a6;
                (((struct o3770_uint *)(a4))->v) = (((short)(*(signed char *)((a4 + 0x372A))) * (short)0x3938) + 0xC532498);
                (((struct o14_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x3;
                t1 = (((struct o3770_int *)(a4))->v);
                (((struct o18_uchar *)(t1))->v) = 0x0;
                (((struct o17_uchar *)(t1))->v) = 0x0;
                (((struct o16_uchar *)(t1))->v) = 0x0;
                (((struct o15_uchar *)(t1))->v) = 0x0;
                (((struct o3770_uint *)(((((struct o3770_int *)(a4))->v))))->v) = a4;
                t1 = (((struct o3770_int *)(a4))->v);
                (((struct o3716_uchar *)(t1))->v) = (*(signed char *)((t1 + 0x3715)));
                (((struct o3715_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x22;
                (((struct o3729_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = a6;
                (((struct o371D_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x0;
                (((struct o3717_uchar *)(((((struct o3770_int *)(a4))->v))))->v) = 0x63;
                t1 = *(signed char *)((a4 + 0x372A));
                *(unsigned char *)((t1 + 0xC471A98)) = ((*(signed char *)((t1 + 0xC471A98))) + 0x1);
                FUN_0c081dfc(((((struct o3770_int *)(a4))->v)), a5, a6, a7);
                (((struct o382A_ushort *)(((((struct o3770_int *)(a4))->v))))->v) = 0x0;
                t0 = 0x382A;
            }
            t1 = t0;
        } else {
            (((struct o14_uchar *)(a4))->v) = 0x1;
            (((struct o3739_uchar *)(a4))->v) = a6;
            (((struct o445_uchar *)(a4))->v) = 0x1;
            (((struct o584_float *)(a4))->v) = 1.0f;
            (((struct o4E0_uint *)(a4))->v) = 0x0;
            (((struct o26A4_uint *)(a4))->v) = 0x0;
            (((struct o26A0_uint *)(a4))->v) = 0x0;
            t1 = 0x26A0;
        }
        t0 = t1;
    } else {
        (((struct o3732_uchar *)(a4))->v) = a6;
        (((struct o584_float *)(a4))->v) = 1.0f;
        (((struct o4E0_uint *)(a4))->v) = 0x0;
        (((struct o26A4_uint *)(a4))->v) = 0x0;
        (((struct o26A0_uint *)(a4))->v) = 0x0;
        t0 = 0x26A0;
    }
    return t0;
}

