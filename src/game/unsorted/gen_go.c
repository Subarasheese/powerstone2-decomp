/* Straight-line functions with calls and guards (batch gen_go): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o132_uchar { char p[0x132]; unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1A_uchar { char p[0x1A]; unsigned char v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o41D_uchar { char p[0x41D]; unsigned char v; };
struct o420_ushort { char p[0x420]; unsigned short v; };
struct o424_uchar { char p[0x424]; unsigned char v; };
struct o428_uchar { char p[0x428]; unsigned char v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o90_float { char p[0x90]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAA_uchar { char p[0xAA]; unsigned char v; };
struct oAB_uchar { char p[0xAB]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oD0_int { char p[0xD0]; int v; };
struct oD4_int { char p[0xD4]; int v; };
struct oD8_int { char p[0xD8]; int v; };
struct oDC_int { char p[0xDC]; int v; };
struct oE0_int { char p[0xE0]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c037498(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c042fe0(void);
int FUN_0c043010(void);
int FUN_0c043064(void);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c058906(int, int, int, int, int, int);
int FUN_0c058968(int, int, int, int, int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c058adc(int, int, int);
int FUN_0c05aaf6(int);
int FUN_0c0bbf58(int, Stk3);
int FUN_0c0c212c(int);
int FUN_0c0c25c4(int);
int FUN_0c0c2aa2(int, int);
int FUN_0c0c2ab6(int, int);
int FUN_0c0d60a8(int);
int FUN_0c0d60bc(int);
int FUN_0c0db188(int, int);
int FUN_0c1171f0(int);
int FUN_0c139168(int, int, int);
int FUN_0c1394ee(int, int);
int FUN_0c1396c4(int, int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int nlAddVector3op(int, int, int);
int nlRand(void);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c0cc8b0(int a4, int a5, int a6, int a7, int a8, int a9, int a10);
float FUN_0c139718(int a4, int a5, int a6, int a7);
void FUN_0c111164(int a4, int a5, int a6, int a7);
int FUN_0c0444d2(int a4, float f4);
int FUN_0c0d9ebc(int a4, int a5, int a6, int a7);
int FUN_0c117ebe(int a4, int a5, int a6, int a7, float f4, float f5);

/* manual: allocates and fills an object of kind 0x46 (a7 != 0: with the six sub-objects at CC..E0 set up) or 10 (a7 == 0: copies of the vec3 table
   0C273740 into the sub-objects); the common part is written once, the sub-objects D4..E0 (D0, D4 for a1A == 0) are one loop;
   cases: 29 hand-written, 798 of 799 instructions (the one left, `mov #69,r5` in the a7 == 0 half, is dead: byte 2 is stored 0 there) */
