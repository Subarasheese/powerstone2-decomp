/* game/unsorted: functions 0C0329E0-0C0339D0, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c05ab04(int);
int FUN_0c07c19c(int);
extern int FUN_0c187798();
int FUN_0c0329e0(void);
int FUN_0c032a48(int a4, int a5, int a6, int a7);
int FUN_0c032c6c(void);
int FUN_0c032cac(int a4, int a5, int a6, int a7);
int FUN_0c032fec(void);
int FUN_0c03302a(int a4, int a5, int a6, int a7, float f4);
int FUN_0c033276(void);
int FUN_0c0332b6(int a4, int a5, int a6, int a7, float f4);
int FUN_0c0334cc(void);
int FUN_0c03350c(int a4, float f4, float f5, float f6);
int FUN_0c03379e(int a4, float f4, float f5, float f6);

int FUN_0c0329e0(void)
{
    register int t0;
    register int t2;
    register int t4;
    register int t7;

    t0 = 0x0;
    for (;;) {
        t2 = *(signed char *)((((t0 * 0x1C) + 0xC1A9850) + 0x18));
        FUN_0c037320(t2, (*(int *)0xC4B40D0));
        t4 = FUN_0c03f444(0x8, 0x0, 0x2);
        t7 = t4;
        if (t4 != 0) {
            FUN_0c03733c(t4, t2, (*(int *)0xC4B40D0));
            *(unsigned int *)((t4 + 0x4)) = 0xC0327F0;
            *(unsigned char *)((t4 + 0x2)) = t0;
            t7 = t0;
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x7) {
            break;
        }
    }
    return t7;
}


int FUN_0c032c6c(void)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = 0x0;
    for (;;) {
        t1 = FUN_0c03f444(0x8, 0x0, 0x2);
        t2 = t1;
        if (t1 != 0) {
            *(unsigned int *)((t1 + 0x4)) = 0xC032A48;
            *(unsigned char *)((t1 + 0x2)) = t0;
            (((struct oA8_uchar *)(t1))->v) = 0x0;
            t2 = 0xA8;
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x9) {
            break;
        }
    }
    return t2;
}


int FUN_0c032fec(void)
{
    register int t0;
    register int t1;

    t0 = FUN_0c037320((*(signed char *)0xC1A9A28), (*(int *)0xC4B40D0));
    t1 = FUN_0c03f444(0x8, 0x0, t0);
    t0 = t1;
    if (t1 != 0) {
        *(unsigned int *)((t1 + 0x4)) = 0xC032CAC;
        *(unsigned char *)((t1 + 0x2)) = 0x0;
        (((struct oA8_uchar *)(t1))->v) = 0x0;
        t0 = 0xA8;
    }
    return t0;
}


int FUN_0c033276(void)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = 0x0;
    for (;;) {
        t1 = FUN_0c03f444(0x8, 0x0, 0x2);
        t2 = t1;
        if (t1 != 0) {
            *(unsigned int *)((t1 + 0x4)) = 0xC03302A;
            *(unsigned char *)((t1 + 0x2)) = t0;
            (((struct oA8_uchar *)(t1))->v) = 0x0;
            t2 = 0xA8;
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x6) {
            break;
        }
    }
    return t2;
}


int FUN_0c0334cc(void)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = 0x0;
    for (;;) {
        t1 = FUN_0c03f444(0x8, 0x0, 0x2);
        t2 = t1;
        if (t1 != 0) {
            *(unsigned int *)((t1 + 0x4)) = 0xC0332B6;
            *(unsigned char *)((t1 + 0x2)) = t0;
            (((struct oA8_uchar *)(t1))->v) = 0x0;
            t2 = 0xA8;
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x17) {
            break;
        }
    }
    return t2;
}


