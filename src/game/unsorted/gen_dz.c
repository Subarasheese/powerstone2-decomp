/* Straight-line functions with calls and guards (batch gen_dz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o10_float { char p[0x10]; float v; };
struct o10_uchar { char p[0x10]; unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o254_uint { char p[0x254]; unsigned int v; };
struct o260_float { char p[0x260]; float v; };
struct o264_uint { char p[0x264]; unsigned int v; };
struct o268_uint { char p[0x268]; unsigned int v; };
struct o27C_float { char p[0x27C]; float v; };
struct o280_float { char p[0x280]; float v; };
struct o284_float { char p[0x284]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o378C_float { char p[0x378C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o40_float { char p[0x40]; float v; };
struct o404_int { char p[0x404]; int v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o41D_uchar { char p[0x41D]; unsigned char v; };
struct o420_ushort { char p[0x420]; unsigned short v; };
struct o424_uchar { char p[0x424]; unsigned char v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uchar { char p[0x8]; unsigned char v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oD0_int { char p[0xD0]; int v; };
struct oD4_int { char p[0xD4]; int v; };
struct oD8_int { char p[0xD8]; int v; };
int FUN_0c036606(void);
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
extern int FUN_0c037bf6();
int FUN_0c038566(void);
int FUN_0c03ea04(int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int, int);
int FUN_0c05258e(int, int, int, int, int);
int FUN_0c054a62(int, int);
int FUN_0c056b68(int, int, int, int);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c05aab6(int, int);
int FUN_0c0676ce(int);
int FUN_0c06780e(int);
int FUN_0c06785c(void);
int FUN_0c07e3ae(int, int);
int FUN_0c0c212c(int);
int FUN_0c0c213c(int);
int FUN_0c0c241a(int);
int FUN_0c0c25c4(int);
int FUN_0c0c2aa2(int, int);
int FUN_0c0c2ab6(int, int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c104c7a(int);
int FUN_0c104d70(void);
int FUN_0c104db8(void);
int FUN_0c11296c(int, int);
int FUN_0c113ba4(int);
int FUN_0c118412(int);
int FUN_0c11e1e0(int, int, int, int);
int FUN_0c123f20(int);
int FUN_0c15c344(int, int, int, int);
int FUN_0c15f9b4(int, int, int, int);
int FUN_0c15fa0c(int, int, int, int, float);
int FUN_0c1614c8(int, int);
int FUN_0c162f8a(int, int, int, int);
int FUN_0c166772(int, int, int, int);
int FUN_0c16e8f0(int);
int math_atan2_angle16(int, int, int, int, float, float);
float math_cos_angle16(int);
float math_sin_angle16(int);
int nlAddVector3op(int, int, int);
int nlRand(void);
int res_cockpit_faces_release_all(void);
float FUN_0c054058(int a4, int a5, int a6, int a7, float f4, float f5);
int FUN_0c0c9884(int a4, int a5, int a6, int a7, int a8);
void FUN_0c166b08(int a4, int a5, int a6, int a7);
int FUN_0c1141f4(int a4, int a5, int a6);
float FUN_0c124794(int a4, int a5, int a6, int a7);
int FUN_0c0c7188(int a4);
struct o4_uint { char p[0x4]; unsigned int v; };



/* manual: spawns and starts the object of the table row mode (0..5): modes share the start and finish; 175 cases, 544 of 544 instructions */
#define ROW9884 (a4 * 0x34 + 0xC2738B8)
int FUN_0c0c9884(int a4, int a5, int a6, int a7, int a8)
{
    int obj;
    int sel;
    int full;
    int j;
    int f;
    int m;

    sel = *(signed char *)(ROW9884 + 1);
    full = 1;
    m = *(signed char *)(ROW9884 + 2);
    switch (m) {
    case 0:
    case 1:
    case 2:
        f = (m == 0) ? 0xC4B40D8 : (m == 1) ? 0xC4B410C : 0xC4B40CC;
        j = FUN_0c037320((signed char)sel, *(int *)f);
        if (j < 0) return 0;
        obj = FUN_0c03f444(9, 0, j, a7);
        if (obj == 0) return 0;
        FUN_0c03733c(obj, (signed char)sel, *(int *)f);
        full = (m == 0);
        break;
    case 3:
        if (FUN_0c037320(sel, *(int *)0xC4B40D8) < 0) return 0;
        if (FUN_0c037320(0x27, *(int *)0xC4B40CC) < 0) return 0;
        obj = FUN_0c03f444(9, 0, 6, a7);
        if (obj == 0) return 0;
        FUN_0c03733c(obj, sel, *(int *)0xC4B40D8);
        for (j = 0; j < 3; j++) {
            FUN_0c03744a(*(int *)(obj + 0xD0 + j * 4), (j < 2) ? 2 : 0, (j < 2) ? sel : 0x27, (j < 2) ? *(int *)0xC4B40D8 : *(int *)0xC4B40CC);
            *(unsigned int *)(*(int *)(obj + 0xD0 + j * 4) + 0x68) = *(int *)(obj + 0xC4) + 0x28;
            *(unsigned short *)(*(int *)(obj + 0xD0 + j * 4) + 0x6) = 0x29;
        }
        *(float *)(*(int *)(obj + 0xD8) + 0x70) = 7.0f;
        *(float *)(*(int *)(obj + 0xD8) + 0x74) = 93.1719971f;
        break;
    case 4:
        if (FUN_0c037320(sel, *(int *)0xC4B40D8) < 0) return 0;
        obj = FUN_0c03f444(9, 0, 1, a7);
        if (obj == 0) return 0;
        FUN_0c03744a(*(int *)(obj + 0xC4), 0, sel, *(int *)0xC4B40D8);
        break;
    case 5:
        if (FUN_0c037320(sel, *(int *)0xC4B40D8) < 0) return 0;
        obj = FUN_0c03f444(9, 0, 2, a7);
        if (obj == 0) return 0;
        FUN_0c03744a(*(int *)(obj + 0xC4), 0, sel, *(int *)0xC4B40D8);
        FUN_0c03744a(*(int *)(obj + 0xC8), 0, sel, *(int *)0xC4B40D8);
        break;
    default:
        return 0;
    }
    *(unsigned int *)(obj + 4) = 0xC0C9810;
    *(unsigned short *)(obj + 0xAC) = full ? 0x1F : 0xF;
    *(unsigned char *)(obj + 0xA9) = 0x40;
    FUN_0c0c25c4(obj);
    *(unsigned char *)(obj + 0x41D) = 0;
    *(unsigned char *)(obj + 0x41C) = a4;
    *(unsigned char *)(obj + 0x424) = a5;
    if (full) *(unsigned char *)(obj + 0x1B) = a6;
    FUN_0c0c2ab6(obj, *(signed char *)((*(unsigned char *)(obj + 0x41C) * 0x34 + 0xC2738B8) + (full ? 0x12 : 0x13)));
    *(unsigned short *)(obj + 0x420) = *(short *)(a4 * 0x34 + 0xC2738B8 + 0x1A);
    FUN_0c0c212c(obj);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(obj + 0x28) = *(struct mv3 *)a7; }
    FUN_0c0c2aa2(obj, a8);
    FUN_0c0c241a(obj);
    if (m == 0) {
        j = *(unsigned char *)(obj + 0x41C);
        if (j == 11) FUN_0c15c344(obj, obj + 0x28, 8, a7);
        else if (j == 35) FUN_0c15c344(obj, obj + 0x28, 9, a7);
        else if (j == 73) FUN_0c1614c8(obj, 1);
    } else if (m == 4 && a4 == 69) {
        FUN_0c16e8f0(obj);
    }
    return obj;
}

