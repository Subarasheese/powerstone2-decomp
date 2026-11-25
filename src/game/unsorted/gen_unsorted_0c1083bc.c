/* game/unsorted: functions 0C1083BC-0C1086D8, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uint { unsigned int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o6C_float { char p[0x6C]; float v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o90_float { char p[0x90]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c1171f0(int);
int FUN_0c11e20c(int);
int FUN_0c11e28e(int a4);
int nlAddVector3op(int, int, int);
int FUN_0c1083bc(int a4, int a5, int a6, int a7);
int FUN_0c10852e(void);
int FUN_0c108568(int a4, int a5);
int FUN_0c1085a6(int a4);
int FUN_0c1085c8(int a4, int a5, int a6, int a7);

int FUN_0c1083bc(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                return t0;
            }
            if (t0 != 10) {
                if (t0 != 11) {
                    if (t0 == 80) {
                        return FUN_0c03f346(a4, a5, a6, a7);
                    }
                    t1 = t0;
                    if (t0 == 99) {
                        (((struct o14_uchar *)(a4))->v) = 0xA;
                        t1 = 0x14;
                    }
                    return t1;
                }
            } else {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                (((struct o90_float *)(((((struct oC4_int *)(a4))->v))))->v) = 43.75f;
            }
            t0 = (((struct oC4_int *)(a4))->v);
            (((struct o6C_float *)(t0))->v) = (((((struct o6C_float *)(t0))->v)) + ((((struct o90_float *)(t0))->v)));
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
            t1 = (short)(t0 + 0x1);
            if ((int)(short)(t0 + 0x1) >= (int)0x10) {
                (((struct o14_uchar *)(a4))->v) = 0x50;
                t1 = 0x14;
            }
            return t1;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0x1F;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        FUN_0c1171f0(a4);
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x9, 0xD, (*(int *)0xC4B410C));
        t0 = (((struct oC4_int *)(a4))->v);
        (((struct o6C_float *)(t0))->v) = (((((struct o6C_float *)(t0))->v)) + 700.0f);
        (((struct o90_float *)(t0))->v) = -43.75f;
        t0 = 0x0;
        for (;;) {
            t1 = FUN_0c03f444(0x8, 0x2, 0x1);
            if (t1 != 0) {
                *(unsigned char *)((t1 + 0x1)) = 0xFFFFFFFF;
                *(unsigned int *)((t1 + 0x4)) = 0xC1082B8;
                *(unsigned int *)((t1 + 0x10)) = a4;
                *(unsigned char *)((t1 + 0x2)) = t0;
            }
            t0 = (t0 + 0x1);
            if ((int)t0 >= (int)0x3) {
                break;
            }
        }
    }
    t0 = (((struct oC4_int *)(a4))->v);
    (((struct o6C_float *)(t0))->v) = (((((struct o6C_float *)(t0))->v)) + ((((struct o90_float *)(t0))->v)));
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
    t1 = (short)(t0 + 0x1);
    if ((int)(short)(t0 + 0x1) >= (int)0x10) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
        t1 = 0x0;
    }
    return t1;
}

int FUN_0c10852e(void)
{
    register int t0;

    (((struct o0_uint *)0xC473CC0)->v) = 0xFFFFFFFF;
    (((struct o4_uint *)0xC473CC0)->v) = 0xFFFFFFFF;
    (((struct o8_uint *)0xC473CC0)->v) = 0xFFFFFFFF;
    t0 = FUN_0c03f444(0x8, 0x1, 0x1);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC1083BC;
        return t0;
    }
    return 0x0;
}

int FUN_0c108568(int a4, int a5)
{
    if ((int)(*(int *)((((*(int *)((((a4 << 2) + 0xC474410) + 0x0))) << 2) + 0xC474104))) > 0) {
        *(unsigned int *)((((a5 << 2) + 0xC473CC0) + 0x0)) = (*(int *)((((a4 << 2) + 0xC474410) + 0x0)));
        FUN_0c11e28e((*(int *)((((a5 << 2) + 0xC473CC0) + 0x0))));
        return 0x1;
    }
    return 0x0;
}

int FUN_0c1085a6(int a4)
{
    register int t0;
    register int t1;

    t0 = *(int *)((((a4 << 2) + 0xC473CC0) + 0x0));
    t1 = t0;
    if (t0 != -1) {
        t0 = FUN_0c11e20c((*(int *)((((a4 << 2) + 0xC473CC0) + 0x0))));
        *(unsigned int *)((((a4 << 2) + 0xC473CC0) + 0x0)) = 0xFFFFFFFF;
        t1 = t0;
    }
    return t1;
}

