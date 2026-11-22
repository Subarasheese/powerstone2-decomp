/* game/unsorted: functions 0C0CF4B0-0C0CF8F4, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o19_uchar { char p[0x19]; unsigned char v; };
struct o1A_uchar { char p[0x1A]; unsigned char v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o2C_float { char p[0x2C]; float v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o41D_uchar { char p[0x41D]; unsigned char v; };
struct o420_ushort { char p[0x420]; unsigned short v; };
struct o428_uchar { char p[0x428]; unsigned char v; };
struct o50_float { char p[0x50]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c0c25c4(int);
int FUN_0c0c2ab6(int, int);
int FUN_0c0c2ce4(int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c0cd5c0(int, int, int, int);
extern int FUN_0c187798();
int FUN_0c0cf4b0(int a4);
int FUN_0c0cf4fe(int a4, int a5, int a6, int a7);
int FUN_0c0cf7de(int a4, int a5, int a6, int a7, int a8);

int FUN_0c0cf4b0(int a4)
{
    register int t0;

    t0 = 0x0;
    for (;;) {
        if ((int)t0 >= (int)(*(signed char *)((a4 + 0x19)))) {
            break;
        }
        FUN_0c0cd5c0((*(signed char *)((a4 + 0x18))), 0x0, (a4 + 0x28), 0x0);
        t0 = (t0 + 0x1);
    }
    t0 = 0x0;
    for (;;) {
        if ((int)t0 >= (int)(*(signed char *)((a4 + 0x1B)))) {
            break;
        }
        FUN_0c0cd5c0((*(signed char *)((a4 + 0x1A))), 0x0, (a4 + 0x28), 0x0);
        t0 = (t0 + 0x1);
    }
    return 0x1B;
}

int FUN_0c0cf4fe(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
    } else {
        FUN_0c0c2ab6(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738CA))));
        (((struct o50_float *)(a4))->v) = 0.0f;
        (((struct o5C_float *)(a4))->v) = (*(float *)0xC0CF5C8);
        *(unsigned short *)((a4 + 0x1C)) = 0x78;
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    }
    t0 = FUN_0c0c2ce4(a4);
    if (t0 != 0) {
        (((struct o50_float *)(a4))->v) = 0.0f;
    }
    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        return FUN_0c0c2d56(a4, 0x9, 0x0);
    }
    return (short)(t0 - 1);
}

int FUN_0c0cf7de(int a4, int a5, int a6, int a7, int a8)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t10;
    register int t11;
    register int t12;
    register int t13;

    t0 = FUN_0c037320(0xA, (*(int *)0xC4B40CC));
    t1 = 0x0;
    if ((int)t0 >= 0) {
        t2 = FUN_0c03f444(0x9, 0x0, t0);
        t3 = 0x0;
        if (t2 != 0) {
            FUN_0c03733c(t2, 0xA, (*(int *)0xC4B40CC));
            *(unsigned char *)((t2 + 0x1)) = 0xFFFFFFFF;
            *(unsigned int *)((t2 + 0x4)) = 0xC0CF770;
            (((struct oAC_ushort *)(t2))->v) = 0xF;
            (((struct oA9_uchar *)(t2))->v) = 0x40;
            (((struct oA8_uchar *)(t2))->v) = 0x1;
            (((struct o41D_uchar *)(t2))->v) = 0x0;
            (((struct o41C_uchar *)(t2))->v) = 0xC2;
            FUN_0c0c25c4(t2);
            FUN_0c0c2ab6(t2, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((t2 + 0x41C))) * (unsigned short)0x34) + 0xC2738CA))));
            (((struct o12E_ushort *)(t2))->v) = 0x0;
            (((struct o12C_ushort *)(t2))->v) = 0x0;
            (((struct o420_ushort *)(t2))->v) = (*(short *)0xC27603A);
            { struct mv3 { int w[3]; }; *(struct mv3 *)((t2 + 0x28)) = *(struct mv3 *)(a4); }  /* manual: _quick_odd_mvn r0 12, r1 r14 (t2) + 40, r2 r4 (a4) */
            (((struct o18_uchar *)(t2))->v) = a5;
            (((struct o19_uchar *)(t2))->v) = a6;
            (((struct o1A_uchar *)(t2))->v) = a7;
            (((struct o1B_uchar *)(t2))->v) = a8;
            {  /* manual: the loop as the original runs it (the generated loop lost r4-r8 across _quick_odd_mvn) */
                int i_;
                for (i_ = 0; i_ < (int)t0; i_++)
                    if (i_ != 4) { struct mv3 { int w[3]; }; *(struct mv3 *)((*(int *)(t2 + 0xC4 + (i_ << 2))) + 0x6C) = *(struct mv3 *)(0xC273858 + i_ * 12); }
            }
            *(unsigned int *)((t2 + 0x38)) = (unsigned short)((*(short *)0xC5413E8) + 0x8000);
            (((struct o428_uchar *)(t2))->v) = 0x0;
            *(unsigned short *)(((0x428 + t2) + 0x4)) = 0x12C;
            t3 = t2;
        }
        t1 = t3;
    }
    return t1;
}

