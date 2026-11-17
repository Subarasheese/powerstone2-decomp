/* game/unsorted: functions 0C01B990-0C01BB5C, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01cb7c(void);
int FUN_0c01cc56(int, int);
int FUN_0c01b990(void);

int FUN_0c01b990(void)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;

    FUN_0c01cb7c();
    FUN_0c01cc56(0xC, 0xC01A9FE);
    FUN_0c01cc56(0xF, 0xC01A9FE);
    t1 = FUN_0c01cc56(0x2E, 0xC01AA02);
    t2 = *(signed char *)0xC30541F;
    t3 = t2;
    if ((t2 == 0) && (t0 = *(signed char *)0xC54235E, t0 != 0)) {
        t3 = 0x4;
    }
    t0 = t1;
    t1 = t2;
    t2 = 0x0;
    for (;;) {
        if ((int)(unsigned char)t2 >= (int)0x4) {
            break;
        }
        t0 = (0xC20E0B0 + (((unsigned char)t3 << 2) << 1));
        t1 = (unsigned char)t2;
        t1 = (t1 << 1);
        t1 = (*(short *)((t1 + t0)));
        t0 = (FUN_0c01cc56(t1, 0xC01B4D4));
        t1 = t0;
        t0 = t2;
        *(unsigned char *)((t1 + 0x3)) = t0;
        t0 = 0x19;
        t2 = (t2 + 0x1);
        *(unsigned char *)((t1 + t0)) = t3;
    }
    if ((int)(*(short *)0xC309BCA) < (int)0xA) {
        t0 = *(signed char *)0xC30541F;
        if ((t0 != 0) && (t0 != 1)) {
            if (t0 != 2) {
                t0 = FUN_0c01cc56(0x2A, 0xC01B436);
                *(unsigned char *)((t0 + 0x3)) = 0x0;
                *(unsigned char *)((t0 + 0x2)) = 0x0;
                if ((((((*(signed char *)0xC309993) == 0)) ? 1 : 0) & (*(signed char *)0xC305420)) != 0) {
                    *(unsigned char *)((t0 + 0x2)) = 0x1;
                }
                t0 = FUN_0c01cc56(0x2A, 0xC01B436);
                *(unsigned char *)((t0 + 0x3)) = 0x2;
                *(unsigned char *)((t0 + 0x2)) = 0x0;
                if (((*(signed char *)0xC309993) & (*(signed char *)0xC305420)) != 0) {
                    *(unsigned char *)((t0 + 0x2)) = 0x1;
                }
                if ((*(signed char *)0xC305420) != 0) {
                    t0 = FUN_0c01cc56(0x2D, 0xC01B436);
                    *(unsigned char *)((t0 + 0x2)) = 0x2;
                    t1 = 0x2;
                    if ((*(signed char *)0xC309993) == 0) {
                        t1 = 0x0;
                    }
                    *(unsigned char *)((t0 + 0x3)) = t1;
                }
            } else {
                t0 = FUN_0c01cc56(0x2A, 0xC01B436);
                *(unsigned char *)((t0 + 0x3)) = 0x0;
                t1 = 0x1;
                if ((*(signed char *)0xC309993) != 0) {
                    t1 = 0x0;
                }
                *(unsigned char *)((t0 + 0x2)) = t1;
                t0 = FUN_0c01cc56(0x2A, 0xC01B436);
                *(unsigned char *)((t0 + 0x3)) = 0x2;
                t1 = 0x1;
                if ((*(signed char *)0xC309993) == 0) {
                    t1 = 0x0;
                }
                *(unsigned char *)((t0 + 0x2)) = t1;
                t0 = FUN_0c01cc56(0x2D, 0xC01B436);
                *(unsigned char *)((t0 + 0x2)) = 0x2;
                t1 = 0x0;
                if ((*(signed char *)0xC309993) != 0) {
                    t1 = 0x2;
                }
                *(unsigned char *)((t0 + 0x3)) = t1;
            }
        } else {
            t0 = FUN_0c01cc56(0x2A, 0xC01B436);
            *(unsigned char *)((t0 + 0x3)) = 0x0;
            *(unsigned char *)((t0 + 0x2)) = 0x0;
            t0 = FUN_0c01cc56(0x2A, 0xC01B436);
            *(unsigned char *)((t0 + 0x3)) = 0x2;
            *(unsigned char *)((t0 + 0x2)) = 0x0;
        }
    } else {
        t0 = FUN_0c01cc56(0x2D, 0xC01B436);
        *(unsigned char *)((t0 + 0x3)) = 0x0;
        *(unsigned char *)((t0 + 0x2)) = 0x0;
        t0 = FUN_0c01cc56(0x2D, 0xC01B436);
        *(unsigned char *)((t0 + 0x3)) = 0x2;
        *(unsigned char *)((t0 + 0x2)) = 0x0;
    }
    t0 = FUN_0c01cc56(0x1A, 0xC01B248);
    *(unsigned char *)((t0 + 0x3)) = 0x0;
    *(unsigned char *)((t0 + 0x2)) = 0x0;
    t0 = FUN_0c01cc56(0x1A, 0xC01B248);
    *(unsigned char *)((t0 + 0x3)) = 0x2;
    *(unsigned char *)((t0 + 0x2)) = 0x1;
    return 0x1;
}
