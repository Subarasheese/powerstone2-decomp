/* game/unsorted: functions 0C0D96D8-0C0D9902, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c179ac0(void);
int FUN_0c187798(void);
int FUN_0c0d96d8(int a4);
int FUN_0c0d97ca(int a4, int a5, int a6, int a7);

int FUN_0c0d96d8(int a4)
{
    register int t0;
    register int t14;
    register float u1;
    register int t2;
    register int t4;
    register int t10;

    t0 = FUN_0c03f444(0x5, 0x0, 0x6);
    t14 = t0;
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x4)) = 0xC0D97CA;
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        u1 = (((struct o0_float *)0xC0D9838)->v);
        t2 = 0x0;
        for (;;) {
            t4 = *(int *)((((t2 << 2) + (0xC4 + t0)) + 0x0));
            FUN_0c03744a(t4, 0x0, 0x22, (*(int *)0xC4B410C));
            *(unsigned char *)((t4 + 0x0)) = 0x1;
            *(unsigned short *)((t4 + 0x6)) = 0x31;
            (((struct o6C_float *)(t4))->v) = (float)((int)((int)(FUN_0c179ac0()) % (int)0x85));
            (((struct o70_float *)(t4))->v) = 0.0f;
            t10 = t2;
            t2 = (t2 + 0x1);
            (((struct o74_float *)(t4))->v) = ((float)((int)((int)(FUN_0c179ac0()) % (int)0xC8)) - (((float)t10 * u1)));
            if ((int)t2 >= (int)0x6) {
                break;
            }
        }
        FUN_0c187798();
        (((struct o30_float *)(t0))->v) = ((((struct o18_float *)0xC0D9838)->v));
        *(unsigned int *)((t0 + 0x38)) = 0x0;
        *(unsigned int *)((t0 + 0x3C)) = 0x0;
        *(unsigned int *)((t0 + 0x34)) = 0x0;
        (((struct o44_float *)(t0))->v) = 1.0f;
        (((struct o48_float *)(t0))->v) = 1.0f;
        (((struct o40_float *)(t0))->v) = 1.0f;
        t14 = 0x40;
    }
    return t14;
}

int FUN_0c0d97ca(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;
    register float u1;

    t0 = *(signed char *)0xC54223C;
    if ((int)t0 <= (int)0x1) {
        t1 = t0;
        if ((*(signed char *)((a4 + 0x14))) == 0) {
            (((struct oA8_uchar *)(a4))->v) = 0x1;
            *(unsigned short *)((a4 + 0x1E)) = 0x7D0;
            *(unsigned short *)((a4 + 0x1C)) = 0x384;
            t0 = *(signed char *)((a4 + 0x14));
            (((struct o14_uchar *)(a4))->v) = (t0 + 0x1);
            t1 = (t0 + 0x1);
        }
        t0 = 0xC0D9860;
        t2 = t1;
        t1 = 0x0;
        for (;;) {
            if ((unsigned int)t1 >= (unsigned int)0x18) {
                break;
            }
            t3 = 0xC4;
            t3 = (t3 + a4);
            t3 = (t3 + t1);
            t3 = (*(int *)((t3 + 0x0)));
            t0 = (FUN_0c179ac0());
            t2 = 0xC18760C;
            t4 = t0;
            t0 = 0x32;
            t0 = ((int)((int)t4 % (int)t0));
            t4 = t0;
            t0 = 0x84;
            u0 = (float)t4;
            u0 = (u0 / 100.0f);
            u0 = (u0 + 5.0f);
            *(float *)((t3 + t0)) = u0;
            t0 = (*(short *)((a4 + 0x1E)));
            t2 = t0;
            u0 = (float)t2;
            u0 = (u0 / 10000.0f);
            u1 = u0;
            t0 = (FUN_0c179ac0());
            t4 = t0;
            t0 = 0x14;
            t0 = ((int)((int)t4 % (int)t0));
            t1 = (t1 + 0x4);
            t4 = t0;
            t0 = 0x88;
            u0 = (float)t4;
            u0 = (u0 / 100.0f);
            u1 = (u1 + u0);
            *(float *)((t3 + t0)) = u1;
        }
        *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x64);
        if ((int)(*(short *)((a4 + 0x1E))) > (int)0x2710) {
            *(unsigned short *)((a4 + 0x1E)) = 0x2710;
        }
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        if ((short)(t0 - 1) == 0) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        return (short)(t0 - 1);
    }
    return FUN_0c03f346(a4, a5, a6, a7);
}
