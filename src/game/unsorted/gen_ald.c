/* Straight-line functions with calls and guards (batch gen_ald): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o2C_float { char p[0x2C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oC_float { char p[0xC]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c05aae4(int, int);
int FUN_0c16cc48(int, float);
int math_vec3_accumulate(int, int);
int nlRand(void);
int FUN_0c16c8e8(int a4, int a5, int a6, int a7);

int FUN_0c16c8e8(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
            math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
            t0 = (((struct oC8_int *)(a4))->v);
            u0 = (((struct o0_float *)0xC16CAF0)->v);
            (((struct o18_float *)(t0))->v) = (((((struct o18_float *)(t0))->v)) + u0);
            (((struct o1C_float *)(t0))->v) = (((((struct o1C_float *)(t0))->v)) + u0);
            (((struct o20_float *)(t0))->v) = (((((struct o20_float *)(t0))->v)) + u0);
            t0 = *(short *)((a4 + 0x1E));
            *(unsigned short *)((a4 + 0x1E)) = (t0 - 1);
            if ((short)(t0 - 1) == 0) {
                *(unsigned short *)((a4 + 0x1E)) = 0x3;
                t0 = (((struct o20_short *)(a4))->v);
                switch (t0) {
                case 1:
                    (((struct o20_ushort *)(a4))->v) = 0x2;
                    break;
                case 2:
                    (((struct o20_ushort *)(a4))->v) = 0x3;
                    break;
                case 3:
                    (((struct o20_ushort *)(a4))->v) = 0x4;
                    break;
                case 4:
                    (((struct o20_ushort *)(a4))->v) = 0x1;
                    break;
                }
                FUN_0c03744a(((((struct oCC_int *)(a4))->v)), ((((struct o20_short *)(a4))->v)), 0x54, (*(int *)0xC4B40CC));
            }
            if (!(((((struct o2C_float *)(a4))->v)) > ((*(float *)0xC54109C) + ((((struct oC_float *)0xC16CAF0)->v))))) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                (((struct o50_float *)(a4))->v) = ((((struct o14_float *)0xC16CAF0)->v));
                (((struct o54_float *)(a4))->v) = 1.0f;
                *(unsigned short *)((a4 + 0x1C)) = 0x78;
                *(unsigned short *)((a4 + 0x1E)) = 0x0;
                (((struct o20_ushort *)(a4))->v) = 0x0;
                return FUN_0c16cc48((a4 + 0x28), ((((struct o18_float *)0xC16CAF0)->v)));
            }
            return 0x2C;
        }
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        t1 = (short)(t0 - 1);
        if ((short)(t0 - 1) != 0) {
        } else {
            t0 = nlRand();
            t2 = (t0 % 0x4);
            u0 = *(float *)(((((t2 << 2) << 1) + 0xC2A39AC) + 0x0));
            (((struct o50_float *)(a4))->v) = u0;
            (((struct o54_float *)(a4))->v) = ((-u0) / (1.0f + 1.0f));
            (((struct o5C_float *)(a4))->v) = ((((struct o4_float *)((((t2 << 2) << 1) + 0xC2A39AC)))->v));
            *(unsigned short *)((a4 + 0x1C)) = 0x64;
            *(unsigned short *)((a4 + 0x1E)) = 0x3;
            (((struct o20_ushort *)(a4))->v) = 0x1;
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            FUN_0c05aae4(0x65, (a4 + 0x28));
            (((struct oA8_uchar *)(a4))->v) = 0x1;
            t1 = 0xA8;
        }
        return t1;
    }
    t0 = *(signed char *)((a4 + 0x2));
    t1 = nlRand();
    t2 = (t1 % 0x8);
    *(unsigned short *)((a4 + 0x1C)) = (t2 + (t0 << 1));
    (((struct o78_uint *)(((((struct oC4_int *)(a4))->v))))->v) = 0xFFFFEAAB;
    t0 = (((struct oC8_int *)(a4))->v);
    (((struct o18_float *)(t0))->v) = 0.0f;
    (((struct o1C_float *)(t0))->v) = 0.0f;
    (((struct o20_float *)(t0))->v) = 0.0f;
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    return 0x14;
}
