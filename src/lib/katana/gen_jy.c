/* A function proven on cases written by hand (tools/6-agentic/handcase.py). */

struct o4C_int { char p[0x4C]; int v; };
struct o4C_uint { char p[0x4C]; unsigned int v; };
int SJ_SplitChunk(int, int, int, int);
int FUN_0c2dc1ae(int, int, int, int, int);
int mwlRnaAddWrPos(int a4, int a5, int a6, int a7);

int mwlRnaAddWrPos(int a4, int a5, int a6, int a7)
{
    int stk[15];
    register int t3;
    register int t4;
    register int t17;
    register int t18;
    register int t30;
    register int t34;
    register int t0;
    register int t1;
    register int t2;
    register int t10;
    register int t11;
    register int t12;
    register int t13;
    register int t16;

    t3 = a4;
    t4 = 0x0;
    for (;;) {
        if ((int)t4 >= (int)(unsigned char)(*(signed char *)((a4 + 0x3)))) {
            break;
        }
        t2 = a4;
        t1 = t4;
        t2 = (t2 + 0x10);
        t1 = (t1 << 2);
        t1 = (t1 + t2);
        t0 = (*(int *)((t1 + 0x0)));
        if (t0 == 0) {
            *(int *)((int)stk + 0) = 0xC2FFF10;
            FUN_0c2dc1ae(t3, a5, a6, a7, 0xC2FFF10);
        } else {
            t10 = t0;
            t11 = t1;
            t12 = t2;
            t13 = t3;
        }
        t0 = t10;
        t4 = (t4 + 0x1);
        t1 = t11;
        t2 = t12;
        t3 = t13;
    }
    t17 = 0xC2DC1AE;
    t18 = 0x0;
    for (;;) {
        if ((int)t18 >= (int)(unsigned char)(*(signed char *)((a4 + 0x3)))) {
            break;
        }
        *(unsigned int *)(((int)stk + 20)) = (*(int *)((((a4 + 0x18) + ((t18 << 2) << 1)) + 0x0)));
        *(unsigned int *)(((int)stk + 24)) = (*(int *)(((((t18 << 2) << 1) + (a4 + 0x18)) + 0x4)));
        SJ_SplitChunk((((int)stk + 4) + 0x10), ((int)((int)((*(int *)((a4 + 0x3C))) * (*(int *)((a4 + 0x8)))) / (int)0x8)), (((int)stk + 4) + 0x8), ((int)stk + 4));
        t16 = a4;
        t17 = t18;
        t16 = (t16 + 0x10);
        t17 = (t17 << 2);
        t16 = (t16 + t17);
        t16 = (*(int *)((t16 + 0x0)));
        t30 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t16 + 0x0))) + 0x20)))))(t16, 0x0, (((int)stk + 4) + 0x8), a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
        t16 = a4;
        t16 = (t16 + 0x10);
        t16 = (t16 + t17);
        t16 = (*(int *)((t16 + 0x0)));
        t34 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)((t16 + 0x0))) + 0x1C)))))(t16, 0x1, ((int)stk + 4), a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24));
        t18 = (t18 + 0x1);
    }
    *(unsigned int *)((a4 + 0x2C)) = ((int)((int)((*(int *)((a4 + 0x2C))) + (*(int *)((a4 + 0x3C)))) % (int)(*(int *)((a4 + 0x28)))));
    *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) + (*(int *)((a4 + 0x3C))));
    (((struct o4C_uint *)(a4))->v) = (((((struct o4C_int *)(a4))->v)) + (*(int *)((a4 + 0x3C))));
    *(unsigned int *)((a4 + 0x3C)) = 0x0;
    return 0x4C;
}
