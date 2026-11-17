/* game/menu/select: functions 0C11C0B0-0C11C2A8, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o10_int { char p[0x10]; int v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o18_int { char p[0x18]; int v; };
struct o1C_int { char p[0x1C]; int v; };
struct o4_int { char p[0x4]; int v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8_int { char p[0x8]; int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC_int { char p[0xC]; int v; };
int FUN_0c03744a(int, int, int, int);
extern int FUN_0c03f346();
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c179ac0(void);
int FUN_0c18778c(void);
int FUN_0c187798(void);
int FUN_0c11c0b0(int a4, int a5, int a6, int a7);

int FUN_0c11c0b0(int a4, int a5, int a6, int a7)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    register int t6;
    register float u0;

    t6 = *(signed char *)((a4 + 0x14));
    if (t6 != 0) {
        if (t6 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        t6 = *(short *)((a4 + 0x1C));
        if (((int)t6 >= (int)((((struct o4_int *)0xC292224)->v))) && (t0 = (((struct o8_int *)0xC292224)->v), (int)t6 <= (int)t0)) {
            FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC292200, 0xC2921F4, (*(short *)((a4 + 0x1C))), (((((struct o8_int *)0xC292224)->v))), (((((struct o4_int *)0xC292224)->v))));
        }
        if ((*(short *)((a4 + 0x1E))) != 0) {
            t0 = (((struct oC4_int *)(a4))->v);
            (((struct o7C_uint *)(t0))->v) = (((((struct o7C_int *)(t0))->v)) + ((((struct o1C_int *)0xC292224)->v)));
        } else {
            t0 = (((struct oC4_int *)(a4))->v);
            (((struct o7C_uint *)(t0))->v) = (((((struct o7C_int *)(t0))->v)) - ((((struct o1C_int *)0xC292224)->v)));
        }
        t0 = *(short *)((a4 + 0x1C));
        if (((int)t0 >= (int)((((struct oC_int *)0xC292224)->v))) && (t1 = (((struct o10_int *)0xC292224)->v), (int)t0 <= (int)t1)) {
            FUN_0c058a6e((((((struct oC4_int *)(a4))->v)) + 0x14), 0xC2A0CA0, 0xC2A0C90, (*(short *)((a4 + 0x1C))), (((((struct o10_int *)0xC292224)->v))), (((((struct oC_int *)0xC292224)->v))));
        }
        t0 = *(short *)((a4 + 0x1C));
        if (((int)t0 >= (int)((((struct o14_int *)0xC292224)->v))) && (t2 = (((struct o18_int *)0xC292224)->v), (int)t0 <= (int)t2)) {
            FUN_0c058a6e((((((struct oC4_int *)(a4))->v)) + 0x14), 0xC2A0C90, 0xC2A0CA0, (*(short *)((a4 + 0x1C))), (((((struct o18_int *)0xC292224)->v))), (((((struct o14_int *)0xC292224)->v))));
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0xF;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), (*(signed char *)((a4 + 0x2))), 0x16, (*(int *)0xC4B410C));
        *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x21F;
        *(volatile int *)((a4 + 0xC4));
        FUN_0c187798();
        *(volatile int *)((a4 + 0xC4));
        FUN_0c18778c();
        t0 = (((struct oC4_int *)(a4))->v);
        t1 = FUN_0c179ac0();
        t2 = ((~(((~t1) + 0x1) & 0x7)) + 0x1);
        if ((int)t1 >= 0) {
            t2 = (t1 & 0x7);
        }
        u0 = (((float)t2 * 360.0f) / 8.0f);
        (((struct o7C_uint *)(t0))->v) = ((int)((((u0 * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
        t0 = *(short *)((a4 + 0x1C));
        if (((int)t0 >= (int)((((struct o4_int *)0xC292224)->v))) && (t3 = (((struct o8_int *)0xC292224)->v), (int)t0 <= (int)t3)) {
            FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC292200, 0xC2921F4, (*(short *)((a4 + 0x1C))), (((((struct o8_int *)0xC292224)->v))), (((((struct o4_int *)0xC292224)->v))));
        }
        if ((*(short *)((a4 + 0x1E))) != 0) {
            t0 = (((struct oC4_int *)(a4))->v);
            (((struct o7C_uint *)(t0))->v) = (((((struct o7C_int *)(t0))->v)) + ((((struct o1C_int *)0xC292224)->v)));
        } else {
            t0 = (((struct oC4_int *)(a4))->v);
            (((struct o7C_uint *)(t0))->v) = (((((struct o7C_int *)(t0))->v)) - ((((struct o1C_int *)0xC292224)->v)));
        }
        t0 = *(short *)((a4 + 0x1C));
        if (((int)t0 >= (int)((((struct oC_int *)0xC292224)->v))) && (t4 = (((struct o10_int *)0xC292224)->v), (int)t0 <= (int)t4)) {
            FUN_0c058a6e((((((struct oC4_int *)(a4))->v)) + 0x14), 0xC2A0CA0, 0xC2A0C90, (*(short *)((a4 + 0x1C))), (((((struct o10_int *)0xC292224)->v))), (((((struct oC_int *)0xC292224)->v))));
        }
        t0 = *(short *)((a4 + 0x1C));
        if (((int)t0 >= (int)((((struct o14_int *)0xC292224)->v))) && (t5 = (((struct o18_int *)0xC292224)->v), (int)t0 <= (int)t5)) {
            FUN_0c058a6e((((((struct oC4_int *)(a4))->v)) + 0x14), 0xC2A0C90, 0xC2A0CA0, (*(short *)((a4 + 0x1C))), (((((struct o18_int *)0xC292224)->v))), (((((struct o14_int *)0xC292224)->v))));
        }
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
    t1 = (short)(t0 + 0x1);
    if ((int)(short)(t0 + 0x1) > (int)((((struct o0_int *)0xC292224)->v))) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t1 = 0x14;
    }
    return t1;
}
