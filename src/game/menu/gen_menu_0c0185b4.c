/* game/menu: functions 0C0185B4-0C018AF0, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
struct oC_int { char p[0xC]; int v; };
int FUN_0c01599c(void);
int FUN_0c0159c4(int, int, int, int, int);
int FUN_0c015b58(void);
int FUN_0c01cc56(int, int);
int thunk_FUN_0c03f346(int, int, int, int);
int FUN_0c01cd2c(int);
int FUN_0c01cd40(int);
int FUN_0c01e9e4(void);
int FUN_0c02b3ba(int, float, float, float);
int FUN_0c02b502(int);
int FUN_0c02b52c(float);
int FUN_0c036de8(int);
int FUN_0c03ea04(int, int);
int nlCommonTextureGetFreeMem(void);
int nlCommonTextureGetFreeBlock(void);
int FUN_0c17a0c0(int);
int dbg_set_cell_size(int, int);
int nlLocate(int, int);
int dbg_printf(int, ...);
int nlDispStripTexOfs(int, int, int);
int FUN_0c187cac(int, int, int, int, int, int, int, int);
int strcpy(int, int);
int FUN_0c0185b4(void);
int FUN_0c0185ea(float f4);
int FUN_0c0186cc(int a4);
int FUN_0c01882a(int a4, int a5, int a6, int a7);
int FUN_0c018968(void);

int FUN_0c0185b4(void)
{
    register int t0;

    t0 = FUN_0c01cc56(0x2B, 0xC0186CC);
    (((struct o14_uchar *)(t0))->v) = 0x0;
    (((struct o15_uchar *)(t0))->v) = 0x0;
    (((struct oA8_uchar *)(t0))->v) = 0x0;
    (((struct oAC_ushort *)(t0))->v) = (((((struct oAC_short *)(t0))->v)) | 0x400);
    *(unsigned int *)0xC20C910 = 0x1;
    return 0xC20C910;
}

int FUN_0c0185ea(float f4)
{
    int stk[14];
    register int t0;
    register int t1;
    register int t2;
    register int t4;
    register int t5;
    register int t7;

    *(float *)(((int)stk + 16)) = f4;
    t0 = *(int *)0xC30AF8C;
    t1 = (int)((int)t0 / (int)0x34BC0);
    t2 = t1;
    if ((int)t1 > (int)0x270F) {
        t2 = 0x270F;
    }
    t4 = (int)((int)t0 % (int)0x34BC0);
    t5 = (int)((int)t4 / (int)0xE10);
    t7 = (int)((int)((int)((int)t4 % (int)0xE10)) / (int)0x3C);
    *(int *)((int)stk + 12) = (t7);
    *(int *)((int)stk + 8) = (t5);
    *(int *)((int)stk + 4) = (t2);
    *(int *)((int)stk + 0) = 0xC1A5E1C;
    *(unsigned int *)(((int)stk + 20)) = (((int)stk + 0) + 0x18);
    FUN_0c187cac((((int)stk + 0) + 0x18), t2, t5, t7, 0xC1A5E1C, t2, t5, t7);
    FUN_0c02b502(0x7);
    FUN_0c02b52c((*(float *)(((int)stk + 16))));
    FUN_0c02b3ba((*(int *)(((int)stk + 20))), 54.0f, 434.0f, 637.200012f);
    return (FUN_0c02b52c(1.0f));
}


int FUN_0c01882a(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = FUN_0c01cd40(0x4);
    if ((short)t0 == 0) {
        return (short)t0;
    }
    t0 = FUN_0c01cd2c(0x1000);
    if ((short)t0 != 0) {
        (((struct o4_uint *)0xC304FA8)->v) = (((((struct o4_int *)0xC304FA8)->v)) + 0x64);
    }
    t0 = FUN_0c01cd2c(0x2000);
    if ((short)t0 != 0) {
        (((struct o4_uint *)0xC304FA8)->v) = (((((struct o4_int *)0xC304FA8)->v)) - 100);
    }
    t0 = FUN_0c01cd2c(0x400);
    if ((short)t0 != 0) {
        (((struct o4_uint *)0xC304FA8)->v) = (((((struct o4_int *)0xC304FA8)->v)) + 0x1);
    }
    t0 = FUN_0c01cd2c(0x800);
    if ((short)t0 != 0) {
        (((struct o4_uint *)0xC304FA8)->v) = (((((struct o4_int *)0xC304FA8)->v)) - 1);
    }
    t0 = 0x0;
    t1 = 0xC20C984;
    for (;;) {
        t0 = (t0 + 0x1);
        *(unsigned int *)((t1 + 0xC)) = (*(int *)((0xC20C9C4 + (((((struct oC_int *)0xC304FA8)->v)) << 2))));
        t1 = (t1 + 0x10);
        if ((int)t0 >= (int)0x4) {
            break;
        }
    }
    t0 = 0x0;
    for (;;) {
        if ((int)t0 >= (int)((((struct o8_int *)0xC304FA8)->v))) {
            break;
        }
        t0 = (t0 + 0x1);
    }
    dbg_set_cell_size(0x10, 0x10);
    FUN_0c17a0c0(0x1);
    nlLocate(0x1, 0x0);
    nlCommonTextureGetFreeMem();
    nlCommonTextureGetFreeBlock();
    dbg_printf(0xC1A5E2C);
    nlLocate(0x1, 0x1);
    *(volatile int *)0xC304FA8;
    *(volatile int *)0xC304FAC;
    dbg_printf(0xC1A5E38);
    dbg_set_cell_size(0x8, 0x8);
    FUN_0c17a0c0(0x0);
    nlDispStripTexOfs(0x4, 0xC20C914, ((((((struct o0_int *)0xC304FA8)->v)) * 0x64) + ((((struct o4_int *)0xC304FA8)->v))));
    return ((int (*)(int, int, int, int))(0xC186D20))(0x4, 0xC20C984, a6, a7);
}

int FUN_0c018968(void)
{
    int qa1;
    int qa0;
    int stk[7];
    int t0;
    int t1;
    int t2;
    int t3;
    int t15;
    int t50;
    int t48;
    int t45;
    int t29;
    int t27;
    int t24;

    qa1 = 0xC30EF6C;
    qa0 = 0xC30EF69;
    t0 = *(signed char *)qa0;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            if ((unsigned char)t0 != 2) {
                if ((unsigned char)t0 != 3) {
                } else {
                    t1 = *(short *)qa1;
                    *(unsigned short *)qa1 = (t1 - 1);
                    if ((short)(t1 - 1) == 0) {
                        (((struct o0_uchar *)0xC30EF69)->v) = 0x1;
                        t2 = (((struct o0_int *)0xC20C9E4)->v);
                        (((struct o0_uint *)0xC20C9E4)->v) = ((t2 & 0xFFFFFF7F) + 0x1);
                        t3 = (int)((int)((t2 & 0xFFFFFF7F) + 0x1) % (int)0x7);
                        (((struct o0_uint *)0xC20C9E4)->v) = t3;
                        if (t3 == 2) {
                            (((struct o0_uint *)0xC20C9E4)->v) = (((((struct o0_int *)0xC20C9E4)->v)) | 0x80);
                        }
                    }
                }
            } else {
                t15 = FUN_0c015b58();
                if (t15 != 0) {
                    (((struct o0_uchar *)0xC30EF69)->v) = ((*(signed char *)qa0) + 0x1);
                    *(unsigned short *)qa1 = 0x1E;
                }
            }
        } else {
            t24 = FUN_0c01599c();
            if (t24 != 0) {
                (((struct o0_uchar *)0xC30EF69)->v) = ((*(signed char *)qa0) + 0x1);
                *(unsigned short *)qa1 = 0x0;
                t27 = ((((struct o0_int *)0xC20C9E4)->v));
                FUN_0c0159c4(0x0, 0x0, 0xC304FB8, 0x7F, t27);
                t29 = FUN_0c015b58();
                if (t29 != 0) {
                    (((struct o0_uchar *)0xC30EF69)->v) = ((*(signed char *)qa0) + 0x1);
                    *(unsigned short *)qa1 = 0x1E;
                }
            }
        }
    } else {
        (((struct o0_uchar *)0xC30EF69)->v) = ((*(signed char *)qa0) + 0x1);
        FUN_0c01e9e4();
        FUN_0c036de8(0x20);
        FUN_0c03ea04(0x3, 0x0);
        (((struct o0_uint *)0xC542440)->v) = 0xFF000040;
        (((struct o4_uint *)0xC542440)->v) = 0xFF000040;
        (((struct o8_uint *)0xC542440)->v) = 0xFF000080;
        strcpy(0xC304FB8, 0xC1A5E48);
        t45 = FUN_0c01599c();
        if (t45 != 0) {
            (((struct o0_uchar *)0xC30EF69)->v) = ((*(signed char *)qa0) + 0x1);
            *(unsigned short *)qa1 = 0x0;
            t48 = ((((struct o0_int *)0xC20C9E4)->v));
            FUN_0c0159c4(0x0, 0x0, 0xC304FB8, 0x7F, t48);
            t50 = FUN_0c015b58();
            if (t50 != 0) {
                (((struct o0_uchar *)0xC30EF69)->v) = ((*(signed char *)qa0) + 0x1);
                *(unsigned short *)qa1 = 0x1E;
            }
        }
    }
    FUN_0c02b502(0x7);
    FUN_0c02b3ba(0xC304FB8, 24.0f, 72.0f, ((((struct o4_float *)0xC20C9E4)->v)));
    FUN_0c02b502(0x7);
    FUN_0c02b3ba(0xC304D24, 24.0f, 96.0f, ((((struct o4_float *)0xC20C9E4)->v)));
    FUN_0c02b502(0x7);
    FUN_0c02b3ba(0xC304DA4, 24.0f, 120.0f, ((((struct o4_float *)0xC20C9E4)->v)));
    nlLocate(0x3, 0xA);
    return (dbg_printf(0xC1A5E54));
}
