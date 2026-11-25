/* Straight-line functions with calls and guards (batch gen_vl): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o2C_float { char p[0x2C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c13c292(int a4, int a5, int a6, int a7);

int FUN_0c13c292(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register float u0;

    t1 = *(signed char *)((a4 + 0x14));
    if (t1 == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0x78;
    }
    if ((t1 == 0) || (t1 == 1)) {
        t1 = *(int *)((a4 + 0x10));
        if (((int)(*(signed char *)((t1 + 0x15))) <= (int)0x1) && (t0 = *(signed char *)((t1 + 0x14)), (int)t0 <= (int)0x1)) {
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            if ((int)(short)(t0 - 1) <= 0) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            }
            (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) + ((((((struct oC_float *)0xC2A20DC)->v)) - ((((struct o0_float *)0xC2A20DC)->v))) / 120.0f));
            (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) + ((((((struct o10_float *)0xC2A20DC)->v)) - ((((struct o4_float *)0xC2A20DC)->v))) / 120.0f));
            (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + ((((((struct o14_float *)0xC2A20DC)->v)) - ((((struct o8_float *)0xC2A20DC)->v))) / 120.0f));
            *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0x199);
            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 1.0f);
            if ((int)(*(short *)((a4 + 0x1C))) >= (int)0x3C) {
                (((struct oBC_float *)(a4))->v) = (((((struct oBC_float *)(a4))->v)) + 0.0166666675f);
                if (!(1.0f > ((((struct oBC_float *)(a4))->v)))) {
                    (((struct oBC_float *)(a4))->v) = 1.0f;
                }
            } else {
                (((struct oBC_float *)(a4))->v) = (((((struct oBC_float *)(a4))->v)) - 0.0166666675f);
                if (!(((((struct oBC_float *)(a4))->v)) > 0.0f)) {
                    (((struct oBC_float *)(a4))->v) = 0.0f;
                }
            }
            u0 = (((struct oBC_float *)(a4))->v);
            (((struct oB8_float *)(a4))->v) = u0;
            (((struct oB4_float *)(a4))->v) = u0;
            return 0xB4;
        }
        return FUN_0c03f346(a4, t1, 0x1, a7);
    } else {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
}
