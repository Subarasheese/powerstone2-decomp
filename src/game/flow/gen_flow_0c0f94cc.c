/* game/flow: functions 0C0F94CC-0C0FA5B4, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o6C_float { char p[0x6C]; float v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oD4_int { char p[0xD4]; int v; };
struct oD8_int { char p[0xD8]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c03ea04(int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c0527e6(void);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c0cff96(int, int);
extern int FUN_0c0f9cc4();
int nlRand(void);
float math_sin_angle16(int);
extern int FUN_0c18778c();
int FUN_0c187798(void);
void FUN_0c0f94cc(int a4, int a5, int a6, int a7);
int FUN_0c0f98ce(void);
int FUN_0c0f99bc(int a4);
int FUN_0c0f9c66(void);
int FUN_0c0f9cb0(int a4);
int FUN_0c0f9d56(int a4);
int FUN_0c0f9e28(int a4);
int FUN_0c0f9e8c(int a4);
int FUN_0c0fa012(int a4);
int FUN_0c0fa098(int a4, int a5, int a6, int a7);
int FUN_0c0fa158(void);
int FUN_0c0fa55a(void);
int FUN_0c0fa57a(int a4);

/* FUN_0c0f94cc, written by hand from the original (1,026 bytes; the generated C was 2,608).
   An animated object a4: byte +20 is the phase (0 = start, 1 = run, anything else = hand over to FUN_0c03f346), byte +21 the animation step
   (0..5, 16, 99), byte +22 the slide step, word +28 a frame counter, word +30 a sine phase, word +34 the slide position. The steps fall
   through as the original does (0 into 1, and 0 of the slide into 1). A step that ends calls FUN_0c0f9cc4, FUN_0c0fa012, FUN_0c0f9e28
   and FUN_0c0fa55a (steps 5 and 16): FUN_0c0f9cc4 is passed what the original leaves in r5-r7 and fr4. */

#define UB(o) (*(unsigned char *)(a4 + (o)))
#define SB(o) (*(signed char *)(a4 + (o)))
#define SH(o) (*(short *)(a4 + (o)))
#define FL(o) (*(float *)(a4 + (o)))

