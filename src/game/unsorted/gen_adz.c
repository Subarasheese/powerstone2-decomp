/* Straight-line functions with calls and guards (batch gen_adz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o5C_float { char p[0x5C]; float v; };
int FUN_0c0ef0cc(int);
int FUN_0c0ef102(int);
int FUN_0c0ef162(int, int, int, int);
int FUN_0c0ef1d8(int, int);
int FUN_0c0ef24a(int);
int FUN_0c0ef560(int, float);
int FUN_0c0ef668(int a4, int a5, int a6, int a7, float f4);

int FUN_0c0ef668(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;
    int t1;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 == 0) {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0x1A4;
        (((struct o5C_float *)(a4))->v) = -1.0f;
    }
    if ((t0 == 0) || (t0 == 1)) {
        t1 = *(signed char *)((a4 + 0x16));
        if ((t1 != 0) && (t1 != 1)) {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            (((struct o16_uchar *)(a4))->v) = 0x0;
            (((struct o12A_ushort *)(a4))->v) = 0xF;
            (((struct o12C_ushort *)(a4))->v) = 0xFFFFFFEF;
        } else {
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        }
        FUN_0c0ef24a(a4);
    } else {
        if (t0 != 2) {
            if (t0 != 3) {
                FUN_0c0ef1d8(a4, a5);
            } else {
                FUN_0c0ef162(a4, a5, a6, a7);
                FUN_0c0ef102(a4);
            }
        } else {
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            if ((int)(short)(t0 - 1) <= 0) {
                (((struct o15_uchar *)(a4))->v) = 0x63;
                (((struct o16_uchar *)(a4))->v) = 0x0;
            } else {
                FUN_0c0ef560(a4, f4);
            }
            FUN_0c0ef102(a4);
        }
    }
    return FUN_0c0ef0cc(a4);
}
