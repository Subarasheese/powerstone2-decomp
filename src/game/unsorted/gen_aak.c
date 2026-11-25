/* Straight-line functions with calls and guards (batch gen_aak): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o12A_short { char p[0x12A]; short v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o2C_float { char p[0x2C]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o8_float { char p[0x8]; float v; };
float FUN_0c064e28(int);
int FUN_0c064f80(int);
int FUN_0c06588a(int, int, int, int);
extern int FUN_0c0c2d56();
int FUN_0c0c4444(int);
int math_atan2_angle16(int, float, float);
int math_vec3_accumulate(int, int);
int FUN_0c0c5d4c(int a4, int a5, int a6, int a7, float f4);

int FUN_0c0c5d4c(int a4, int a5, int a6, int a7, float f4)
{
    int stk[2];
    register int t0;
    register int t18;
    int t26;
    register int t29;
    register int t35;
    register int t36;
    register int t14;
    register int t15;
    int t44;
    register int t48;
    register int t49;

    t0 = (((struct o22_short *)(a4))->v);
    (((struct o22_ushort *)(a4))->v) = (t0 - 1);
    if ((short)(t0 - 1) == 0) {
        if ((unsigned char)(*(signed char *)((a4 + 0x41C))) == 0xC3) {
            if ((*(signed char *)((a4 + 0x424))) != 16) {
                t14 = 0xA;
                t15 = (*(signed char *)((a4 + 0x1)));
            } else {
                t14 = 0x9;
                t15 = (*(signed char *)((a4 + 0x1)));
            }
        } else {
            t14 = 0xA;
            t15 = (*(signed char *)((a4 + 0x1)));
        }
        return (((int (*)(int, int, int, int, float))(FUN_0c0c2d56))(a4, t14, t15, a7, f4));
    }
    t18 = *(short *)((a4 + 0x1E));
    *(unsigned short *)((a4 + 0x1E)) = (t18 - 1);
    if ((short)(t18 - 1) == 0) {
        (((struct o12A_ushort *)(a4))->v) = (((((struct o12A_short *)(a4))->v)) | 0x40);
    }
    if ((*(signed char *)((a4 + 0x131))) == 0) {
        t26 = math_atan2_angle16(a4, ((((struct o4C_float *)(a4))->v)), ((((struct o54_float *)(a4))->v)));
        *(float *)(((int)stk + 4)) = (((((struct o2C_float *)(a4))->v)) + ((((struct o0_float *)0xC0C5EC4)->v)));
        *(int *)((int)stk + 0) = 0x4000;
        t29 = FUN_0c06588a(a4, (((int)stk + 0) + 0x4), 0x410, (0xFFFF & t26));
        t35 = 0;
        if (t29 != 0) {
            if ((((((struct o2C_float *)(a4))->v)) + ((((struct o8_float *)0xC0C5EC4)->v))) > (*(float *)(((int)stk + 4)))) {
                (((struct o2C_float *)(a4))->v) = ((*(float *)(((int)stk + 4))) + (FUN_0c064e28(a4)));
                t35 = 1;
            }
        } else {
            t35 = 1;
        }
        if (t35) {
            t36 = FUN_0c064f80(a4);
            if (t36 != 0) {
                (((struct o50_float *)(a4))->v) = 0.0f;
                FUN_0c0c4444(a4);
            }
            math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
            return (math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58)));
        }
    }
    if (((unsigned char)(*(signed char *)((a4 + 0x41C))) == 0xC3) && (t44 = *(signed char *)((a4 + 0x424)), t44 == 16)) {
        t48 = 0x9;
        t49 = (*(signed char *)((a4 + 0x1)));
    } else {
        t48 = 0xA;
        t49 = (*(signed char *)((a4 + 0x1)));
    }
    return (((int (*)(int, int, int))(FUN_0c0c2d56))(a4, t48, t49));
}
