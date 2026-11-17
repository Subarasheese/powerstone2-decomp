/* game/player: functions 0C07E700-0C07E79C, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o11C_int { char p[0x11C]; int v; };
struct o445_uchar { char p[0x445]; unsigned char v; };
struct o446_uchar { char p[0x446]; unsigned char v; };
struct o447_uchar { char p[0x447]; unsigned char v; };
int FUN_0c07e700(int a4, int a5, int a6, int a7);

int FUN_0c07e700(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;

    t1 = 0x0;
    t2 = 0xC1C5DC4;
    t3 = 0xC1C5DC4;
    t4 = 0xC1C5DC4;
    for (;;) {
        if ((unsigned short)(*(short *)(((((t1 << 2) << 1) + 0xC1C5DC4) + 0x0))) == 0x9999) {
            t5 = 0x446;
            *(unsigned char *)((a4 + t5)) = 0x0;
            t5 = (t5 + 0x1);
            *(unsigned char *)((a4 + t5)) = 0x0;
            t5 = (t5 - 2);
            *(unsigned char *)((a4 + t5)) = 0x0;
            return t5;
        }
        if (((unsigned short)(*(short *)((t3 + 0x0))) == (a7 + (a6 << 8))) && (t0 = *(signed char *)((t3 + 0x4)), t5 = t0, t5 == (signed char)a5)) {
            t6 = 0x8C;
            t5 = (*(short *)((t2 + 0x2)));
            t5 = (unsigned short)t5;
            t6 = (t6 + ((((struct o11C_int *)(a4))->v)));
            if ((int)t5 <= (int)(int)((*(float *)((t6 + 0x0))))) {
                break;
            }
            t2 = (t2 + 0x8);
            t3 = (t3 + 0x8);
            t1 = (t1 + 0x1);
            t4 = (t4 + 0x8);
            continue;
        }
        t2 = (t2 + 0x8);
        t3 = (t3 + 0x8);
        t1 = (t1 + 0x1);
        t4 = (t4 + 0x8);
    }
    (((struct o446_uchar *)(a4))->v) = (*(signed char *)((t4 + 0x6)));
    (((struct o447_uchar *)(a4))->v) = (*(signed char *)((t4 + 0x7)));
    t0 = *(signed char *)((t4 + 0x5));
    (((struct o445_uchar *)(a4))->v) = t0;
    return t0;
}
