/* game/stage: functions 0C0CF2F4-0C0CF49C, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o41D_uchar { char p[0x41D]; unsigned char v; };
struct o420_ushort { char p[0x420]; unsigned short v; };
struct o424_uchar { char p[0x424]; unsigned char v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c0bb2a4(void);
int FUN_0c0c212c(int);
int FUN_0c0c241a(int);
int FUN_0c0c25c4(int);
int FUN_0c0c2aa2(int, int);
int FUN_0c0c2ab6(int, int);
int FUN_0c179ac0(void);
int FUN_0c187798(void);
int FUN_0c0cf2f4(int a4, int a5, int a6, int a7, int a8, int a9);
int FUN_0c0cf440(int a4, int a5, int a6);

int FUN_0c0cf2f4(int a4, int a5, int a6, int a7, int a8, int a9)
{
    int stk[5];
    register int t1;
    register int t2;
    register int t3;
    register int t24;
    register int t4;
    register int t6;

    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)(((int)stk + 0)) = a6;
    *(unsigned int *)(((int)stk + 8)) = a7;
    *(unsigned char *)(((int)stk + 16)) = (*(signed char *)(((a4 * 0x34) + 0xC2738B9)));
    t1 = *(signed char *)(((int)stk + 16));
    t2 = *(int *)0xC4B40CC;
    *(unsigned int *)(((int)stk + 12)) = t1;
    t3 = FUN_0c037320(t1, t2);
    t24 = 0x0;
    if ((int)t3 >= 0) {
        t4 = FUN_0c03f444(0x9, 0x0, 0x1);
        t24 = 0x0;
        if (t4 != 0) {
            t6 = (((struct oC4_int *)(t4))->v);
            FUN_0c03744a(t6, (0xFFFFFF7F + a4), (*(int *)(((int)stk + 12))), (*(int *)0xC4B40CC));
            *(unsigned char *)((t6 + 0x0)) = 0x1;
            *(unsigned short *)((t6 + 0x6)) = 0xF;
            (((struct o80_uint *)(t6))->v) = 0xFFFFF1C8;
            FUN_0c0c25c4(t4);
            *(unsigned int *)((t4 + 0x4)) = 0xC0CF280;
            (((struct oAC_ushort *)(t4))->v) = 0xF;
            (((struct oA9_uchar *)(t4))->v) = 0x40;
            (((struct o41D_uchar *)(t4))->v) = 0x0;
            (((struct o41C_uchar *)(t4))->v) = a4;
            (((struct o424_uchar *)(t4))->v) = (*(int *)(((int)stk + 4)));
            (((struct o1B_uchar *)(t4))->v) = (*(int *)(((int)stk + 0)));
            FUN_0c0c2ab6(t4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((t4 + 0x41C))) * (unsigned short)0x34) + 0xC2738CA))));
            (((struct o420_ushort *)(t4))->v) = 0x12C;
            FUN_0c0c212c(t4);
            *(volatile int *)(((int)stk + 8));
            FUN_0c187798();
            *(unsigned int *)((t4 + 0x38)) = a9;
            FUN_0c0c2aa2(t4, a8);
            FUN_0c0c241a(t4);
            t24 = t4;
        }
    }
    return t24;
}

int FUN_0c0cf440(int a4, int a5, int a6)
{
    register int t2;
    register int t3;

    if ((*(signed char *)0xC5429B4) == 2) {
        t2 = (int)((int)(FUN_0c179ac0()) % (int)0xF);
        if (a5 != 1) {
            t3 = FUN_0c0bb2a4();
            if (t3 != 0) {
                FUN_0c0cf2f4((t2 + 0x81), 0x0, a5, a4, 0xFFFFFFFF, a6);
                return 0x1;
            }
            return 0x0;
        }
        FUN_0c0cf2f4((t2 + 0x81), 0x0, a5, a4, 0xFFFFFFFF, a6);
        return 0x1;
    }
    return 0x0;
}
