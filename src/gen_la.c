/* Straight-line functions with calls and guards (batch gen_la): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o10_int { char p[0x10]; int v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o18_int { char p[0x18]; int v; };
struct o70_float { char p[0x70]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC_int { char p[0xC]; int v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c145d1c(int, int);
int FUN_0c18778c(void);
int FUN_0c187798(void);
int FUN_0c14676e(int a4, int a5, int a6, int a7);

int FUN_0c14676e(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;
    int t3;
    register int t4;

    t4 = *(signed char *)((a4 + 0x14));
    if (t4 != 0) {
        if (t4 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        t4 = *(short *)((a4 + 0x1C));
        if (((int)t4 >= (int)((((struct oC_int *)0xC2A24D8)->v))) && (t0 = (((struct o10_int *)0xC2A24D8)->v), (int)t4 <= (int)t0)) {
            FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC2A24B4, 0xC2A24A8, (*(short *)((a4 + 0x1C))), (((((struct o10_int *)0xC2A24D8)->v))), (((((struct oC_int *)0xC2A24D8)->v))));
        }
        t0 = *(short *)((a4 + 0x1C));
        if (((int)t0 >= (int)((((struct o14_int *)0xC2A24D8)->v))) && (t1 = (((struct o18_int *)0xC2A24D8)->v), (int)t0 <= (int)t1)) {
            FUN_0c058a6e((((((struct oC4_int *)(a4))->v)) + 0x14), 0xC2A23AC, 0xC2A23BC, (*(short *)((a4 + 0x1C))), (((((struct o18_int *)0xC2A24D8)->v))), (((((struct o14_int *)0xC2A24D8)->v))));
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0xF;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x2, 0xB, (*(int *)(((((*(signed char *)((a4 + 0x2))) << 2) << 1) + 0xC4B40E0))));
        *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x21F;
        *(volatile int *)((a4 + 0xC4));
        FUN_0c187798();
        (((struct o70_float *)(((((struct oC4_int *)(a4))->v))))->v) = ((((struct o0_float *)0xC2A24D8)->v));
        *(volatile int *)((a4 + 0xC4));
        FUN_0c18778c();
        t0 = *(short *)((a4 + 0x1C));
        if (((int)t0 >= (int)((((struct oC_int *)0xC2A24D8)->v))) && (t2 = (((struct o10_int *)0xC2A24D8)->v), (int)t0 <= (int)t2)) {
            FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC2A24B4, 0xC2A24A8, (*(short *)((a4 + 0x1C))), (((((struct o10_int *)0xC2A24D8)->v))), (((((struct oC_int *)0xC2A24D8)->v))));
        }
        t0 = *(short *)((a4 + 0x1C));
        if (((int)t0 >= (int)((((struct o14_int *)0xC2A24D8)->v))) && (t3 = (((struct o18_int *)0xC2A24D8)->v), (int)t0 <= (int)t3)) {
            FUN_0c058a6e((((((struct oC4_int *)(a4))->v)) + 0x14), 0xC2A23AC, 0xC2A23BC, (*(short *)((a4 + 0x1C))), (((((struct o18_int *)0xC2A24D8)->v))), (((((struct o14_int *)0xC2A24D8)->v))));
        }
    }
    t0 = (((struct oC4_int *)(a4))->v);
    *(unsigned short *)((t0 + 0x6)) = ((*(short *)((t0 + 0x6))) | 0x1000);
    FUN_0c145d1c(a4, ((((struct oC4_int *)(a4))->v)));
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
    t1 = (short)(t0 + 0x1);
    if ((int)(short)(t0 + 0x1) > (int)((((struct o18_int *)0xC2A24D8)->v))) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t1 = 0x14;
    }
    return t1;
}