/* FUN_0c166b08, written by hand from the original (1,188 bytes; the generated C was 2,398).
   An object a4 with a phase byte at +20: phase 0 starts it up (the pools at +196/+200/+204 by the kind byte +2), phase 1 updates it
   every frame, phase 2 hands over to FUN_0c03f346 (a tail call with the caller's own r4-r7, hence the four parameters). */
#define P196 (*(int *)(a4 + 196))
#define P200 (*(int *)(a4 + 200))
#define P204 (*(int *)(a4 + 204))
#define COPY3(d, s) { struct mv3 { int w[3]; }; *(struct mv3 *)(d) = *(struct mv3 *)(s); }
#define SETUP(p) { *(unsigned char *)(p) = 1; *(unsigned short *)((p) + 6) = 31; COPY3((p) + 0x84, 0xC2A332C); }

/* manual: written by hand, 2026-11-23/24 (build/manual/notes_FUN_0c166b08.txt) */
void FUN_0c166b08(int a4, int a5, int a6, int a7)
{
    int k;
    int p;

    switch (*(signed char *)(a4 + 20)) {
    case 0:
        *(unsigned char *)(a4 + 20) = *(unsigned char *)(a4 + 20) + 1;
        *(unsigned char *)(a4 + 168) = 1;
        *(short *)(a4 + 172) = 15;
        *(unsigned char *)(a4 + 169) = 33;
        *(float *)(a4 + 76) = math_sin_angle16(*(int *)(a4 + 56)) * 10.0f;
        *(float *)(a4 + 84) = math_cos_angle16(*(int *)(a4 + 56)) * 10.0f;
        *(float *)(a4 + 80) = 0.0f;
        *(float *)(a4 + 88) = math_sin_angle16(*(int *)(a4 + 56)) * 4.0f;
        *(float *)(a4 + 92) = 0.0f;
        *(float *)(a4 + 96) = math_cos_angle16(*(int *)(a4 + 56)) * 4.0f;
        FUN_0c166772(*(signed char *)(a4 + 1), a4 + 40, a4 + 52, *(signed char *)(a4 + 2));
        switch (*(signed char *)(a4 + 2)) {
        case 0:
        case 1:
            FUN_0c03744a(P196, 0, 52, *(int *)0xC4B40CC);
            SETUP(P196);
            COPY3(a4 + 64, 0xC2A3468);
            break;
        case 2:
        case 3:
            FUN_0c03744a(P196, 0, 52, *(int *)0xC4B40CC);
            FUN_0c03744a(P200, 1, 52, *(int *)0xC4B40CC);
            SETUP(P196);
            SETUP(P200);
            COPY3(a4 + 64, 0xC2A3474);
            break;
        case 4:
            FUN_0c03744a(P196, 5, 52, *(int *)0xC4B40CC);
            FUN_0c03744a(P200, 4, 52, *(int *)0xC4B40CC);
            FUN_0c03744a(P204, 6, 52, *(int *)0xC4B40CC);
            SETUP(P196);
            SETUP(P200);
            SETUP(P204);
            COPY3(a4 + 64, 0xC2A3480);
            break;
        }
    case 1:
        p = P196;
        *(int *)(p + 128) = *(int *)(p + 128) + *(int *)0xC2A3438;
        p = P200;
        *(int *)(p + 128) = *(int *)(p + 128) - *(int *)(0xC2A3438 + 4);
        p = P204;
        *(int *)(p + 128) = *(int *)(p + 128) + *(int *)(0xC2A3438 + 8);
        if (*(short *)(a4 + 28) <= 30) {
            FUN_0c0588bc(P196 + 132, 0xC2A3338, 0xC2A332C, *(short *)(a4 + 28), 30, 0);
            FUN_0c0588bc(P200 + 132, 0xC2A3338, 0xC2A332C, *(short *)(a4 + 28), 30, 0);
            FUN_0c0588bc(P204 + 132, 0xC2A3338, 0xC2A332C, *(short *)(a4 + 28), 30, 0);
        }
        if (*(signed char *)(a4 + 305) != 0 || *(int *)(a4 + 1028) != 0) {
            *(short *)(a4 + 30) = *(short *)(a4 + 30) + 1;
            k = *(signed char *)(a4 + 2);
            if (k >= 0 && k <= 3) {
                if (*(short *)(a4 + 30) < 1) {
                    FUN_0c07e3ae(a4, 122 + k);
                }
                FUN_0c15f9b4(*(signed char *)(a4 + 1), a4 + 40, a4 + 52, 1);
            } else if (k == 4) {
                if (*(short *)(a4 + 30) < 1) {
                    FUN_0c07e3ae(a4, 126);
                }
                FUN_0c15fa0c(*(signed char *)(a4 + 1), a4 + 40, a4 + 52, 2, 1.5f);
            }
        }
        if (*(short *)(a4 + 28) >= 20 && *(short *)(a4 + 28) < 30) {
            nlAddVector3op(a4 + 76, a4 + 76, a4 + 88);
        }
        nlAddVector3op(a4 + 40, a4 + 40, a4 + 76);
        k = *(signed char *)(a4 + 2);
        if (!((k == 0 || k == 1 || k == 2) && *(short *)(a4 + 30) >= 1)) {
            *(short *)(a4 + 28) = *(short *)(a4 + 28) + 1;
            if (*(short *)(a4 + 28) <= 90) {
                return;
            }
        }
        *(unsigned char *)(a4 + 20) = *(unsigned char *)(a4 + 20) + 1;
        return;
    case 2:
        FUN_0c03f346(a4, a5, a6, a7);
        return;
    default:
        return;
    }
}
#undef P196
#undef P200
#undef P204
#undef COPY3
#undef SETUP

