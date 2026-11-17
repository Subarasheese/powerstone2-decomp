/* game/unsorted: functions 0C1575D4-0C157780, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC0_int { char p[0xC0]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c0e09f0(int, int, int, int, int);
int FUN_0c18778c(int);
int FUN_0c187798(void);
int FUN_0c1575d4(int a4, int a5);
int FUN_0c1576c8(int a4, int a5, int a6, int a7);

int FUN_0c1575d4(int a4, int a5)
{
    int stk[4];
    register int t1;
    register int t23;
    register int t2;
    register int t3;
    register int t14;
    register int t4;
    register int t21;

    *(unsigned char *)(((int)stk + 4)) = a4;
    *(unsigned char *)(((int)stk + 0)) = a5;
    t1 = FUN_0c03f444(0x5, 0x0, (*(signed char *)0xC20350D));
    t23 = t1;
    if (t1 != 0) {
        t2 = *(signed char *)(((int)stk + 4));
        *(unsigned int *)(((int)stk + 12)) = ((short)t2 * (short)0x3938);
        *(unsigned int *)(((int)stk + 8)) = (((short)t2 * (short)0x3938) + 0xC532498);
        t3 = 0x0;
        for (;;) {
            if ((int)t3 >= (int)((((struct oC0_int *)(t1))->v))) {
                break;
            }
            t4 = t3;
            t4 = (t4 << 2);
            t4 = (t4 + (0xC4 + t1));
            t4 = (*(int *)((t4 + 0x0)));
            FUN_0c03744a(t4, t3, 0x2, (*(int *)0xC4B40CC));
            *(unsigned short *)((t4 + 0x6)) = 0x0;
            FUN_0c187798();
            (((struct o68_uint *)(t4))->v) = 0x0;
            FUN_0c0e09f0((t4 + 0x28), ((*(int *)(((((*(signed char *)((0xC203500 + t3))) << 2) + (0xC4 + (*(int *)(((int)stk + 8))))) + 0x0))) + 0x28), 0x0, 0x0, *(int *)((int)stk + 0));
            t3 = (t3 + 0x1);
        }
        (((struct oA8_uchar *)(t1))->v) = 0x1;
        t14 = *(signed char *)(((int)stk + 0));
        (((struct oAC_ushort *)(t1))->v) = (*(short *)((((((t14 << 2) + t14) << 2) + 0xC203510) + 0x0)));
        (((struct oA9_uchar *)(t1))->v) = (*(signed char *)((((*(int *)(((int)stk + 12))) + 0xC532498) + 0xA9)));
        FUN_0c18778c(((((t14 << 2) + t14) << 2) + 0xC203510));
        *(unsigned char *)((t1 + 0x1)) = (*(signed char *)(((int)stk + 4)));
        *(unsigned char *)((t1 + 0x2)) = (*(signed char *)(((int)stk + 0)));
        *(unsigned int *)((t1 + 0x4)) = 0xC1576C8;
        t23 = *(short *)((t21 + 0x2));
        *(unsigned short *)((t1 + 0x1C)) = t23;
    }
    return t23;
}

int FUN_0c1576c8(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register float u0;
    register float u1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if ((t0 != 2) && (t0 != 3)) {
                return t0;
            }
            return FUN_0c03f346(a4, a5, a6, a7);
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    if ((*(signed char *)((a4 + 0x2))) == 0) {
        (((struct oB0_float *)(a4))->v) = ((float)(*(short *)((a4 + 0x1C))) / 12.0f);
        u0 = (((struct oB0_float *)(a4))->v);
        (((struct oBC_float *)(a4))->v) = u0;
        (((struct oB8_float *)(a4))->v) = u0;
        t0 = 0xB4;
        u1 = u0;
    } else {
        t0 = 0xB0;
        u1 = ((float)(*(short *)((a4 + 0x1C))) / 31.0f);
    }
    *(float *)((a4 + t0)) = u1;
    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
    t0 = *(short *)((a4 + 0x1C));
    t1 = t0;
    if (t0 == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t1 = 0x14;
    }
    return t1;
}
