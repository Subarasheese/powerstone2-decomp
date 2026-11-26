/* Straight-line functions with calls and guards (batch gen_agt): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
int FUN_0c01cd2c(int);
float math_cos_angle16(int);
extern int thunk_FUN_0c03f346();
int FUN_0c01a2a0(int a4, int a5, int a6, int a7);

int FUN_0c01a2a0(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    register int t2;

    t2 = *(signed char *)((a4 + 0x14));
    if (t2 != 0) {
        if (t2 != 1) {
            if (t2 != 2) {
                return ((int (*)(int, int, int, int))(thunk_FUN_0c03f346))(a4, a5, a6, a7);
            }
        } else {
            if ((*(signed char *)((a4 + 0x17))) == 0) {
                t2 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t2 - 1);
                if ((short)(t2 - 1) == 0) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x10);
                    (((struct o48_float *)(a4))->v) = 1.0f;
                    (((struct o44_float *)(a4))->v) = 1.0f;
                    (((struct o40_float *)(a4))->v) = 1.0f;
                    *(unsigned short *)((a4 + 0x1C)) = 0x8;
                } else {
                    return (short)(t2 - 1);
                }
            } else {
                return 0x17;
            }
        }
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
        (((struct o40_float *)(a4))->v) = ((-(math_cos_angle16(((((*(short *)((a4 + 0x1C))) << 8) << 2) << 1)))) + 1.0f);
        t2 = *(short *)((a4 + 0x1C));
        if (t2 == 0) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            return ((int (*)(int))(thunk_FUN_0c03f346))(a4);
        }
        return t2;
    }
    t2 = FUN_0c01cd2c(0x101);
    if (((short)t2 != 0) && (t0 = *(signed char *)0xC30B707, t0 != 0)) {
        if (((*(signed char *)0xC30B701) == 0) && (t1 = *(signed char *)0xC309E06, t1 != 3)) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            (((struct o17_uchar *)(a4))->v) = 0x1;
            t0 = 0x17;
        } else {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            (((struct o17_uchar *)(a4))->v) = 0x0;
            *(unsigned short *)((a4 + 0x1C)) = 0x10;
            t0 = 0x10;
        }
        t1 = t0;
    } else {
        t0 = (short)t2;
        if ((*(signed char *)0xC30B706) != 0) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            (((struct o17_uchar *)(a4))->v) = 0x0;
            *(unsigned short *)((a4 + 0x1C)) = 0x10;
            t0 = 0x10;
        }
        t1 = t0;
    }
    return t1;
}
