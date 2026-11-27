/* Straight-line functions with calls and guards (batch gen_aap): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
int FUN_0c0206d6(void);
int FUN_0c0209c6(int);
int FUN_0c020be4(int);
int FUN_0c02c7dc(void);
int FUN_0c02c8c2(void);
int FUN_0c02cb10(int, int, int, int);
int FUN_0c1837cc(int, int);
int FUN_0c02c96a(int a4, int a5, int a6, int a7);

int FUN_0c02c96a(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;

    t1 = *(signed char *)0xC541F40;
    if ((unsigned char)t1 == 0) {
        FUN_0c02c7dc();
    }
    if (((unsigned char)t1 == 0) || ((unsigned char)t1 == 1)) {
        FUN_0c1837cc((*(int *)0xC305430), 0xC305434);
        if (((*(signed char *)0xC30543E) != 0) && (t0 = *(signed char *)0xC309828, t0 != 0)) {
            t0 = FUN_0c0209c6((*(signed char *)0xC3054C4));
            if (t0 == 5) {
                *(volatile signed char *)0xC3054C4;
                t1 = FUN_0c0206d6();
                if (t1 != 0) {
                    FUN_0c020be4((*(signed char *)0xC3054C4));
                    return FUN_0c02c8c2();
                }
                return t1;
            }
            return t0;
        }
        (((struct o0_uchar *)0xC541F40)->v) = ((*(signed char *)0xC541F40) + 0x1);
        (((struct o2_uchar *)0xC541F40)->v) = 0x0;
        (((struct o1_uchar *)0xC541F40)->v) = 0x0;
        (((struct o3_uchar *)0xC541F40)->v) = 0x1;
        return 0x1;
    } else {
        return FUN_0c02cb10(a4, a5, a6, a7);
    }
}
