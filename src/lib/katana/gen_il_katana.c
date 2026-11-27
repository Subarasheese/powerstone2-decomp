/* Straight-line functions with calls and guards (batch gen_il): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_short { short v; };
struct o0_uchar { unsigned char v; };
struct o0_ushort { unsigned short v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_uchar { char p[0x10]; unsigned char v; };
struct o11_uchar { char p[0x11]; unsigned char v; };
struct o118_int { char p[0x118]; int v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o2_short { char p[0x2]; short v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o2_ushort { char p[0x2]; unsigned short v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o3717_uchar { char p[0x3717]; unsigned char v; };
struct o3718_uchar { char p[0x3718]; unsigned char v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o3B_uchar { char p[0x3B]; unsigned char v; };
struct o4_float { char p[0x4]; float v; };
struct o4_short { char p[0x4]; short v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4C_uchar { char p[0x4C]; unsigned char v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o8_short { char p[0x8]; short v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
int FUN_0c017e48(void);
int FUN_0c017e68(void);
int FUN_0c017ed8(void);
int FUN_0c037bf6(int, int, int);
int FUN_0c0573cc(int, int, int);
int FUN_0c059ce8(int);
int FUN_0c05aab6(int, int);
int FUN_0c05add4(int);
int FUN_0c05b052(int, int);
int FUN_0c05f22c(int);
int FUN_0c07043c(int, float, float, float, float);
int FUN_0c07ce58(int, int);
int FUN_0c07d774(int);
int FUN_0c07d838(int, int, int, int);
int FUN_0c07d9dc(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07ebe6(int);
int FUN_0c07f18c(int);
int FUN_0c07fea4(int, int);
int FUN_0c080320(int, float);
extern int FUN_0c085cac();
int FUN_0c0a3058(int, int, int, int);
int FUN_0c0fb9a6(void);
int FUN_0c0fd0e8(int);
int FUN_0c0fddea(int);
int FUN_0c0fe000(int);
int FUN_0c104cc8(int);
int FUN_0c105384(int, int);
int FUN_0c10de48(int);
int FUN_0c117944(int, ...);
int FUN_0c117d54(void);
int FUN_0c117e76(void);
int FUN_0c11e28e(int);
int FUN_0c12db58(int, int);
int FUN_0c12df3c(int, int);
int FUN_0c12f304(int, int, int, int);
int FUN_0c12f69c(int, int);
int FUN_0c2cfda6(void);
int FUN_0c2d0a30(void);
int FUN_0c2db8f4(int, int, int);
int FUN_0c2db908(int, int, int);
int FUN_0c2e7200(int);
int FUN_0c2e732c(void);
int FUN_0c2e76c8(int, int, int, int);
int FUN_0c2f7c34(int);
int fmMngClearBuf(int, int);
int fmMngReadSctAllData(int);
int strncpy(int, int, int);
int thunk_FUN_0c0167cc(int, int, int, int);
int thunk_FUN_0c2c2156(int, int, int);
int FUN_0c09c74c(int a4);
int FUN_0c10e716(int a4);
int FUN_0c09ef24(int a4, int a5, int a6);
int FUN_0c2f78e0(void);
int FUN_0c0fe02a(int a4, int a5, int a6, int a7);
int FUN_0c2cfbd0(int a4);
int FUN_0c0a71e2(int a4, int a5, int a6);
int FUN_0c09d38c(int a4);
int FUN_0c09d78a(int a4);
int FUN_0c069a04(int a4, int a5, int a6, int a7);
int fmMngFormat(int a4, int a5, int a6);
int FUN_0c0169cc(int a4, int a5, int a6, int a7);
int FUN_0c11f114(void);


int FUN_0c2f78e0(void)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    t1 = (((struct o4_short *)0xC8E0AE6)->v);
    t2 = *(int *)0xC8E0AFC;
    t3 = (((struct o0_short *)0xC8E099C)->v);
    if ((*(short *)(((((unsigned short)t1 << 1) + t2) + 0x0))) == 0) {
        if (((((struct o2_short *)0xC8E0AE6)->v)) == 0) {
            (((struct o4_ushort *)0xC8E0AE6)->v) = (t3 + ((((struct o8_short *)0xC8E099C)->v)));
            (((struct o2_ushort *)0xC8E0AE6)->v) = 0x1;
        } else {
            (((struct o3B_uchar *)0xC8E099C)->v) = t3;
            t4 = FUN_0c2f7c34(0xC8E09D7);
            (((struct o2_ushort *)0xC8E0AE6)->v) = 0x1;
            (((struct o4_ushort *)0xC8E0AE6)->v) = (((((struct o0_short *)0xC8E099C)->v)) + ((((struct o8_short *)0xC8E099C)->v)));
            t5 = t4;
        }
        t4 = t5;
    } else {
        t5 = (*(short *)(((((unsigned short)t1 << 1) + t2) + 0x0)));
        for (;;) {
            if ((unsigned char)(*(signed char *)(((*(int *)0xC8E0AF4) + (unsigned short)t5))) == (unsigned short)t3) {
                if (((unsigned short)t5 != (unsigned short)((((struct o0_short *)0xC8E0AE6)->v))) && (t0 = *(signed char *)0xC8E09D6, t0 == 0)) {
                    (((struct o2_ushort *)0xC8E0AE6)->v) = (((((struct o2_short *)0xC8E0AE6)->v)) + 0x1);
                    (((struct o4_ushort *)0xC8E0AE6)->v) = t5;
                    return (unsigned short)t5;
                }
                (((struct o4_ushort *)0xC8E0AE6)->v) = (t3 + ((((struct o8_short *)0xC8E099C)->v)));
                (((struct o2_ushort *)0xC8E0AE6)->v) = 0x1;
                (((struct o0_ushort *)0xC8E0AE6)->v) = 0x0;
                return (unsigned short)t5;
            }
            t5 = (*(short *)(((*(int *)0xC8E0B00) + ((unsigned short)t5 << 1))));
            if ((unsigned short)t5 == 0) {
                break;
            }
        }
        (((struct o3B_uchar *)0xC8E099C)->v) = t3;
        t0 = FUN_0c2f7c34(0xC8E09D7);
        (((struct o2_ushort *)0xC8E0AE6)->v) = 0x1;
        (((struct o4_ushort *)0xC8E0AE6)->v) = (((((struct o0_short *)0xC8E099C)->v)) + ((((struct o8_short *)0xC8E099C)->v)));
        t4 = t0;
    }
    return t4;
}


int FUN_0c2cfbd0(int a4)
{
    int stk[5];
    register int t34;

    if ((unsigned char)a4 == 0) {
        t34 = (FUN_0c2d0a30());
    } else {
        if ((unsigned char)a4 == 1) {
            FUN_0c2e732c();
            FUN_0c2e76c8((*(signed char *)0xC8D25BE), 0xA, 0x3, ((int)stk + 0));
            FUN_0c2e7200(((int)stk + 0));
            FUN_0c2e7200(0xC3003A0);
            FUN_0c2e76c8((*(signed char *)0xC8D25BF), 0xA, 0x2, ((int)stk + 0));
            FUN_0c2e7200(((int)stk + 0));
            FUN_0c2e7200(0xC30039C);
            FUN_0c2e76c8((*(signed char *)0xC8D25C0), 0xA, 0x2, ((int)stk + 0));
            FUN_0c2e7200(((int)stk + 0));
            FUN_0c2e7200(0xC30039C);
            FUN_0c2e76c8((*(signed char *)0xC8D25C1), 0xA, 0x2, ((int)stk + 0));
            FUN_0c2e7200(((int)stk + 0));
            t34 = (FUN_0c2e732c());
        } else {
            if ((unsigned char)a4 == 75) {
                t34 = (FUN_0c2cfda6());
            } else {
                *(unsigned char *)0xC8D6498 = 0x2;
                t34 = (unsigned char)a4;
            }
        }
    }
    return t34;
}


int fmMngFormat(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t3;
    register int t4;

    t0 = *(int *)0xC303D78;
    t1 = 0xFFFFFFF5;
    if (t0 == 0) {
    } else {
        t1 = 0xFFFFFFFA;
        if ((a4 == 0) || (a4 == 1)) {
            t3 = FUN_0c2db908((*(int *)((t0 + 0x4))), a5, a6);
            t0 = 0xFFFFFFFD;
            if (t3 != 0) {
            } else {
                t3 = *(int *)0xC303D78;
                thunk_FUN_0c2c2156(0xC2FFC4C, (t3 + 0x34), 0x10);
                *(unsigned short *)(((*(int *)0xC303D78) + 0x2)) = a4;
                (((struct o11_uchar *)((t3 + 0x34)))->v) = a4;
                (((struct o10_uchar *)((t3 + 0x34)))->v) = (*(signed char *)(((*(int *)0xC303D78) + 0x0)));
                t4 = FUN_0c2db8f4((*(int *)(((*(int *)0xC303D78) + 0x4))), (t3 + 0x34), 0x12);
                t3 = 0xFFFFFFFE;
                if (t4 != 18) {
                } else {
                    fmMngClearBuf((*(int *)(((*(int *)0xC303D78) + 0xC))), (*(int *)(((*(int *)0xC303D78) + 0x8))));
                    t4 = fmMngReadSctAllData((*(int *)0xC303D78));
                    t3 = 0x0;
                    if (t4 != 0) {
                        t3 = t4;
                    }
                }
                t0 = t3;
            }
            t1 = t0;
        }
    }
    return t1;
}


