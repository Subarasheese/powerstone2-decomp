/* game/unsorted: functions 0C0CEC08-0C0CECE2, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o18_uchar { char p[0x18]; unsigned char v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o41D_uchar { char p[0x41D]; unsigned char v; };
struct o420_ushort { char p[0x420]; unsigned short v; };
struct o424_uchar { char p[0x424]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c0c212c(int);
int FUN_0c0c241a(int);
int FUN_0c0c25c4(int);
int FUN_0c0c2aa2(int, int);
int FUN_0c0c2ab6(int, int);
int FUN_0c187798(void);
int FUN_0c0cec08(int a4, int a5, int a6, int a7, int a8);

int FUN_0c0cec08(int a4, int a5, int a6, int a7, int a8)
{
    int stk[7];
    register int t0;
    register int t2;
    register int t3;
    register int t4;
    register int t28;
    register int t5;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 8)) = a5;
    *(unsigned int *)(((int)stk + 12)) = a6;
    *(unsigned int *)(((int)stk + 4)) = a7;
    t0 = *(int *)(((int)stk + 0));
    *(unsigned int *)(((int)stk + 16)) = (t0 * 0x34);
    (((struct o18_uchar *)(((int)stk + 0)))->v) = (*(signed char *)((((t0 * 0x34) + 0xC2738B8) + 0x1)));
    t2 = *(signed char *)(((int)stk + 24));
    t3 = *(int *)0xC4B40D8;
    *(unsigned int *)(((int)stk + 20)) = t2;
    t4 = FUN_0c037320(t2, t3);
    t28 = 0x0;
    if ((int)t4 >= 0) {
        t5 = FUN_0c03f444(0x9, 0x0, t4);
        t28 = 0x0;
        if (t5 != 0) {
            FUN_0c03744a(((((struct oC4_int *)(t5))->v)), 0x0, (*(int *)(((int)stk + 20))), (*(int *)0xC4B40D8));
            *(unsigned int *)((t5 + 0x4)) = 0xC0CEB94;
            (((struct oAC_ushort *)(t5))->v) = 0x1F;
            (((struct oA9_uchar *)(t5))->v) = 0x40;
            FUN_0c0c25c4(t5);
            (((struct o41D_uchar *)(t5))->v) = 0x0;
            (((struct o41C_uchar *)(t5))->v) = (*(int *)(((int)stk + 0)));
            (((struct o424_uchar *)(t5))->v) = (*(int *)(((int)stk + 8)));
            (((struct o1B_uchar *)(t5))->v) = (*(int *)(((int)stk + 12)));
            FUN_0c0c2ab6(t5, (*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((t5 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0x12))));
            (((struct o420_ushort *)(t5))->v) = (*(short *)(((0xC2738B8 + (*(int *)(((int)stk + 16)))) + 0x1A)));
            FUN_0c0c212c(t5);
            *(volatile int *)(((int)stk + 4));
            FUN_0c187798();
            FUN_0c0c2aa2(t5, a8);
            FUN_0c0c241a(t5);
            t28 = t5;
        }
    }
    return t28;
}