/* manual: written by hand, 2026-11-23/24 (build/manual/notes_FUN_0c0f94cc.txt) */
void FUN_0c0f94cc(int a4, int a5, int a6, int a7)
{
    float u;
    float v;
    float w;

    switch (SB(0x14)) {
    case 0:
        UB(0x14) = SB(0x14) + 1;
        UB(0x15) = 0;
        UB(0x16) = 0;
        UB(0xA8) = 1;
    case 1:
        if (*(signed char *)0xC541F43 != 0 && SB(0x15) < 16) {
            UB(0x15) = 16;
        }
        switch (SB(0x15)) {
        case 0:
            SH(0x1C) = 60;
            UB(0x15) = SB(0x15) + 1;
        case 1:
            SH(0x1C) = SH(0x1C) - 1;
            u = 1.0f;
            u = u + 0.25f * (float)SH(0x1C);
            FL(0x40) = u;
            FL(0x28) = ((float)SH(0x1C) / 60.0f) * 2.8125f;
            FL(0x2C) = ((float)SH(0x1C) / 60.0f) * 4.5703125f;
            u = FL(0x40);
            FL(0x40) = u / 128.0f;
            FL(0x44) = u / 128.0f;
            if (SH(0x1C) > 0) {
                break;
            }
            SH(0x1C) = 30;
            SH(0x1E) = 0;
            SH(0x20) = 120;
            UB(0x15) = SB(0x15) + 1;
            UB(0x16) = 1;
            SH(0x22) = 0xAAA;
            break;
        case 2:
            SH(0x1C) = SH(0x1C) - 1;
            SH(0x1E) = SH(0x1E) + 1;
            SH(0x20) = SH(0x20) - 1;
            u = (float)SH(0x20) / 960.0f;
            v = math_sin_angle16(SH(0x1E) << 13);
            FL(0x40) = u * v + 1.0f;
            FL(0x44) = 1.0f - u * v;
            FL(0x40) = FL(0x40) * 0.0078125f;
            FL(0x44) = FL(0x44) * 0.0078125f;
            *(float *)(*(int *)(a4 + 0xC8) + 0x6C) = ((float)SH(0x1C) / 30.0f) * 3000.0f;
            if (SH(0x1C) > 0) {
                break;
            }
            SH(0x1C) = 30;
            UB(0x15) = SB(0x15) + 1;
            break;
        case 3:
            SH(0x1C) = SH(0x1C) - 1;
            v = math_sin_angle16((int)(((float)SH(0x1C) / 30.0f) * 32768.0f));
            FL(0x40) = 1.0f - v * 0.5f;
            FL(0x44) = v * 0.5f + 1.0f;
            FL(0x40) = FL(0x40) * 0.0078125f;
            FL(0x44) = FL(0x44) * 0.0078125f;
            if (SH(0x1C) > 0) {
                break;
            }
            SH(0x1C) = 60;
            SH(0x1E) = 0;
            UB(0x15) = SB(0x15) + 1;
            UB(0x16) = 1;
            SH(0x22) = 0xE38;
            break;
        case 4:
            SH(0x1C) = SH(0x1C) - 1;
            SH(0x1E) = SH(0x1E) + 1;
            u = ((float)SH(0x1C) * 0.100000001f) / 60.0f;
            v = math_sin_angle16(SH(0x1E) << 13);
            FL(0x40) = u * v + 1.0f;
            FL(0x44) = 1.0f - u * v;
            FL(0x40) = FL(0x40) * 0.0078125f;
            FL(0x44) = FL(0x44) * 0.0078125f;
            if (SH(0x1C) <= 30) {
                UB(0x15) = SB(0x15) + 1;
            }
            break;
        case 5:
            SH(0x1C) = SH(0x1C) - 1;
            SH(0x1E) = SH(0x1E) + 1;
            u = ((float)SH(0x1C) * 0.100000001f) / 60.0f;
            v = math_sin_angle16(SH(0x1E) << 13);
            w = u * v;
            FL(0x40) = 1.0f - u * v;
            FL(0x44) = w + 1.0f;
            FL(0x40) = FL(0x40) * 0.0078125f;
            FL(0x44) = FL(0x44) * 0.0078125f;
            FL(0x2C) = FL(0x2C) + 0.0187500007f;
            if (SH(0x1C) > 0) {
                break;
            }
            ((int (*)(int, int, int, int, float))(FUN_0c0f9cc4))(a4, a5, a6, a7, w + 1.0f);
            FUN_0c0f9e28(FUN_0c0fa012(a4));
            *(unsigned char *)0xC541F44 = 1;
            FUN_0c0fa55a();
            UB(0x15) = 99;
            break;
        case 16:
            FL(0x28) = 0.0f;
            FL(0x2C) = 0.5625f;
            FL(0x40) = 0.0078125f;
            FL(0x44) = 0.0078125f;
            *(float *)(*(int *)(a4 + 0xC8) + 0x6C) = 0.0f;
            UB(0x16) = 1;
            SH(0x22) = 0;
            ((int (*)(int, int, int, int, float))(FUN_0c0f9cc4))(a4, a5, a6, a7, 0.0f);
            FUN_0c0f9e28(FUN_0c0fa012(a4));
            *(unsigned char *)0xC541F44 = 1;
            FUN_0c0fa55a();
            UB(0x15) = 99;
            break;
        }
        switch (SB(0x16)) {
        case 0:
            *(int *)(*(int *)(a4 + 0xCC) + 0x80) = 0x6AAA;
            SH(0x22) = 0;
        case 1:
            SH(0x22) = SH(0x22) - 18;
            *(int *)(*(int *)(a4 + 0xCC) + 0x80) = *(int *)(*(int *)(a4 + 0xCC) + 0x80) + SH(0x22);
            if (SH(0x22) <= -273) {
                SH(0x22) = -273;
                UB(0x16) = SB(0x16) + 1;
            }
            break;
        case 2:
            SH(0x22) = SH(0x22) + 18;
            *(int *)(*(int *)(a4 + 0xCC) + 0x80) = *(int *)(*(int *)(a4 + 0xCC) + 0x80) + SH(0x22);
            if (SH(0x22) >= 273) {
                SH(0x22) = 273;
                UB(0x16) = 1;
            }
            break;
        }
        return;
    default:
        FUN_0c03f346(a4, a5, a6, a7);
        return;
    }
}
#undef UB
#undef SB
#undef SH
#undef FL



