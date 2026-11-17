/* game/effect: functions 0C132BA4-0C132CF2, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c037498(int, int, int, int);
int FUN_0c03f444(int, int, int);
int thunk_FUN_0c058310(int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c07e2f4(int, int);
int FUN_0c179ac0(void);
int FUN_0c187798(void);
int FUN_0c132ba4(int a4, int a5);
int FUN_0c132cbc(int a4);

int FUN_0c132ba4(int a4, int a5)
{
    int stk[5];
    register int t0;
    register float u5;
    register int t11;
    register int t12;
    register int t13;

    *(unsigned char *)(((int)stk + 16)) = a5;
    t0 = FUN_0c03f444(0x1, 0x0, 0x1);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t0 + 0x4)) = 0xC132D70;
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)(((int)stk + 16)));
        FUN_0c187798();
        FUN_0c187798();
        u5 = *(float *)0xC132D08;
        (((struct o48_float *)(t0))->v) = u5;
        (((struct o44_float *)(t0))->v) = u5;
        (((struct o40_float *)(t0))->v) = u5;
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC53258C))) + 0x28), (t0 + 0x28));
        t11 = (*(int *)((0xC4B40FC + ((*(signed char *)((t0 + 0x1))) << 2))));
        *(int *)((int)stk + 12) = t11;
        t12 = FUN_0c179ac0();
        t13 = ((~(((~t12) + 0x1) & 0xF)) + 0x1);
        if ((int)t12 >= 0) {
            t13 = (t12 & 0xF);
        }
        FUN_0c037498(((((struct oC4_int *)(t0))->v)), t13, 0x2, t11);
        *(unsigned char *)((((((struct oC4_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(t0))->v)) + 0x6)) = 0x23F;
        *(volatile int *)((t0 + 0xC4));
        FUN_0c187798();
        (((struct o18_float *)(((((struct oC4_int *)(t0))->v))))->v) = 0.0f;
        (((struct o1C_float *)(((((struct oC4_int *)(t0))->v))))->v) = 0.0f;
        (((struct o20_float *)(((((struct oC4_int *)(t0))->v))))->v) = 0.0f;
        *(unsigned int *)((t0 + 0x10)) = a4;
        *(int *)((int)stk + 12) = 0x0;
        *(int *)((int)stk + 8) = 0x0;
        *(int *)((int)stk + 4) = 0x0;
        *(int *)((int)stk + 0) = 0x100;
        FUN_0c064d24(t0, 0x1, 0x36, 0x2, 0x100, 0x0, 0x0, 0x0);
        FUN_0c07e2f4(t0, 0x60);
    }
    return t0;
}

int FUN_0c132cbc(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = 0x0;
    for (;;) {
        t1 = FUN_0c132ba4(a4, t0);
        t2 = t1;
        if (t1 != 0) {
            *(unsigned short *)((t1 + 0x1C)) = ((t0 << 2) + t0);
            t2 = ((t0 << 2) + t0);
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0xA) {
            break;
        }
    }
    return t2;
}
