/* game/unsorted: functions 0C0F2EDC-0C0F2FAA, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o128_ushort { char p[0x128]; unsigned short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c064d5a(int, int);
int FUN_0c0b4b4e(int, int);
int FUN_0c187798(int);
int FUN_0c0f2edc(int a4);

int FUN_0c0f2edc(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t1 = FUN_0c037320(0x8, (*(int *)((((a4 << 2) << 1) + 0xC4B40E0))));
    t2 = FUN_0c03f444(0x2, 0x0, t1);
    t1 = 0x0;
    if (t2 != 0) {
        FUN_0c03733c(t2, 0x8, (*(int *)(((((a4 << 2) << 1) + 0xC4B40DC) + 0x4))));
        *(unsigned int *)((t2 + 0x4)) = 0xC0F2BAC;
        *(unsigned char *)((t2 + 0x1)) = a4;
        (((struct oAC_ushort *)(t2))->v) = 0xF;
        (((struct oA9_uchar *)(t2))->v) = (*(signed char *)(((a4 * 0x3938) + 0xC532541)));
        FUN_0c187798(0xC1CE240);
        FUN_0c187798(t0);
        FUN_0c064d5a(t2, 0xC1CE234);
        (((struct o48_float *)(t2))->v) = 1.0f;
        (((struct o44_float *)(t2))->v) = 1.0f;
        (((struct o40_float *)(t2))->v) = 1.0f;
        (((struct o128_ushort *)(t2))->v) = ((int)0x1 << (int)(*(signed char *)((t2 + 0x1))));
        *(unsigned short *)((((0x12A + t2) + 0x2) + 0x0)) = ((~((int)0x1 << (int)(*(signed char *)((t2 + 0x1))))) & (*(short *)((((0x12A + t2) + 0x2) + 0x0))));
        (((struct o12E_ushort *)(t2))->v) = (~((int)0x1 << (int)(*(signed char *)((t2 + 0x1)))));
        FUN_0c0b4b4e(t2, 0x3);
        t1 = t2;
    }
    return t1;
}
