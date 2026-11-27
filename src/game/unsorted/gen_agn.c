/* Straight-line functions with calls and guards (batch gen_agn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o130_uchar { char p[0x130]; unsigned char v; };
struct o132_uchar { char p[0x132]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
int FUN_0c0f2ad4(int, int);
int FUN_0c0f2b6a(int);
int FUN_0c0f2ae0(int a4);

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
            } else {
                return FUN_0c0f2ad4(a4, 0x3);
            }
        } else {
            (((struct o130_uchar *)(a4))->v) = 0xA;
        }
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
