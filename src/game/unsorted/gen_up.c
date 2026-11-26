/* Straight-line functions with calls and guards (batch gen_up): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c03f346(int);
int FUN_0c04b23c(int, int, int, int);
int FUN_0c0582de(int, int);
int math_vec3_accumulate(int, int);
int FUN_0c04cefa(int a4, int a5, int a6, int a7);

int FUN_0c04cefa(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;

    FUN_0c04b23c(a4, 0x1, a6, a7);
    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x0;
        (((struct o48_float *)(a4))->v) = 0.0f;
        (((struct o44_float *)(a4))->v) = 0.0f;
        (((struct o40_float *)(a4))->v) = 0.0f;
    }
    t0 = *(signed char *)((a4 + 0x15));
    t1 = t0;
    if (t0 == 0) {
        *(unsigned short *)((a4 + 0x1C)) = 0x28;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t1 = 0x15;
    }
    if ((t0 == 0) || (t0 == 1)) {
        t0 = t1;
        if ((int)(unsigned char)(*(signed char *)0xC541F44) < (int)0xD) {
        } else {
            (((struct o48_float *)(a4))->v) = 1.0f;
            (((struct o44_float *)(a4))->v) = 1.0f;
            (((struct o40_float *)(a4))->v) = 1.0f;
            (((struct o28_float *)(a4))->v) = 50.0f;
            (((struct o2C_float *)(a4))->v) = 0.0f;
            (((struct o30_float *)(a4))->v) = 109.0f;
            FUN_0c0582de((a4 + 0x28), (((((struct oC8_int *)((*(int *)((a4 + 0x10)))))->v)) + 0x28));
            (((struct o4C_float *)(a4))->v) = 30.0f;
            (((struct o50_float *)(a4))->v) = 20.0f;
            (((struct o54_float *)(a4))->v) = 0.0f;
            (((struct o60_float *)(a4))->v) = (((((((struct o4_float *)0xC1B7EEC)->v)) + 2650.0f) * (1.0f + 1.0f)) / 14400.0f);
            u0 = (((((struct o4C_float *)(a4))->v)) * (1.0f + 1.0f));
            u0 = -u0;
            (((struct o58_float *)(a4))->v) = (u0 / 120.0f);
            u0 = (-(((((struct o50_float *)(a4))->v)) * 120.0f));
            (((struct o5C_float *)(a4))->v) = ((((u0 + ((((struct o0_float *)0xC1B7EEC)->v))) + -200.0f) * (1.0f + 1.0f)) / 14400.0f);
            (((struct oA8_uchar *)(a4))->v) = 0x1;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            t0 = 0x15;
        }
        return t0;
    } else {
        if ((int)(*(int *)((a4 + 0x38))) > (int)0xFFFFF1C8) {
            *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) - 0x222);
        }
        math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
        math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
        *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
        t0 = (((struct oC8_int *)(a4))->v);
        (((struct o80_uint *)(t0))->v) = (((((struct o80_int *)(t0))->v)) + 0xB6);
        *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = ((*(short *)((a4 + 0x1E))) & 0x1);
        if ((int)(unsigned char)(*(signed char *)0xC541F44) > (int)0xE) {
            return FUN_0c03f346(a4);
        }
        return 0xE;
    }
}
