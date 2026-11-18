/* game/unsorted: functions 0C0F2AD4-0C0F2EAC, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o10_int { char p[0x10]; int v; };
struct o118_int { char p[0x118]; int v; };
struct o130_uchar { char p[0x130]; unsigned char v; };
struct o132_uchar { char p[0x132]; unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oF4_int { char p[0xF4]; int v; };
int FUN_0c03f346(int);
int FUN_0c0582de(int, int);
int math_mat_get_translate(int, int);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c059e0e(int, int, int);
int FUN_0c0f4b68(int, int);
float math_signed_sqrt(float);
int math_atan2_angle16(float, float);
int FUN_0c17c130(int, int, int);
int FUN_0c187798(int);
int FUN_0c0f2ad4(int a4, int a5);
int FUN_0c0f2ae0(int a4);
int FUN_0c0f2b6a(int a4);
int FUN_0c0f2bac(int a4);

int FUN_0c0f2ad4(int a4, int a5)
{
    (((struct o15_uchar *)(a4))->v) = a5;
    (((struct o16_uchar *)(a4))->v) = 0x0;
    return 0x16;
}

int FUN_0c0f2ae0(int a4)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = *(signed char *)((a4 + 0x1));
    if ((*(signed char *)((a4 + 0x132))) != 0) {
        (((struct o132_uchar *)(a4))->v) = 0x0;
        if (!(((((struct o160_float *)(a4))->v)) > 0.0f)) {
            t1 = FUN_0c0f2b6a((((short)t0 * (short)0x3938) + 0xC532498));
            if (t1 != 0) {
                (((struct o160_float *)(a4))->v) = 1.0f;
                (((struct o130_uchar *)(a4))->v) = 0xA;
                if ((*(signed char *)((a4 + 0x130))) != 0) {
                    (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x200);
                    (((struct oB4_float *)(a4))->v) = 1.0f;
                    u0 = *(float *)0xC0F2BA4;
                    (((struct oBC_float *)(a4))->v) = u0;
                    (((struct oB8_float *)(a4))->v) = u0;
                    (((struct o130_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x130))) - 1);
                    t0 = 0x130;
                } else {
                    (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) & 0xFDFF);
                    t0 = 0xAC;
                }
                return t0;
            }
            return FUN_0c0f2ad4(a4, 0x3);
        }
        (((struct o130_uchar *)(a4))->v) = 0xA;
    }
    if ((*(signed char *)((a4 + 0x130))) != 0) {
        (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x200);
        (((struct oB4_float *)(a4))->v) = 1.0f;
        u0 = *(float *)0xC0F2BA4;
        (((struct oBC_float *)(a4))->v) = u0;
        (((struct oB8_float *)(a4))->v) = u0;
        (((struct o130_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x130))) - 1);
        t0 = 0x130;
    } else {
        (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) & 0xFDFF);
        t0 = 0xAC;
    }
    return t0;
}

int FUN_0c0f2b6a(int a4)
{
    register int t1;
    int t2;

    if (((*(signed char *)((a4 + 0x14))) == 0) && ((t1 = *(signed char *)((a4 + 0x3715)), t1 == 7) && (t2 = *(signed char *)((a4 + 0x3732)), t2 == 4))) {
        return 0x1;
    }
    return 0x0;
}

