/* Straight-line functions with calls and guards (batch gen_adx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o16_uchar { char p[0x16]; unsigned char v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
int FUN_0c042fe0(void);
int FUN_0c144924(int, int);
int FUN_0c144984(int, int, int);
int FUN_0c144b48(int);
int FUN_0c144c9c(int a4);

int FUN_0c144c9c(int a4)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x0;
        t0 = *(signed char *)((a4 + 0x2));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)((0xC2028B4 + (((t0 << 1) + t0) << 2))); }
        u0 = *(float *)0xC144E00;
        (((struct o48_float *)(a4))->v) = u0;
        (((struct o44_float *)(a4))->v) = u0;
        (((struct o40_float *)(a4))->v) = u0;
        (((struct o7C_uint *)(((((struct oC8_int *)(a4))->v))))->v) = 0x0;
        (((struct o78_uint *)(((((struct oC8_int *)(a4))->v))))->v) = 0x0;
        (((struct o78_uint *)(((((struct oCC_int *)(a4))->v))))->v) = 0x0;
        FUN_0c144924(a4, 0x1);
        t0 = FUN_0c042fe0();
        if (t0 != 0) {
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        } else {
            return t0;
        }
    }
    if ((int)(*(short *)((a4 + 0x1C))) > 0) {
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
    }
    t0 = *(short *)((a4 + 0x1C));
    if (t0 == 0) {
        t1 = FUN_0c144b48(a4);
        if (t1 != 0) {
            return FUN_0c144984(a4, 0x2, 0x0);
        }
        return t1;
    }
    return t0;
}
