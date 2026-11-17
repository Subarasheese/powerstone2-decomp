/* game/unsorted: functions 0C161830-0C163134, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o24_short { char p[0x24]; short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o378C_float { char p[0x378C]; float v; };
struct o38AE_short { char p[0x38AE]; short v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oD4_int { char p[0xD4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int thunk_FUN_0c058310(int, int);
int FUN_0c17c4d0(int);
int FUN_0c187798(int, int, int);
int FUN_0c161da4(int a4, int a5, int a6, int a7);

int FUN_0c161da4(int a4, int a5, int a6, int a7)
{
    int stk[6];
    register int t0;
    register int t2;
    register int t7;
    register int t9;
    register float u23;
    register float u24;
    register float u28;
    register float u29;
    register float u33;
    register float u34;
    register int t35;
    register int t53;
    register int t58;
    register int t60;
    register float u66;
    register int t97;
    register int t102;
    register int t112;
    register int t117;
    register int t119;
    register int t126;
    register float u140;
    register float u141;
    register float u145;
    register float u146;
    register float u150;
    register float u151;
    register int t191;
    register int t179;
    register float u110;
    register int t116;

    t0 = *(signed char *)((a4 + 0x2));
    if (t0 != 0) {
        if (t0 == 1) {
            t2 = *(signed char *)((a4 + 0x14));
            if (t2 != 0) {
                t191 = t2;
                if (t2 != 1) {
                } else {
                    t191 = (FUN_0c03f346(a4, a5, a6, a7));
                }
            } else {
                t7 = *(int *)((a4 + 0x10));
                *(volatile signed char *)((t7 + 0x1));
                t9 = ((int (*)(int, int, int))(FUN_0c187798))(0xC5410FC, a5, a6);
                thunk_FUN_0c058310((((((struct oD4_int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532498)))->v)) + 0x28), ((int)stk + 0));
                *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) - (*(float *)(((int)stk + 0))));
                *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 16))) - (*(float *)(((int)stk + 4))));
                *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 20))) - (*(float *)(((int)stk + 8))));
                FUN_0c17c4d0((((int)stk + 0) + 0xC));
                u23 = ((*(float *)(((int)stk + 12))) * ((((struct o378C_float *)(t7))->v)));
                u24 = (*(float *)(((int)stk + 0)));
                u24 = u24 + 100.0f * u23;
                (((struct o28_float *)(a4))->v) = u24;
                u28 = ((*(float *)(((int)stk + 20))) * ((((struct o378C_float *)(t7))->v)));
                u29 = (*(float *)(((int)stk + 8)));
                u29 = u29 + 100.0f * u28;
                (((struct o30_float *)(a4))->v) = u29;
                u33 = ((*(float *)(((int)stk + 16))) * ((((struct o378C_float *)(t7))->v)));
                u34 = (*(float *)(((int)stk + 4)));
                u34 = u34 + 100.0f * u33;
                (((struct o2C_float *)(a4))->v) = u34;
                t35 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t35 - 1);
                if ((int)(short)(t35 - 1) <= 0) {
                    *(unsigned short *)((a4 + 0x1C)) = 0x5;
                    *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) ^ 0x1);
                }
                FUN_0c03744a(((((struct oC4_int *)(a4))->v)), (*(short *)((a4 + 0x1E))), 0x10, (*(int *)0xC4B40CC));
                if (((*(signed char *)((t7 + 0x3714))) != 0) && (t191 = *(signed char *)((t7 + 0x3715)), t191 == 17)) {
                } else {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t191 = 0x14;
                }
            }
        } else {
            t191 = t0;
            if (t0 == 2) {
                t53 = *(signed char *)((a4 + 0x14));
                if (t53 != 0) {
                    t191 = t53;
                    if (t53 != 1) {
                    } else {
                        t191 = (FUN_0c03f346(a4, a5, a6, a7));
                    }
                } else {
                    t58 = *(int *)((a4 + 0x10));
                    *(volatile signed char *)((t58 + 0x1));
                    t60 = ((int (*)(int, int, int))(FUN_0c187798))(0xC5410FC, a5, a6);
                    thunk_FUN_0c058310((((((struct oD4_int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532498)))->v)) + 0x28), (a4 + 0x28));
                    u66 = ((((struct o2C_float *)(a4))->v));
                    u66 = u66 + 60.0f * ((((struct o378C_float *)(t58))->v));
                    (((struct o2C_float *)(a4))->v) = u66;
                    *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0xCCC);
                    if (((*(signed char *)((t58 + 0x3714))) != 0) && (t191 = *(signed char *)((t58 + 0x3715)), t191 == 17)) {
                    } else {
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        t191 = 0x14;
                    }
                }
            }
        }
    } else {
        t97 = *(signed char *)((a4 + 0x14));
        if (t97 != 0) {
            t179 = t97;
            if (t97 == 1) {
                t179 = (FUN_0c03f346(a4, a5, a6, a7));
            }
        } else {
            t102 = *(int *)((a4 + 0x10));
            (((struct oA8_uchar *)(a4))->v) = (*(signed char *)((t102 + 0xA8)));
            if (((unsigned short)((((struct oAC_short *)(t102))->v)) & 0x400) != 0) {
                (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x200);
                u110 = ((((struct oB0_float *)(t102))->v));
            } else {
                (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) & 0xFDFF);
                u110 = 1.0f;
            }
            (((struct oBC_float *)(a4))->v) = u110;
            (((struct oB8_float *)(a4))->v) = u110;
            (((struct oB4_float *)(a4))->v) = u110;
            t112 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t112 - 1);
            if ((int)(short)(t112 - 1) <= 0) {
                *(unsigned short *)((a4 + 0x1C)) = 0x4;
                *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) ^ 0x1);
            }
            t117 = 0x0;
            for (;;) {
                t119 = *(int *)((((t117 << 2) + (0xC4 + a4)) + 0x0));
                FUN_0c03744a(t119, (*(short *)((a4 + 0x1E))), 0x45, (*(int *)0xC4B40CC));
                switch (t117) {
                case 0:
                    t116 = 0x4;
                    break;
                case 1:
                    t116 = 0x2;
                    break;
                case 2:
                    t116 = 0xD;
                    break;
                }
                *(volatile signed char *)((t102 + 0x1));
                t126 = ((int (*)(void))(FUN_0c187798))();
                thunk_FUN_0c058310(((*(int *)((((t116 << 2) + (0xC4 + (((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532498))) + 0x0))) + 0x28), ((int)stk + 0));
                *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) - (*(float *)(((int)stk + 0))));
                *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 16))) - (*(float *)(((int)stk + 4))));
                *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 20))) - (*(float *)(((int)stk + 8))));
                FUN_0c17c4d0((((int)stk + 0) + 0xC));
                t117 = (t117 + 0x1);
                u140 = ((*(float *)(((int)stk + 12))) * ((((struct o378C_float *)(t102))->v)));
                u141 = (*(float *)(((int)stk + 0)));
                u141 = u141 + 100.0f * u140;
                (((struct o6C_float *)(t119))->v) = u141;
                u145 = ((*(float *)(((int)stk + 16))) * ((((struct o378C_float *)(t102))->v)));
                u146 = (*(float *)(((int)stk + 4)));
                u146 = u146 + 100.0f * u145;
                (((struct o70_float *)(t119))->v) = u146;
                u150 = ((*(float *)(((int)stk + 20))) * ((((struct o378C_float *)(t102))->v)));
                u151 = (*(float *)(((int)stk + 8)));
                u151 = u151 + 100.0f * u150;
                (((struct o74_float *)(t119))->v) = u151;
                if ((int)t117 < (int)0x3) continue;
                break;
            }
            if ((*(signed char *)((t102 + 0x3714))) == 0) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t179 = 0x14;
            } else {
                if ((unsigned char)(*(signed char *)((t102 + 0x38AC))) != 62) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t179 = 0x14;
                } else {
                    t179 = 0x24;
                    if (((((struct o38AE_short *)(t102))->v)) == ((((struct o24_short *)(a4))->v))) {
                    } else {
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        t179 = 0x14;
                    }
                }
            }
        }
        t191 = t179;
    }
    return t191;
}
