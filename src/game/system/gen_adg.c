/* Straight-line functions with calls and guards (batch gen_adg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o4_float { char p[0x4]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c16f626(void);
int nlObjPutSetFadeColor(float, float, float);
int nlObjPutTrnsl(int, float);
int FUN_0c16f656(int a4, int a5, int a6, int a7);

int FUN_0c16f656(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
        (((struct oA8_uchar *)(a4))->v) = 0x0;
    }
    if ((t0 == 0) || (t0 == 1)) {
        t0 = *(signed char *)((a4 + 0x15));
        if (t0 == 0) {
            *(unsigned short *)((a4 + 0x1C)) = 0x0;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        }
        if ((t0 == 0) || (t0 == 1)) {
            *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
            if ((int)(*(short *)((a4 + 0x1C))) >= (int)0x4650) {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                *(unsigned short *)((a4 + 0x1E)) = 0x0;
            }
            t1 = FUN_0c16f626();
            t2 = t1;
            if (t1 != 0) {
                (((struct o15_uchar *)(a4))->v) = 0x0;
                t2 = 0x15;
            }
            t1 = t2;
        } else {
            if (t0 != 2) {
                if (t0 != 3) {
                    *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) - 1);
                    if ((int)(*(short *)((a4 + 0x1E))) <= 0) {
                        (((struct o15_uchar *)(a4))->v) = 0x0;
                    }
                    nlObjPutSetFadeColor(1.0f, 1.0f, 1.0f);
                    u0 = (((float)(*(short *)((a4 + 0x1E))) / ((((struct o4_float *)0xC16F7E8)->v))) * 0.699999988f);
                } else {
                    t0 = FUN_0c16f626();
                    if (t0 != 0) {
                        (((struct o15_uchar *)(a4))->v) = 0x4;
                        *(unsigned short *)((a4 + 0x1E)) = 0x5;
                    }
                    nlObjPutSetFadeColor(1.0f, 1.0f, 1.0f);
                    u0 = 0.699999988f;
                }
                u1 = u0;
            } else {
                *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
                if ((int)(*(short *)((a4 + 0x1E))) >= (int)0xF) {
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                }
                t0 = FUN_0c16f626();
                if (t0 != 0) {
                    (((struct o15_uchar *)(a4))->v) = 0x4;
                }
                nlObjPutSetFadeColor(1.0f, 1.0f, 1.0f);
                u1 = (((float)(*(short *)((a4 + 0x1E))) / ((((struct o0_float *)0xC16F7E8)->v))) * 0.699999988f);
            }
            t1 = (nlObjPutTrnsl(0xC203DD0, u1));
        }
        return t1;
    } else {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
}
