/* game/system: functions 0C0100A2-0C011972, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o6_short { char p[0x6]; short v; };
struct o6_ushort { char p[0x6]; unsigned short v; };
struct o8_uint { char p[0x8]; unsigned int v; };
int sys_load_file_adx(int, int, int, int);
int FUN_0c011974(int);
int FUN_0c0122e4(int);
int FUN_0c012cb8(int);
int FUN_0c015944(void);
int FUN_0c018968(void);
int FUN_0c019a06(int);
int FUN_0c01a024(void);
int FUN_0c01c392(void);
int FUN_0c01c714(int, int, int);
int FUN_0c01cd2c(int);
int FUN_0c01cd54(int);
int FUN_0c01ce30(void);
int FUN_0c01e96a(void);
int FUN_0c01e9e4(void);
int FUN_0c02ae40(int);
int FUN_0c02af32(void);
int FUN_0c02b182(int);
int FUN_0c02d88a(void);
int FUN_0c036de8(int);
int FUN_0c038548(int);
int FUN_0c038e88(int);
int FUN_0c03ea04(int, int);
int FUN_0c03f40c(int);
int FUN_0c0573c0(int, int, int);
int FUN_0c0573cc(int, int, int);
int FUN_0c05aab6(int, int);
int FUN_0c05b048(int, int);
int FUN_0c05b2b0(void);
int FUN_0c05f7a0(int);
int FUN_0c05f7e2(int);
int FUN_0c1213d8(int);
int nlLocate(int, int);
int dbg_printf(int, ...);
int memset(int, int, int);
int gdFsReinit(void);
int FUN_0c2b0d2c(void);
int sys_load_file(int a4, int a5, int a6, int a7);
int FUN_0c0102c4(void);
int FUN_0c0102da(void);
void FUN_0c010444(void);
void FUN_0c010448(void);
void FUN_0c010450(void);
int FUN_0c010f0a(void);
int FUN_0c011492(void);
int FUN_0c011638(void);
int FUN_0c0117a0(int a4);
int FUN_0c0117c4(void);

int sys_load_file(int a4, int a5, int a6, int a7)
{
    int stk[2];
    register int t0;
    register int t2;
    int t6;
    register int t5;

    *(unsigned int *)(((int)stk + 4)) = a4;
    t0 = *(int *)(((a5 << 2) + 0xC20AFD8));
    (((struct o0_uint *)0xC304404)->v) = t0;
    for (;;) {
        t2 = sys_load_file_adx(t0, (*(int *)(((int)stk + 4))), ((int)stk + 0), a7);
        if (t2 == 0) {
            return (*(int *)(((int)stk + 0)));
        }
        (((struct o4_uint *)0xC304404)->v) = (((((struct o4_int *)0xC304404)->v)) + 0x1);
        t6 = t5;
        for (;;) {
            t6 = (gdFsReinit());
            if (t6 == 0) {
                break;
            }
            if ((t6 != -23) && ((t6 != -5) && (t6 != -33))) continue;
            FUN_0c05b2b0();
            FUN_0c02d88a();
            for (;;) {
            }
        }
    }
}

int FUN_0c0102c4(void)
{
    register int t0;

    t0 = memset(0xC30EF64, 0x0, 0x18);
    *(unsigned char *)0xC30EFA5 = 0x1;
    return t0;
}

int FUN_0c0102da(void)
{
    register int t0;
    register int t9;
    register int t11;
    register int t28;
    register int t45;

    t0 = *(signed char *)0xC30EF64;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            if ((unsigned char)t0 != 2) {
                if ((unsigned char)t0 != 3) {
                    if ((unsigned char)t0 == 4) {
                        (((struct o0_uint *)0xC30EF64)->v) = 0x0;
                        (((struct o4_uint *)0xC30EF64)->v) = 0x0;
                        FUN_0c01e9e4();
                        FUN_0c02af32();
                        FUN_0c05f7e2(0x8);
                        return FUN_0c1213d8(((*(signed char *)0xC30EFA5) + 0x1));
                    }
                    return (unsigned char)t0;
                }
                (((struct o0_uint *)0xC30EF64)->v) = 0x201;
                (((struct o4_uint *)0xC30EF64)->v) = 0x0;
                (((struct o0_uchar *)0xC30EFA3)->v) = 0x0;
                FUN_0c01e9e4();
                FUN_0c036de8(0x1F);
                FUN_0c03ea04(0x3, 0x0);
                t9 = *(signed char *)0xC30EFA5;
                t11 = (FUN_0c02ae40(0x2));
                if (t9 == 0) {
                    t11 = FUN_0c05b048(0x1E, 0x0);
                    (((struct o2_uchar *)0xC30EFA3)->v) = 0x1;
                }
                return t11;
            }
            (((struct o0_uint *)0xC30EF64)->v) = 0x0;
            (((struct o4_uint *)0xC30EF64)->v) = 0x0;
            FUN_0c01e9e4();
            FUN_0c02af32();
            FUN_0c05f7a0(0x5);
            return FUN_0c1213d8(((*(signed char *)0xC30EFA5) + 0x1));
        }
        FUN_0c01ce30();
        if ((*(signed char *)0xC30B6FC) != 0) {
            FUN_0c01e96a();
        }
        t28 = ((int (*)(void))((*(int *)((0xC20B820 + ((unsigned char)(*(signed char *)0xC30EF65) << 2))))))();
    } else {
        (((struct o0_uchar *)0xC30EF64)->v) = ((*(signed char *)0xC30EF64) + 0x1);
        FUN_0c2b0d2c();
        *(unsigned char *)0xC30B6FC = 0x0;
        (((struct o0_uchar *)0xC30EFA3)->v) = 0x0;
        *(unsigned char *)0xC30A403 = 0x0;
        FUN_0c01ce30();
        if ((*(signed char *)0xC30B6FC) != 0) {
            FUN_0c01e96a();
        }
        t45 = ((int (*)(void))((*(int *)((0xC20B820 + ((unsigned char)(*(signed char *)0xC30EF65) << 2))))))();
    }
    FUN_0c03f40c(0x5);
    FUN_0c038548(0x5);
    FUN_0c038e88(0x5);
    FUN_0c03f40c(0x8);
    FUN_0c038e88(0x8);
    return FUN_0c02b182(0x0);
}

void FUN_0c010444(void)
{
    
}

void FUN_0c010448(void)
{
    *(unsigned char *)0xC30EF64 = 0x2;
}

void FUN_0c010450(void)
{
    *(unsigned char *)0xC30EF64 = 0x3;
}




int FUN_0c0117a0(int a4)
{
    register int t0;
    register int t1;

    t0 = 0x0;
    t1 = a4;
    for (;;) {
        if ((unsigned char)(*(signed char *)((t1 + 0x0))) != (unsigned char)(*(signed char *)((0xC309998 + t0)))) {
            break;
        }
        t0 = (t0 + 0x1);
        t1 = (t1 + 0x1);
        if ((int)t0 >= (int)0x6) {
            t0 = 0x0;
            return t0;
        }
    }
    return 0x1;
}

int FUN_0c0117c4(void)
{
    register int t0;
    register int t1;
    register int t29;
    register int t31;
    register int t32;
    register int t34;
    register int t38;
    register int t47;
    register int t57;

    t0 = *(signed char *)0xC30EF66;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            t1 = *(signed char *)0xC30EF67;
            if ((unsigned char)t1 != 0) {
                if ((unsigned char)t1 != 1) {
                    if ((unsigned char)t1 != 2) {
                        if ((unsigned char)t1 != 3) {
                            if ((unsigned char)t1 != 4) {
                            } else {
                                FUN_0c01a024();
                            }
                        } else {
                            FUN_0c01c392();
                        }
                    } else {
                        FUN_0c018968();
                    }
                } else {
                    FUN_0c015944();
                }
            } else {
                FUN_0c011974(0xC30EF66);
            }
        } else {
            (((struct o0_uchar *)0xC30EF66)->v) = ((*(signed char *)0xC30EF66) + 0x1);
            FUN_0c01e9e4();
            FUN_0c03ea04(0x3, 0x0);
            (((struct o8_uint *)0xC542440)->v) = 0xFF000000;
            (((struct o4_uint *)0xC542440)->v) = 0xFF000000;
            (((struct o0_uint *)0xC542440)->v) = 0xFF000000;
        }
    } else {
        t29 = FUN_0c01cd2c(0x2000);
        if ((short)t29 != 0) {
            t31 = *(signed char *)0xC30EF67;
            t32 = (t31 - 1);
            if (t31 == 0) {
                t32 = 0x4;
            }
            (((struct o1_uchar *)0xC30EF66)->v) = t32;
        } else {
            t34 = FUN_0c01cd2c(0x1000);
            if ((short)t34 != 0) {
                t38 = 0x0;
                if ((unsigned char)(*(signed char *)0xC30EF67) == 4) {
                } else {
                    t38 = ((*(signed char *)0xC30EF67) + 0x1);
                }
                (((struct o1_uchar *)0xC30EF66)->v) = t38;
            }
        }
        nlLocate(0x3, 0xA);
        dbg_printf(0xC1A5BBC);
        t47 = FUN_0c01cd2c(0x101);
        if ((short)t47 != 0) {
            FUN_0c05aab6(((short)(short)t47 - 1), 0x3);
            (((struct o0_uchar *)0xC30EF66)->v) = ((*(signed char *)0xC30EF66) + 0x1);
        }
    }
    t57 = FUN_0c01cd54(0x141);
    if ((short)t57 != 0) {
        FUN_0c05aab6(((short)(short)t57 - 1), 0x4);
        FUN_0c05f7a0(0x5);
        return FUN_0c1213d8(0x1);
    }
    return (short)t57;
}