int FUN_0c0f9c66(void)
{
    register int t0;
    register int t1;

    t0 = FUN_0c037320(0x3, (*(int *)0xC4B410C));
    t1 = FUN_0c03f444(0x5, 0x0, t0);
    t0 = t1;
    if (t1 != 0) {
        FUN_0c03733c(t1, 0x3, (*(int *)0xC4B410C));
        (((struct oA8_uchar *)(t1))->v) = 0x1;
        (((struct oAC_ushort *)(t1))->v) = 0xF;
        (((struct oA9_uchar *)(t1))->v) = 0x80;
        *(unsigned char *)((t1 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t1 + 0x4)) = 0xC0F99BC;
        t0 = 0xFFFFFFFF;
    }
    return t0;
}

int FUN_0c0f9cb0(int a4)
{
    register int t0;
    register int t2;

    t0 = *(signed char *)((a4 + 0x14));
    t2 = t0;
    if (t0 == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t2 = 0x14;
    }
    return t2;
}

int FUN_0c0f9d56(int a4)
{
    int t0;
    register int t1;
    register float u0;

    t1 = *(int *)((a4 + 0x10));
    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oBC_float *)(a4))->v) = 0.0f;
        (((struct oB8_float *)(a4))->v) = 0.0f;
        (((struct oB4_float *)(a4))->v) = 0.0f;
        *(unsigned short *)((a4 + 0x1C)) = 0x1E;
        (((struct oA8_uchar *)(a4))->v) = 0x0;
    }
    if (((*(signed char *)((t1 + 0x15))) != (*(signed char *)((t1 + 0x16)))) && (t0 = *(signed char *)((t1 + 0x15)), t0 == 1)) {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct o15_uchar *)(a4))->v) = 0x1;
    }
    t0 = *(signed char *)((a4 + 0x15));
    t1 = t0;
    if (t0 != 0) {
        if (t0 == 1) {
            (((struct oB4_float *)(a4))->v) = (((((struct oB4_float *)(a4))->v)) + 0.100000001f);
            if (!(1.0f > ((((struct oB4_float *)(a4))->v)))) {
                (((struct oB4_float *)(a4))->v) = 1.0f;
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            }
        } else {
            (((struct oB4_float *)(a4))->v) = (((((struct oB4_float *)(a4))->v)) - 0.0222222228f);
            if (!(((((struct oB4_float *)(a4))->v)) > 0.0f)) {
                (((struct oB4_float *)(a4))->v) = 0.0f;
                *(unsigned short *)((a4 + 0x1C)) = 0x96;
                (((struct o15_uchar *)(a4))->v) = 0x0;
                (((struct oA8_uchar *)(a4))->v) = 0x0;
            }
        }
        u0 = (((struct oB4_float *)(a4))->v);
        (((struct oBC_float *)(a4))->v) = u0;
        (((struct oB8_float *)(a4))->v) = u0;
        t1 = 0xB8;
    }
    return t1;
}

