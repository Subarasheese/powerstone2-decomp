/* game/unsorted: functions 0C0D0110-0C0D021E, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o24_short { char p[0x24]; short v; };
struct o423_uchar { char p[0x423]; unsigned char v; };
struct o4_int { char p[0x4]; int v; };
int FUN_0c0d0110(int a4, int a5);
int FUN_0c0d01ba(int a4, int a5, int a6);
int FUN_0c0d01f2(int a4);

int FUN_0c0d0110(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = 0x0;
    for (;;) {
        if ((int)t0 >= (int)((((struct o0_int *)0xC540F90)->v))) {
            *(unsigned char *)((((((a5 << 1) + a5) << 2) + 0xC540FA4) + 0x0)) = 0x0;
            *(unsigned char *)((((((a5 << 1) + a5) << 2) + 0xC540FA4) + 0x1)) = 0xFFFFFFFF;
            *(unsigned int *)((((((a5 << 1) + a5) << 2) + 0xC540FA4) + 0x4)) = 0x0;
            *(unsigned short *)((((((a5 << 1) + a5) << 2) + 0xC540FA4) + 0x8)) = 0x0;
            return 0x0;
        }
        if ((*(int *)(((0xC540F18 + (t0 << 2)) + 0x0))) == (*(signed char *)((((((a5 << 1) + a5) << 2) + 0xC540FA4) + 0x1)))) {
            break;
        }
        t0 = (t0 + 0x1);
    }
    (((struct o0_uint *)0xC540F90)->v) = (((((struct o0_int *)0xC540F90)->v)) - 1);
    t1 = (((struct o0_int *)0xC540F90)->v);
    t2 = *(int *)((((t1 << 2) + 0xC540F18) + 0x0));
    *(unsigned int *)((((t1 << 2) + 0xC540F18) + 0x0)) = (*(int *)(((0xC540F18 + (t0 << 2)) + 0x0)));
    *(unsigned int *)(((0xC540F18 + (t0 << 2)) + 0x0)) = t2;
    t1 = *(int *)((((((((struct o0_int *)0xC540F90)->v)) << 2) + 0xC540F18) + 0x0));
    t2 = (0xC540F18 + (t0 << 2));
    t3 = ((((struct o0_int *)0xC540F90)->v));
    t4 = (t0 << 2);
    for (;;) {
        if ((int)t3 >= (int)(((((struct o4_int *)0xC540F90)->v)) - 1)) {
            break;
        }
        t4 = t3;
        t4 = (t4 << 2);
        t4 = (t4 + 0xC540F18);
        t2 = (*(int *)((t4 + 0x4)));
        t3 = (t3 + 0x1);
        *(unsigned int *)((t4 + 0x0)) = t2;
    }
    *(unsigned int *)(((((((((struct o4_int *)0xC540F90)->v)) - 1) << 2) + 0xC540F18) + 0x0)) = t1;
    *(unsigned char *)((((((a5 << 1) + a5) << 2) + 0xC540FA4) + 0x0)) = 0x0;
    *(unsigned char *)((((((a5 << 1) + a5) << 2) + 0xC540FA4) + 0x1)) = 0xFFFFFFFF;
    *(unsigned int *)((((((a5 << 1) + a5) << 2) + 0xC540FA4) + 0x4)) = 0x0;
    *(unsigned short *)((((((a5 << 1) + a5) << 2) + 0xC540FA4) + 0x8)) = 0x0;
    return 0x0;
}

int FUN_0c0d01ba(int a4, int a5, int a6)
{
    register int t1;

    if ((*(signed char *)((a4 + 0x423))) != -1) {
        t1 = *(signed char *)((a4 + 0x423));
        *(unsigned char *)((((((t1 << 1) + t1) << 2) + 0xC540FA4) + 0x0)) = 0x1;
        *(unsigned int *)((((((t1 << 1) + t1) << 2) + 0xC540FA4) + 0x4)) = a5;
        *(unsigned short *)((((((t1 << 1) + t1) << 2) + 0xC540FA4) + 0x8)) = ((((struct o24_short *)(a5))->v));
        (((struct o423_uchar *)(a5))->v) = (*(signed char *)((a4 + 0x423)));
        (((struct o423_uchar *)(a4))->v) = 0xFFFFFFFF;
    } else {
        (((struct o423_uchar *)(a5))->v) = 0xFFFFFFFF;
    }
    return 0x423;
}

int FUN_0c0d01f2(int a4)
{
    register int t0;
    register int t3;

    t0 = *(signed char *)0xC540F9A;
    if ((signed char)t0 == 7) {
        *(unsigned int *)0xC472668 = ((*(int *)0xC472668) + 0x1);
        t3 = (signed char)t0;
    } else {
        *(unsigned char *)((((signed char)t0 + 0xC540F9B) + 0x0)) = a4;
        *(unsigned char *)0xC540F9A = ((*(signed char *)0xC540F9A) + 0x1);
        t3 = 0x622;
    }
    return t3;
}
