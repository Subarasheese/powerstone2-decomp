/* Straight-line functions with calls and guards (batch gen_pz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o6C_float { char p[0x6C]; float v; };
struct o90_float { char p[0x90]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oD0_int { char p[0xD0]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c1171f0(int);
void FUN_0c11383a(int a4, int a5, int a6, int a7, float f4, float f5);

void FUN_0c11383a(int a4, int a5, int a6, int a7, float f4, float f5)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 == 1) {
        } else {
            if (t0 == 2) {
                t1 = *(int *)0xC474770;
                { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC8_int *)(a4))->v)) + 0x6C)) = *(struct mv3 *)(((((t1 << 1) + t1) << 2) + 0xC291570)); }
                return;
            }
            if (t0 == 10) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                *(unsigned short *)((a4 + 0x1C)) = 0x0;
                t1 = 0x0;
                for (;;) {
                    t2 = ((0xC4 + a4) + t1);
                    t1 = (t1 + 0x4);
                    (((struct o90_float *)((*(int *)((t2 + 0x0)))))->v) = -18.75f;
                    if ((unsigned int)t1 >= (unsigned int)0x10) {
                        break;
                    }
                }
            } else if (t0 == 11) {
            } else {
                if (t0 == 99) {
                    (((struct o14_uchar *)(a4))->v) = 0xA;
                }
                return;
            }
            t0 = 0x0;
            for (;;) {
                t1 = *(int *)((((0xC4 + a4) + t0) + 0x0));
                t0 = (t0 + 0x4);
                (((struct o6C_float *)(t1))->v) = (((((struct o6C_float *)(t1))->v)) + ((((struct o90_float *)(t1))->v)));
                if ((unsigned int)t0 >= (unsigned int)0x10) {
                    break;
                }
            }
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
            if ((int)(short)(t0 + 0x1) >= (int)0x10) {
                FUN_0c03f346(a4, t1, a6, a7);
    return;
            }
            return;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0x1F;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        FUN_0c1171f0(a4);
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x4, 0xC, (*(int *)0xC4B410C));
        FUN_0c03744a(((((struct oC8_int *)(a4))->v)), 0xF, 0xC, (*(int *)0xC4B410C));
        t0 = *(int *)0xC4B410C;
        t1 = 0x3;
        if ((int)(*(signed char *)0xC542B8A) >= (int)0x1) {
            t1 = 0x1;
        }
        FUN_0c03744a(((((struct oCC_int *)(a4))->v)), t1, 0xA, t0);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oCC_int *)(a4))->v)) + 0x6C)) = *(struct mv3 *)(0xC2915B8); }
        t0 = *(int *)0xC4B410C;
        t1 = 0x3;
        if ((*(signed char *)0xC542B8A) == 2) {
            t1 = 0x2;
        }
        FUN_0c03744a(((((struct oD0_int *)(a4))->v)), t1, 0xA, t0);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oD0_int *)(a4))->v)) + 0x6C)) = *(struct mv3 *)(0xC29160C); }
        t0 = *(int *)0xC474770;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC8_int *)(a4))->v)) + 0x6C)) = *(struct mv3 *)(((((t0 << 1) + t0) << 2) + 0xC291570)); }
        t0 = 0x0;
        for (;;) {
            t1 = *(int *)((((0xC4 + a4) + t0) + 0x0));
            t0 = (t0 + 0x4);
            (((struct o6C_float *)(t1))->v) = (((((struct o6C_float *)(t1))->v)) - 300.0f);
            (((struct o90_float *)(t1))->v) = 18.75f;
            if ((unsigned int)t0 >= (unsigned int)0x10) {
                break;
            }
        }
    }
    t0 = 0x0;
    for (;;) {
        t1 = *(int *)((((0xC4 + a4) + t0) + 0x0));
        t0 = (t0 + 0x4);
        (((struct o6C_float *)(t1))->v) = (((((struct o6C_float *)(t1))->v)) + ((((struct o90_float *)(t1))->v)));
        if ((unsigned int)t0 >= (unsigned int)0x10) {
            break;
        }
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
    if ((int)(short)(t0 + 0x1) >= (int)0x10) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
    }
}
