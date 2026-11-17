/* game/unsorted: functions 0C14D5AC-0C14D826, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o2C_float { char p[0x2C]; float v; };
struct o377C_int { char p[0x377C]; int v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int thunk_FUN_0c058310(int, int);
int FUN_0c179ac0(void);
int FUN_0c187798(int);
int FUN_0c14d5ac(int a4, int a5, int a6, int a7);
int FUN_0c14d5de(int a4, int a5);
int FUN_0c14d6a8(int a4, int a5, int a6, int a7);
int FUN_0c14d75a(int a4, int a5);

int FUN_0c14d5ac(int a4, int a5, int a6, int a7)
{
    register int t4;

    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
    t4 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t4 - 1);
    if ((int)(short)(t4 - 1) <= 0) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    return (short)(t4 - 1);
}

int FUN_0c14d5de(int a4, int a5)
{
    register int t0;
    register int t10;

    t0 = FUN_0c03f444(0x1, 0x0, 0x1);
    t10 = t0;
    if (t0 != 0) {
        FUN_0c03744a(((((struct oC4_int *)(t0))->v)), 0x3, 0x47, (*(int *)0xC4B40CC));
        *(unsigned char *)((((((struct oC4_int *)(t0))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(t0))->v)) + 0x6)) = 0xF;
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0x1F;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        *(unsigned int *)((t0 + 0x4)) = 0xC14D5AC;
        *(unsigned int *)((t0 + 0x10)) = a4;
        *(unsigned int *)((t0 + 0x38)) = (*(int *)((0xC5324D0 + ((short)(*(signed char *)((t0 + 0x1))) * (short)0x3938))));
        (((struct o48_float *)(t0))->v) = 0.800000012f;
        (((struct o44_float *)(t0))->v) = 0.800000012f;
        (((struct o40_float *)(t0))->v) = 0.800000012f;
        FUN_0c187798(0x1);
        (((struct o50_float *)(t0))->v) = 0.0f;
        (((struct o5C_float *)(t0))->v) = 2.20000005f;
        *(unsigned short *)((t0 + 0x1C)) = 0x3C;
        t10 = 0x3C;
    }
    return t10;
}

int FUN_0c14d6a8(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t6;
    register float u12;
    register int t20;
    register int t33;

    if ((*(signed char *)((0x3715 + (*(int *)((a4 + 0x10)))))) != 26) {
        (((struct o14_uchar *)(a4))->v) = 0x1;
    }
    if ((*(signed char *)((a4 + 0x14))) == 0) {
        t6 = *(short *)((a4 + 0x1E));
        *(unsigned short *)((a4 + 0x1E)) = (t6 - 1);
        t33 = (short)(t6 - 1);
        if ((int)(short)(t6 - 1) <= 0) {
            *(unsigned int *)((a4 + 0x38)) = (*(int *)(((*(int *)((a4 + 0x10))) + 0x38)));
            thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC53257C))) + 0x28), ((int)stk + 0));
            u12 = *(float *)0xC14D7D4;
            *(float *)(((int)stk + 0)) = ((*(float *)(((int)stk + 0))) + ((float)((int)((int)(FUN_0c179ac0()) % (int)0x3C)) + u12));
            *(float *)(((int)stk + 8)) = ((*(float *)(((int)stk + 8))) + ((float)((int)((int)(FUN_0c179ac0()) % (int)0x3C)) + u12));
            FUN_0c14d5de(a4, ((int)stk + 0));
            *(unsigned short *)((a4 + 0x1E)) = 0x6;
            t20 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t20 + 0x1);
            t33 = (short)(t20 + 0x1);
            if ((int)(short)(t20 + 0x1) >= (int)0xC) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t33 = 0x14;
            }
        }
    } else {
        t33 = (FUN_0c03f346(a4, a5, a6, a7));
    }
    return t33;
}

int FUN_0c14d75a(int a4, int a5)
{
    int t0;
    register int t1;
    register int t2;

    if ((signed char)a5 != 0) {
        t1 = FUN_0c03f444(0x1, 0x0, 0x0);
        t2 = t1;
        if (t1 != 0) {
            *(unsigned char *)((t1 + 0x1)) = (*(signed char *)((a4 + 0x1)));
            *(unsigned char *)((t1 + 0x2)) = a5;
            (((struct oA8_uchar *)(t1))->v) = 0x0;
            *(unsigned int *)((t1 + 0x4)) = 0xC14D478;
            *(unsigned int *)((t1 + 0x10)) = a4;
            *(unsigned short *)((t1 + 0x1C)) = 0x0;
            *(unsigned short *)((t1 + 0x1E)) = 0x19;
            if (((*(signed char *)((((((struct o377C_int *)(a4))->v)) + 0x0))) == 0) && (t0 = *(signed char *)0xC54235E, t0 == 0)) {
                t0 = *(signed char *)((((((struct o377C_int *)(a4))->v)) + 0x1));
                (((struct o18_uchar *)(t1))->v) = t0;
                t2 = t0;
            } else {
                (((struct o18_uchar *)(t1))->v) = 0xFFFFFFFF;
                t2 = 0x18;
            }
        }
        t0 = t2;
    } else {
        t1 = FUN_0c03f444(0x1, 0x0, 0x0);
        t2 = t1;
        if (t1 != 0) {
            *(unsigned char *)((t1 + 0x1)) = (*(signed char *)((a4 + 0x1)));
            *(unsigned char *)((t1 + 0x2)) = a5;
            (((struct oA8_uchar *)(t1))->v) = 0x0;
            *(unsigned int *)((t1 + 0x4)) = 0xC14D6A8;
            *(unsigned int *)((t1 + 0x10)) = a4;
            *(unsigned short *)((t1 + 0x1C)) = 0x0;
            *(unsigned short *)((t1 + 0x1E)) = 0x0;
            t2 = 0x0;
        }
        t0 = t2;
    }
    return t0;
}
