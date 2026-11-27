/* game/unsorted: functions 0C0EC1E4-0C0EC37A, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o2C_float { char p[0x2C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03f346(int);
int FUN_0c03f444(int, int, int);
int nlRand(void);
int FUN_0c0ec1e4(int a4, float f4);
int FUN_0c0ec326(int a4);

int FUN_0c0ec1e4(int a4, float f4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 == 3) {
                    FUN_0c0ec326((*(signed char *)((a4 + 0x2))));
                }
                return FUN_0c03f346(a4);
            }
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            if ((int)(short)(t0 - 1) <= 0) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t0 = 0x14;
            } else {
                (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) + 0.0500000007f);
                (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 10.0f);
                u0 = *(float *)0xC0EC38C;
                (((struct oB4_float *)(a4))->v) = (((((struct oB4_float *)(a4))->v)) - u0);
                (((struct oB8_float *)(a4))->v) = (((((struct oB8_float *)(a4))->v)) - u0);
                (((struct oBC_float *)(a4))->v) = (((((struct oBC_float *)(a4))->v)) - u0);
                if (0.0f > ((((struct oB4_float *)(a4))->v))) {
                    (((struct oB4_float *)(a4))->v) = 0.0f;
                }
                if (0.0f > ((((struct oB8_float *)(a4))->v))) {
                    (((struct oB8_float *)(a4))->v) = 0.0f;
                }
                if (0.0f > ((((struct oBC_float *)(a4))->v))) {
                    (((struct oBC_float *)(a4))->v) = 0.0f;
                }
                t0 = 0xBC;
            }
            t1 = *(signed char *)0xC54098D;
            t2 = t0;
            if ((int)t1 >= (int)0xC) {
                t0 = 0xE;
                if ((int)t1 <= (int)0xE) {
                    (((struct o14_uchar *)(a4))->v) = 0x63;
                    t0 = 0x14;
                }
                t2 = t0;
            }
            return t2;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x0;
        (((struct oAC_ushort *)(a4))->v) = 0x11;
        (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x200);
        (((struct oBC_float *)(a4))->v) = 1.0f;
        (((struct oB8_float *)(a4))->v) = 1.0f;
        (((struct oB4_float *)(a4))->v) = 1.0f;
        (((struct o48_float *)(a4))->v) = 1.0f;
        (((struct o44_float *)(a4))->v) = 1.0f;
        (((struct o40_float *)(a4))->v) = 1.0f;
        t0 = nlRand();
        t1 = ((~(((~t0) + 0x1) & 0xFF)) + 0x1);
        if ((int)t0 >= 0) {
            t1 = (t0 & 0xFF);
        }
        *(unsigned short *)((a4 + 0x1C)) = t1;
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        *(unsigned short *)((a4 + 0x1C)) = 0xB4;
        t1 = 0xB4;
    }
    return t1;
}

int FUN_0c0ec326(int a4)
{
    int stk[2];
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t8;

    *(unsigned char *)(((int)stk + 0)) = a4;
    t0 = *(signed char *)(((int)stk + 0));
    t1 = *(int *)0xC4B410C;
    *(unsigned int *)(((int)stk + 4)) = (t0 + 0xA3);
    t2 = FUN_0c037320((t0 + 0xA3), t1);
    t3 = FUN_0c03f444(0x5, 0x0, t2);
    t8 = t3;
    if (t3 != 0) {
        FUN_0c03733c(t3, (*(int *)(((int)stk + 4))), (*(int *)0xC4B410C));
        *(unsigned int *)((t3 + 0x4)) = 0xC0EC1E4;
        *(unsigned char *)((t3 + 0x1)) = 0xFFFFFFFF;
        (((struct oAC_ushort *)(t3))->v) = 0x1F;
        (((struct oA9_uchar *)(t3))->v) = 0x21;
        t8 = *(signed char *)(((int)stk + 0));
        *(unsigned char *)((t3 + 0x2)) = t8;
    }
    return t8;
}
