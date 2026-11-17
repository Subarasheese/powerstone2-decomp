/* game/effect: functions 0C13E824-0C13E8F0, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
int FUN_0c037498(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c187798(void);
int FUN_0c13e824(int a4, int a5);

int FUN_0c13e824(int a4, int a5)
{
    int stk[1];
    register int t0;
    register int t16;
    register int t4;
    register int t5;
    register int t13;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t0 = FUN_0c03f444(0x5, 0x0, 0x2);
    t16 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t0 + 0x4)) = 0xC13E6C8;
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)(((int)stk + 0)));
        FUN_0c187798();
        (((struct o48_float *)(t0))->v) = 1.0f;
        (((struct o44_float *)(t0))->v) = 1.0f;
        (((struct o40_float *)(t0))->v) = 1.0f;
        (((struct oA8_uchar *)(t0))->v) = 0x0;
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        t4 = 0x0;
        t5 = 0x0;
        for (;;) {
            FUN_0c037498((*(int *)((((0xC4 + t0) + t5) + 0x0))), 0x0, 0x6, (*(int *)((((*(signed char *)((t0 + 0x1))) << 2) + 0xC4B40FC))));
            *(unsigned char *)(((*(int *)((((0xC4 + t0) + t5) + 0x0))) + 0x0)) = 0x1;
            *(unsigned short *)(((*(int *)((((0xC4 + t0) + t5) + 0x0))) + 0x6)) = 0xF;
            t13 = *(int *)((((0xC4 + t0) + t5) + 0x0));
            t5 = (t5 + 0x4);
            (((struct o7C_uint *)(t13))->v) = ((*(int *)((a4 + 0x38))) + t4);
            t4 = (t4 + 0x8000);
            if ((unsigned int)t5 >= (unsigned int)0x8) {
                break;
            }
        }
        *(unsigned int *)((t0 + 0x10)) = a4;
        t16 = 0x7C;
    }
    return t16;
}
