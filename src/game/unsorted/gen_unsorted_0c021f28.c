/* game/unsorted: functions 0C021F28-0C022006, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
int FUN_0c018e44(void);
int FUN_0c01cd2c(int);
int FUN_0c0573e6(void);
int FUN_0c021f28(void);

int FUN_0c021f28(void)
{
    register int t0;
    register int t1;
    int t2;
    register int t3;
    int t4;
    int t5;

    if (((*(int *)0xC30A3F8) == 0) && ((t0 = *(signed char *)0xC30A51B, t0 != 0) && ((t1 = *(signed char *)0xC30EFA3, t1 == 0) && (t2 = *(signed char *)0xC30542B, t2 != 0)))) {
        t0 = FUN_0c0573e6();
        if ((t0 == 0) && ((t3 = *(signed char *)0xC30A51A, t3 == 0) && (t4 = *(short *)0xC30A51C, t4 == 0))) {
            t0 = FUN_0c01cd2c(0x200);
            if ((short)t0 != 0) {
                FUN_0c018e44();
            }
        }
    }
    t0 = *(signed char *)0xC30A51A;
    t1 = (signed char)t0;
    if (((signed char)t0 == 0) && (t5 = *(short *)0xC30A51C, t5 != 0)) {
        t2 = (signed char)t0;
        if ((*(short *)0xC30A51C) == 3) {
            (((struct o0_uchar *)0xC305400)->v) = (*(signed char *)0xC309858);
            (((struct o1_uchar *)0xC305400)->v) = (*(signed char *)0xC309859);
            (((struct o2_uchar *)0xC305400)->v) = (*(signed char *)0xC30985A);
            (((struct o3_uchar *)0xC305400)->v) = (*(signed char *)0xC30985B);
            (((struct o0_uchar *)0xC309859)->v) = 0x9;
            (((struct o1_uchar *)0xC309859)->v) = 0x0;
            (((struct o2_uchar *)0xC309859)->v) = 0x0;
            (((struct o3_uchar *)0xC309859)->v) = 0x0;
            t2 = 0x1;
        }
        t0 = t2;
        if ((*(short *)0xC30A51C) == 1) {
            (((struct o0_uchar *)0xC305400)->v) = (*(signed char *)0xC309858);
            (((struct o1_uchar *)0xC305400)->v) = (*(signed char *)0xC309859);
            (((struct o2_uchar *)0xC305400)->v) = (*(signed char *)0xC30985A);
            (((struct o3_uchar *)0xC305400)->v) = (*(signed char *)0xC30985B);
            (((struct o0_uchar *)0xC309859)->v) = 0x9;
            (((struct o1_uchar *)0xC309859)->v) = 0x1;
            (((struct o2_uchar *)0xC309859)->v) = 0x0;
            (((struct o3_uchar *)0xC309859)->v) = 0x0;
            t0 = 0x1;
        }
        t1 = t0;
    }
    return t1;
}
