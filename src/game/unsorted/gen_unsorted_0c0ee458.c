/* game/unsorted: functions 0C0EE458-0C0EE7D2, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o131_uchar { char p[0x131]; unsigned char v; };
struct o132_uchar { char p[0x132]; unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o50_float { char p[0x50]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oD0_int { char p[0xD0]; int v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c05258e(int, int, int, int, int);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c064f80(int);
int FUN_0c15009e(int, float, float, float, float, float);
int nlRand(void);
int math_vec3_accumulate(int, int);
int FUN_0c0ee458(int a4);
int FUN_0c0ee476(int a4, float f4);
int FUN_0c0ee4ac(int a4);
int FUN_0c0ee580(int a4, int a5, int a6, int a7);

int FUN_0c0ee458(int a4)
{
    if ((*(signed char *)((a4 + 0x132))) != 0) {
        (((struct o41C_uchar *)(a4))->v) = 0x5;
        (((struct o132_uchar *)(a4))->v) = 0x0;
        return 0x1;
    }
    return 0x0;
}

int FUN_0c0ee476(int a4, float f4)
{
    register int t3;

    if ((*(signed char *)(((0x41C + a4) + 0x0))) != 0) {
        (((struct o41C_uchar *)(a4))->v) = ((*(signed char *)(((0x41C + a4) + 0x0))) - 1);
        (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x200);
        (((struct oB4_float *)(a4))->v) = 1.0f;
        (((struct oB8_float *)(a4))->v) = 0.0f;
        (((struct oBC_float *)(a4))->v) = 0.0f;
        t3 = 0xBC;
    } else {
        (((struct oAC_ushort *)(a4))->v) = 0xF;
        t3 = 0xAC;
    }
    return t3;
}

int FUN_0c0ee4ac(int a4)
{
    if ((*(signed char *)((a4 + 0x132))) != 0) {
        (((struct o132_uchar *)((*(int *)((a4 + 0x10)))))->v) = 0x1;
        (((struct o132_uchar *)(a4))->v) = 0x0;
        (((struct o131_uchar *)(a4))->v) = 0x0;
        return 0x1;
    }
    return 0x0;
}

int FUN_0c0ee580(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
                math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
                if ((*(signed char *)((a4 + 0x131))) == 0) {
                    t1 = FUN_0c064f80(a4);
                    if (t1 != 0) {
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        (((struct o5C_float *)(a4))->v) = 0.0f;
                        (((struct o50_float *)(a4))->v) = 0.0f;
                        *(unsigned short *)((a4 + 0x1C)) = 0xB4;
                        FUN_0c05258e(0x2, 0xA, 0x100, 0x1E, 0x0);
                        FUN_0c15009e((a4 + 0x28), 1.0f, 1.0f, 1.0f, 20.0f, 10.0f);
                        if ((*(signed char *)((a4 + 0x2))) == 0) {
                            *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x0;
                            *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x0;
                            *(unsigned char *)((((((struct oCC_int *)(a4))->v)) + 0x0)) = 0x1;
                            *(unsigned char *)((((((struct oD0_int *)(a4))->v)) + 0x0)) = 0x1;
                        } else {
                            *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x0;
                            *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
                        }
                        return thunk_FUN_0c05abb2(0x51, (a4 + 0x28));
                    }
                    return t1;
                }
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                (((struct o5C_float *)(a4))->v) = 0.0f;
                (((struct o50_float *)(a4))->v) = 0.0f;
                *(unsigned short *)((a4 + 0x1C)) = 0xB4;
                FUN_0c05258e(0x2, 0xA, 0x100, 0x1E, 0x0);
                FUN_0c15009e((a4 + 0x28), 1.0f, 1.0f, 1.0f, 20.0f, 10.0f);
                if ((*(signed char *)((a4 + 0x2))) == 0) {
                    *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x0;
                    *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x0;
                    *(unsigned char *)((((((struct oCC_int *)(a4))->v)) + 0x0)) = 0x1;
                    *(unsigned char *)((((((struct oD0_int *)(a4))->v)) + 0x0)) = 0x1;
                } else {
                    *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x0;
                    *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
                }
                return thunk_FUN_0c05abb2(0x51, (a4 + 0x28));
            }
            if (t0 == 3) {
                (((struct o12A_ushort *)(a4))->v) = 0x0;
                (((struct o12C_ushort *)(a4))->v) = 0x0;
                t0 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
                if ((int)(short)(t0 - 1) <= 0) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                }
                t0 = *(short *)((a4 + 0x1C));
                t1 = t0;
                if ((int)t0 <= (int)0x3C) {
                    (((struct oA8_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0xA8))) ^ 0x1);
                    t1 = 0xA8;
                }
                return t1;
            }
            return FUN_0c03f346(a4, a5, a6, a7);
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0x1;
        *(unsigned short *)((a4 + 0x1C)) = ((int)((int)(nlRand()) % (int)0x78));
        u0 = (((struct o28_float *)((*(int *)((a4 + 0x10)))))->v);
        t0 = (int)((int)(nlRand()) % (int)0x50);
        (((struct o28_float *)(a4))->v) = ((u0 + (float)(((t0 << 2) + t0) << 1)) + -400.0f);
        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)((*(int *)((a4 + 0x10)))))->v)) + 1000.0f);
        u0 = (((struct o30_float *)((*(int *)((a4 + 0x10)))))->v);
        t0 = (int)((int)(nlRand()) % (int)0x50);
        (((struct o30_float *)(a4))->v) = ((u0 + (float)(((t0 << 2) + t0) << 1)) + -400.0f);
        if ((*(signed char *)((a4 + 0x2))) == 0) {
            *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x0;
            *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x0;
            *(unsigned char *)((((((struct oCC_int *)(a4))->v)) + 0x0)) = 0x0;
            *(unsigned char *)((((((struct oD0_int *)(a4))->v)) + 0x0)) = 0x0;
        } else {
            *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x0;
            *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x0;
        }
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o50_float *)(a4))->v) = -0.5f;
        if ((*(signed char *)((a4 + 0x2))) == 0) {
            *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
            *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
            *(unsigned char *)((((((struct oCC_int *)(a4))->v)) + 0x0)) = 0x0;
            *(unsigned char *)((((((struct oD0_int *)(a4))->v)) + 0x0)) = 0x0;
        } else {
            *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
            *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x0;
        }
    }
    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)((*(int *)((a4 + 0x10)))))->v)) + 5000.0f);
    return 0x2C;
}
