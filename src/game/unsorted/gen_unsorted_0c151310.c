/* game/unsorted: functions 0C151310-0C151456, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c179ac0(void);
int FUN_0c187798(void);
int memset(int, int, int);
int FUN_0c151310(int a4);

int FUN_0c151310(int a4)
{
    int stk[2];
    register int t0;
    register int t21;
    register int t3;
    register int t5;
    register int t8;
    register int t13;
    register int t14;
    register int t16;
    register int t17;
    register int t19;

    *(unsigned int *)(((int)stk + 4)) = a4;
    t0 = FUN_0c03f444(0x5, 0x1, 0x5);
    t21 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC151494;
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x1;
        FUN_0c187798();
        FUN_0c187798();
        *(unsigned char *)(((int)stk + 0)) = 0x0;
        t3 = 0x0;
        for (;;) {
            t5 = *(int *)((((0xC4 + t0) + t3) + 0x0));
            FUN_0c03744a(t5, 0x0, 0x13, (*(int *)0xC4B40CC));
            *(unsigned char *)((t5 + 0x0)) = 0x1;
            *(unsigned short *)((t5 + 0x6)) = 0x31;
            t8 = (int)((int)(FUN_0c179ac0()) % (int)0xA);
            (((struct o8C_float *)(t5))->v) = (((float)(t8 + 0x1) / 10.0f) + 0.600000024f);
            (((struct o88_float *)(t5))->v) = (((float)(t8 + 0x1) / 10.0f) + 0.600000024f);
            (((struct o84_float *)(t5))->v) = (((float)(t8 + 0x1) / 10.0f) + 0.600000024f);
            memset((0x9C + t5), 0x0, 0xC);
            (((struct o9C_float *)(t5))->v) = (((((struct o84_float *)(t5))->v)) / 8.0f);
            *(unsigned char *)(((0x9C + t5) + 0x4)) = 0x1;
            *(unsigned char *)(((0x9C + t5) + 0x5)) = (((int)((int)(FUN_0c179ac0()) % (int)0x3)) + 0x1);
            t13 = FUN_0c179ac0();
            t14 = ((~(((~t13) + 0x1) & 0x3)) + 0x1);
            if ((int)t13 >= 0) {
                t14 = (t13 & 0x3);
            }
            *(unsigned char *)(((0x9C + t5) + 0x6)) = t14;
            t16 = FUN_0c179ac0();
            t17 = ((~(((~t16) + 0x1) & 0x7)) + 0x1);
            if ((int)t16 >= 0) {
                t17 = (t16 & 0x7);
            }
            *(unsigned char *)(((0x9C + t5) + 0x7)) = (t17 + 0x1);
            t19 = *(signed char *)(((int)stk + 0));
            *(unsigned char *)(((int)stk + 0)) = (t19 + 0x1);
            t3 = (t3 + 0x4);
            if ((int)(signed char)(t19 + 0x1) >= (int)0x5) {
                break;
            }
        }
        *(unsigned short *)((t0 + 0x1C)) = 0x78;
        *(unsigned short *)((t0 + 0x1E)) = 0x0;
        (((struct o20_ushort *)(t0))->v) = 0x5;
        (((struct o22_ushort *)(t0))->v) = 0x0;
        *(unsigned int *)((t0 + 0x10)) = (*(int *)(((int)stk + 4)));
        t21 = 0x22;
    }
    return t21;
}
