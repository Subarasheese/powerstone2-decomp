/* Straight-line functions with calls and guards (batch gen_on): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o10_int { char p[0x10]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o30_float { char p[0x30]; float v; };
struct o4_int { char p[0x4]; int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oD0_int { char p[0xD0]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c1171f0(int);
int FUN_0c0fde34(int a4);

int FUN_0c0fde34(int a4)
{
    register int t0;
    register int t1;
    register int t3;
    register int t4;
    register int t5;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0x1F;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        (((struct o30_float *)(a4))->v) = (1.0f + 1.0f);
        FUN_0c1171f0(a4);
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x0, 0x0, ((((struct o0_int *)0xC4B410C)->v)));
        FUN_0c03744a(((((struct oD0_int *)(a4))->v)), 0x0, 0x3, ((((struct o0_int *)0xC4B410C)->v)));
        FUN_0c03744a(((((struct oC8_int *)(a4))->v)), 0x0, 0x0, ((((struct o10_int *)0xC4B410C)->v)));
        *(unsigned short *)((((((struct oD0_int *)(a4))->v)) + 0x6)) = 0x61F;
    }
    t1 = t0;
    if ((t0 == 0) || (t0 == 1)) {
        t0 = *(short *)(((*(int *)((a4 + 0x10))) + 0x1C));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oD0_int *)(a4))->v)) + 0x6C)) = *(struct mv3 *)((0xC28EC20 + (((t0 << 1) + t0) << 2))); }
        if ((int)((((struct o22_short *)(a4))->v)) < (int)((((struct o0_int *)0xC28ECBC)->v))) {
            t0 = 0x0;
            t1 = (((((struct o0_int *)0xC28ECBC)->v)));
            t3 = 0xC28EC5C;
            t4 = 0xC28EC6C;
            t5 = ((((struct o22_short *)(a4))->v));
        } else {
            t0 = (((((struct o0_int *)0xC28ECBC)->v)));
            t1 = (((((struct o4_int *)0xC28ECBC)->v)));
            t3 = 0xC28EC6C;
            t4 = 0xC28EC5C;
            t5 = ((((struct o22_short *)(a4))->v));
        }
        FUN_0c058a6e((((((struct oD0_int *)(a4))->v)) + 0x14), t3, t4, t5, t1, t0);
        t0 = (((struct o22_short *)(a4))->v);
        (((struct o22_ushort *)(a4))->v) = (t0 + 0x1);
        if ((int)(short)(t0 + 0x1) > (int)((((struct o4_int *)0xC28ECBC)->v))) {
            (((struct o22_ushort *)(a4))->v) = 0x0;
        }
        FUN_0c03744a(((((struct oCC_int *)(a4))->v)), 0x0, (*(int *)((((*(short *)(((*(int *)((a4 + 0x10))) + 0x1C))) << 2) + 0xC28ECC4))), ((((struct o0_int *)0xC4B410C)->v)));
        t0 = (((struct oCC_int *)(a4))->v);
        *(unsigned short *)((t0 + 0x6)) = ((*(short *)((t0 + 0x6))) | 0x400);
        FUN_0c058a6e((((((struct oCC_int *)(a4))->v)) + 0x14), 0xC28EB38, 0xC28EB28, ((((struct o20_short *)(a4))->v)), 0xA, 0x0);
        if (((((struct o20_short *)(a4))->v)) == 0) {
            FUN_0c03744a(((((struct oCC_int *)(a4))->v)), 0x0, (*(int *)((((*(short *)((a4 + 0x1E))) << 2) + 0xC28ECC4))), ((((struct o0_int *)0xC4B410C)->v)));
            t0 = (((struct oCC_int *)(a4))->v);
            *(unsigned short *)((t0 + 0x6)) = ((*(short *)((t0 + 0x6))) | 0x400);
            FUN_0c058a6e((((((struct oCC_int *)(a4))->v)) + 0x14), 0xC28EB28, 0xC28EB38, ((((struct o20_short *)(a4))->v)), 0xA, 0x0);
        }
        t0 = *(short *)(((*(int *)((a4 + 0x10))) + 0x1C));
        t1 = t0;
        if ((*(short *)((a4 + 0x1E))) != t0) {
            t0 = (((struct o20_short *)(a4))->v);
            (((struct o20_ushort *)(a4))->v) = (t0 + 0x1);
            t3 = 0x20;
            if ((int)(short)(t0 + 0x1) > (int)0xA) {
                (((struct o20_ushort *)(a4))->v) = 0x0;
                t0 = *(short *)(((*(int *)((a4 + 0x10))) + 0x1C));
                *(unsigned short *)((a4 + 0x1E)) = t0;
                t3 = t0;
            }
            t1 = t3;
        }
    }
    return t1;
}
