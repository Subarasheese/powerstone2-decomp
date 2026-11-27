/* Straight-line functions with calls and guards (batch gen_ti): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAA_uchar { char p[0xAA]; unsigned char v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c0c2ab6(int, int);
int FUN_0c0c2d56(int, int, int, int, float);
int math_mat_get_translate(int, int);
int FUN_0c0e8790(int a4, int a5, int a6, int a7, float f4);

int FUN_0c0e8790(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x2));
    t1 = *(int *)((((*(int *)((0xC1CC14C + (((t0 << 2) + t0) << 2)))) << 2) + 0xC540D94));
    t0 = *(signed char *)((a4 + 0x15));
    t2 = a6;
    if (t0 == 0) {
        *(unsigned short *)(((0x12A + a4) + 0x4)) = 0x0;
        (((struct o12A_ushort *)(a4))->v) = 0x0;
        (((struct o12C_ushort *)(a4))->v) = 0x0;
        (((struct oA8_uchar *)(a4))->v) = 0x0;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t2 = (0x12A + a4);
    }
    if ((t0 == 0) || (t0 == 1)) {
        if (t1 == 0) {
            return FUN_0c03f346(a4, 0xC1CC14C, t2, a7);
        }
        if ((*(signed char *)((t1 + 0x15))) == 0) {
            return FUN_0c0c2d56(a4, 0x1, (*(signed char *)((a4 + 0x1))), a7, f4);
        }
        if ((*(signed char *)((t1 + 0x15))) == 1) {
            t1 = *(signed char *)((a4 + 0x2));
            { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)(((0xC1CC14C + (((t1 << 2) + t1) << 2)) + 0x4)); }
            *(unsigned short *)((a4 + 0x1C)) = 0x0;
            t1 = 0x0;
        } else {
            t2 = *(short *)((a4 + 0x1C));
            if ((int)t2 <= 0) {
                FUN_0c0c2d56(a4, 0x2, (*(signed char *)((a4 + 0x1))), a7, f4);
                math_mat_get_translate((a4 + 0x64), (a4 + 0x28));
                (((struct oA4_uint *)(a4))->v) = 0x0;
                (((struct oA8_uchar *)(a4))->v) = 0x1;
                FUN_0c0c2ab6(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738CA))));
                (((struct oAA_uchar *)(a4))->v) = 0x1;
                t1 = 0xAA;
            } else {
                (((struct oA8_uchar *)(a4))->v) = (((t2 & 0x4) >> 1) >> 1);
                t2 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t2 - 1);
                t1 = (t2 - 1);
            }
        }
        return t1;
    } else {
        return t0;
    }
}
