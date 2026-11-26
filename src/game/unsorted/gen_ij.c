/* Straight-line functions with calls and guards (batch gen_ij): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03f346(int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c0b4b20(void);
int FUN_0c0b5398(int);
int FUN_0c0b562a(int, int, int, int);
int FUN_0c0b6a18(int);
int FUN_0c0b711a(int);
int FUN_0c1171f0(int);
int FUN_0c1173dc(int, int, int, int);
int FUN_0c2db8cc(int, int, int);
int FUN_0c2db8e0(int, int, int);
int fmMngClearBuf(int, int);
int fmMngReadSctAllData(int);
int thunk_FUN_0c0385e0(int);
int thunk_FUN_0c2c2124(int, int, int);
int FUN_0c1118ac(int a4);
int FUN_0c0b551e(int a4);
int fmMngInit(int a4, int a5, int a6);

int FUN_0c1118ac(int a4)
{
    int t0;
    register int t1;
    register int t2;

    if (((int)(*(int *)(((*(int *)0xC4739A4) + 0x38))) >= 0) && (t0 = *(signed char *)((a4 + 0x14)), t0 != 0)) {
        (((struct o14_uchar *)(a4))->v) = (*(signed char *)(((*(int *)((a4 + 0x10))) + 0x14)));
    }
    t0 = *(signed char *)((a4 + 0x14));
    t1 = *(int *)0xC4739A4;
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        return t0;
                    }
                    t2 = FUN_0c058a6e((0xB0 + a4), 0xC29106C, 0xC29107C, (*(int *)((t1 + 0x38))), ((*(int *)((t1 + 0x3C)))), 0x0);
                    if ((int)(*(int *)(((*(int *)0xC4739A4) + 0x38))) < 0) {
                        return FUN_0c03f346(a4);
                    }
                    return t2;
                }
                return (FUN_0c058a6e((0xB0 + a4), 0xC29106C, 0xC29107C, (*(int *)((t1 + 0x38))), ((*(int *)((t1 + 0x3C)))), 0x0));
            }
            return (FUN_0c058a6e((0xB0 + a4), 0xC29106C, 0xC29107C, (*(int *)((t1 + 0x38))), ((*(int *)((t1 + 0x3C)))), 0x0));
        }
        return t0;
    }
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0x61F;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    (((struct o14_uchar *)(a4))->v) = (*(signed char *)(((*(int *)((a4 + 0x10))) + 0x14)));
    t0 = 0x0;
    if ((int)(*(int *)((0xC473C74 + ((*(int *)(((*(int *)0xC4739A4) + 0x34))) << 2)))) >= 0) {
        t0 = (*(int *)((((*(int *)((0xC473C74 + ((*(int *)(((*(int *)0xC4739A4) + 0x34))) << 2)))) << 2) + 0xC474410)));
    }
    *(unsigned short *)((a4 + 0x1C)) = t0;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)(0xC291350); }
    FUN_0c1171f0(a4);
    return FUN_0c1173dc(((((struct oC4_int *)(a4))->v)), (*(short *)((a4 + 0x1C))), 0x0, (*(int *)0xC4B410C));
}

int FUN_0c0b551e(int a4)
{
    int stk[10];
    register int t0;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t13;
    register int t16;
    register int t31;
    register int t1;
    register int t2;
    register float u8;
    register int t23;
    register int t25;

    (((struct o30_float *)(a4))->v) = 0.0f;
    (((struct o2C_float *)(a4))->v) = 0.0f;
    (((struct o28_float *)(a4))->v) = 0.0f;
    t0 = 0xC0B55F8;
    t3 = a4;
    t4 = ((0x38F8 + a4) + 0xC);
    t5 = 0x0;
    t6 = (0x38F8 + a4);
    t7 = 0x0;
    for (;;) {
        if (!((*(float *)(((((0x38F8 + a4) + 0xC) + (t7 << 2)) + 0x0))) > 0.0f)) {
            t2 = (0x38F8 + a4);
            t2 = (t2 + (t7 << 2));
            *(float *)((t2 + 0x0)) = ((*(float *)((t2 + 0x0))) + 0.416666657f);
            u8 = (*(float *)((((0x38F8 + a4) + (t7 << 2)) + 0x0)));
            t0 = (FUN_0c0b4b20());
            t2 = 0xC25D654;
            t0 = (t0 << 2);
            t1 = t7;
            t1 = (t1 << 2);
            t13 = *(int *)((t2 + t0));
            t1 = (t1 << 2);
            t0 = 0x8;
            t1 = (t1 + t13);
            if (u8 > (*(float *)((t1 + t0)))) {
                t0 = (FUN_0c0b4b20());
                t1 = 0xC25D654;
                t0 = (t0 << 2);
                t16 = *(int *)((t1 + t0));
                t0 = 0x8;
                *(float *)((t6 + 0x0)) = (*(float *)(((t16 + t5) + t0)));
            } else {
                t23 = t2;
            }
        } else {
            *(float *)((t4 + 0x0)) = ((*(float *)((t4 + 0x0))) - 1.0f);
            t23 = t2;
            t25 = t3;
        }
        t2 = t23;
        t3 = t25;
        t7 = (t7 + 0x1);
        t4 = (t4 + 0x4);
        t5 = (t5 + 0x10);
        t6 = (t6 + 0x4);
        if ((int)t7 >= (int)0x3) {
            break;
        }
    }
    t31 = *(signed char *)((a4 + 0x14));
    switch (t31) {
    case 0:
        FUN_0c0b562a(a4, 0x0, 0x0, 0x0);
        break;
    case 1:
        FUN_0c0b6a18(a4);
        break;
    case 2:
        FUN_0c0b711a(a4);
        break;
    }
    FUN_0c0b5398(a4);
    return thunk_FUN_0c0385e0(a4);
}

