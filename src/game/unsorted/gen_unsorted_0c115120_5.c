/* game/unsorted: functions 0C115120-0C115DBE, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o10_float { char p[0x10]; float v; };
struct o10_int { char p[0x10]; int v; };
struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o24_int { char p[0x24]; int v; };
struct o38_float { char p[0x38]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_short { char p[0x8]; short v; };
struct o8_ushort { char p[0x8]; unsigned short v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c037bf6(int);
int FUN_0c038362(int);
int FUN_0c058854(int, int, int, int);
int FUN_0c115120(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c1155d0(int, int, int, float);
int FUN_0c11563c(int, float);
int FUN_0c11e1e0(int, int, int, int);
float math_cos_angle16(int);
float math_floor_float(float);
float math_sin_angle16(int);
float FUN_0c0e2340(int);
void FUN_0c115680(int a4, int a5, int a6, float f4);
int FUN_0c1159a4(int a4, int a5, int a6, float f4);

void FUN_0c115680(int a4, int a5, int a6, float f4)
{
    int stk[13];
    register int t1;
    register float u9;
    register float u14;
    register int t16;
    register int t26;
    register int t31;
    register int t32;
    register int t33;
    register int t34;
    register int t46;
    register int t58;
    register int t59;
    register int t60;
    register int t61;
    register int t96;
    register int t99;
    register int t102;
    register int t103;
    register int t104;
    register int t105;
    register float t110;
    register float u111;
    register float t113;
    register float u114;
    register int t137;
    register int t140;
    register int t141;
    register int t142;
    register int t143;
    register float t148;
    register float u149;
    register float t151;
    register float u152;
    int t27;
    register int t28;

    (((struct o8_ushort *)0xC5324AC)->v) = (((((struct o8_short *)0xC5324AC)->v)) + 0x1);
    t1 = *(signed char *)0xC5324AC;
    switch (t1) {
    case 0:
        t96 = *(signed char *)0xC5324AD;
        if (t96 != 0) {
            if (t96 == 1) {
                FUN_0c1155d0(0xC532498, a5, a6, ((((struct o4_float *)0xC29190C)->v)));
                t99 = FUN_0c037bf6(0xC532498);
                if ((unsigned char)t99 != 0) {
                    FUN_0c11e1e0(0xC532498, (*(signed char *)0xC532499), 0x6, 0x3B);
                    t102 = (((struct o4_int *)0xC5325B0)->v);
                    t103 = (((struct o0_int *)0xC5325B0)->v);
                    (((struct oA0_float *)(t102))->v) = 1.0f;
                    (((struct o9C_float *)(t102))->v) = 1.0f;
                    (((struct oA0_float *)(t103))->v) = 1.0f;
                    (((struct o9C_float *)(t103))->v) = 1.0f;
                    t104 = (((struct o4_int *)0xC5325B0)->v);
                    t105 = (((struct o0_int *)0xC5325B0)->v);
                    (((struct o98_float *)(t104))->v) = 1.0f;
                    (((struct o98_float *)(t105))->v) = 1.0f;
                    (((struct o94_float *)(t104))->v) = 1.0f;
                    (((struct o94_float *)(t105))->v) = 1.0f;
                    *(float *)(((int)stk + 4)) = (((((struct o0_float *)0xC473CA8)->v)) - ((((struct o14_float *)0xC5324AC)->v)));
                    *(float *)(((int)stk + 8)) = 0.0f;
                    *(float *)(((int)stk + 12)) = (((((struct o8_float *)0xC473CA8)->v)) - ((((struct o1C_float *)0xC5324AC)->v)));
                    t110 = FUN_0c0e2340(((int)stk + 4));
                    u111 = (((struct o18_float *)0xC29190C)->v);
                    t113 = math_floor_float(((t110 - u111) / (((((struct o0_float *)0xC29190C)->v)) * 1.5f)));
                    if (!(0.100000001f > t113) && !(t113 > -0.100000001f)) {
                        u114 = (((struct o0_float *)0xC29190C)->v);
                        (((struct o38_float *)0xC5324AC)->v) = ((t110 - u111) / (u114 * t113));
                        *(float *)0xC5324EC = ((t110 - u111) / (u114 * t113));
                    } else {
                        (((struct o38_float *)0xC5324AC)->v) = 1.5f;
                        *(float *)0xC5324EC = 1.5f;
                    }
                    (((struct o0_uchar *)0xC5324AC)->v) = ((*(signed char *)0xC5324AC) + 0x1);
                    (((struct o1_uchar *)0xC5324AC)->v) = 0x0;
                } else {
                    FUN_0c038362(0xC532498);
                }
            }
        } else {
            (((struct o1_uchar *)0xC5324AC)->v) = ((*(signed char *)0xC5324AD) + 0x1);
            *(unsigned int *)0xC535CE8 = 0x0;
            FUN_0c1155d0(0xC532498, a5, a6, ((((struct o4_float *)0xC29190C)->v)));
            t137 = FUN_0c037bf6(0xC532498);
            if ((unsigned char)t137 != 0) {
                FUN_0c11e1e0(0xC532498, (*(signed char *)0xC532499), 0x6, 0x3B);
                t140 = (((struct o4_int *)0xC5325B0)->v);
                t141 = (((struct o0_int *)0xC5325B0)->v);
                (((struct oA0_float *)(t140))->v) = 1.0f;
                (((struct o9C_float *)(t140))->v) = 1.0f;
                (((struct oA0_float *)(t141))->v) = 1.0f;
                (((struct o9C_float *)(t141))->v) = 1.0f;
                t142 = (((struct o4_int *)0xC5325B0)->v);
                t143 = (((struct o0_int *)0xC5325B0)->v);
                (((struct o98_float *)(t142))->v) = 1.0f;
                (((struct o98_float *)(t143))->v) = 1.0f;
                (((struct o94_float *)(t142))->v) = 1.0f;
                (((struct o94_float *)(t143))->v) = 1.0f;
                *(float *)(((int)stk + 4)) = (((((struct o0_float *)0xC473CA8)->v)) - ((((struct o14_float *)0xC5324AC)->v)));
                *(float *)(((int)stk + 8)) = 0.0f;
                *(float *)(((int)stk + 12)) = (((((struct o8_float *)0xC473CA8)->v)) - ((((struct o1C_float *)0xC5324AC)->v)));
                t148 = FUN_0c0e2340(((int)stk + 4));
                u149 = (((struct o18_float *)0xC29190C)->v);
                t151 = math_floor_float(((t148 - u149) / (((((struct o0_float *)0xC29190C)->v)) * 1.5f)));
                if (!(0.100000001f > t151) && !(t151 > -0.100000001f)) {
                    u152 = (((struct o0_float *)0xC29190C)->v);
                    (((struct o38_float *)0xC5324AC)->v) = ((t148 - u149) / (u152 * t151));
                    *(float *)0xC5324EC = ((t148 - u149) / (u152 * t151));
                } else {
                    (((struct o38_float *)0xC5324AC)->v) = 1.5f;
                    *(float *)0xC5324EC = 1.5f;
                }
                (((struct o0_uchar *)0xC5324AC)->v) = ((*(signed char *)0xC5324AC) + 0x1);
                (((struct o1_uchar *)0xC5324AC)->v) = 0x0;
            } else {
                FUN_0c038362(0xC532498);
            }
        }
        break;
    case 1:
        FUN_0c1155d0(0xC532498, a5, a6, ((((struct o8_float *)0xC29190C)->v)));
        *(int *)((int)stk + 0) = 0xC5324C0;
        u9 = ((((struct o14_float *)0xC5324AC)->v));
        u9 = u9 + ((((struct o38_float *)0xC5324AC)->v)) * (math_sin_angle16(((((struct o24_int *)0xC5324AC)->v))));
        (((struct o14_float *)0xC5324AC)->v) = u9;
        *(int *)((int)stk + 0) = 0xC5324C8;
        u14 = ((((struct o1C_float *)0xC5324AC)->v));
        u14 = u14 + (*(float *)0xC5324EC) * (math_cos_angle16(((((struct o24_int *)0xC5324AC)->v))));
        (((struct o1C_float *)0xC5324AC)->v) = u14;
        FUN_0c037bf6(0xC532498);
        t16 = FUN_0c11563c(0xC532498, 10.0f);
        if (t16 == 0) {
        } else {
            (((struct o0_uchar *)0xC5324AC)->v) = ((*(signed char *)0xC5324AC) + 0x1);
            *(unsigned int *)0xC535CE8 = 0x0;
        }
        break;
    case 2:
        *(unsigned int *)0xC535CE8 = ((*(int *)0xC535CE8) + 0x6);
        FUN_0c058854(0xC5324D0, ((((struct o10_int *)0xC473CA8)->v)), ((((struct o24_int *)0xC5324AC)->v)), (*(int *)0xC535CE8));
        t26 = FUN_0c037bf6(0xC532498);
        if (((unsigned char)t26 != 0) && (t27 = (((struct o24_int *)0xC5324AC)->v), t28 = (((struct o10_int *)0xC473CA8)->v), t27 == t28)) {
            FUN_0c11e1e0(0xC532498, (*(signed char *)0xC532499), 0x6, 0x3C);
            t31 = (((struct o4_int *)0xC5325B0)->v);
            t32 = (((struct o0_int *)0xC5325B0)->v);
            (((struct oA0_float *)(t31))->v) = 1.0f;
            (((struct o9C_float *)(t31))->v) = 1.0f;
            (((struct oA0_float *)(t32))->v) = 1.0f;
            (((struct o9C_float *)(t32))->v) = 1.0f;
            t33 = (((struct o4_int *)0xC5325B0)->v);
            t34 = (((struct o0_int *)0xC5325B0)->v);
            (((struct o98_float *)(t33))->v) = 1.0f;
            (((struct o98_float *)(t34))->v) = 1.0f;
            (((struct o94_float *)(t33))->v) = 1.0f;
            (((struct o94_float *)(t34))->v) = 1.0f;
            (((struct o0_uchar *)0xC5324AC)->v) = ((*(signed char *)0xC5324AC) + 0x1);
        }
        break;
    case 3:
        *(unsigned int *)0xC535CE8 = ((*(int *)0xC535CE8) + 0x5);
        FUN_0c058854(0xC5324D0, ((((struct o10_int *)0xC473CA8)->v)), ((((struct o24_int *)0xC5324AC)->v)), (*(int *)0xC535CE8));
        t46 = FUN_0c037bf6(0xC532498);
        if ((unsigned char)t46 != 0) {
            (((struct o0_uchar *)0xC5324AC)->v) = ((*(signed char *)0xC5324AC) + 0x1);
        }
        break;
    case 4:
        FUN_0c058854(0xC5324D0, ((((struct o10_int *)0xC473CA8)->v)), ((((struct o24_int *)0xC5324AC)->v)), (*(int *)0xC535CE8));
        if (((((struct o24_int *)0xC5324AC)->v)) == ((((struct o10_int *)0xC473CA8)->v))) {
            FUN_0c115120(0x1, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
            t58 = (((struct o4_int *)0xC5325B0)->v);
            t59 = (((struct o0_int *)0xC5325B0)->v);
            (((struct oA0_float *)(t58))->v) = 1.0f;
            (((struct o9C_float *)(t58))->v) = 1.0f;
            (((struct oA0_float *)(t59))->v) = 1.0f;
            (((struct o9C_float *)(t59))->v) = 1.0f;
            t60 = (((struct o4_int *)0xC5325B0)->v);
            t61 = (((struct o0_int *)0xC5325B0)->v);
            (((struct o98_float *)(t60))->v) = 1.0f;
            (((struct o98_float *)(t61))->v) = 1.0f;
            (((struct o94_float *)(t60))->v) = 1.0f;
            (((struct o94_float *)(t61))->v) = 1.0f;
        }
        break;
    }
}

int FUN_0c1159a4(int a4, int a5, int a6, float f4)
{
    int stk[12];
    register int t1;
    register int t2;
    register int t7;
    register int t11;
    register int t12;
    register int t13;
    register int t14;
    register int t24;
    register int t33;
    register int t34;
    register int t36;
    register int t37;
    register float t73;
    register float u76;
    register float u82;
    register int t84;
    register int t100;
    register int t104;
    register int t105;
    register int t106;
    register int t107;
    register int t89;

    (((struct o8_ushort *)0xC5324AC)->v) = (((((struct o8_short *)0xC5324AC)->v)) + 0x1);
    t1 = *(signed char *)0xC5324AC;
    t2 = *(int *)0xC473CB8;
    if (t1 != 0) {
        if (t1 != 1) {
            if (t1 == 2) {
                FUN_0c058854(0xC5324D0, t2, ((((struct o24_int *)0xC5324AC)->v)), ((int)((((((((struct oC_float *)0xC291928)->v)) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF));
                t7 = FUN_0c037bf6(0xC532498);
                t89 = (unsigned char)t7;
                if ((unsigned char)t7 != 0) {
                    (((struct o0_uchar *)0xC5324AC)->v) = ((*(signed char *)0xC5324AC) + 0x1);
                    FUN_0c11e1e0(0xC532498, (*(signed char *)0xC532499), 0x6, 0x3C);
                    t11 = (((struct o4_int *)0xC5325B0)->v);
                    t12 = (((struct o0_int *)0xC5325B0)->v);
                    (((struct oA0_float *)(t11))->v) = 1.0f;
                    (((struct o9C_float *)(t11))->v) = 1.0f;
                    (((struct oA0_float *)(t12))->v) = 1.0f;
                    (((struct o9C_float *)(t12))->v) = 1.0f;
                    t13 = (((struct o4_int *)0xC5325B0)->v);
                    t14 = (((struct o0_int *)0xC5325B0)->v);
                    (((struct o98_float *)(t13))->v) = 1.0f;
                    (((struct o98_float *)(t14))->v) = 1.0f;
                    (((struct o94_float *)(t13))->v) = 1.0f;
                    (((struct o94_float *)(t14))->v) = 1.0f;
                    t89 = 0x94;
                }
            } else {
                if (t1 == 3) {
                    FUN_0c058854(0xC5324D0, t2, ((((struct o24_int *)0xC5324AC)->v)), ((int)((((((((struct o10_float *)0xC291928)->v)) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF));
                    t24 = FUN_0c037bf6(0xC532498);
                    t89 = (unsigned char)t24;
                    if ((unsigned char)t24 != 0) {
                        (((struct o0_uchar *)0xC5324AC)->v) = ((*(signed char *)0xC5324AC) + 0x1);
                        t89 = 0x14;
                    }
                } else {
                    t89 = t1;
                    if (t1 == 4) {
                        t33 = (((struct o24_int *)0xC5324AC)->v);
                        t34 = *(int *)0xC473CB8;
                        t89 = (FUN_0c058854(0xC5324D0, t2, ((((struct o24_int *)0xC5324AC)->v)), ((int)((((((((struct o14_float *)0xC291928)->v)) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF)));
                        if (t33 == t34) {
                            FUN_0c115120(0x1, 0x0, 0x0, 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
                            t36 = (((struct o0_int *)0xC5325B0)->v);
                            (((struct o98_float *)(t36))->v) = 8.0f;
                            (((struct o94_float *)(t36))->v) = 8.0f;
                            t37 = (((struct o4_int *)0xC5325B0)->v);
                            (((struct o98_float *)(t37))->v) = 8.0f;
                            (((struct o94_float *)(t37))->v) = 8.0f;
                            t89 = 0x94;
                        }
                    }
                }
            }
        } else {
            FUN_0c1155d0(0xC532498, t2, a6, ((((struct o8_float *)0xC291928)->v)));
            *(int *)((int)stk + 0) = 0xC5324C0;
            t73 = math_sin_angle16(((((struct o24_int *)0xC5324AC)->v)));
            *(unsigned int *)(((int)stk + 4)) = 0xC291928;
            u76 = ((((struct o14_float *)0xC5324AC)->v));
            u76 = u76 + ((((struct o0_float *)0xC291928)->v)) * t73;
            (((struct o14_float *)0xC5324AC)->v) = u76;
            *(int *)((int)stk + 0) = 0xC5324C8;
            u82 = ((((struct o1C_float *)0xC5324AC)->v));
            u82 = u82 + (*(float *)(((*(int *)(((int)stk + 4))) + 0x0))) * (math_cos_angle16(((((struct o24_int *)0xC5324AC)->v))));
            (((struct o1C_float *)0xC5324AC)->v) = u82;
            FUN_0c037bf6(0xC532498);
            t84 = FUN_0c11563c(0xC532498, 10.0f);
            t89 = t84;
            if (t84 == 0) {
            } else {
                (((struct o0_uchar *)0xC5324AC)->v) = ((*(signed char *)0xC5324AC) + 0x1);
                t89 = 0x14;
            }
        }
        return t89;
    }
    FUN_0c1155d0(0xC532498, t2, a6, ((((struct o4_float *)0xC291928)->v)));
    t100 = FUN_0c037bf6(0xC532498);
    if ((unsigned char)t100 != 0) {
        (((struct o0_uchar *)0xC5324AC)->v) = ((*(signed char *)0xC5324AC) + 0x1);
        FUN_0c11e1e0(0xC532498, (*(signed char *)0xC532499), 0x6, 0x3B);
        t104 = (((struct o4_int *)0xC5325B0)->v);
        t105 = (((struct o0_int *)0xC5325B0)->v);
        (((struct oA0_float *)(t104))->v) = 1.0f;
        (((struct o9C_float *)(t104))->v) = 1.0f;
        (((struct oA0_float *)(t105))->v) = 1.0f;
        (((struct o9C_float *)(t105))->v) = 1.0f;
        t106 = (((struct o4_int *)0xC5325B0)->v);
        t107 = (((struct o0_int *)0xC5325B0)->v);
        (((struct o98_float *)(t106))->v) = 1.0f;
        (((struct o98_float *)(t107))->v) = 1.0f;
        (((struct o94_float *)(t106))->v) = 1.0f;
        (((struct o94_float *)(t107))->v) = 1.0f;
        return 0x94;
    }
    return FUN_0c038362(0xC532498);
}
