/* game/unsorted: functions 0C118810-0C118EE4, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c05f22c(int);
int FUN_0c1171f0(int);
int FUN_0c118d7a(int a4, int a5, int a6, int a7);
int FUN_0c118e94(void);

int FUN_0c118d7a(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x14));
    switch (t0) {
    case 0:
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x0;
        (((struct oAC_ushort *)(a4))->v) = 0x1F;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        FUN_0c1171f0(a4);
        t0 = FUN_0c05f22c(0x200);
        if (t0 != 0) {
            (((struct oA8_uchar *)(a4))->v) = ((-(*(signed char *)((a4 + 0xA8)))) + 0x1);
            (((struct o4_uint *)0xC473C9C)->v) = (0x1 - ((((struct o4_int *)0xC473C9C)->v)));
        }
        if ((unsigned char)(*(signed char *)0xC541F43) == 1) {
            FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0xD, 0xD, (*(int *)0xC4B410C));
        }
        if ((unsigned char)(*(signed char *)0xC541F43) == 2) {
            t0 = *(signed char *)0xC541F44;
            t1 = *(int *)0xC4B410C;
            if ((unsigned char)t0 != 0) {
                if ((unsigned char)t0 != 1) {
                    if ((unsigned char)t0 != 2) {
                        if ((unsigned char)t0 != 3) {
                            if ((unsigned char)t0 != 4) {
                            } else {
                                FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x5, 0xC, t1);
                            }
                        } else {
                            FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0xE, 0x4, t1);
                        }
                    } else {
                        t0 = 0xD;
                        t2 = 0xD;
                        if (((((struct o0_int *)0xC473C9C)->v)) == 1) {
                            t0 = 0x7;
                            t2 = 0x9;
                        }
                        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), t0, t2, t1);
                    }
                } else {
                    FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0xD, 0xD, t1);
                }
            } else {
                FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0xD, 0xD, t1);
            }
        }
        break;
    case 1:
        t0 = FUN_0c05f22c(0x200);
        if (t0 != 0) {
            (((struct oA8_uchar *)(a4))->v) = ((-(*(signed char *)((a4 + 0xA8)))) + 0x1);
            (((struct o4_uint *)0xC473C9C)->v) = (0x1 - ((((struct o4_int *)0xC473C9C)->v)));
        }
        if ((unsigned char)(*(signed char *)0xC541F43) == 1) {
            FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0xD, 0xD, (*(int *)0xC4B410C));
        }
        if ((unsigned char)(*(signed char *)0xC541F43) == 2) {
            t0 = *(signed char *)0xC541F44;
            t1 = *(int *)0xC4B410C;
            if ((unsigned char)t0 != 0) {
                if ((unsigned char)t0 != 1) {
                    if ((unsigned char)t0 != 2) {
                        if ((unsigned char)t0 != 3) {
                            if ((unsigned char)t0 != 4) {
                            } else {
                                FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x5, 0xC, t1);
                            }
                        } else {
                            FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0xE, 0x4, t1);
                        }
                    } else {
                        t0 = 0xD;
                        t2 = 0xD;
                        if (((((struct o0_int *)0xC473C9C)->v)) == 1) {
                            t0 = 0x7;
                            t2 = 0x9;
                        }
                        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), t0, t2, t1);
                    }
                } else {
                    FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0xD, 0xD, t1);
                }
            } else {
                FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0xD, 0xD, t1);
            }
        }
        break;
    case 99:
        (((struct o4_uint *)0xC473C9C)->v) = 0x0;
        FUN_0c03f346(a4, a5, a6, a7);
        break;
    }
    t0 = *(signed char *)0xC541F44;
    t1 = (unsigned char)t0;
    if ((unsigned char)t0 == 5) {
        (((struct oA8_uchar *)(a4))->v) = 0x0;
        (((struct o4_uint *)0xC473C9C)->v) = 0x0;
        t1 = 0xA8;
    }
    return t1;
}

int FUN_0c118e94(void)
{
    register int t0;

    t0 = FUN_0c03f444(0x8, 0x0, 0x14);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC118D7A;
        return t0;
    }
    return 0x0;
}
