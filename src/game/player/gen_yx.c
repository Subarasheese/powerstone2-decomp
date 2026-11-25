/* Straight-line functions with calls and guards (batch gen_yx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o160_float { char p[0x160]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o3717_uchar { char p[0x3717]; unsigned char v; };
struct o3718_uchar { char p[0x3718]; unsigned char v; };
struct o50_float { char p[0x50]; float v; };
int FUN_0c07daea(int);
int FUN_0c07ec9a(int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c085cac(int, int, int);
int FUN_0c069cb6(int a4);

int FUN_0c069cb6(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    if ((*(short *)((a4 + 0x1C))) != 0) {
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
    }
    t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
    t1 = 0;
    if (t0 != 0) {
        (((struct o50_float *)(a4))->v) = 0.0f;
        if (t0 == 2) {
            t0 = *(short *)((a4 + 0x1E));
            *(unsigned short *)((a4 + 0x1E)) = (t0 - 1);
            if ((int)(short)(t0 - 1) < 0) {
                t0 = 0x16;
                if (!(((((struct o160_float *)(a4))->v)) > 0.0f)) {
                } else {
                    (((struct o3717_uchar *)(a4))->v) = 0xF;
                    (((struct o3718_uchar *)(a4))->v) = 0x0;
                    t0 = 0xF;
                }
                t2 = FUN_0c085cac(a4, t0, 0x0);
            } else {
                FUN_0c07ec9a(a4);
                if (((((struct o20_short *)(a4))->v)) == 0) {
                    FUN_0c07daea(a4);
                    (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + 0x1);
                    t1 = 1;
                } else {
                    t1 = 1;
                }
            }
        } else {
            if (!(((((struct o160_float *)(a4))->v)) > 0.0f)) {
                *(unsigned short *)((a4 + 0x1E)) = 0x78;
                t1 = 1;
            } else {
                t1 = 1;
            }
        }
        t0 = t2;
    } else {
        if (((((struct o160_float *)(a4))->v)) != 0.0f) {
            (((struct o3717_uchar *)(a4))->v) = 0x5;
            (((struct o3718_uchar *)(a4))->v) = 0x7;
            t2 = FUN_0c085cac(a4, 0x5, 0x7);
        } else {
            t1 = 1;
        }
        t0 = t2;
    }
    if (t1) {
        t1 = 0x160;
        if (((((struct o160_float *)(a4))->v)) > 0.0f) {
            t2 = *(short *)((a4 + 0x1C));
            t1 = t2;
            if (t2 == 0) {
                (((struct o3717_uchar *)(a4))->v) = 0xF;
                (((struct o3718_uchar *)(a4))->v) = 0x0;
                t1 = (FUN_0c085cac(a4, 0xF, 0x0));
            }
        }
        t2 = t1;
    } else {
        t2 = t0;
    }
    return t2;
}
