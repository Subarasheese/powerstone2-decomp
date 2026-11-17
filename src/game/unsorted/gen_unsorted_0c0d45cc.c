/* game/unsorted: functions 0C0D45CC-0C0D5220, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o130_uchar { char p[0x130]; unsigned char v; };
struct o132_uchar { char p[0x132]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o420_ushort { char p[0x420]; unsigned short v; };
struct oAA_uchar { char p[0xAA]; unsigned char v; };
struct oAB_uchar { char p[0xAB]; unsigned char v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c0c2d56(int, int, int, int);
int FUN_0c0d45cc(int a4, int a5, int a6, int a7, float f4);

int FUN_0c0d45cc(int a4, int a5, int a6, int a7, float f4)
{
    int t0;
    register int t1;
    register float u0;
    register float u1;

    if ((*(signed char *)((a4 + 0x132))) != 0) {
        (((struct o132_uchar *)(a4))->v) = 0x0;
        u0 = (((struct o0_float *)0xC0D46E8)->v);
        t0 = *(signed char *)((a4 + 0x41D));
        if ((t0 != 10) && ((t0 != 0) && (t0 != 1))) {
            if (!(((((struct o160_float *)(a4))->v)) > 0.0f)) {
                (((struct o160_float *)(a4))->v) = u0;
                (((struct o420_ushort *)(a4))->v) = 0x0;
                FUN_0c0c2d56(a4, 0xA, (*(signed char *)((a4 + 0x1))), a7);
                (((struct oAA_uchar *)(a4))->v) = 0x1;
                (((struct oAB_uchar *)(a4))->v) = 0x5;
                t0 = 0xAB;
            } else {
                (((struct o130_uchar *)(a4))->v) = 0xA;
                if ((*(signed char *)((a4 + 0x130))) != 0) {
                    u1 = (((struct oC_float *)0xC0D46E8)->v);
                    (((struct oBC_float *)(a4))->v) = u1;
                    (((struct oB8_float *)(a4))->v) = u1;
                    (((struct o130_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x130))) - 1);
                    t1 = 0x130;
                } else {
                    (((struct oBC_float *)(a4))->v) = 1.0f;
                    (((struct oB8_float *)(a4))->v) = 1.0f;
                    (((struct oB4_float *)(a4))->v) = 1.0f;
                    t1 = 0xB4;
                }
                t0 = t1;
            }
            t1 = t0;
        } else {
            (((struct o160_float *)(a4))->v) = u0;
            (((struct o420_ushort *)(a4))->v) = (*(short *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738D2)));
            if ((*(signed char *)((a4 + 0x130))) != 0) {
                u0 = (((struct oC_float *)0xC0D46E8)->v);
                (((struct oBC_float *)(a4))->v) = u0;
                (((struct oB8_float *)(a4))->v) = u0;
                (((struct o130_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x130))) - 1);
                t0 = 0x130;
            } else {
                (((struct oBC_float *)(a4))->v) = 1.0f;
                (((struct oB8_float *)(a4))->v) = 1.0f;
                (((struct oB4_float *)(a4))->v) = 1.0f;
                t0 = 0xB4;
            }
            t1 = t0;
        }
        t0 = t1;
    } else {
        if ((*(signed char *)((a4 + 0x130))) != 0) {
            u0 = (((struct oC_float *)0xC0D46E8)->v);
            (((struct oBC_float *)(a4))->v) = u0;
            (((struct oB8_float *)(a4))->v) = u0;
            (((struct o130_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x130))) - 1);
            t1 = 0x130;
        } else {
            (((struct oBC_float *)(a4))->v) = 1.0f;
            (((struct oB8_float *)(a4))->v) = 1.0f;
            (((struct oB4_float *)(a4))->v) = 1.0f;
            t1 = 0xB4;
        }
        t0 = t1;
    }
    return t0;
}
