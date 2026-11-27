/* Straight-line functions with calls and guards (batch gen_ry): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oE4_int { char p[0xE4]; int v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c0582de(int, int);
int FUN_0c136098(int);
int FUN_0c136108(int a4, int a5, int a6, int a7, float f4);

int FUN_0c136108(int a4, int a5, int a6, int a7, float f4)
{
    int t0;
    register int t1;
    register int t2;
    register float u0;

    t1 = (((struct oC4_int *)(a4))->v);
    t2 = *(signed char *)((a4 + 0x14));
    if (t2 == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0x3C;
        *(unsigned short *)((a4 + 0x1E)) = 0x12;
    }
    if ((t2 == 0) || (t2 == 1)) {
        if ((*(signed char *)((a4 + 0x15))) == 0) {
            t2 = *(short *)((a4 + 0x1E));
            *(unsigned short *)((a4 + 0x1E)) = (t2 - 1);
            if ((int)(short)(t2 - 1) <= 0) {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                *(unsigned short *)((t1 + 0x6)) = ((*(short *)((t1 + 0x6))) | 0x200);
                (((struct o18_float *)(t1))->v) = 1.0f;
                (((struct o1C_float *)(t1))->v) = 1.0f;
                (((struct o20_float *)(t1))->v) = 1.0f;
            }
        } else {
            (((struct o20_float *)(t1))->v) = (((((struct o20_float *)(t1))->v)) - 0.100000001f);
            if (!(((((struct o20_float *)(t1))->v)) > 0.0f)) {
                (((struct o20_float *)(t1))->v) = 0.0f;
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            }
            u0 = (((struct o20_float *)(t1))->v);
            (((struct o1C_float *)(t1))->v) = u0;
            (((struct o18_float *)(t1))->v) = u0;
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)(0xC201EB0); }
        FUN_0c0582de((a4 + 0x28), (((((struct oE4_int *)((*(int *)((a4 + 0x10)))))->v)) + 0x28));
        FUN_0c136098(a4);
        if ((*(short *)((a4 + 0x1C))) != 0) {
            *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
        }
        if (((*(signed char *)((0x3715 + (*(int *)((a4 + 0x10)))))) == 19) && (t0 = *(short *)((a4 + 0x1C)), t0 != 0)) {
            return t0;
        }
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        return 0x14;
    } else {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
}
