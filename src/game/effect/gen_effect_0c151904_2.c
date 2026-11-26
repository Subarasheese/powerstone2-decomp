/* game/effect: functions 0C151904-0C1524CE, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c1519ae(void);
int nlRand(void);
int FUN_0c1519b2(int a4, int a5, int a6, int a7);
struct o1C_short { char p[0x1C]; short v; };
struct o1C_ushort { char p[0x1C]; unsigned short v; };


int FUN_0c1519b2(int a4, int a5, int a6, int a7)
{
    int t1;
    int t0;
    int t2;

    t0 = *(signed char *)(a4 + 0x14);
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                t0 = 0x0;
                for (;;) {
                    FUN_0c1519ae();
                    t1 = *(int *)((((0xC4 + a4) + ((signed char)t0 << 2)) + 0x0));
                    t2 = ((signed char)t0 << 2);
                    t0 = (t0 + 0x1);
                    (((struct o84_float *)(t1))->v) = (((((struct o84_float *)(t1))->v)) + 0.0625f);
                    t1 = *(int *)((((0xC4 + a4) + t2) + 0x0));
                    (((struct o88_float *)(t1))->v) = (((((struct o88_float *)(t1))->v)) + 0.0625f);
                    t1 = *(int *)(((t2 + (0xC4 + a4)) + 0x0));
                    (((struct o8C_float *)(t1))->v) = (((((struct o8C_float *)(t1))->v)) + 0.0625f);
                    if ((int)(signed char)t0 >= (int)0x3) {
                        break;
                    }
                }
                (((struct oB0_float *)(a4))->v) = (((((struct oB0_float *)(a4))->v)) + -0.0399999991f);
                t0 = (((struct o1C_short *)(a4))->v);
                (((struct o1C_ushort *)(a4))->v) = (t0 - 1);
                t1 = (short)(t0 - 1);
                if ((short)(t0 - 1) == 0) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
                    (((struct oB0_float *)(a4))->v) = 0.0f;
                    t1 = 0xB0;
                }
                return t1;
            }
            return FUN_0c03f346(a4, a5, a6, a7);
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
        (((struct o1C_ushort *)(a4))->v) = 0x1E;
        if ((*(signed char *)0xC541F69) == 0) {
            (((struct oB4_float *)(a4))->v) = 0.75f;
            (((struct oB8_float *)(a4))->v) = 0.0f;
            (((struct oBC_float *)(a4))->v) = 0.0f;
        } else {
            (((struct oB4_float *)(a4))->v) = 1.0f;
            (((struct oB8_float *)(a4))->v) = 1.0f;
            (((struct oBC_float *)(a4))->v) = 1.0f;
        }
        t0 = 0x0;
        t1 = 0x0;
        for (;;) {
            t2 = *(int *)((((0xC4 + a4) + t1) + 0x0));
            (((struct o8C_float *)(t2))->v) = 0.25f;
            (((struct o88_float *)(t2))->v) = 0.25f;
            (((struct o84_float *)(t2))->v) = 0.25f;
            t2 = *(int *)((((0xC4 + a4) + t1) + 0x0));
            (((struct o7C_uint *)(t2))->v) = (((((struct o7C_int *)(t2))->v)) + (int)(((float)(short)(((int)((int)(nlRand()) % (int)0x15)) - 11) * 65536.0f) / 360.0f));
            t2 = *(int *)((((0xC4 + a4) + t1) + 0x0));
            (((struct o7C_uint *)(t2))->v) = (((((struct o7C_int *)(t2))->v)) & 0xFFFF);
            nlRand();
            t0 = (t0 + 0x1);
            t1 = (t1 + 0x4);
            if ((int)(signed char)t0 >= (int)0x3) {
                break;
            }
        }
        (((struct o60_float *)(a4))->v) = 0.0f;
        (((struct o58_float *)(a4))->v) = 0.0f;
        (((struct o5C_float *)(a4))->v) = -0.75f;
    }
    t0 = 0x0;
    for (;;) {
        FUN_0c1519ae();
        t1 = *(int *)((((0xC4 + a4) + ((signed char)t0 << 2)) + 0x0));
        t2 = ((signed char)t0 << 2);
        t0 = (t0 + 0x1);
        (((struct o84_float *)(t1))->v) = (((((struct o84_float *)(t1))->v)) + 0.0625f);
        t1 = *(int *)((((0xC4 + a4) + t2) + 0x0));
        (((struct o88_float *)(t1))->v) = (((((struct o88_float *)(t1))->v)) + 0.0625f);
        t1 = *(int *)(((t2 + (0xC4 + a4)) + 0x0));
        (((struct o8C_float *)(t1))->v) = (((((struct o8C_float *)(t1))->v)) + 0.0625f);
        if ((int)(signed char)t0 >= (int)0x3) {
            break;
        }
    }
    t0 = (((struct o1C_short *)(a4))->v);
    (((struct o1C_ushort *)(a4))->v) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((short)(t0 - 1) == 25) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
        (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x400);
        (((struct oB0_float *)(a4))->v) = 1.0f;
        t1 = 0xB0;
    }
    return t1;
}