int FUN_0c0cc8b0(int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    int n;
    int obj;
    int t;
    int sub;
    int e;
    int j;
    int i;
    int cnt;
    int off;
    int src;
    int s0;
    int s8;

    n = FUN_0c037320((a7 != 0) ? 0x46 : 0xA, (*(int *)0xC4B40CC));
    if (n < 0) {
        return 0;
    }
    obj = FUN_0c03f444(0x9, 0x0, (a7 != 0) ? (n + 0x2) : n);
    if (obj == 0) {
        return 0;
    }
    FUN_0c03733c(obj, (a7 != 0) ? 0x46 : 0xA, (*(int *)0xC4B40CC));
    *(unsigned char *)(obj + 0x1) = a10;
    *(unsigned int *)(obj + 0x4) = 0xC0CC7A8;
    *(unsigned short *)(obj + 0xAC) = 0xF;
    *(unsigned char *)(obj + 0xA9) = 0x40;
    *(unsigned char *)(obj + 0xA8) = 0x1;
    FUN_0c0c25c4(obj);
    *(unsigned char *)(obj + 0x41D) = 0x0;
    *(unsigned char *)(obj + 0x41C) = 0xC2;
    *(unsigned char *)(obj + 0x424) = a5;
    *(unsigned char *)(obj + 0x1B) = a6;
    *(unsigned char *)(obj + 0x2) = a7;
    *(unsigned char *)(obj + 0x1A) = 0x0;
    if (a7 != 0) {
        *(unsigned char *)(obj + 0xAA) = 0x1;
        *(unsigned char *)(obj + 0xAB) = 0x1;
        *(float *)(obj + 0x160) = 60.0f;
    }
    t = 0x45;
    if ((*(signed char *)(obj + 0x2)) == 0) {
        t = (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)(obj + 0x41C)) * (unsigned short)0x34) + 0xC2738B8) + 0x12));
    }
    FUN_0c0c2ab6(obj, t);
    *(unsigned short *)(obj + 0x12E) = 0x0;
    *(unsigned short *)(obj + 0x12C) = 0x0;
    *(unsigned short *)(obj + 0x420) = (*(short *)0xC27603A);
    FUN_0c0c212c(obj);
    { struct mv3 { int w[3]; }; *(struct mv3 *)(obj + 0x28) = *(struct mv3 *)(a8); }
    if (a7 == 0) {
        if (n > 0) {
            i = 0;
            do {
                if (i != 4) {
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((*(int *)(obj + 0xC4 + i * 4)) + 0x6C) = *(struct mv3 *)(0xC273740 + i * 12); }
                }
                i = i + 1;
            } while (i < n);
        }
        *(unsigned int *)(obj + 0x38) = (unsigned short)((*(short *)0xC5413E8) + 0x8000);
        *(unsigned char *)(obj + 0x428) = a4;
        *(unsigned short *)(obj + 0x42C) = 0x12C;
        FUN_0c0c2aa2(obj, a9);
        return obj;
    }
    *(unsigned int *)(obj + 0x38) = (*(int *)0xC5413E8);
    *(unsigned char *)(obj + 0x428) = a4;
    *(unsigned short *)(obj + 0x42C) = 0x4B0;
    *(unsigned char *)(obj + 0x429) = 0x0;
    *(unsigned char *)(obj + 0x42A) = 0x0;
    FUN_0c0c2aa2(obj, a9);
    s0 = a4;
    s8 = a7;
    cnt = 2;
    off = 0xD0;
    if ((*(signed char *)(obj + 0x1A)) != 0) {
        t = *(signed char *)(obj + 0x1);
        if ((t != 0) && (t != 1)) {
            if ((t == 2) || (t == 3)) {
                s0 = 0x2;
                s8 = 0x3;
            }
        } else {
            s0 = 0x0;
            s8 = 0x1;
        }
        cnt = 4;
        off = 0xD4;
    } else {
        s0 = *(signed char *)(obj + 0x1);
    }
    sub = (*(int *)(obj + 0xCC));
    *(unsigned char *)sub = 0x1;
    *(unsigned short *)(sub + 0x6) = 0x21;
    *(float *)(sub + 0x6C) = -45.0f;
    *(float *)(sub + 0x74) = 0.0f;
    *(float *)(sub + 0x70) = 130.0f;
    if (cnt == 4) {
        sub = (*(int *)(obj + 0xD0));
        FUN_0c037498(sub, 0x2, 0x46, (*(int *)0xC4B40CC));
        *(unsigned char *)sub = 0x1;
        *(unsigned short *)(sub + 0x6) = 0x25;
        *(float *)(sub + 0x6C) = 90.0f;
        *(float *)(sub + 0x74) = 0.0f;
        *(float *)(sub + 0x70) = 0.0f;
        *(unsigned int *)(sub + 0x7C) = 0x8000;
        *(unsigned int *)(sub + 0x68) = (*(int *)(obj + 0xCC)) + 0x28;
    }
    for (j = 0; j < cnt; j++) {
        src = (j < 2) ? s0 : s8;
        sub = (*(int *)(obj + off + j * 4));
        FUN_0c037498(sub, (j & 1) ? 0x5 : src, 0x48, (*(int *)0xC4B40CC));
        *(unsigned char *)sub = 0x1;
        *(unsigned short *)(sub + 0x6) = 0x231;
        e = 0xC2737A0 + 12 * (*(signed char *)((src * 0x3938 + 0xC532498) + 0x3719));
        *(float *)(sub + 0x18) = *(float *)e;
        *(float *)(sub + 0x1C) = *(float *)(e + 4);
        *(float *)(sub + 0x20) = *(float *)(e + 8);
        *(float *)(sub + 0x8C) = 0.280000001f;
        *(float *)(sub + 0x88) = 0.280000001f;
        *(float *)(sub + 0x84) = 0.280000001f;
        *(float *)(sub + 0x70) = 0.0f;
        *(float *)(sub + 0x6C) = 0.0f;
        *(float *)(sub + 0x74) = 1.0f;
        *(unsigned int *)(sub + 0x68) = (*(int *)(obj + ((j < 2) ? 0xCC : 0xD0))) + 0x28;
    }
    FUN_0c05aaf6(0x8E);
    return obj;
}




