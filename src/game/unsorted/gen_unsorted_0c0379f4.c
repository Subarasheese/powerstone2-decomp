/* game/unsorted: functions 0C0379F4-0C037EC0, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o125_uchar { char p[0x125]; unsigned char v; };
struct o131_uchar { char p[0x131]; unsigned char v; };
struct o134_uchar { char p[0x134]; unsigned char v; };
struct o136_uchar { char p[0x136]; unsigned char v; };
struct o414_uint { char p[0x414]; unsigned int v; };
struct o68_int { char p[0x68]; int v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o74_short { char p[0x74]; short v; };
struct o74_ushort { char p[0x74]; unsigned short v; };
struct o78_short { char p[0x78]; short v; };
struct o78_ushort { char p[0x78]; unsigned short v; };
struct o7C_uchar { char p[0x7C]; unsigned char v; };
struct o7E_uchar { char p[0x7E]; unsigned char v; };
struct o80_uchar { char p[0x80]; unsigned char v; };
struct o82_uchar { char p[0x82]; unsigned char v; };
struct o84_uchar { char p[0x84]; unsigned char v; };
struct o8C_float { char p[0x8C]; float v; };
struct o90_float { char p[0x90]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
struct oA4_short { char p[0xA4]; short v; };
struct oA4_ushort { char p[0xA4]; unsigned short v; };
struct oA6_uchar { char p[0xA6]; unsigned char v; };
struct oA8_float { char p[0xA8]; float v; };
int FUN_0c0379f4(int a4, int a5, int a6);
int FUN_0c037a3c(int a4, int a5, int a6, int a7);
int FUN_0c037ac4(int a4, int a5, int a6, int a7, int a8);

int FUN_0c0379f4(int a4, int a5, int a6)
{
    register int t2;

    *(unsigned int *)(((a5 + 0x68) + 0x8)) = (*(int *)(((a5 + 0x68) + 0x4)));
    *(unsigned int *)(((a5 + 0x68) + 0x4)) = ((((struct o68_int *)(a5))->v));
    t2 = *(int *)((a6 + 0x0));
    (((struct o68_uint *)(a5))->v) = ((((t2 << 1) + t2) << 1) + (*(int *)((a4 + 0x8))));
    (((struct o84_uchar *)(a5))->v) = (*(signed char *)((a6 + 0x5)));
    (((struct o94_float *)(a5))->v) = (((((struct o94_float *)(a5))->v)) + (float)(unsigned char)(*(signed char *)((a6 + 0x4))));
    (((struct o98_float *)(a5))->v) = ((((struct o94_float *)(a5))->v));
    return 0x98;
}

int FUN_0c037a3c(int a4, int a5, int a6, int a7)
{
    register int t0;

    (((struct o125_uchar *)(a4))->v) = (*(signed char *)((a6 + 0x0)));
    if ((*(signed char *)((a6 + 0x1))) != 0) {
        if ((unsigned char)(*(signed char *)((a6 + 0x1))) == 0xFF) {
            (((struct o414_uint *)(a4))->v) = 0x0;
            (((struct o134_uchar *)(a4))->v) = 0x0;
        } else {
            if ((*(signed char *)((a4 + 0x0))) == 0) {
                t0 = *(signed char *)((a6 + 0x1));
                (((struct o414_uint *)(a4))->v) = ((*(int *)((0xC25ACBC + ((*(signed char *)((0xC53249A + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938)))) << 2)))) + ((((unsigned char)t0 << 2) + (unsigned char)t0) << 2));
            } else {
                t0 = *(signed char *)((a6 + 0x1));
                (((struct o414_uint *)(a4))->v) = (((((unsigned char)t0 << 2) + (unsigned char)t0) << 2) + (*(int *)0xC25AD1C));
            }
            (((struct o136_uchar *)(a4))->v) = 0x0;
            (((struct o131_uchar *)(a4))->v) = 0x0;
            (((struct o134_uchar *)(a4))->v) = (*(signed char *)((a6 + 0x1)));
        }
    }
    (((struct oA8_float *)(a5))->v) = (float)(unsigned char)(*(signed char *)((a6 + 0x2)));
    return 0xA8;
}

int FUN_0c037ac4(int a4, int a5, int a6, int a7, int a8)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(int *)((((a5 << 2) + (0x118 + a4)) + 0x0));
    if ((int)a6 < 0) {
        t1 = (*(int *)0xC4C0568);
        t2 = (*(int *)0xC4B4524);
    } else {
        t1 = (*(int *)(((a6 << 2) + 0xC4C0558)));
        t2 = (*(int *)(((a6 << 2) + 0xC4B4528)));
    }
    *(unsigned char *)(((t0 + 0x7E) + 0x1)) = (*(signed char *)(((t0 + 0x7E) + 0x0)));
    *(unsigned char *)(((t0 + 0x7C) + 0x1)) = (*(signed char *)(((t0 + 0x7C) + 0x0)));
    *(unsigned char *)(((0x80 + t0) + 0x1)) = (*(signed char *)(((0x80 + t0) + 0x0)));
    *(unsigned char *)(((0x82 + t0) + 0x1)) = (*(signed char *)(((0x82 + t0) + 0x0)));
    *(unsigned short *)(((t0 + 0x74) + 0x2)) = ((((struct o74_short *)(t0))->v));
    *(unsigned short *)(((t0 + 0x78) + 0x2)) = ((((struct o78_short *)(t0))->v));
    (((struct o7E_uchar *)(t0))->v) = a6;
    (((struct o80_uchar *)(t0))->v) = a7;
    (((struct o82_uchar *)(t0))->v) = a8;
    (((struct o7C_uchar *)(t0))->v) = (*(signed char *)((((*(int *)((t2 + 0x0))) + (((a7 << 8) + a8) << 2)) + 0x2)));
    (((struct o74_ushort *)(t0))->v) = (*(short *)((((((a7 << 8) + a8) << 2) + (*(int *)((t2 + 0x0)))) + 0x0)));
    (((struct o78_ushort *)(t0))->v) = 0x0;
    (((struct o94_float *)(t0))->v) = 0.0f;
    (((struct o98_float *)(t0))->v) = 0.0f;
    (((struct oA0_float *)(t0))->v) = (*(float *)0xC037C70);
    (((struct o9C_float *)(t0))->v) = 0.0f;
    (((struct o8C_float *)(t0))->v) = 0.0f;
    (((struct o90_float *)(t0))->v) = 1.0f;
    (((struct oA4_ushort *)(t0))->v) = (*(short *)(((((a7 << 8) + a8) << 1) + (*(int *)((t1 + 0x0))))));
    (((struct oA6_uchar *)(t0))->v) = 0x0;
    FUN_0c037a3c(a4, t0, (((unsigned short)((((struct oA4_short *)(t0))->v)) << 2) + (*(int *)((t1 + 0x4)))), (((a7 << 8) + a8) << 1));
    t1 = FUN_0c0379f4(t2, t0, ((((((((struct o74_short *)(t0))->v)) + ((((struct o78_short *)(t0))->v))) << 2) << 1) + (*(int *)((t2 + 0x4)))));
    (((struct o78_ushort *)(t0))->v) = (((((struct o78_short *)(t0))->v)) + 0x1);
    return t1;
}
