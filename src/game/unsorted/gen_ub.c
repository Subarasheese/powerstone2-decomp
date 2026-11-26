/* Straight-line functions with calls and guards (batch gen_ub): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o26_uchar { char p[0x26]; unsigned char v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
int FUN_0c14c7e8(int);
int FUN_0c14c866(int, int);
int FUN_0c14c96a(int a4);

int FUN_0c14c96a(int a4)
{
    register int t0;
    int t1;
    register int t2;
    register int t3;
    register int t4;

    t2 = *(signed char *)((a4 + 0x14));
    t3 = *(int *)((a4 + 0x10));
    if (t2 != 0) {
        if (t2 != 1) {
            return t2;
        }
    } else {
        if ((*(signed char *)((t3 + 0x3714))) != 0) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            (((struct o15_uchar *)(a4))->v) = 0x0;
            (((struct o26_uchar *)(a4))->v) = 0x1;
            (((struct oA4_uint *)(a4))->v) = (((0x468 + (((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532498)) + 0x2D0) + 0x28);
        } else {
            return 0x3714;
        }
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x40)) = *(struct mv3 *)(((((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532498) + 0x468) + 0x2D0) + 0x84)); }
    if ((*(signed char *)((a4 + 0x15))) == 0) {
        t2 = *(signed char *)((t3 + 0x14));
        t4 = t2;
        if (t2 == 1) {
            t2 = *(signed char *)((t3 + 0x3739));
            t4 = t2;
            if (t2 == 1) {
                t2 = 0x17;
                if ((int)(*(signed char *)((t3 + 0x17))) > (int)0x1) {
                    FUN_0c14c866(a4, 0x0);
                    (((struct o15_uchar *)(a4))->v) = 0x1;
                    *(unsigned short *)((a4 + 0x1C)) = 0x0;
                    t2 = 0x0;
                }
                t4 = t2;
            }
        }
        return t4;
    }
    if (((*(signed char *)((t3 + 0x14))) == 1) && ((t0 = *(signed char *)((t3 + 0x3739)), t0 == 1) && (t1 = *(signed char *)((t3 + 0x17)), (int)t1 <= (int)0x5))) {
        return FUN_0c14c7e8(a4);
    }
    (((struct o15_uchar *)(a4))->v) = 0x0;
    return FUN_0c14c866(a4, 0x1);
}
