/* game/unsorted: functions 0C15E960-0C15EB12, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o2C_float { char p[0x2C]; float v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03733c(int, int, int);
int FUN_0c037498(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c15e960(int a4, int a5);

int FUN_0c15e960(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;

    if (a5 != 0) {
        if (a5 != 3) {
            if ((a5 != 1) && (a5 != 4)) {
                if ((a5 != 2) && (a5 != 5)) {
                    t0 = a5;
                    if (a5 == 6) {
                        t1 = FUN_0c03f444(0x5, 0x0, 0x1);
                        t2 = t1;
                        if (t1 != 0) {
                            *(unsigned char *)((t1 + 0x1)) = 0xFFFFFFFF;
                            *(unsigned int *)((t1 + 0x4)) = 0xC15E918;
                            (((struct oAC_ushort *)(t1))->v) = 0xF;
                            (((struct oA9_uchar *)(t1))->v) = 0x21;
                            *(unsigned char *)((t1 + 0x2)) = a5;
                            *(unsigned int *)((t1 + 0x10)) = a4;
                            (((struct oA4_uint *)(t1))->v) = (((((struct oC4_int *)(a4))->v)) + 0x28);
                            t2 = (FUN_0c037498(((((struct oC4_int *)(t1))->v)), 0x0, 0x57, (*(int *)0xC4B40CC)));
                        }
                        t0 = t2;
                    }
                    t1 = t0;
                } else {
                    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
                    t2 = t0;
                    if (t0 != 0) {
                        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
                        *(unsigned int *)((t0 + 0x4)) = 0xC15E918;
                        (((struct oAC_ushort *)(t0))->v) = 0xF;
                        (((struct oA9_uchar *)(t0))->v) = 0x21;
                        *(unsigned char *)((t0 + 0x2)) = a5;
                        *(unsigned int *)((t0 + 0x10)) = a4;
                        (((struct oA4_uint *)(t0))->v) = (((((struct oC4_int *)(a4))->v)) + 0x28);
                        t2 = (FUN_0c037498(((((struct oC4_int *)(t0))->v)), 0x0, 0x3A, (*(int *)0xC4B40CC)));
                    }
                    t1 = t2;
                }
                t0 = t1;
            } else {
                t1 = FUN_0c03f444(0x5, 0x0, 0x0);
                t2 = t1;
                if (t1 != 0) {
                    *(unsigned char *)((t1 + 0x1)) = 0xFFFFFFFF;
                    *(unsigned int *)((t1 + 0x4)) = 0xC15E918;
                    (((struct oAC_ushort *)(t1))->v) = 0xF;
                    (((struct oA9_uchar *)(t1))->v) = 0x21;
                    *(unsigned char *)((t1 + 0x2)) = a5;
                    *(unsigned int *)((t1 + 0x10)) = a4;
                    (((struct oA4_uint *)(t1))->v) = (((((struct oC4_int *)(a4))->v)) + 0x28);
                    (((struct o2C_float *)(t1))->v) = 100.0f;
                    t2 = 0x2C;
                }
                t0 = t2;
            }
            return t0;
        }
        t0 = FUN_0c03f444(0x5, 0x0, 0x2);
        if (t0 != 0) {
            *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
            *(unsigned int *)((t0 + 0x4)) = 0xC15E918;
            (((struct oAC_ushort *)(t0))->v) = 0xF;
            (((struct oA9_uchar *)(t0))->v) = 0x21;
            *(unsigned char *)((t0 + 0x2)) = a5;
            *(unsigned int *)((t0 + 0x10)) = a4;
            (((struct oA4_uint *)(t0))->v) = (((((struct oC4_int *)(a4))->v)) + 0x28);
            return FUN_0c03733c(t0, 0x56, (*(int *)0xC4B40CC));
        }
        return t0;
    }
    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
    t1 = t0;
    if (t0 == 0) {
    } else {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC15E918;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        *(unsigned char *)((t0 + 0x2)) = a5;
        *(unsigned int *)((t0 + 0x10)) = a4;
        (((struct oA4_uint *)(t0))->v) = (((((struct oC4_int *)(a4))->v)) + 0x28);
        t2 = (((struct oC4_int *)(t0))->v);
        FUN_0c037498(t2, 0x0, 0x56, (*(int *)0xC4B40CC));
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        *(unsigned short *)((t2 + 0x6)) = 0xF;
        t1 = 0xF;
    }
    return t1;
}
