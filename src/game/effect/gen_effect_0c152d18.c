/* game/effect: functions 0C152D18-0C152E50, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o74_float { char p[0x74]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c037498(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c179ac0(void);
int FUN_0c187798(void);
int FUN_0c152d18(int a4);

int FUN_0c152d18(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;

    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
    t1 = t0;
    if (t0 == 0) {
    } else {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC152E84;
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0x29;
        (((struct oA9_uchar *)(t0))->v) = 0x1;
        FUN_0c187798();
        u0 = -25.0f;
        u0 = u0 + 10.0f * (((float)((int)((int)(FUN_0c179ac0()) % (int)0x5)) + 1.0f));
        (((struct o28_float *)(t0))->v) = (((((struct o28_float *)(t0))->v)) + u0);
        t2 = FUN_0c179ac0();
        t3 = ((~(((~t2) + 0x1) & 0x3)) + 0x1);
        if ((int)t2 >= 0) {
            t3 = (t2 & 0x3);
        }
        u0 = ((((struct o2C_float *)(t0))->v));
        u0 = u0 + 10.0f * (((float)t3 + 1.0f));
        (((struct o2C_float *)(t0))->v) = u0;
        u0 = -25.0f;
        u0 = u0 + 10.0f * (((float)((int)((int)(FUN_0c179ac0()) % (int)0x5)) + 1.0f));
        (((struct o30_float *)(t0))->v) = (((((struct o30_float *)(t0))->v)) + u0);
        FUN_0c187798();
        t2 = FUN_0c179ac0();
        t3 = ((~(((~t2) + 0x1) & 0x3)) + 0x1);
        if ((int)t2 >= 0) {
            t3 = (t2 & 0x3);
        }
        *(unsigned int *)((t0 + 0x3C)) = (unsigned short)((((t3 << 8) << 2) << 2) << 2);
        FUN_0c187798();
        *(unsigned short *)((t0 + 0x1C)) = 0x4;
        *(unsigned short *)((t0 + 0x1E)) = 0x0;
        t2 = (((struct oC4_int *)(t0))->v);
        FUN_0c037498(t2, 0x0, 0x17, (*(int *)0xC4B40CC));
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        *(unsigned short *)((t2 + 0x6)) = 0xF;
        (((struct o74_float *)(t2))->v) = 50.0f;
        t1 = 0x74;
    }
    return t1;
}
