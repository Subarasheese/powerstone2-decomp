/* Straight-line functions with calls and guards (batch gen_aaz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uint { unsigned int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o58_short { char p[0x58]; short v; };
struct o58_ushort { char p[0x58]; unsigned short v; };
struct o80_uchar { char p[0x80]; unsigned char v; };
extern int FUN_0c03fd58();
int FUN_0c0f6b1c(int, int, int);
int nlRand(void);
int FUN_0c042574(int a4, int a5, float f4);

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
    register int R1004;
    register int R1008;
    register int R1012;

    R1004 = *(int *)((int)stk + 0);
    R1008 = *(int *)((int)stk + 4);
    R1012 = *(int *)((int)stk + 8);

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
            R1008 = 0xC40DC58;
            t25 = 0x1;
            for (;;) {
                R1012 = ((int)((int)(nlRand()) % (int)0x5));
                *(unsigned char *)0xC54235F = ((*(signed char *)0xC54235F) | ((int)0x1 << (int)(R1012)));
                t30 = ((int (*)(int, int))(FUN_0c03fd58))(t25, (((int)stk + 4) + 0x8));
                t32 = (R1008);
                R1004 = t32;
                t34 = FUN_0c0f6b1c((R1012), t30, (((int)stk + 0) + 0xC));
                t25 = (t25 + 0x1);
                *(unsigned int *)((t32 + 0x0)) = t34;
                R1008 = ((R1008) + 0x4);
                if ((int)t25 >= (int)0x3) {
                    break;
                }
            }
            t47 = t34;
        } else {
            R1012 = 0xC40DC58;
            t36 = 0x1;
            for (;;) {
                t38 = (int)((int)(nlRand()) % (int)0x5);
                R1008 = t38;
                if (((*(signed char *)0xC54235F) & ((int)0x1 << (int)t38)) != 0) continue;
                *(unsigned char *)0xC54235F = ((*(signed char *)0xC54235F) | ((int)0x1 << (int)t38));
                t41 = ((int (*)(int, int))(FUN_0c03fd58))(t36, (((int)stk + 4) + 0x8));
                t43 = (R1012);
                R1004 = t43;
                t45 = FUN_0c0f6b1c((R1008), t41, (((int)stk + 0) + 0xC));
                t36 = (t36 + 0x1);
                *(unsigned int *)((t43 + 0x0)) = t45;
                R1012 = ((R1012) + 0x4);
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
