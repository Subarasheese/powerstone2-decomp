/* game/unsorted: functions 0C15A404-0C15B40E, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o2C_float { char p[0x2C]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
int FUN_0c03f346(int);
int FUN_0c03f444(int, int, int);
int FUN_0c15a808(int, int, int);
int FUN_0c179ac0(void);
int FUN_0c187798(int);
int FUN_0c15ab94(int a4);
int FUN_0c15abcc(int a4);
int FUN_0c15acb0(int a4, int a5, int a6);
int FUN_0c15ae2e(int a4);
int FUN_0c15aed8(int a4);
int FUN_0c15af18(int a4);
int FUN_0c15b320(int a4, int a5);


int FUN_0c15abcc(int a4)
{
    int stk[9];
    register int t2;
    register int t3;
    register int t5;
    register int t6;
    register int t8;
    register int t9;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t2 = FUN_0c179ac0();
        t3 = ((~(((~t2) + 0x1) & 0xF)) + 0x1);
        if ((int)t2 >= 0) {
            t3 = (t2 & 0xF);
        }
        *(unsigned int *)((((int)stk + 0) + 0x0)) = (((t3 << 8) << 2) << 2);
        t5 = FUN_0c179ac0();
        t6 = ((~(((~t5) + 0x1) & 0xF)) + 0x1);
        if ((int)t5 >= 0) {
            t6 = (t5 & 0xF);
        }
        *(unsigned int *)((((int)stk + 0) + 0x4)) = (((t6 << 8) << 2) << 2);
        t8 = FUN_0c179ac0();
        t9 = ((~(((~t8) + 0x1) & 0xF)) + 0x1);
        if ((int)t8 >= 0) {
            t9 = (t8 & 0xF);
        }
        *(unsigned int *)((((int)stk + 0) + 0x8)) = (((t9 << 8) << 2) << 2);
        *(float *)(((int)stk + 24)) = (((((struct o4C_float *)(a4))->v)) * (*(float *)0xC2A2AFC));
        *(float *)(((int)stk + 28)) = (((((struct o50_float *)(a4))->v)) * (*(float *)0xC2A2AFC));
        *(float *)(((int)stk + 32)) = (((((struct o54_float *)(a4))->v)) * (*(float *)0xC2A2AFC));
        *(float *)(((int)stk + 12)) = 0.0f;
        *(float *)(((int)stk + 16)) = 0.0f;
        *(float *)(((int)stk + 20)) = 0.0f;
        FUN_0c15a808((a4 + 0x28), (((int)stk + 0) + 0x18), (((int)stk + 0) + 0xC));
    }
    return (FUN_0c03f346(a4));
}







