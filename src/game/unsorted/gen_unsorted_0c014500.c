/* game/unsorted: functions 0C014500-0C0147B0, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
int FUN_0c01c62a(int);
int FUN_0c02b342(int, int);
int FUN_0c02b3ba(int, float, float, float);
int FUN_0c02b502(int);
float math_sin_angle16(int);
int strcpy(int, int);
int FUN_0c187d88(int);
int strncpy(int, int, int);
int FUN_0c014500(int a4);

int FUN_0c014500(int a4)
{
    int stk[9];
    register int t7;
    register int t14;
    register int t15;
    register float u16;
    register int t39;
    register int t49;
    register int t50;
    register float u67;
    register float u80;
    register int t81;
    register float u102;
    register int t103;
    register int t41;
    register int t42;
    int t43;
    register int t110;

    if ((*(signed char *)((a4 + 0x3))) == 0) {
        FUN_0c02b502(0x0);
        FUN_0c02b342(0xC30A404, (((int)stk + 0) + 0x4));
        FUN_0c02b3ba((((int)stk + 0) + 0x4), 118.0f, 210.0f, 638.0f);
        FUN_0c02b502(0x0);
        strncpy((((int)stk + 0) + 0x4), 0xC309D86, 0x18);
        (((struct o18_uchar *)((((int)stk + 0) + 0x4)))->v) = 0x0;
        FUN_0c02b3ba((((int)stk + 0) + 0x4), 46.0f, 301.0f, 638.0f);
        t7 = FUN_0c187d88(0xC309D86);
        if ((int)t7 > (int)0x18) {
            strcpy((((int)stk + 0) + 0x4), 0xC309D9E);
            FUN_0c02b3ba((((int)stk + 0) + 0x4), 46.0f, 331.0f, 638.0f);
        }
        FUN_0c02b502(0x0);
        t14 = 0x0;
        for (;;) {
            t15 = *(signed char *)0xC3045F4;
            *(float *)(((int)stk + 0)) = ((float)t14 * 59.0f);
            u16 = ((float)t14 * 59.0f);
            FUN_0c02b3ba((((t15 + t14) * 0x1A) + 0xC304610), 380.0f, (u16 + 212.0f), 638.0f);
            FUN_0c02b3ba(((((*(signed char *)0xC3045F4) + t14) * 0x1A) + 0xC304618), 412.0f, ((*(float *)(((int)stk + 0))) + 236.0f), 638.0f);
            t14 = (t14 + 0x1);
            if ((int)t14 >= (int)0x3) {
                break;
            }
        }
    }
    (((struct oA8_uchar *)(a4))->v) = ((((float)(*(signed char *)((a4 + 0x3))) == ((((struct o8_float *)(((((*(signed char *)0xC3045F1) << 2) << 2) + 0xC1A5DB4)))->v)))) ? 1 : 0);
    (((struct o28_float *)(a4))->v) = (*(float *)((0xC1A5DB4 + (((*(signed char *)0xC3045F1) << 2) << 2))));
    (((struct o2C_float *)(a4))->v) = ((((struct o4_float *)(((((*(signed char *)0xC3045F1) << 2) << 2) + 0xC1A5DB4)))->v));
    t39 = *(signed char *)((a4 + 0x15));
    if ((int)t39 < (int)0x3) {
        if (((*(signed char *)0xC3045F2) != 0) && ((t41 = *(signed char *)0xC3045F1, t41 == 2) || (((int)t39 < (int)0x3) && ((t42 = *(signed char *)0xC3045F2, t42 != 0) && (t43 = *(signed char *)0xC3045F1, t43 == 3))))) {
            (((struct o15_uchar *)(a4))->v) = 0x3;
            (((struct o1B_uchar *)(a4))->v) = 0x0;
            (((struct o22_ushort *)(a4))->v) = 0x0;
        }
    }
    t49 = *(signed char *)((a4 + 0x15));
    if (t49 != 0) {
        if (t49 != 1) {
            if (t49 != 2) {
                t110 = t49;
                if (t49 != 3) {
                } else {
                    t50 = FUN_0c01c62a(a4);
                    t110 = (signed char)t50;
                    if ((signed char)t50 != 0) {
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        t110 = 0x14;
                    }
                }
            } else {
                *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
                u67 = 0.5f;
                u67 = u67 + 0.5f * (math_sin_angle16(((((*(short *)((a4 + 0x1E))) << 8) << 2) << 1)));
                (((struct oBC_float *)(a4))->v) = u67;
                (((struct oB8_float *)(a4))->v) = u67;
                (((struct oB4_float *)(a4))->v) = u67;
                t110 = 0xB4;
            }
        } else {
            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
            u80 = 0.5f;
            u80 = u80 + 0.5f * (math_sin_angle16(((((*(short *)((a4 + 0x1E))) << 8) << 2) << 1)));
            (((struct oB0_float *)(a4))->v) = u80;
            t81 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t81 - 1);
            t110 = (short)(t81 - 1);
            if ((int)(short)(t81 - 1) <= 0) {
                (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) & 0xFBFF);
                *(unsigned short *)((a4 + 0x1C)) = 0x3C;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t110 = 0x15;
            }
        }
    } else {
        (((struct o28_float *)(a4))->v) = -154.0f;
        (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x200);
        (((struct oBC_float *)(a4))->v) = 0.5f;
        (((struct oB8_float *)(a4))->v) = 0.5f;
        (((struct oB4_float *)(a4))->v) = 0.5f;
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
        u102 = 0.5f;
        u102 = u102 + 0.5f * (math_sin_angle16(((((*(short *)((a4 + 0x1E))) << 8) << 2) << 1)));
        (((struct oB0_float *)(a4))->v) = u102;
        t103 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t103 - 1);
        t110 = (short)(t103 - 1);
        if ((int)(short)(t103 - 1) <= 0) {
            (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) & 0xFBFF);
            *(unsigned short *)((a4 + 0x1C)) = 0x3C;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            t110 = 0x15;
        }
    }
    return t110;
}
