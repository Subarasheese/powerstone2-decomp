/* game/unsorted: functions 0C0E648C-0C0E6554, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o24_short { char p[0x24]; short v; };
struct o40_float { char p[0x40]; float v; };
struct o41C_ushort { char p[0x41C]; unsigned short v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c0582de(int, int);
int FUN_0c187798(void);
int FUN_0c0e648c(int a4);

int FUN_0c0e648c(int a4)
{
    register int t0;
    register int t1;
    register int t9;
    register int t2;
    register int t4;

    t0 = *(int *)0xC540DD4;
    t1 = FUN_0c03f444(0x5, 0x0, 0x2);
    t9 = 0x0;
    if (t1 != 0) {
        t2 = 0x0;
        for (;;) {
            t4 = *(int *)((((0xC4 + t1) + t2) + 0x0));
            FUN_0c03744a(t4, 0x0, 0x55, (*(int *)0xC4B410C));
            t2 = (t2 + 0x4);
            *(unsigned short *)((t4 + 0x6)) = 0xF;
            if ((unsigned int)t2 >= (unsigned int)0x8) {
                break;
            }
        }
        *(unsigned int *)((t1 + 0x4)) = 0xC0E6168;
        *(unsigned char *)((t1 + 0x1)) = 0xFFFFFFFF;
        (((struct oAC_ushort *)(t1))->v) = 0x21F;
        (((struct oA9_uchar *)(t1))->v) = 0x21;
        (((struct o48_float *)(t1))->v) = 0.5f;
        (((struct o44_float *)(t1))->v) = 0.5f;
        (((struct o40_float *)(t1))->v) = 0.5f;
        (((struct oB4_float *)(t1))->v) = 1.0f;
        (((struct oB8_float *)(t1))->v) = 1.0f;
        (((struct oBC_float *)(t1))->v) = 0.0f;
        FUN_0c187798();
        FUN_0c0582de((t1 + 0x28), (t0 + 0x64));
        *(unsigned int *)((t1 + 0x10)) = a4;
        (((struct o41C_ushort *)(t1))->v) = ((((struct o24_short *)(a4))->v));
        t9 = t1;
    }
    return t9;
}
