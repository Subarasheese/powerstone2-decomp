/* game/flow: functions 0C0F8430-0C0F9496, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
int FUN_0c03f346(int);
int math_vec3_mul_xyz(int, float, float, float);
int FUN_0c17c130(int, int, int);
int FUN_0c0e2390(int, int, int);
int FUN_0c17c450(int);
int FUN_0c187798(void);
int FUN_0c0f8ea8(int a4);

int FUN_0c0f8ea8(int a4)
{
    int stk[3];
    register int t0;
    register int t3;
    register int t17;
    register int t19;
    register float u25;
    register int t26;
    register int t30;
    register int t58;
    register int t60;
    register int t75;
    register int t77;
    register int t84;

    t0 = *(signed char *)0xC5421DC;
    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
        (((struct o20_ushort *)(a4))->v) = 0x0;
        (((struct o22_ushort *)(a4))->v) = 0x0;
        (((struct o15_uchar *)(a4))->v) = 0x0;
        t3 = (((struct o22_short *)(a4))->v);
        *(unsigned short *)((a4 + 0x1C)) = (*(int *)((0xC28E530 + (((t3 << 1) + t3) << 2))));
        (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x200);
        (((struct oBC_float *)(a4))->v) = 0.0f;
        (((struct oB8_float *)(a4))->v) = 0.0f;
        (((struct oB4_float *)(a4))->v) = 0.0f;
        (((struct oA8_uchar *)(a4))->v) = 0x0;
    }
    FUN_0c0e2390(((int)stk + 0), ((0xEC + (((short)t0 * (short)0x2F8) + 0xC5410FC)) + 0xC), ((0xBC + (((short)t0 * (short)0x2F8) + 0xC5410FC)) + 0xC));
    FUN_0c17c450(((int)stk + 0));
    math_vec3_mul_xyz(((int)stk + 0), 640.0f, 640.0f, 640.0f);
    FUN_0c187798();
    FUN_0c17c130((a4 + 0x28), (a4 + 0x28), ((int)stk + 0));
    (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + 0x1);
    t17 = *(signed char *)((a4 + 0x15));
    if (t17 != 0) {
        if (t17 != 1) {
            t84 = t17;
            if (t17 != 2) {
            } else {
                (((struct oA8_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x20))) & 0x1);
                t19 = (((struct o22_short *)(a4))->v);
                (((struct oBC_float *)(a4))->v) = (((((struct oBC_float *)(a4))->v)) - (0.5f / (float)(*(int *)((((((t19 << 1) + t19) << 2) + 0xC28E530) + 0x8)))));
                if (0.0f > ((((struct oBC_float *)(a4))->v))) {
                    (((struct oBC_float *)(a4))->v) = 0.0f;
                }
                u25 = (((struct oBC_float *)(a4))->v);
                (((struct oB8_float *)(a4))->v) = u25;
                (((struct oB4_float *)(a4))->v) = u25;
                t26 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t26 - 1);
                t84 = (short)(t26 - 1);
                if ((int)(short)(t26 - 1) <= 0) {
                    (((struct o22_ushort *)(a4))->v) = (((((struct o22_short *)(a4))->v)) + 0x1);
                    if ((unsigned int)((((struct o22_short *)(a4))->v)) > (unsigned int)0x5) {
                        t84 = (FUN_0c03f346(a4));
                    } else {
                        (((struct o15_uchar *)(a4))->v) = 0x0;
                        t30 = (((struct o22_short *)(a4))->v);
                        *(unsigned short *)((a4 + 0x1C)) = (*(int *)((0xC28E530 + (((t30 << 1) + t30) << 2))));
                        (((struct oBC_float *)(a4))->v) = 0.0f;
                        (((struct oB8_float *)(a4))->v) = 0.0f;
                        (((struct oB4_float *)(a4))->v) = 0.0f;
                        (((struct oA8_uchar *)(a4))->v) = 0x0;
                        t84 = 0xA8;
                    }
                }
            }
        } else {
            (((struct oA8_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x20))) & 0x1);
            t58 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t58 - 1);
            t84 = (short)(t58 - 1);
            if ((int)(short)(t58 - 1) <= 0) {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t60 = (((struct o22_short *)(a4))->v);
                *(unsigned short *)((a4 + 0x1C)) = (*(short *)((((((t60 << 1) + t60) << 2) + 0xC28E530) + 0x8)));
                (((struct oBC_float *)(a4))->v) = 0.5f;
                (((struct oB8_float *)(a4))->v) = 0.5f;
                (((struct oB4_float *)(a4))->v) = 0.5f;
                t84 = 0xB4;
            }
        }
    } else {
        t75 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t75 - 1);
        t84 = (short)(t75 - 1);
        if ((int)(short)(t75 - 1) > 0) {
        } else {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            t77 = (((struct o22_short *)(a4))->v);
            *(unsigned short *)((a4 + 0x1C)) = (*(short *)((((((t77 << 1) + t77) << 2) + 0xC28E530) + 0x4)));
            (((struct oBC_float *)(a4))->v) = 0.5f;
            (((struct oB8_float *)(a4))->v) = 0.5f;
            (((struct oB4_float *)(a4))->v) = 0.5f;
            (((struct oA8_uchar *)(a4))->v) = 0x1;
            t84 = 0xA8;
        }
    }
    return t84;
}