int FUN_0c1141f4(int a4, int a5, int a6)
{
    int qa0;
    int qa1;
    int t0;
    float u81;
    int t133;
    int t134;
    int t142;
    int qe0;
    int t32;
    int t130;
    int t116;
    int t97;
    int t86;
    int t25;
    int s0;
    int t139;
    int t118;
    int t83;
    int t82;
    int t78;
    int t75;
    int t73;
    int t54;
    int t45;
    int t11;
    int t9;
    int t7;

    qa1 = 0xC53CE94;
    qa0 = 0xC474770;
    t0 = *(signed char *)(a4 + 0x16);
    if (t0 != 0) {
        if (t0 == 1) {
            (((struct o0_float *)0xC539748)->v) = (((float)((-((((struct o20_short *)(a4))->v))) + 0xA) / 10.0f) * (*(float *)qa1));
            (((struct o4_float *)0xC539748)->v) = (((float)((-((((struct o20_short *)(a4))->v))) + 0xA) / 10.0f) * (*(float *)qa1));
            (((struct o8_float *)0xC539748)->v) = (((float)((-((((struct o20_short *)(a4))->v))) + 0xA) / 10.0f) * (*(float *)qa1));
            t7 = (((struct o20_short *)(a4))->v);
            (((struct o20_ushort *)(a4))->v) = (t7 + 0x1);
            if ((int)(short)(t7 + 0x1) <= (int)0xA) {
                return 0x20;
            }
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x16)) + 0x1);
            (((struct o20_ushort *)(a4))->v) = 0x0;
            (((struct o0_uchar *)0xC53CF74)->v) = 0x0;
            (((struct o8_uchar *)0xC53CF74)->v) = 0x0;
            (((struct o10_uchar *)0xC53CF74)->v) = 0x0;
            (((struct o18_uchar *)0xC53CF74)->v) = 0x0;
            return FUN_0c11296c(0xC539708, 0x0);
        }
        if (t0 == 2) {
            t9 = (((struct o20_short *)(a4))->v);
            (((struct o20_ushort *)(a4))->v) = (t9 + 0x1);
            t11 = 0x20;
            if ((int)(short)(t9 + 0x1) > (int)0x3) {
                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x16)) + 0x1);
                t11 = 0x16;
            }
            return t11;
        }
        if (t0 == 3) {
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x16)) + 0x1);
            (((struct o20_ushort *)(a4))->v) = 0x0;
            (((struct o0_uchar *)0xC53970A)->v) = (*(int *)((0xC291700 + ((*(int *)qa0) << 2))));
            FUN_0c06780e(0x4);
            FUN_0c03ea04(0xB, 0x0);
            FUN_0c036606();
            (((struct o0_float *)0xC539748)->v) = (*(float *)qa1);
            (((struct o4_float *)0xC539748)->v) = (*(float *)qa1);
            (((struct o8_float *)0xC539748)->v) = (*(float *)qa1);
            FUN_0c06785c();
            FUN_0c03ea04(0xB, 0x0);
            t25 = *(signed char *)0xC53970A;
            qe0 = (((t25 << 2) << 1) + 0xC291838);
            (*(unsigned int *)&s0) = qe0;
            FUN_0c11e1e0(0xC539708, (*(signed char *)0xC539709), (*(int *)(((s0) + 0x0))), (*(int *)((qe0 + 0x4))));
            t32 = ((int (*)(int))(FUN_0c037bf6))(0xC539708);
            (((struct o0_float *)0xC539748)->v) = (*(float *)qa1);
            (((struct o4_float *)0xC539748)->v) = (*(float *)qa1);
            (((struct o8_float *)0xC539748)->v) = (*(float *)qa1);
            FUN_0c038566();
            res_cockpit_faces_release_all();
            *(unsigned char *)0xC53CE26 = (*(signed char *)0xC474778);
            FUN_0c0676ce((*(signed char *)0xC539709));
            { struct mv3 { int w[3]; }; *(struct mv3 *)(0xC539730) = *(struct mv3 *)((0xC291738 + ((((*(signed char *)0xC53970A) << 1) + (*(signed char *)0xC53970A)) << 2))); }
            *(unsigned int *)0xC539740 = (*(int *)((0xC2917F8 + ((*(signed char *)0xC53970A) << 2))));
            return FUN_0c11296c(0xC539708, 0x0);
        }
        if (t0 == 4) {
            t45 = (((struct o20_short *)(a4))->v);
            (((struct o20_ushort *)(a4))->v) = (t45 + 0x1);
            t54 = 0x20;
            if ((int)(short)(t45 + 0x1) <= (int)0x4) {
            } else {
                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x16)) + 0x1);
                (((struct o20_ushort *)(a4))->v) = 0x1;
                FUN_0c11296c(0xC539708, 0x1);
                (((struct o0_float *)0xC539748)->v) = (((*(float *)qa1) * (float)((((struct o20_short *)(a4))->v))) / 10.0f);
                (((struct o4_float *)0xC539748)->v) = (((*(float *)qa1) * (float)((((struct o20_short *)(a4))->v))) / 10.0f);
                (((struct o8_float *)0xC539748)->v) = (((*(float *)qa1) * (float)((((struct o20_short *)(a4))->v))) / 10.0f);
                t54 = 0x48;
            }
            return t54;
        }
        if (t0 == 5) {
            if ((int)((((struct o20_short *)(a4))->v)) <= (int)0xA) {
                (((struct o0_float *)0xC539748)->v) = (((*(float *)qa1) * (float)((((struct o20_short *)(a4))->v))) / 10.0f);
                (((struct o4_float *)0xC539748)->v) = (((*(float *)qa1) * (float)((((struct o20_short *)(a4))->v))) / 10.0f);
                (((struct o8_float *)0xC539748)->v) = (((*(float *)qa1) * (float)((((struct o20_short *)(a4))->v))) / 10.0f);
            }
            t73 = (((struct o20_short *)(a4))->v);
            (((struct o20_ushort *)(a4))->v) = (t73 + 0x1);
            t75 = 0x20;
            if ((int)(short)(t73 + 0x1) > (int)0xA) {
                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x16)) + 0x1);
                t75 = 0x16;
            }
            return t75;
        }
        if (t0 == 6) {
            t78 = ((int (*)(int, int, int))(FUN_0c037bf6))(0xC539708, a5, a6);
            if ((unsigned char)t78 != 0) {
                (((struct o16_uchar *)(a4))->v) = 0x0;
                FUN_0c11e1e0(0xC539708, (*(signed char *)0xC539709), 0x0, 0x0);
                u81 = *(float *)0xC114704;
                t82 = (((struct o0_int *)0xC539820)->v);
                (((struct o98_float *)(t82))->v) = u81;
                (((struct o94_float *)(t82))->v) = u81;
                t83 = (((struct o4_int *)0xC539820)->v);
                (((struct o98_float *)(t83))->v) = u81;
                (((struct o94_float *)(t83))->v) = u81;
                *(unsigned char *)0xC53CE26 = (*(signed char *)0xC474778);
                return FUN_0c0676ce((*(signed char *)0xC539709));
            }
            return (unsigned char)t78;
        }
        return t0;
    }
    t86 = FUN_0c104c7a(0xC00);
    if (t86 != 0) {
        if ((int)(*(int *)qa0) > (int)0x6) {
            *(unsigned int *)qa0 = ((*(int *)qa0) - 7);
        } else {
            *(unsigned int *)qa0 = ((*(int *)qa0) + 0x7);
        }
        FUN_0c05aab6(0x0, 0x5);
    }
    t97 = FUN_0c104c7a(0x2000);
    if (t97 != 0) {
        FUN_0c05aab6(0x0, 0x6);
        if ((*(int *)qa0) == 0) {
            *(unsigned int *)qa0 = 0x6;
        } else {
            if ((*(int *)qa0) == 7) {
                *(unsigned int *)qa0 = 0xD;
            } else {
                *(unsigned int *)qa0 = ((*(int *)qa0) - 1);
            }
        }
    }
    t116 = FUN_0c104c7a(0x1000);
    if (t116 != 0) {
        FUN_0c05aab6(0x0, 0x6);
        t118 = *(int *)qa0;
        if (t118 == 6) {
            *(unsigned int *)qa0 = 0x0;
        } else {
            if (t118 == 13) {
                *(unsigned int *)qa0 = 0x7;
            } else {
                *(unsigned int *)qa0 = ((*(int *)qa0) + 0x1);
            }
        }
    }
    t130 = FUN_0c104d70();
    if (t130 != 0) {
        t133 = *(int *)qa0;
        t134 = *(signed char *)0xC542B8A;
        if (t133 == 6) {
            if ((int)t134 < (int)0x1) {
                return t133;
            }
        } else {
            if ((t133 == 13) && (t134 != 2)) {
                return t134;
            }
        }
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x16)) + 0x1);
        (((struct o20_ushort *)(a4))->v) = 0x0;
        return FUN_0c113ba4((*(int *)qa0));
    }
    t139 = FUN_0c104db8();
    t142 = t139;
    if (t139 == 0) {
    } else {
        (((struct o15_uchar *)(a4))->v) = 0x0;
        (((struct o16_uchar *)(a4))->v) = 0x0;
        (((struct o14_uchar *)((*(int *)0xC474C18)))->v) = 0x63;
        *(unsigned int *)0xC474C18 = 0x0;
        t142 = FUN_0c118412(0x3);
        *(unsigned int *)0xC474B8C = t142;
    }
    return t142;
}

