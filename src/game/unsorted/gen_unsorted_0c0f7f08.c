/* game/unsorted: functions 0C0F7F08-0C0F800A, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uint { unsigned int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03f346(int, int);
int FUN_0c03f444(int, int, int);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c0cff96(int, int);
int FUN_0c0f7f08(void);
int FUN_0c0f7f52(int a4);

int FUN_0c0f7f08(void)
{
    register int t0;
    register int t1;

    t0 = FUN_0c037320(0x11, (*(int *)0xC4B410C));
    t1 = FUN_0c03f444(0x5, 0x0, t0);
    t0 = t1;
    if (t1 != 0) {
        FUN_0c03733c(t1, 0x11, (*(int *)0xC4B410C));
        (((struct oA8_uchar *)(t1))->v) = 0x1;
        (((struct oAC_ushort *)(t1))->v) = 0xF;
        (((struct oA9_uchar *)(t1))->v) = 0x80;
        *(unsigned char *)((t1 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t1 + 0x4)) = 0xC0F7CA0;
        t0 = 0xFFFFFFFF;
    }
    return t0;
}

int FUN_0c0f7f52(int a4)
{
    register int t19;
    register float u28;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oBC_float *)(a4))->v) = 0.0f;
        (((struct oB8_float *)(a4))->v) = 0.0f;
        (((struct oB4_float *)(a4))->v) = 0.0f;
        (((struct o20_ushort *)(a4))->v) = 0x0;
        thunk_FUN_0c05abb2(0x3, 0x0);
        (((struct o8_uint *)0xC542440)->v) = 0xFF212B33;
        (((struct o4_uint *)0xC542440)->v) = 0xFF212B33;
        (((struct o0_uint *)0xC542440)->v) = 0xFF212B33;
    }
    FUN_0c0cff96((*(int *)((((((struct oC8_int *)(a4))->v)) + 0x8))), 0xC1FB2E0);
    t19 = *(signed char *)((a4 + 0x15));
    if (t19 != 0) {
        if (t19 != 1) {
            if (t19 != 2) {
                return t19;
            }
            if ((int)(unsigned char)(*(signed char *)0xC541F43) > (int)0x10) {
                return FUN_0c03f346(a4, 0x10);
            }
            return t19;
        }
        if ((int)(unsigned char)(*(signed char *)0xC541F43) >= (int)0x10) {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            t19 = 0x15;
        }
        return t19;
    }
    (((struct oB4_float *)(a4))->v) = (((((struct oB4_float *)(a4))->v)) + 0.0500000007f);
    if (!(1.0f > ((((struct oB4_float *)(a4))->v)))) {
        (((struct oB4_float *)(a4))->v) = 1.0f;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    }
    u28 = (((struct oB4_float *)(a4))->v);
    (((struct oBC_float *)(a4))->v) = u28;
    (((struct oB8_float *)(a4))->v) = u28;
    return 0xB8;
}
