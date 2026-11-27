/* Straight-line functions with calls and guards (batch gen_aei): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o126_uchar { char p[0x126]; unsigned char v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o50_float { char p[0x50]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
int FUN_0c0c2ab6(int, int);
int FUN_0c0e79f4(int, int, int);
int FUN_0c0e7a56(int a4, int a5, int a6, int a7, float f4);

int FUN_0c0e7a56(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(int *)0xC540DD4;
    (((struct o28_float *)(a4))->v) = ((((struct o28_float *)(t0))->v));
    (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(t0))->v)) + 1100.0f);
    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(t0))->v)) + -70.0f);
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 == 0) {
        *(unsigned short *)((a4 + 0x1C)) = 0xF;
        (((struct oA8_uchar *)(a4))->v) = 0x0;
        (((struct o50_float *)(a4))->v) = 0.0f;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    }
    if ((t0 == 0) || (t0 == 1)) {
        t1 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
        t2 = (short)(t1 - 1);
        if ((int)(short)(t1 - 1) <= 0) {
            *(unsigned short *)((a4 + 0x1C)) = 0xF;
            (((struct oA8_uchar *)(a4))->v) = 0x1;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            t2 = 0x15;
        }
        t1 = t2;
    } else {
        t2 = t0;
        if (t0 != 2) {
        } else {
            (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + 8.0f);
            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            t2 = (short)(t0 - 1);
            if ((int)(short)(t0 - 1) <= 0) {
                FUN_0c0e79f4(a4, 0x2, (*(signed char *)((a4 + 0x1))));
                FUN_0c0c2ab6(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738CA))));
                (((struct o12A_ushort *)(a4))->v) = 0x0;
                (((struct o12E_ushort *)(a4))->v) = 0xF0;
                (((struct o12C_ushort *)(a4))->v) = 0xFFFFFFFF;
                (((struct o126_uchar *)(a4))->v) = 0x0;
                t2 = 0x126;
            }
        }
        t1 = t2;
    }
    return t1;
}