int FUN_0c0d9ebc(int a4, int a5, int a6, int a7)
{
    int stk[6];
    register int t2;
    register int t22;
    register int t31;
    register int t50;
    register int t55;
    register int t57;
    register int t62;
    register int t73;
    register int t75;
    register int t80;
    register int t82;
    register int t87;
    register int t95;
    register int t107;
    register int t122;
    register int t123;
    register int t200;
    register int t201;
    register int t206;
    register int t207;
    register int t210;
    register int t212;
    register int t214;
    register int t217;
    register int t241;

    if ((*(signed char *)0xC54223C) != 2) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    t2 = *(signed char *)((a4 + 0x15));
    if (t2 != 0) {
        if (t2 != 1) {
        } else {
            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x16C);
            (((struct o7C_uint *)(((((struct oC8_int *)(a4))->v))))->v) = (int)(((math_sin_angle16((*(short *)((a4 + 0x1E))))) * 3932160.0f) / 360.0f);
        }
    } else {
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    }
    t22 = *(signed char *)((a4 + 0x14));
    switch (t22) {
    case 0:
        (((struct oA8_uchar *)(a4))->v) = 0x0;
        (((struct o12A_ushort *)(a4))->v) = 0x0;
        *(unsigned short *)(((0x12A + a4) + 0x2)) = 0x0;
        *(unsigned short *)(((0x12A + a4) + 0x4)) = 0x0;
        *(unsigned short *)((a4 + 0x1C)) = 0x12C;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t241 = 0x14;
        break;
    case 1:
        t200 = FUN_0c043064();
        t241 = t200;
        if (t200 != 0) {
        } else {
            t201 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t201 - 1);
            t241 = (short)(t201 - 1);
            if ((short)(t201 - 1) != 0) {
            } else {
                thunk_FUN_0c05abb2(0x44, 0x0);
                (((struct oA8_uchar *)(a4))->v) = 0x1;
                (((struct oAC_ushort *)(a4))->v) = 0x40F;
                (((struct oA9_uchar *)(a4))->v) = 0x21;
                (((struct oB0_float *)(a4))->v) = 0.0f;
                (((struct o78_uint *)(((((struct oD0_int *)(a4))->v))))->v) = 0x0;
                *(unsigned char *)((((((struct oDC_int *)(a4))->v)) + 0x0)) = 0x1;
                *(unsigned char *)((((((struct oE0_int *)(a4))->v)) + 0x0)) = 0x1;
                t206 = nlRand();
                t207 = ((~(((~t206) + 0x1) & 0x7)) + 0x1);
                if ((int)t206 >= 0) {
                    t207 = (t206 & 0x7);
                }
                *(unsigned char *)((a4 + 0x2)) = (*(signed char *)((0xC287C50 + t207)));
                t210 = *(signed char *)((a4 + 0x2));
                { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)((0xC287B30 + (((t210 << 1) + t210) << 2))); }
                t212 = *(signed char *)((a4 + 0x2));
                { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x34)) = *(struct mv3 *)((0xC287B90 + (((t212 << 1) + t212) << 2))); }
                t214 = *(signed char *)((a4 + 0x2));
                { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x4C)) = *(struct mv3 *)((0xC287BF0 + (((t214 << 1) + t214) << 2))); }
                t217 = FUN_0c0d60a8((*(signed char *)((a4 + 0x2))));
                if (t217 != 0) {
                    FUN_0c0d60bc((*(signed char *)((a4 + 0x2))));
                }
                (((struct o12A_ushort *)(a4))->v) = 0x0;
                *(unsigned short *)(((0x12A + a4) + 0x2)) = 0x0;
                *(unsigned short *)(((0x12A + a4) + 0x4)) = 0x0;
                *(unsigned short *)((a4 + 0x1C)) = 0x32;
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t241 = 0x14;
            }
        }
        break;
    case 2:
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)((a4 + 0x28)); }
        FUN_0c0bbf58(a4, *(Stk3 *)(((int)stk + 0)));
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
        (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
        (((struct oB0_float *)(a4))->v) = (((((struct oB0_float *)(a4))->v)) + 0.0199999996f);
        t31 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t31 - 1);
        t241 = (short)(t31 - 1);
        if ((short)(t31 - 1) != 0) {
        } else {
            (((struct o12A_ushort *)(a4))->v) = 0xFFFFFFFF;
            *(unsigned short *)(((0x12A + a4) + 0x2)) = 0xFFFFFFFF;
            *(unsigned short *)(((0x12A + a4) + 0x4)) = 0xFFFFFFFF;
            (((struct o132_uchar *)(a4))->v) = 0x0;
            *(unsigned short *)((a4 + 0x1C)) = 0xB4;
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t241 = 0x14;
        }
        break;
    case 3:
        { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 0)) = *(struct mv3 *)((a4 + 0x28)); }
        FUN_0c0bbf58(a4, *(Stk3 *)(((int)stk + 0)));
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
        (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
        if ((*(signed char *)((a4 + 0x132))) != 0) {
            (((struct o132_uchar *)(a4))->v) = 0x0;
            (((struct o12A_ushort *)(a4))->v) = 0x0;
            *(unsigned short *)(((0x12A + a4) + 0x2)) = 0x0;
            *(unsigned short *)(((0x12A + a4) + 0x4)) = 0x0;
            *(unsigned short *)((a4 + 0x1C)) = 0xA;
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        }
        t50 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t50 - 1);
        t241 = (short)(t50 - 1);
        if ((short)(t50 - 1) != 0) {
        } else {
            (((struct o12A_ushort *)(a4))->v) = 0x0;
            *(unsigned short *)(((0x12A + a4) + 0x2)) = 0x0;
            *(unsigned short *)(((0x12A + a4) + 0x4)) = 0x0;
            *(unsigned short *)((a4 + 0x1C)) = 0x32;
            (((struct o14_uchar *)(a4))->v) = 0x9;
            t241 = 0x14;
        }
        break;
    case 4:
        t55 = (((struct oD0_int *)(a4))->v);
        (((struct o78_uint *)(t55))->v) = (((((struct o78_int *)(t55))->v)) + (int)(((float)0x1 * 65536.0f) / 360.0f));
        t57 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t57 - 1);
        t241 = (short)(t57 - 1);
        if ((short)(t57 - 1) != 0) {
        } else {
            *(unsigned short *)((a4 + 0x1C)) = 0x14;
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t241 = 0x14;
        }
        break;
    case 5:
        t62 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t62 - 1);
        t241 = (short)(t62 - 1);
        if ((short)(t62 - 1) != 0) {
        } else {
            *(unsigned char *)((((((struct oDC_int *)(a4))->v)) + 0x0)) = 0x0;
            *(unsigned char *)((((((struct oE0_int *)(a4))->v)) + 0x0)) = 0x0;
            FUN_0c0db188(a4, 0x0);
            *(unsigned short *)((a4 + 0x1C)) = 0xA;
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t241 = 0x14;
        }
        break;
    case 6:
        t73 = (((struct oD0_int *)(a4))->v);
        (((struct o78_uint *)(t73))->v) = (((((struct o78_int *)(t73))->v)) - 3276);
        t75 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t75 - 1);
        t241 = (short)(t75 - 1);
        if ((short)(t75 - 1) != 0) {
        } else {
            *(unsigned short *)((a4 + 0x1C)) = 0xA;
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t241 = 0x14;
        }
        break;
    case 7:
        t80 = (((struct oD0_int *)(a4))->v);
        (((struct o78_uint *)(t80))->v) = (((((struct o78_int *)(t80))->v)) - 182);
        t82 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t82 - 1);
        t241 = (short)(t82 - 1);
        if ((short)(t82 - 1) != 0) {
        } else {
            *(unsigned short *)((a4 + 0x1C)) = 0x3C;
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t241 = 0x14;
        }
        break;
    case 8:
        t87 = (((struct oD0_int *)(a4))->v);
        (((struct o78_uint *)(t87))->v) = (((((struct o78_int *)(t87))->v)) + (int)((3.0f * 65536.0f) / 360.0f));
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
        (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
        t95 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t95 - 1);
        t241 = (short)(t95 - 1);
        if ((short)(t95 - 1) == 0) {
            *(unsigned short *)((a4 + 0x1C)) = 0x32;
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t241 = 0x14;
        }
        break;
    case 9:
        (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
        (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
        (((struct oB0_float *)(a4))->v) = (((((struct oB0_float *)(a4))->v)) - 0.0199999996f);
        t107 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t107 - 1);
        t241 = (short)(t107 - 1);
        if ((short)(t107 - 1) == 0) {
            thunk_FUN_0c05abb2(0x45, 0x0);
            (((struct oA8_uchar *)(a4))->v) = 0x0;
            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - 500.0f);
            (((struct o12A_ushort *)(a4))->v) = 0x0;
            *(unsigned short *)(((0x12A + a4) + 0x2)) = 0x0;
            *(unsigned short *)(((0x12A + a4) + 0x4)) = 0x0;
            *(unsigned short *)((a4 + 0x1C)) = (((short)((int)((int)(nlRand()) % (int)0x5)) * (short)0x3C) + 0x1E0);
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t241 = 0x14;
        }
        break;
    default:
        t122 = FUN_0c042fe0();
        t241 = t122;
        if (t122 != 0) {
            t123 = FUN_0c043010();
            t241 = t123;
            if (t123 == 0) {
                (((struct o14_uchar *)(a4))->v) = 0x1;
                t241 = 0x14;
            }
        }
        break;
    }
    return t241;
}

