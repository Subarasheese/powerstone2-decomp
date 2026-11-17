/* game/unsorted: functions 0C163A70-0C164A1A, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c18778c(void);
extern int FUN_0c187798();
int FUN_0c163d06(int a4, int a5, int a6, int a7);

int FUN_0c163d06(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t2 = *(signed char *)((a4 + 0x14));
    if (t2 != 0) {
        if (t2 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
        if ((int)(*(short *)((a4 + 0x1C))) <= (int)(*(int *)0xC2A3120)) {
            FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC2A30E4, 0xC2A30C0, (*(short *)((a4 + 0x1C))), ((*(int *)0xC2A3120)), 0x0);
            FUN_0c0588bc((((((struct oC8_int *)(a4))->v)) + 0x84), 0xC2A30E4, 0xC2A30CC, (*(short *)((a4 + 0x1C))), ((*(int *)0xC2A3120)), 0x0);
            FUN_0c0588bc((((((struct oCC_int *)(a4))->v)) + 0x84), 0xC2A30E4, 0xC2A30D8, (*(short *)((a4 + 0x1C))), ((*(int *)0xC2A3120)), 0x0);
        }
        if ((int)(*(short *)((a4 + 0x1C))) <= (int)(*(int *)0xC2A3120)) {
            FUN_0c058a6e((((((struct oC4_int *)(a4))->v)) + 0x14), 0xC2A3048, ((((*(signed char *)((a4 + 0x2))) << 2) << 2) + 0xC2A30F0), (*(short *)((a4 + 0x1C))), ((*(int *)0xC2A3120)), 0x0);
            FUN_0c058a6e((((((struct oC8_int *)(a4))->v)) + 0x14), 0xC2A3048, ((((*(signed char *)((a4 + 0x2))) << 2) << 2) + 0xC2A30F0), (*(short *)((a4 + 0x1C))), ((*(int *)0xC2A3120)), 0x0);
        }
        t2 = (((struct oC4_int *)(a4))->v);
        (((struct o80_uint *)(t2))->v) = (((((struct o80_int *)(t2))->v)) + 0x400);
        t2 = (((struct oC8_int *)(a4))->v);
        (((struct o80_uint *)(t2))->v) = (((((struct o80_int *)(t2))->v)) - 0x400);
        t2 = (((struct oCC_int *)(a4))->v);
        (((struct o80_uint *)(t2))->v) = (((((struct o80_int *)(t2))->v)) + 0x800);
        t2 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t2 + 0x1);
        t3 = (short)(t2 + 0x1);
        if ((int)(short)(t2 + 0x1) > (int)(*(int *)0xC2A3120)) {
            (((struct o14_uchar *)(a4))->v) = 0x2;
            t3 = 0x2;
        }
        return t3;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0xF;
    FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x0, 0x36, (*(int *)0xC4B40CC));
    FUN_0c03744a(((((struct oC8_int *)(a4))->v)), 0x0, 0x36, (*(int *)0xC4B40CC));
    FUN_0c03744a(((((struct oCC_int *)(a4))->v)), ((*(signed char *)((a4 + 0x2))) + 0x1), 0x36, (*(int *)0xC4B40CC));
    *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x23F;
    *(volatile int *)((a4 + 0xC4));
    FUN_0c187798(0x23F);
    *(volatile int *)((a4 + 0xC4));
    *(volatile signed char *)((a4 + 0x2));
    FUN_0c18778c();
    *(unsigned short *)(((0x6 + ((((struct oC8_int *)(a4))->v))) + 0x0)) = t0;
    *(volatile int *)((a4 + 0xC8));
    FUN_0c187798(t0);
    *(volatile int *)((a4 + 0xC8));
    *(volatile signed char *)((a4 + 0x2));
    FUN_0c18778c();
    *(unsigned char *)((((((struct oCC_int *)(a4))->v)) + 0x0)) = 0x0;
    *(unsigned short *)((((((struct oCC_int *)(a4))->v)) + 0x6)) = t1;
    *(volatile int *)((a4 + 0xCC));
    FUN_0c187798(t1);
    *(volatile int *)((a4 + 0xCC));
    FUN_0c18778c();
    if ((int)(*(short *)((a4 + 0x1C))) <= (int)(*(int *)0xC2A3120)) {
        FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC2A30E4, 0xC2A30C0, (*(short *)((a4 + 0x1C))), ((*(int *)0xC2A3120)), 0x0);
        FUN_0c0588bc((((((struct oC8_int *)(a4))->v)) + 0x84), 0xC2A30E4, 0xC2A30CC, (*(short *)((a4 + 0x1C))), ((*(int *)0xC2A3120)), 0x0);
        FUN_0c0588bc((((((struct oCC_int *)(a4))->v)) + 0x84), 0xC2A30E4, 0xC2A30D8, (*(short *)((a4 + 0x1C))), ((*(int *)0xC2A3120)), 0x0);
    }
    if ((int)(*(short *)((a4 + 0x1C))) <= (int)(*(int *)0xC2A3120)) {
        FUN_0c058a6e((((((struct oC4_int *)(a4))->v)) + 0x14), 0xC2A3048, ((((*(signed char *)((a4 + 0x2))) << 2) << 2) + 0xC2A30F0), (*(short *)((a4 + 0x1C))), ((*(int *)0xC2A3120)), 0x0);
        FUN_0c058a6e((((((struct oC8_int *)(a4))->v)) + 0x14), 0xC2A3048, ((((*(signed char *)((a4 + 0x2))) << 2) << 2) + 0xC2A30F0), (*(short *)((a4 + 0x1C))), ((*(int *)0xC2A3120)), 0x0);
    }
    t0 = (((struct oC4_int *)(a4))->v);
    (((struct o80_uint *)(t0))->v) = (((((struct o80_int *)(t0))->v)) + 0x400);
    t0 = (((struct oC8_int *)(a4))->v);
    (((struct o80_uint *)(t0))->v) = (((((struct o80_int *)(t0))->v)) - 0x400);
    t0 = (((struct oCC_int *)(a4))->v);
    (((struct o80_uint *)(t0))->v) = (((((struct o80_int *)(t0))->v)) + 0x800);
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
    t1 = (short)(t0 + 0x1);
    if ((int)(short)(t0 + 0x1) > (int)(*(int *)0xC2A3120)) {
        (((struct o14_uchar *)(a4))->v) = 0x2;
        t1 = 0x2;
    }
    return t1;
}