float FUN_0c124794(int a4, int a5, int a6, int a7)
{
    int stk[3];

    register int R1;
    register int R2;
    register float F0;
    register float F2;
    register float F3;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register float w0_0;
    register float w0_1;
    register float w0_2;
    register float w0_3;
    register float w0_4;
    int R1000;
    int R1004;
    R1000 = *(int *)((int)stk + 0);
    R1004 = *(int *)((int)stk + 4);
    v0_1 = a4;
    v0_4 = a5;
    v0_6 = a7;
    *(unsigned char *)(((int)stk + 8)) = v0_4;
    v0_3 = *(signed char *)(((int)stk + 8));
    R1004 = v0_3;
    v0_4 = (v0_3);
    v0_0 = (0x1);
    v0_7 = (0xC179AC0);
    v0_1 = (v0_1);
    v0_2 = (0xC4B40FC);
    v0_5 = (0xC03744A);
    w0_1 = (0.0f);
    w0_0 = (1.0f);
    if ((v0_3 == 0)) goto L_C1247F2;
    if ((v0_4 == 1)) goto L_C12489C;
    if ((v0_4 != 2)) goto L_C1247D6;
    v0_5 = FUN_0c03f444(0x5, 0x0, 0xA, v0_6);
    v0_4 = (v0_5);
    v0_3 = (v0_5);
    if ((v0_5 != 0)) goto L_C12496A;
    L_C124BD2:;
    return F0;
    L_C12496A:;
    *(unsigned char *)((v0_3 + 0x1)) = (*(signed char *)((v0_1 + 0x1)));
    *(unsigned int *)((v0_3 + 0x4)) = 0xC124386;
    (((struct oA8_uchar *)(v0_3))->v) = v0_0;
    (((struct oAC_ushort *)(v0_3))->v) = 0xF;
    (((struct oA9_uchar *)(v0_3))->v) = 0x21;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_3 + 0x28)) = *(struct mv3 *)((v0_1 + 0x28)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_3 + 0x34)) = *(struct mv3 *)((v0_1 + 0x34)); }
    (((struct o48_float *)(v0_3))->v) = w0_0;
    (((struct o44_float *)(v0_3))->v) = w0_0;
    (((struct o40_float *)(v0_3))->v) = w0_0;
    R1004 = 0x0;
    w0_2 = (360.0f);
    w0_3 = (65536.0f);
    w0_1 = (50.0f);
    w0_0 = (10.0f);
    L_C124AD6:;
    if (!(((unsigned int)(R1004) < (unsigned int)0x28))) goto L_C124ADE;
    v0_5 = *(int *)((((0xC4 + v0_3) + (R1004)) + 0x0));
    v0_4 = (*(int *)((v0_2 + ((*(signed char *)((v0_1 + 0x1))) << 2))));
    R1000 = v0_4;
    v0_6 = (int)((int)(nlRand()) % (int)0x3);
    FUN_0c03744a(v0_5, (v0_6 + 0x1), 0x6, v0_4);
    *(unsigned char *)((v0_5 + 0x0)) = v0_0;
    *(unsigned short *)((v0_5 + 0x6)) = 0x21F;
    w0_4 = w0_1;
    w0_4 = w0_4 + w0_0 * (float)((int)((int)(nlRand()) % (int)0x14));
    (((struct o18_float *)(v0_5))->v) = w0_4;
    v0_4 = (int)((int)(nlRand()) % (int)0x48);
    (((struct o7C_uint *)(v0_5))->v) = (int)(((float)((v0_4 << 2) + v0_4) * w0_3) / w0_2);
    w0_4 = math_sin_angle16((int)(((float)((v0_4 << 2) + v0_4) * w0_3) / w0_2));
    (((struct o6C_float *)(v0_5))->v) = (w0_4 * ((((struct o18_float *)(v0_5))->v)));
    (((struct o74_float *)(v0_5))->v) = ((math_cos_angle16(((((struct o7C_int *)(v0_5))->v)))) * ((((struct o18_float *)(v0_5))->v)));
    (((struct o70_float *)(v0_5))->v) = ((float)((int)((int)(nlRand()) % (int)0x14)) * w0_0);
    (((struct o8C_float *)(v0_5))->v) = (1.0f + 1.0f);
    (((struct o88_float *)(v0_5))->v) = (1.0f + 1.0f);
    (((struct o84_float *)(v0_5))->v) = (1.0f + 1.0f);
    (((struct o1C_float *)(v0_5))->v) = (float)(((int)((int)(nlRand()) % (int)0x5)) + 0x5);
    v0_6 = nlRand();
    v0_4 = (v0_6);
    v0_5 = (v0_5);
    if (((int)v0_6 < 0)) goto L_C124AB8;
    v0_4 = ((v0_4 & 0x7));
    goto L_C124AC2;
    L_C124ADE:;
    (((struct o14_uchar *)(v0_3))->v) = (*(signed char *)(((int)stk + 8)));
    *(unsigned int *)((v0_3 + 0x10)) = v0_1;
    *(unsigned short *)((v0_3 + 0x1C)) = 0x12C;
    v0_4 = (0x12C);
    goto L_C124BD2;
    L_C124AC2:;
    (((struct o20_float *)(v0_5))->v) = ((float)v0_4 + 0.5f);
    R1004 = ((R1004) + 0x4);
    FPUL_ = (v0_4);
    goto L_C124AD6;
    L_C124AB8:;
    v0_4 = (((~(((~v0_4) + 0x1) & 0x7)) + 0x1));
    goto L_C124AC2;
    L_C1247D6:;
    if (!((v0_4 != 3))) goto L_C124B04;
    if ((v0_4 != 4)) goto L_C1247E6;
    goto L_C124B04;
    L_C124B04:;
    v0_3 = FUN_0c03f444(0x5, 0x0, 0x1, v0_6);
    v0_4 = (v0_3);
    v0_5 = (v0_3);
    if ((v0_3 == 0)) goto L_C124BD2;
    *(unsigned char *)((v0_5 + 0x1)) = (*(signed char *)((v0_1 + 0x1)));
    *(unsigned int *)((v0_5 + 0x4)) = 0xC124580;
    (((struct oA8_uchar *)(v0_5))->v) = v0_0;
    (((struct oAC_ushort *)(v0_5))->v) = 0xF;
    (((struct oA9_uchar *)(v0_5))->v) = 0x21;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_5 + 0x28)) = *(struct mv3 *)((v0_1 + 0x28)); }
    (((struct o2C_float *)(v0_5))->v) = (((((struct o2C_float *)(v0_5))->v)) + 250.0f);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_5 + 0x34)) = *(struct mv3 *)((v0_1 + 0x34)); }
    (((struct o48_float *)(v0_5))->v) = w0_0;
    (((struct o44_float *)(v0_5))->v) = w0_0;
    (((struct o40_float *)(v0_5))->v) = w0_0;
    v0_6 = R1004;
    v0_4 = (v0_6);
    v0_3 = (((((struct oC4_int *)(v0_5))->v)));
    FPUL_ = (0x437A0000);
    if ((v0_6 == 3)) goto L_C124B78;
    if ((v0_4 == 4)) goto L_C124B88;
    if (!((v0_4 == 5))) goto L_C124BAC;
    *(unsigned char *)((v0_5 + 0x2)) = 0x2;
    v0_4 = (0x2);
    v0_7 = (0x7);
    v0_6 = ((*(int *)((v0_2 + ((*(signed char *)((v0_1 + 0x1))) << 2)))));
    goto L_C124BA8;
    L_C124BAC:;
    *(unsigned char *)((v0_3 + 0x0)) = v0_0;
    *(unsigned short *)((v0_3 + 0x6)) = 0x21F;
    (((struct o18_float *)(v0_3))->v) = w0_0;
    (((struct o20_float *)(v0_3))->v) = w0_0;
    (((struct o1C_float *)(v0_3))->v) = w0_0;
    (((struct o8C_float *)(v0_3))->v) = w0_1;
    (((struct o88_float *)(v0_3))->v) = w0_1;
    (((struct o84_float *)(v0_3))->v) = w0_1;
    *(unsigned short *)((v0_5 + 0x1C)) = 0x0;
    *(unsigned short *)((v0_5 + 0x1E)) = 0x0;
    *(unsigned int *)((v0_5 + 0x10)) = v0_1;
    v0_4 = (0x0);
    goto L_C124BD2;
    L_C124BA8:;
    FUN_0c03744a(v0_3, v0_4, v0_7, v0_6);
    goto L_C124BAC;
    L_C124B88:;
    *(unsigned char *)((v0_5 + 0x2)) = v0_0;
    v0_4 = (0x1);
    v0_7 = (0x7);
    v0_6 = ((*(int *)((v0_2 + ((*(signed char *)((v0_1 + 0x1))) << 2)))));
    goto L_C124BA8;
    L_C124B78:;
    *(unsigned char *)((v0_5 + 0x2)) = 0x0;
    v0_4 = (0x0);
    v0_7 = (0x7);
    v0_6 = ((*(int *)((v0_2 + ((*(signed char *)((v0_1 + 0x1))) << 2)))));
    goto L_C124BA8;
    L_C1247E6:;
    if ((v0_4 != 5)) goto L_C1247EE;
    goto L_C124B04;
    L_C1247EE:;
    goto L_C124BD2;
    L_C12489C:;
    v0_5 = FUN_0c03f444(0x5, 0x0, 0x4, v0_6);
    v0_4 = (v0_5);
    v0_3 = (v0_5);
    if ((v0_5 != 0)) goto L_C1248B0;
    goto L_C124BD2;
    L_C1248B0:;
    *(unsigned char *)((v0_3 + 0x1)) = (*(signed char *)((v0_1 + 0x1)));
    *(unsigned int *)((v0_3 + 0x4)) = 0xC124286;
    (((struct oA8_uchar *)(v0_3))->v) = v0_0;
    (((struct oAC_ushort *)(v0_3))->v) = 0x1F;
    (((struct oA9_uchar *)(v0_3))->v) = 0x21;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_3 + 0x28)) = *(struct mv3 *)((v0_1 + 0x28)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_3 + 0x34)) = *(struct mv3 *)((v0_1 + 0x34)); }
    (((struct o48_float *)(v0_3))->v) = w0_0;
    (((struct o44_float *)(v0_3))->v) = w0_0;
    (((struct o40_float *)(v0_3))->v) = w0_0;
    v0_7 = (0xC2A0E70);
    v0_4 = (0x0);
    L_C124948:;
    R1004 = v0_4;
    if (((unsigned int)v0_4 < (unsigned int)0x10)) goto L_C1248F6;
    goto L_C124ADE;
    L_C1248F6:;
    v0_4 = *(int *)((((0xC4 + v0_3) + (R1004)) + 0x0));
    FUN_0c03744a(v0_4, 0x0, 0x6, (*(int *)((v0_2 + ((*(signed char *)((v0_1 + 0x1))) << 2)))));
    *(unsigned char *)((v0_4 + 0x0)) = v0_0;
    *(unsigned short *)((v0_4 + 0x6)) = 0x21F;
    (((struct o74_float *)(v0_4))->v) = w0_1;
    (((struct o6C_float *)(v0_4))->v) = w0_1;
    (((struct o70_float *)(v0_4))->v) = ((((struct o10_float *)(v0_7))->v));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x84 + v0_4)) = *(struct mv3 *)(v0_7); }
    (((struct o7C_uint *)(v0_4))->v) = (*(int *)((v0_7 + 0xC)));
    (((struct o18_float *)(v0_4))->v) = w0_0;
    (((struct o20_float *)(v0_4))->v) = w0_0;
    (((struct o1C_float *)(v0_4))->v) = w0_0;
    v0_7 = ((v0_7 + 0x14));
    v0_5 = (v0_4);
    v0_4 = (((R1004) + 0x4));
    goto L_C124948;
    L_C1247F2:;
    v0_3 = (0x8);
    L_C124870:;
    if ((v0_3 != 0)) goto L_C1247F6;
    goto L_C124BD2;
    L_C1247F6:;
    v0_7 = FUN_0c03f444(0x5, 0x0, 0x1, v0_6);
    v0_4 = (v0_7);
    v0_5 = (v0_7);
    if ((v0_7 == 0)) goto L_C12486E;
    v0_4 = (*(int *)((v0_2 + ((*(signed char *)((v0_1 + 0x1))) << 2))));
    R1000 = v0_4;
    v0_7 = (int)((int)(nlRand()) % (int)0x3);
    FUN_0c03744a(((((struct oC4_int *)(v0_5))->v)), v0_7, 0x5, v0_4);
    *(unsigned char *)((v0_5 + 0x1)) = (*(signed char *)((v0_1 + 0x1)));
    *(unsigned int *)((v0_5 + 0x4)) = 0xC12409C;
    (((struct oA8_uchar *)(v0_5))->v) = v0_0;
    (((struct oAC_ushort *)(v0_5))->v) = 0xF;
    (((struct oA9_uchar *)(v0_5))->v) = 0x21;
    (((struct o40_float *)(v0_5))->v) = w0_0;
    (((struct o44_float *)(v0_5))->v) = w0_0;
    (((struct o48_float *)(v0_5))->v) = w0_0;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_5 + 0x28)) = *(struct mv3 *)((v0_1 + 0x28)); }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_5 + 0x34)) = *(struct mv3 *)((v0_1 + 0x34)); }
    FUN_0c123f20(v0_5);
    *(unsigned int *)((v0_5 + 0x10)) = v0_1;
    *(unsigned short *)((v0_5 + 0x1C)) = 0x12C;
    v0_4 = (0x12C);
    L_C12486E:;
    v0_3 = ((v0_3 - 1));
    goto L_C124870;
}

