/* game/unsorted: functions 0C148D04-0C149556, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o16_uchar { char p[0x16]; unsigned char v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
int FUN_0c042fe0(void);
int FUN_0c148d04(int, int);
int FUN_0c148d64(int, int, int);
int FUN_0c148f08(int);
int FUN_0c187798(int, int, int);
int FUN_0c14914c(int a4, int a5, int a6);

int FUN_0c14914c(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
    } else {
        *(unsigned short *)((a4 + 0x1C)) = 0x78;
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        *(volatile signed char *)((a4 + 0x2));
        FUN_0c187798(a4, a5, a6);
        (((struct o48_float *)(a4))->v) = 1.0f;
        (((struct o44_float *)(a4))->v) = 1.0f;
        (((struct o40_float *)(a4))->v) = 1.0f;
        FUN_0c148d04(a4, 0x0);
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    }
    t0 = FUN_0c042fe0();
    if (t0 != 0) {
        if ((int)(*(short *)((a4 + 0x1C))) > 0) {
            *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
        }
        t1 = *(short *)((a4 + 0x1C));
        if ((int)t1 <= 0) {
            t2 = FUN_0c148f08(a4);
            if (t2 != 0) {
                return FUN_0c148d64(a4, 0x4, 0x0);
            }
            return t2;
        }
        return t1;
    }
    return t0;
}
