/* game/flow: functions 0C11ECA4-0C120DF8, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o154_int { char p[0x154]; int v; };
struct o15C_int { char p[0x15C]; int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
int FUN_0c036de8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c03ea04(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c03eff6(void);
int FUN_0c03f346(int, int, int, int);
int FUN_0c059c54(int);
extern int FUN_0c11efc0();
int FUN_0c11f114(int, int);
int FUN_0c11fcc6(int);
int FUN_0c11fe4a(int, int, int);
int FUN_0c120018(int, int, int, int, int, int);
int FUN_0c120362(void);
int FUN_0c120504(int, int, int, int);
int FUN_0c120654(int, int, int);
int FUN_0c120906(int, int, int, int, int);
int FUN_0c120cc4(int);
int FUN_0c1211b0(void);
int FUN_0c187798(void);
int FUN_0c11ef48(int a4, int a5, int a6, int a7);
int FUN_0c11ef66(void);
float FUN_0c11f1fe(int a4, int a5, int a6);
int FUN_0c11f56c(void);
int FUN_0c11ff8a(int a4, int a5, int a6, int a7);

int FUN_0c11ef48(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)0xC4750AD;
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c11f114(a4, a5);
        }
        return ((int (*)(int, int, int, int))(FUN_0c11efc0))(a4, a5, a6, a7);
    }
    FUN_0c11ef66();
    return ((int (*)(void))(FUN_0c11efc0))();
}




int FUN_0c11ff8a(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t2;

    t2 = *(signed char *)((a4 + 0x14));
    if (t2 != 0) {
        if (t2 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        if (((*(signed char *)((a4 + 0x2))) & 4) != 0) {
            return FUN_0c11fe4a(a4, a5, a6);
        }
        FUN_0c11fcc6(a4);
        if (((int)(*(signed char *)0xC4750AD) <= (int)0x1) && (t0 = *(signed char *)0xC4750AE, (int)t0 <= (int)0x2)) {
            t2 = t0;
        } else {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t2 = 0x14;
        }
        return t2;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    if (((*(signed char *)((a4 + 0x2))) & 4) != 0) {
        return FUN_0c11fe4a(a4, a5, a6);
    }
    FUN_0c11fcc6(a4);
    if (((int)(*(signed char *)0xC4750AD) <= (int)0x1) && (t0 = *(signed char *)0xC4750AE, (int)t0 <= (int)0x2)) {
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t0 = 0x14;
    }
    return t0;
}