int FUN_0c0f9e28(int a4)
{
    register int t0;
    register int t7;

    t0 = FUN_0c03f444(0x8, 0x0, 0x1);
    t7 = t0;
    if (t0 != 0) {
        FUN_0c03744a(((((struct oC4_int *)(t0))->v)), ((((struct o0_int *)0xC1FB5C0)->v)), ((((struct o4_int *)0xC1FB5C0)->v)), (*(int *)0xC4B410C));
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0x20F;
        (((struct oA9_uchar *)(t0))->v) = 0x80;
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC0F9D56;
        (((struct oA4_uint *)(t0))->v) = ((*(int *)((a4 + 0x10))) + 0x64);
        *(unsigned int *)((t0 + 0x10)) = a4;
        t7 = 0xA4;
    }
    return t7;
}


int FUN_0c0fa012(int a4)
{
    register int t1;
    register int t2;

    t1 = FUN_0c037320(0x7, (*(int *)0xC4B410C));
    t2 = FUN_0c03f444(0x5, 0x0, t1);
    if (t2 != 0) {
        FUN_0c03733c(t2, 0x7, (*(int *)0xC4B410C));
        (((struct oA8_uchar *)(t2))->v) = 0x1;
        (((struct oAC_ushort *)(t2))->v) = 0x21F;
        (((struct oA9_uchar *)(t2))->v) = 0x80;
        *(unsigned char *)((t2 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t2 + 0x4)) = 0xC0F9E8C;
        *(unsigned int *)((t2 + 0x10)) = a4;
        (((struct o48_float *)(t2))->v) = 1.0f;
        (((struct o44_float *)(t2))->v) = 1.0f;
        (((struct o40_float *)(t2))->v) = 1.0f;
    }
    return t2;
}

int FUN_0c0fa098(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 99) {
                    return t0;
                }
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            if ((int)(*(short *)((a4 + 0x1C))) <= (int)((((struct o4_int *)0xC28E5D0)->v))) {
                FUN_0c058a6e((0xB0 + a4), 0xC28E5B0, 0xC28E5C0, (*(short *)((a4 + 0x1C))), 0x8, 0x0);
                t0 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
                t1 = (t0 + 0x1);
            } else {
                (((struct o14_uchar *)(a4))->v) = 0x63;
                t1 = 0x14;
            }
            return t1;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0x60F;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x0, 0x11, (*(int *)0xC4B4118));
    }
    if ((int)(*(short *)((a4 + 0x1C))) <= (int)((((struct o0_int *)0xC28E5D0)->v))) {
        FUN_0c058a6e((0xB0 + a4), 0xC28E5C0, 0xC28E5B0, (*(short *)((a4 + 0x1C))), 0x2, 0x0);
        t0 = ((*(short *)((a4 + 0x1C))) + 0x1);
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t0 = 0x0;
    }
    *(unsigned short *)((a4 + 0x1C)) = t0;
    return t0;
}

int FUN_0c0fa158(void)
{
    register int t0;
    register int t1;

    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC0FA098;
        t1 = 0xFFFFFFFF;
    }
    return t1;
}

int FUN_0c0fa55a(void)
{
    register int t0;
    register int t1;

    t0 = FUN_0c03f444(0x5, 0x0, 0x5);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC0FA178;
        t1 = 0xFFFFFFFF;
    }
    return t1;
}

int FUN_0c0fa57a(int a4)
{
    (((struct o8_uint *)0xC542440)->v) = 0xFF212B33;
    (((struct o4_uint *)0xC542440)->v) = 0xFF212B33;
    (((struct o0_uint *)0xC542440)->v) = 0xFF212B33;
    FUN_0c03ea04(0x9, 0x0);
    FUN_0c0527e6();
    if (a4 == 0) {
        FUN_0c0f98ce();
        return FUN_0c0f9c66();
    }
    *(unsigned char *)0xC541F44 = 0x1;
    return FUN_0c0fa55a();
}
