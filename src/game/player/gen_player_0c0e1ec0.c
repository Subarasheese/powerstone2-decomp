/* game/player: functions 0C0E1EC0-0C0E1F70, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c07e420(int, int);
int FUN_0c0e1ec0(void);

int FUN_0c0e1ec0(void)
{
    register int t0;
    register int t11;
    register int t1;
    register int t3;
    register int t6;

    t0 = FUN_0c03f444(0x1, 0x0, 0x2);
    t11 = t0;
    if (t0 != 0) {
        t1 = 0x0;
        for (;;) {
            t3 = *(int *)((((0xC4 + t0) + t1) + 0x0));
            FUN_0c03744a(t3, 0x0, (*(int *)((t1 + 0xC1CA704))), (*(int *)0xC4B410C));
            t6 = *(int *)((0xC1CA70C + t1));
            t1 = (t1 + 0x4);
            *(unsigned short *)(((0x6 + t3) + 0x0)) = t6;
            if ((unsigned int)t1 >= (unsigned int)0x8) {
                break;
            }
        }
        (((struct o7C_uint *)(((((struct oC8_int *)(t0))->v))))->v) = 0xFFFFC000;
        *(unsigned int *)((t0 + 0x4)) = 0xC0E1B9A;
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        FUN_0c07e420(t0, 0x8);
        (((struct o44_float *)(t0))->v) = 1.0f;
        (((struct o40_float *)(t0))->v) = 1.0f;
        (((struct o48_float *)(t0))->v) = 1.0f;
        t11 = (FUN_0c064d24(t0, 0x2, 0x10, 0x1, 0x100, 0x0, 0x0, 0x0));
    }
    return t11;
}
