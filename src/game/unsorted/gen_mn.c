/* Straight-line functions with calls and guards (batch gen_mn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_int { char p[0x10]; int v; };
struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
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
int FUN_0c037bf6(int);
int FUN_0c038362(int);
int FUN_0c058854(int, int, int, int);
int FUN_0c115120(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c1155d0(int, float);
int FUN_0c11563c(int, float);
int FUN_0c11e1e0(int, int, int, int);
float math_cos_angle16(int);
float math_floor_float(float);
float math_sin_angle16(int);
float nlScalor(int);
void FUN_0c115680(int a4, int a5, int a6, float f4);

void FUN_0c115680(int a4, int a5, int a6, float f4)
{
    int qa0;
    int t96;
    int stk[13];
    float t116;
    float qe0;
    int t31;
    int t32;
    int t33;
    int t34;
    int t58;
    float t113;
    float u114;
    int t28;
    int t27;
    float u117;
    int t102;
    int t46;
    int t26;
    int t16;
    float u14;
    float u9;
    int t108;
    int t107;
    int t106;
    int t105;
    int t61;
    int t60;
    int t59;

    qa0 = 0xC535CE8;
    (((struct o8_ushort *)0xC5324AC)->v) = (((((struct o8_short *)0xC5324AC)->v)) + 0x1);
    switch ((*(signed char *)0xC5324AC)) {
    case 0:
        t96 = *(signed char *)0xC5324AD;
        if (t96 == 0) {
            (((struct o1_uchar *)0xC5324AC)->v) = ((*(signed char *)0xC5324AD) + 0x1);
            *(unsigned int *)qa0 = 0x0;
        }
        if ((t96 == 0) || (t96 == 1)) {
            FUN_0c1155d0(0xC532498, ((((struct o4_float *)0xC29190C)->v)));
            t102 = FUN_0c037bf6(0xC532498);
            if ((unsigned char)t102 != 0) {
                FUN_0c11e1e0(0xC532498, (*(signed char *)0xC532499), 0x6, 0x3B);
                t105 = (((struct o4_int *)0xC5325B0)->v);
                t106 = (((struct o0_int *)0xC5325B0)->v);
                (((struct oA0_float *)(t105))->v) = 1.0f;
                (((struct o9C_float *)(t105))->v) = 1.0f;
                (((struct oA0_float *)(t106))->v) = 1.0f;
                (((struct o9C_float *)(t106))->v) = 1.0f;
                t107 = (((struct o4_int *)0xC5325B0)->v);
                t108 = (((struct o0_int *)0xC5325B0)->v);
                (((struct o98_float *)(t107))->v) = 1.0f;
                (((struct o98_float *)(t108))->v) = 1.0f;
                (((struct o94_float *)(t107))->v) = 1.0f;
                (((struct o94_float *)(t108))->v) = 1.0f;
                *(float *)(((int)stk + 4)) = (((((struct o0_float *)0xC473CA8)->v)) - ((((struct o14_float *)0xC5324AC)->v)));
                *(float *)(((int)stk + 8)) = 0.0f;
                *(float *)(((int)stk + 12)) = (((((struct o8_float *)0xC473CA8)->v)) - ((((struct o1C_float *)0xC5324AC)->v)));
                t113 = nlScalor(((int)stk + 4));
                u114 = (((struct o18_float *)0xC29190C)->v);
                t116 = math_floor_float(((t113 - u114) / (((((struct o0_float *)0xC29190C)->v)) * 1.5f)));
                if (!(0.100000001f > t116) && !(t116 > -0.100000001f)) {
                    u117 = (((struct o0_float *)0xC29190C)->v);
                    qe0 = ((t113 - u114) / (u117 * t116));
                    (((struct o38_float *)0xC5324AC)->v) = qe0;
                    *(float *)0xC5324EC = qe0;
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
        FUN_0c1155d0(0xC532498, ((((struct o8_float *)0xC29190C)->v)));
        *(int *)((int)stk + 0) = 0xC5324C0;
        u9 = ((((struct o14_float *)0xC5324AC)->v)) + ((((struct o38_float *)0xC5324AC)->v)) * (math_sin_angle16(((((struct o24_int *)0xC5324AC)->v))));
        (((struct o14_float *)0xC5324AC)->v) = u9;
        *(int *)((int)stk + 0) = 0xC5324C8;
        u14 = ((((struct o1C_float *)0xC5324AC)->v)) + (*(float *)0xC5324EC) * (math_cos_angle16(((((struct o24_int *)0xC5324AC)->v))));
        (((struct o1C_float *)0xC5324AC)->v) = u14;
        FUN_0c037bf6(0xC532498);
        t16 = FUN_0c11563c(0xC532498, 10.0f);
        if (t16 == 0) {
        } else {
            (((struct o0_uchar *)0xC5324AC)->v) = ((*(signed char *)0xC5324AC) + 0x1);
            *(unsigned int *)qa0 = 0x0;
        }
        break;
    case 2:
        *(unsigned int *)qa0 = ((*(int *)qa0) + 0x6);
        FUN_0c058854(0xC5324D0, ((((struct o10_int *)0xC473CA8)->v)), ((((struct o24_int *)0xC5324AC)->v)), (*(int *)qa0));
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
        *(unsigned int *)qa0 = ((*(int *)qa0) + 0x5);
        FUN_0c058854(0xC5324D0, ((((struct o10_int *)0xC473CA8)->v)), ((((struct o24_int *)0xC5324AC)->v)), (*(int *)qa0));
        t46 = FUN_0c037bf6(0xC532498);
        if ((unsigned char)t46 != 0) {
            (((struct o0_uchar *)0xC5324AC)->v) = ((*(signed char *)0xC5324AC) + 0x1);
        }
        break;
    case 4:
        FUN_0c058854(0xC5324D0, ((((struct o10_int *)0xC473CA8)->v)), ((((struct o24_int *)0xC5324AC)->v)), (*(int *)qa0));
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
