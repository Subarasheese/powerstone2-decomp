/* game/flow: functions 0C041E4C-0C0433F0, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o4C_uchar { char p[0x4C]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o58_short { char p[0x58]; short v; };
struct o58_ushort { char p[0x58]; unsigned short v; };
struct o80_uchar { char p[0x80]; unsigned char v; };
int FUN_0c032c6c(void);
int FUN_0c032fec(void);
extern int FUN_0c03fd58();
int FUN_0c041e4c(void);
int FUN_0c042740(void);
int FUN_0c042800(void);
int FUN_0c0429fa(void);
int FUN_0c042ae4(void);
int FUN_0c042b68(void);
int FUN_0c0d5188(void);
int FUN_0c0522be(int);
int FUN_0c05457a(void);
int FUN_0c059c54(int);
int FUN_0c05aaf6(int);
int game_reset_objects(void);
int FUN_0c0bb534(void);
int FUN_0c0c41c4(void);
int FUN_0c0f6b1c(int, int, int);
int FUN_0c179ac0(void);
int FUN_0c042574(int a4, int a5, float f4);
int FUN_0c042b10(void);
int FUN_0c042be0(void);

int FUN_0c042574(int a4, int a5, float f4)
{
    int stk[6];
    register int t0;
    register int t1;
    int t16;
    register int t19;
    register int t20;
    register int t24;
    register int t25;
    register int t30;
    register int t32;
    register int t34;
    register int t36;
    register int t38;
    register int t41;
    register int t43;
    register int t45;
    register int t52;
    register int t54;
    register int t57;
    register int t47;

    *(unsigned char *)0xC54235F = 0x0;
    t0 = 0x0;
    t1 = a5;
    for (;;) {
        if ((((int)0x1 << (int)t0) & (unsigned char)(*(signed char *)0xC3BD447)) != 0) {
            t1 = (t0 * 0x98);
            t1 = (t1 + 0xC541CDC);
            (((struct o58_ushort *)(t1))->v) = (((((struct o58_short *)(t1))->v)) | ((int)0x1 << (int)(*(signed char *)0xC542237)));
            (((struct o80_uchar *)(t1))->v) = ((*(signed char *)((t1 + 0x80))) | ((int)0x1 << (int)(*(signed char *)0xC542237)));
            *(unsigned char *)0xC54235F = ((*(signed char *)0xC54235F) | (*(signed char *)(((0x80 + t1) + 0x0))));
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x4) {
            break;
        }
    }
    t16 = *(signed char *)0xC542236;
    if ((t16 != 1) && (t16 != 3)) {
        t19 = 0x0;
        t20 = 0x0;
        for (;;) {
            t24 = ((*(signed char *)0xC54235F) & ((int)0x1 << (int)t19)) != 0;
            t19 = (t19 + 0x1);
            if (t24) {
                t20 = (t20 + 0x1);
            }
            if ((int)t19 >= (int)0x5) {
                break;
            }
        }
        if ((int)t20 > (int)0x3) {
            *(unsigned int *)(((int)stk + 4)) = 0xC40DC58;
            t25 = 0x1;
            for (;;) {
                *(unsigned int *)(((int)stk + 8)) = ((int)((int)(FUN_0c179ac0()) % (int)0x5));
                *(unsigned char *)0xC54235F = ((*(signed char *)0xC54235F) | ((int)0x1 << (int)(*(int *)(((int)stk + 8)))));
                t30 = ((int (*)(int, int))(FUN_0c03fd58))(t25, (((int)stk + 4) + 0x8));
                t32 = (*(int *)(((int)stk + 4)));
                *(int *)((int)stk + 0) = t32;
                t34 = FUN_0c0f6b1c((*(int *)(((int)stk + 8))), t30, (((int)stk + 0) + 0xC));
                t25 = (t25 + 0x1);
                *(unsigned int *)((t32 + 0x0)) = t34;
                *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) + 0x4);
                if ((int)t25 >= (int)0x3) {
                    break;
                }
            }
            t47 = t34;
        } else {
            *(unsigned int *)(((int)stk + 8)) = 0xC40DC58;
            t36 = 0x1;
            for (;;) {
                t38 = (int)((int)(FUN_0c179ac0()) % (int)0x5);
                *(unsigned int *)(((int)stk + 4)) = t38;
                if (((*(signed char *)0xC54235F) & ((int)0x1 << (int)t38)) != 0) continue;
                *(unsigned char *)0xC54235F = ((*(signed char *)0xC54235F) | ((int)0x1 << (int)t38));
                t41 = ((int (*)(int, int))(FUN_0c03fd58))(t36, (((int)stk + 4) + 0x8));
                t43 = (*(int *)(((int)stk + 8)));
                *(int *)((int)stk + 0) = t43;
                t45 = FUN_0c0f6b1c((*(int *)(((int)stk + 4))), t41, (((int)stk + 0) + 0xC));
                t36 = (t36 + 0x1);
                *(unsigned int *)((t43 + 0x0)) = t45;
                *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 8))) + 0x4);
                if ((int)t36 >= (int)0x3) {
                    break;
                }
            }
            t47 = t45;
        }
        t57 = t47;
    } else {
        t52 = 0x6;
        if ((*(signed char *)0xC542236) == 1) {
            t52 = 0x5;
        }
        t54 = ((int (*)(int, int, float))(FUN_0c03fd58))(0x0, (((int)stk + 4) + 0x8), f4);
        (((struct o0_uint *)0xC40DC58)->v) = (FUN_0c0f6b1c(t52, t54, (((int)stk + 4) + 0x8)));
        (((struct o4_uint *)0xC40DC58)->v) = 0x0;
        *(unsigned char *)0xC54235F = ((*(signed char *)0xC54235F) | ((int)0x1 << (int)t52));
        t57 = 0x167;
    }
    return t57;
}

int FUN_0c042b10(void)
{
    register int t1;

    FUN_0c042ae4();
    t1 = *(signed char *)0xC5421FA;
    if (t1 != 0) {
        if (t1 != 1) {
            return FUN_0c0429fa();
        }
        return FUN_0c042800();
    }
    return FUN_0c042740();
}

int FUN_0c042be0(void)
{
    register int t0;
    register int t1;
    register int t2;

    *(unsigned char *)0xC541D2A = 0x0;
    *(unsigned char *)0xC541DC2 = 0x0;
    *(unsigned char *)0xC541E5A = 0x0;
    *(unsigned char *)0xC541EF2 = 0x0;
    (((struct o2_uchar *)0xC542252)->v) = 0x0;
    game_reset_objects();
    FUN_0c0bb534();
    if ((*(signed char *)0xC5429B1) != 0) {
        *(unsigned char *)0xC3BD447 = 0x0;
    } else {
        FUN_0c041e4c();
        FUN_0c042b68();
        FUN_0c0c41c4();
    }
    if ((*(signed char *)0xC5429AC) != 0) {
        (((struct o0_uchar *)0xC5421FA)->v) = ((*(signed char *)0xC5421FA) + 0x1);
        (((struct o1_uchar *)0xC5421FA)->v) = 0x0;
        FUN_0c059c54(0x3);
        FUN_0c05aaf6(0x8A);
        FUN_0c032c6c();
        FUN_0c032fec();
        FUN_0c0522be((*(int *)0xC241BCC));
    } else {
        (((struct o0_uchar *)0xC5421FA)->v) = 0x2;
        FUN_0c05457a();
    }
    t0 = FUN_0c0d5188();
    t1 = t0;
    if (t0 != 0) {
        (((struct o1_uchar *)0xC542252)->v) = 0x5A;
        (((struct o0_uchar *)0xC542252)->v) = 0xA;
        t0 = 0x5B;
        t2 = 0x0;
        for (;;) {
            if ((((int)0x1 << (int)t2) & (*(int *)0xC40DC50)) != 0) {
                t0 = (t2 * 0x98);
                t0 = (t0 + 0xC541CDC);
                (((struct o4C_uchar *)(t0))->v) = 0x0;
            }
            t2 = (t2 + 0x1);
            if ((int)t2 >= (int)0x4) {
                break;
            }
        }
        t1 = t0;
    }
    return t1;
}
