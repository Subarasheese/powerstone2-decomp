/* Straight-line functions with calls and guards (batch gen_rj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
int FUN_0c0c2ab6(int, int);
int FUN_0c0c2d56(int, int, int, int, float);
int math_mat_get_translate(int, int);
int FUN_0c0e7500(int a4, int a5, int a6, int a7, float f4);

int FUN_0c0e7500(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 == 0) {
        *(unsigned short *)(((0x12A + a4) + 0x4)) = 0x0;
        (((struct o12A_ushort *)(a4))->v) = 0x0;
        (((struct o12C_ushort *)(a4))->v) = 0x0;
        t1 = *(signed char *)((a4 + 0x2));
        (((struct oA4_uint *)(a4))->v) = ((*(int *)(((((*(int *)((0xC1CC0A4 + (((t1 << 2) + t1) << 2)))) << 2) + 0xC540D94) + 0x0))) + 0x64);
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    }
    t1 = t0;
    if ((t0 == 0) || (t0 == 1)) {
        t0 = *(signed char *)((a4 + 0x2));
        if ((*(signed char *)((0x14 + (*(int *)((0xC540D94 + ((*(int *)((0xC1CC0A4 + (((t0 << 2) + t0) << 2)))) << 2))))))) == 2) {
            FUN_0c0c2d56(a4, 0x1, (*(signed char *)((a4 + 0x1))), a7, f4);
            FUN_0c0c2ab6(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738CA))));
            *(unsigned short *)(((0x12A + a4) + 0x4)) = 0x0;
            (((struct o12A_ushort *)(a4))->v) = 0x0;
            (((struct o12C_ushort *)(a4))->v) = 0x0;
            (((struct oAC_ushort *)(a4))->v) = 0xF;
            (((struct oA8_uchar *)(a4))->v) = 0x0;
            t0 = 0xA8;
        } else {
            (((struct oA8_uchar *)(a4))->v) = ((((*(short *)((a4 + 0x1C))) & 0x4) >> 1) >> 1);
            t2 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t2 - 1);
            t0 = (short)(t2 - 1);
            if ((int)(short)(t2 - 1) <= 0) {
                FUN_0c0c2d56(a4, 0x2, (*(signed char *)((a4 + 0x1))), a7, f4);
                math_mat_get_translate((a4 + 0x64), (a4 + 0x28));
                (((struct oA4_uint *)(a4))->v) = 0x0;
                (((struct oA8_uchar *)(a4))->v) = 0x1;
                FUN_0c0c2ab6(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738CA))));
                (((struct o48_float *)(a4))->v) = 1.0f;
                (((struct o44_float *)(a4))->v) = 1.0f;
                (((struct o40_float *)(a4))->v) = 1.0f;
                t0 = 0x40;
            }
        }
        t1 = t0;
    }
    return t1;
}
