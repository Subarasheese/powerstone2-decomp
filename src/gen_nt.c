/* Straight-line functions with calls and guards (batch gen_nt): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c059df2(int, int);
int FUN_0c15c344(int, int, int);
int FUN_0c187798(int, int, int);
int FUN_0c0c7f4c(int a4, int a5, int a6);

int FUN_0c0c7f4c(int a4, int a5, int a6)
{
    int stk[3];
    register int t0;
    register int t32;
    register int t1;
    register int t4;
    register int t5;
    register int t7;
    register int t13;
    register int t14;
    register int t16;
    int t22;

    t0 = *(signed char *)((a4 + 0x41C));
    t32 = (unsigned char)t0;
    if ((unsigned char)t0 != 114) {
        t1 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t1 + 0x1);
        if ((int)(short)(t1 + 0x1) > (int)0x64) {
            *(unsigned short *)((a4 + 0x1C)) = 0x0;
        }
        t4 = *(short *)((a4 + 0x1C));
        if ((((int)t4 > (int)0x3C) && ((int)t4 < (int)0x46)) || (((int)t4 > (int)0x50) && ((int)t4 < (int)0x5A))) {
            t5 = (((struct oC4_int *)(a4))->v);
            (((struct o78_uint *)(t5))->v) = (((((struct o78_int *)(t5))->v)) - 1820);
            t7 = (((struct oC8_int *)(a4))->v);
            (((struct o78_uint *)(t7))->v) = (((((struct o78_int *)(t7))->v)) + 0xE38);
        }
        t13 = *(short *)((a4 + 0x1C));
        if ((((int)t13 > (int)0x46) && ((int)t13 < (int)0x50)) || (((int)t13 > (int)0x5A) && ((int)t13 < (int)0x64))) {
            t14 = (((struct oC4_int *)(a4))->v);
            (((struct o78_uint *)(t14))->v) = (((((struct o78_int *)(t14))->v)) + 0x71C);
            t16 = (((struct oC8_int *)(a4))->v);
            (((struct o78_uint *)(t16))->v) = (((((struct o78_int *)(t16))->v)) - 3640);
        }
        t22 = *(short *)((a4 + 0x1C));
        t32 = t22;
        if ((t22 != 70) && (t22 != 90)) {
        } else {
            FUN_0c187798(t13, a5, a6);
            FUN_0c15c344(a4, ((int)stk + 0), 0xA);
            t32 = (FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0x5E));
        }
    }
    return t32;
}
