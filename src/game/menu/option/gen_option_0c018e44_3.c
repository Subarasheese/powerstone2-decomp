/* game/menu/option: functions 0C018E44-0C01A00A, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o1A_uchar { char p[0x1A]; unsigned char v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
int FUN_0c012c34(int);
int FUN_0c01c62a(int);
extern int thunk_FUN_0c03f346();
int FUN_0c01cd2c(int);
int FUN_0c019820(int a4, int a5, int a6, int a7);

int FUN_0c019820(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    register int t6;
    register int t7;

    t6 = *(signed char *)((a4 + 0x14));
    t7 = *(int *)((a4 + 0x10));
    if (t6 != 0) {
        if (t6 != 1) {
            if (t6 != 2) {
                if (t6 != 3) {
                } else {
                    t6 = FUN_0c01c62a(a4);
                    if ((signed char)t6 != 0) {
                        t6 = ((int (*)(int))(thunk_FUN_0c03f346))(a4);
                    }
                }
                (((struct o1A_uchar *)(a4))->v) = (*(signed char *)((t7 + 0x0)));
                return 0x1A;
            }
            if ((*(signed char *)0xC30503C) == 12) {
                return ((int (*)(int, int, int, int))(thunk_FUN_0c03f346))(a4, a5, a6, a7);
            }
            (((struct o28_float *)(a4))->v) = (*(float *)((0xC20DF44 + ((unsigned char)(*(signed char *)((t7 + 0x0))) << 2))));
            FUN_0c012c34(a4);
            t6 = FUN_0c01cd2c(0x440);
            if (((short)t6 != 0) && (t0 = *(signed char *)((a4 + 0x1A)), t0 == 0)) {
            } else {
                t0 = FUN_0c01cd2c(0x101);
                if (((short)t0 != 0) && (t1 = *(signed char *)((t7 + 0x0)), t1 != 0)) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    (((struct o1B_uchar *)(a4))->v) = 0x0;
                    (((struct o22_ushort *)(a4))->v) = 0x0;
                }
                (((struct o1A_uchar *)(a4))->v) = (*(signed char *)((t7 + 0x0)));
            }
            return 0x1A;
        }
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        if ((short)(t0 - 1) == 0) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            (((struct oA8_uchar *)(a4))->v) = 0x1;
            if ((*(signed char *)0xC30503C) == 12) {
                return ((int (*)(int, int, int, int))(thunk_FUN_0c03f346))(a4, a5, a6, a7);
            }
            (((struct o28_float *)(a4))->v) = (*(float *)((0xC20DF44 + ((unsigned char)(*(signed char *)((t7 + 0x0))) << 2))));
            FUN_0c012c34(a4);
            t0 = FUN_0c01cd2c(0x440);
            if (((short)t0 != 0) && (t2 = *(signed char *)((a4 + 0x1A)), t2 == 0)) {
            } else {
                t0 = FUN_0c01cd2c(0x101);
                if (((short)t0 != 0) && (t3 = *(signed char *)((t7 + 0x0)), t3 != 0)) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    (((struct o1B_uchar *)(a4))->v) = 0x0;
                    (((struct o22_ushort *)(a4))->v) = 0x0;
                }
                (((struct o1A_uchar *)(a4))->v) = (*(signed char *)((t7 + 0x0)));
            }
            return 0x1A;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x0;
        (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x10);
        (((struct o40_float *)(a4))->v) = ((((struct o0_float *)0xC019998)->v));
        (((struct o44_float *)(a4))->v) = 1.0f;
        (((struct o48_float *)(a4))->v) = 1.0f;
        (((struct o28_float *)(a4))->v) = (*(float *)((0xC20DF44 + ((unsigned char)(*(signed char *)((t7 + 0x0))) << 2))));
        (((struct o2C_float *)(a4))->v) = ((((struct o4_float *)0xC019998)->v));
        (((struct o30_float *)(a4))->v) = ((((struct o8_float *)0xC019998)->v));
        *(unsigned short *)((a4 + 0x1C)) = 0x20;
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        if ((short)(t0 - 1) == 0) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            (((struct oA8_uchar *)(a4))->v) = 0x1;
            if ((*(signed char *)0xC30503C) == 12) {
                return ((int (*)(int, int, int, int))(thunk_FUN_0c03f346))(a4, a5, a6, a7);
            }
            (((struct o28_float *)(a4))->v) = (*(float *)((0xC20DF44 + ((unsigned char)(*(signed char *)((t7 + 0x0))) << 2))));
            FUN_0c012c34(a4);
            t0 = FUN_0c01cd2c(0x440);
            if (((short)t0 != 0) && (t4 = *(signed char *)((a4 + 0x1A)), t4 == 0)) {
            } else {
                t0 = FUN_0c01cd2c(0x101);
                if (((short)t0 != 0) && (t5 = *(signed char *)((t7 + 0x0)), t5 != 0)) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    (((struct o1B_uchar *)(a4))->v) = 0x0;
                    (((struct o22_ushort *)(a4))->v) = 0x0;
                }
                (((struct o1A_uchar *)(a4))->v) = (*(signed char *)((t7 + 0x0)));
            }
            return 0x1A;
        }
    }
    (((struct o1A_uchar *)(a4))->v) = (*(signed char *)((t7 + 0x0)));
    return 0x1A;
}
