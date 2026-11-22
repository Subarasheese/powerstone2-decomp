/* Hand-fixed generated C: on a null handle mwRnaSetStmHdInfo reports strMwRnaNullHandleError through the variadic FUN_0c2dc1ae.
   The original pushes the string onto its frame, so the word after it there is its own saved r6: what the printer finds as a
   further argument. It is passed here, as that word. */

int FUN_0c2dc1ae(int, int, int, int, int, int);
int mwRnaSetBitPerSmpl(int, int);
int mwRnaSetSfreq(int, int);
struct o40_int { char p[0x40]; int v; };
struct o44_int { char p[0x44]; int v; };
struct o48_int { char p[0x48]; int v; };
struct o60_uint { char p[0x60]; unsigned int v; };
struct o64_uint { char p[0x64]; unsigned int v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o6C_uint { char p[0x6C]; unsigned int v; };
struct o70_uint { char p[0x70]; unsigned int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o80_uint { char p[0x80]; unsigned int v; };

int mwRnaSetStmHdInfo(int a4, int a5, int a6, int a7)
{
    int stk[14];
    register int t1;
    register int t5;
    register int t6;
    register int t12;
    register int t13;
    register int t17;
    register int t21;
    register int t25;
    register int t29;
    register int t33;
    register int t36;
    register int t37;
    register int t40;
    register int t60;

    *(unsigned int *)(((int)stk + 32)) = a5;
    *(unsigned int *)(((int)stk + 4)) = a6;
    if (a4 == 0) {
        *(int *)((int)stk + 0) = 0xC2FFEE8;
        t60 = (FUN_0c2dc1ae(a4, a5, a6, a7, 0xC2FFEE8, a6));
    } else {
        t1 = *(int *)((a4 + 0x38));
        *(unsigned int *)(((int)stk + 8)) = t1;
        t5 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))(((((struct o44_int *)((*(int *)((t1 + 0x0)))))->v))))(t1, 0x4, (*(int *)(((int)stk + 32))), 0x0, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
        t6 = *(int *)((a4 + 0x38));
        *(unsigned int *)(((int)stk + 8)) = t6;
        t12 = *(int *)(((*(int *)(((int)stk + 4))) + 0x0));
        t60 = (((int (*)(int, int, int, int, int, int, int, int, int, int, int))(((((struct o48_int *)((*(int *)((t6 + 0x0)))))->v))))(t6, 0x4, (*(int *)(((int)stk + 4))), (((int)stk + 4) + 0x24), *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24)));
        if ((int)t12 > 0) {
            t13 = *(int *)((a4 + 0x38));
            *(unsigned int *)(((int)stk + 4)) = t13;
            *(unsigned int *)(((int)stk + 8)) = (((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t13 + 0x0))) + 0x30)))))(t13, a5, a6, a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24)));
            t17 = *(int *)((a4 + 0x38));
            *(unsigned int *)(((int)stk + 4)) = t17;
            *(unsigned int *)(((int)stk + 44)) = (((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t17 + 0x0))) + 0x28)))))(t17, a5, a6, a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24)));
            t21 = *(int *)((a4 + 0x38));
            *(unsigned int *)(((int)stk + 4)) = t21;
            *(unsigned int *)(((int)stk + 4)) = (((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t21 + 0x0))) + 0x38)))))(t21, a5, a6, a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24)));
            *(unsigned int *)(((int)stk + 32)) = (((int)stk + 4) + 0x2C);
            t25 = *(int *)((a4 + 0x38));
            *(unsigned int *)(((int)stk + 36)) = t25;
            *(unsigned int *)(((((int)stk + 4) + 0x2C) + 0x0)) = (((int (*)(int, int, int, int, int, int, int, int, int, int, int))(((((struct o40_int *)((*(int *)((t25 + 0x0)))))->v))))(t25, 0x0, a6, a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24)));
            *(unsigned int *)(((int)stk + 36)) = (((int)stk + 4) + 0x30);
            t29 = *(int *)((a4 + 0x38));
            *(unsigned int *)(((int)stk + 12)) = t29;
            *(unsigned int *)(((((int)stk + 4) + 0x30) + 0x0)) = (((int (*)(int, int, int, int, int, int, int, int, int, int, int))(((((struct o40_int *)((*(int *)((t29 + 0x0)))))->v))))(t29, 0x1, a6, a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24)));
            t33 = *(int *)((a4 + 0x38));
            *(unsigned int *)(((int)stk + 12)) = t33;
            t36 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))(((((struct o48_int *)((*(int *)((t33 + 0x0)))))->v))))(t33, 0x0, (((int)stk + 4) + 0x14), (((int)stk + 4) + 0x18), *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
            t37 = *(int *)((a4 + 0x38));
            *(unsigned int *)(((int)stk + 12)) = t37;
            t40 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))(((((struct o48_int *)((*(int *)((t37 + 0x0)))))->v))))(t37, 0x3, (((int)stk + 4) + 0xC), (((int)stk + 4) + 0x10), *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
            mwRnaSetBitPerSmpl(a4, (*(int *)(((int)stk + 8))));
            mwRnaSetSfreq(a4, (*(int *)(((int)stk + 44))));
            (((struct o60_uint *)(a4))->v) = (*(int *)(((int)stk + 4)));
            (((struct o64_uint *)(a4))->v) = (*(int *)(((*(int *)(((int)stk + 32))) + 0x0)));
            (((struct o68_uint *)(a4))->v) = (*(int *)(((*(int *)(((int)stk + 36))) + 0x0)));
            (((struct o6C_uint *)(a4))->v) = (*(int *)(((int)stk + 24)));
            (((struct o70_uint *)(a4))->v) = (*(int *)(((int)stk + 28)));
            (((struct o7C_uint *)(a4))->v) = (*(int *)(((int)stk + 16)));
            (((struct o80_uint *)(a4))->v) = (*(int *)(((int)stk + 20)));
            t60 = 0x80;
        }
    }
    return t60;
}
