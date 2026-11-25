/* game/unsorted: functions 0C0EB630-0C0EB704, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o41D_uchar { char p[0x41D]; unsigned char v; };
struct o4_int { char p[0x4]; int v; };
struct o8_int { char p[0x8]; int v; };
int nlRand(void);
int FUN_0c0eb630(int a4, int a5, int a6, int a7);

int FUN_0c0eb630(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t6;

    t0 = *(signed char *)((a5 + 0x2));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
            } else {
                t0 = ((((struct o4_int *)0xC540DE0)->v));
                t1 = ((((struct o0_int *)0xC540DE0)->v));
            }
            t2 = t0;
            t0 = t1;
        } else {
            t2 = ((((struct o8_int *)0xC540DE0)->v));
            t0 = ((((struct o0_int *)0xC540DE0)->v));
        }
        t1 = t2;
        t2 = t0;
    } else {
        t1 = ((((struct o8_int *)0xC540DE0)->v));
        t2 = ((((struct o4_int *)0xC540DE0)->v));
    }
    if (a6 == 0) {
        (((struct o41D_uchar *)(a5))->v) = 0x2;
        t0 = 0x2;
        t3 = 0x2;
        t4 = t2;
    } else {
        (((struct o41D_uchar *)(a5))->v) = 0x5;
        *(unsigned char *)((a5 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        (((struct o16_uchar *)(a5))->v) = 0x0;
        (((struct o15_uchar *)(a5))->v) = 0x0;
        (((struct o17_uchar *)(a5))->v) = 0x1;
        t0 = nlRand();
        t6 = ((~(((~t0) + 0x1) & 0x1)) + 0x1);
        if ((int)t0 >= 0) {
            t6 = (t0 & 0x1);
        }
        t0 = 0x1;
        t3 = 0x5;
        t4 = t1;
        if (t6 != 0) {
            t0 = 0x5;
            t3 = 0x1;
            t4 = t2;
        }
    }
    (((struct o41D_uchar *)(t2))->v) = t0;
    (((struct o41D_uchar *)(t1))->v) = t3;
    t0 = *(signed char *)((a4 + 0x1));
    *(unsigned char *)((t1 + 0x1)) = t0;
    *(unsigned char *)((t2 + 0x1)) = t0;
    (((struct o17_uchar *)(t1))->v) = 0x0;
    (((struct o16_uchar *)(t1))->v) = 0x0;
    (((struct o15_uchar *)(t1))->v) = 0x0;
    (((struct o17_uchar *)(t2))->v) = 0x0;
    (((struct o16_uchar *)(t2))->v) = 0x0;
    (((struct o15_uchar *)(t2))->v) = 0x0;
    return t4;
}
