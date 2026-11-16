/* Straight-line functions with calls and guards (batch gen_hu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o78_int { char p[0x78]; int v; };
int math_atan_angle16(float);
float math_signed_sqrt(float);
int FUN_0c0bb73e(int a4, int a5, float f4);

int FUN_0c0bb73e(int a4, int a5, float f4)
{
    int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;

    t1 = *(signed char *)0xC472462;
    if (((((struct o78_int *)((((unsigned short)(unsigned char)t1 * (unsigned short)0x264) + 0xC471ACC)))->v)) == 0) {
    } else {
        if ((*(signed char *)((((((struct o78_int *)((((unsigned short)(unsigned char)t1 * (unsigned short)0x264) + 0xC471ACC)))->v)) + 0x0))) != 0) {
            t2 = (((struct o78_int *)((((unsigned short)(unsigned char)t1 * (unsigned short)0x264) + 0xC471ACC)))->v);
            if (((*(int *)((t2 + 0x4))) != 0) && (t0 = *(signed char *)((t2 + 0xA8)), t0 != 0)) {
                u0 = (((struct o28_float *)(((((struct o78_int *)((((unsigned short)(unsigned char)t1 * (unsigned short)0x264) + 0xC471ACC)))->v))))->v);
                (((struct o6C_float *)((((unsigned short)(unsigned char)t1 * (unsigned short)0x264) + 0xC471ACC)))->v) = u0;
                t0 = *(signed char *)0xC472462;
                u0 = (((struct o2C_float *)(((((struct o78_int *)((((unsigned short)(unsigned char)t0 * (unsigned short)0x264) + 0xC471ACC)))->v))))->v);
                (((struct o70_float *)((((unsigned short)(unsigned char)t0 * (unsigned short)0x264) + 0xC471ACC)))->v) = u0;
                t0 = *(signed char *)0xC472462;
                u0 = (((struct o30_float *)(((((struct o78_int *)((((unsigned short)(unsigned char)t0 * (unsigned short)0x264) + 0xC471ACC)))->v))))->v);
                (((struct o74_float *)((((unsigned short)(unsigned char)t0 * (unsigned short)0x264) + 0xC471ACC)))->v) = u0;
            }
        } else {
            if ((*(signed char *)((((((struct o78_int *)((((unsigned short)(unsigned char)t1 * (unsigned short)0x264) + 0xC471ACC)))->v)) + 0x3714))) == 0) {
            } else {
                t0 = (((struct o78_int *)((((unsigned short)(unsigned char)t1 * (unsigned short)0x264) + 0xC471ACC)))->v);
                u0 = (((struct o28_float *)(a4))->v);
                u1 = (((struct o28_float *)(t0))->v);
                u2 = (((struct o30_float *)(a4))->v);
                u3 = (((struct o30_float *)(t0))->v);
                u4 = ((u3 - u2) * (u3 - u2));
                u4 = u4 + ((u1 - u0)) * ((u1 - u0));
                u0 = math_signed_sqrt(u4);
                if (u0 > 300.0f) {
                    t0 = *(signed char *)0xC472462;
                    t1 = (((struct o78_int *)((((unsigned short)(unsigned char)t0 * (unsigned short)0x264) + 0xC471ACC)))->v);
                    u0 = ((((struct o28_float *)(t1))->v));
                    u0 = u0 + 10.0f * ((((struct o4C_float *)(t1))->v));
                    (((struct o6C_float *)((((unsigned short)(unsigned char)t0 * (unsigned short)0x264) + 0xC471ACC)))->v) = u0;
                    t0 = *(signed char *)0xC472462;
                    u0 = (((struct o2C_float *)(((((struct o78_int *)((((unsigned short)(unsigned char)t0 * (unsigned short)0x264) + 0xC471ACC)))->v))))->v);
                    (((struct o70_float *)((((unsigned short)(unsigned char)t0 * (unsigned short)0x264) + 0xC471ACC)))->v) = u0;
                    t0 = *(signed char *)0xC472462;
                    t1 = (((struct o78_int *)((((unsigned short)(unsigned char)t0 * (unsigned short)0x264) + 0xC471ACC)))->v);
                    u0 = ((((struct o30_float *)(t1))->v));
                    u0 = u0 + 10.0f * ((((struct o54_float *)(t1))->v));
                    (((struct o74_float *)((((unsigned short)(unsigned char)t0 * (unsigned short)0x264) + 0xC471ACC)))->v) = u0;
                } else {
                    t0 = *(signed char *)0xC472462;
                    u0 = (((struct o28_float *)(((((struct o78_int *)((((unsigned short)(unsigned char)t0 * (unsigned short)0x264) + 0xC471ACC)))->v))))->v);
                    (((struct o6C_float *)((((unsigned short)(unsigned char)t0 * (unsigned short)0x264) + 0xC471ACC)))->v) = u0;
                    t0 = *(signed char *)0xC472462;
                    u0 = (((struct o2C_float *)(((((struct o78_int *)((((unsigned short)(unsigned char)t0 * (unsigned short)0x264) + 0xC471ACC)))->v))))->v);
                    (((struct o70_float *)((((unsigned short)(unsigned char)t0 * (unsigned short)0x264) + 0xC471ACC)))->v) = u0;
                    t0 = *(signed char *)0xC472462;
                    u0 = (((struct o30_float *)(((((struct o78_int *)((((unsigned short)(unsigned char)t0 * (unsigned short)0x264) + 0xC471ACC)))->v))))->v);
                    (((struct o74_float *)((((unsigned short)(unsigned char)t0 * (unsigned short)0x264) + 0xC471ACC)))->v) = u0;
                }
            }
        }
    }
    t0 = *(signed char *)0xC472462;
    u0 = (((struct o28_float *)(a4))->v);
    u1 = (((struct o6C_float *)((((unsigned short)(unsigned char)t0 * (unsigned short)0x264) + 0xC471ACC)))->v);
    u2 = (((((struct o74_float *)((((unsigned short)(unsigned char)t0 * (unsigned short)0x264) + 0xC471ACC)))->v)) - ((((struct o30_float *)(a4))->v)));
    u2 = -u2;
    u3 = (u1 - u0);
    if ((u1 - u0) == 0.0f) {
        u3 = (*(float *)0xC0BB980);
    }
    t0 = math_atan_angle16((u2 / u3));
    t1 = t0;
    if (0.0f > u3) {
        t1 = (t0 + 0x8000);
    }
    return (unsigned short)(t1 + 0x4000);
}
