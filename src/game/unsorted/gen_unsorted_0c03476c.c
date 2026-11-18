/* game/unsorted: functions 0C03476C-0C034CFC, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
extern int FUN_0c187798();
int FUN_0c03476c(void);
int FUN_0c0347d0(int a4);
int FUN_0c0349b4(void);
int FUN_0c0349f6(int a4, int a5, int a6, int a7);

int FUN_0c03476c(void)
{
    register int t0;
    register int t2;
    register int t4;
    register int t7;

    t0 = 0x0;
    for (;;) {
        t2 = *(signed char *)(((t0 * 0x1C) + 0xC1AA294));
        FUN_0c037320(t2, (*(int *)0xC4B410C));
        t4 = FUN_0c03f444(0x8, 0x0, 0x2);
        t7 = t4;
        if (t4 != 0) {
            FUN_0c03733c(t4, t2, (*(int *)0xC4B410C));
            *(unsigned int *)((t4 + 0x4)) = 0xC03445C;
            *(unsigned char *)((t4 + 0x2)) = t0;
            t7 = t0;
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x2) {
            break;
        }
    }
    return t7;
}


int FUN_0c0349b4(void)
{
    register int t1;
    register int t3;
    register int t6;

    t1 = *(signed char *)0xC1AA2CC;
    FUN_0c037320(t1, (*(int *)0xC4B410C));
    t3 = FUN_0c03f444(0x8, 0x0, 0x2);
    t6 = t3;
    if (t3 != 0) {
        FUN_0c03733c(t3, t1, (*(int *)0xC4B410C));
        *(unsigned int *)((t3 + 0x4)) = 0xC0347D0;
        *(unsigned char *)((t3 + 0x2)) = 0x0;
        t6 = 0x0;
    }
    return t6;
}

