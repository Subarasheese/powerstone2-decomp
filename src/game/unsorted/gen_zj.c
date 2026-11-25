/* Straight-line functions with calls and guards (batch gen_zj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o132_uchar { char p[0x132]; unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c0bbf58(int, Stk3);
int FUN_0c0da628(int);
int FUN_0c0dbc8c(int a4, int a5, int a6, int a7);

int FUN_0c0dbc8c(int a4, int a5, int a6, int a7)
{
    int stk[7];
    register int t3;
    register int t9;
    register int t13;
    register int t14;
    register int t17;
    register int t18;
    register int t22;
    register int t26;
    register int t29;

    if ((*(signed char *)0xC54223C) != 2) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    t3 = *(signed char *)((a4 + 0x14));
    if (t3 != 0) {
        if (t3 != 1) {
            if (t3 != 2) {
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            { struct mv3 { int w[3]; }; *(struct mv3 *)(((int)stk + 4)) = *(struct mv3 *)((a4 + 0x28)); }
            FUN_0c0bbf58(a4, *(Stk3 *)(((int)stk + 4)));
            t9 = 0x132;
            if ((*(signed char *)((a4 + 0x132))) != 0) {
                FUN_0c0da628(a4);
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t9 = 0x14;
            }
            return t9;
        }
    } else {
        t13 = *(signed char *)((a4 + 0x2));
        t14 = (t13 % 0x2);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)((0xC287EC0 + (((t14 << 1) + t14) << 2))); }
        t17 = *(signed char *)((a4 + 0x2));
        t18 = (t17 % 0x2);
        *(unsigned int *)((a4 + 0x38)) = (int)(((float)(*(int *)((0xC287ED8 + (t18 << 2)))) * 65536.0f) / 360.0f);
        t22 = 0x1;
        if ((int)(*(signed char *)((a4 + 0x2))) >= (int)0x2) {
            t22 = 0x168;
        }
        *(unsigned short *)((a4 + 0x1C)) = t22;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    t26 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t26 - 1);
    t29 = (short)(t26 - 1);
    if ((short)(t26 - 1) == 0) {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        *(int *)((int)stk + 12) = 0xFFFFFFEF;
        *(int *)((int)stk + 8) = 0x0;
        *(int *)((int)stk + 4) = 0x0;
        *(int *)((int)stk + 0) = 0x10;
        FUN_0c064d24(a4, 0x2, 0xB, 0x1, 0x10, 0x0, 0x0, 0xFFFFFFEF);
        (((struct o12C_ushort *)(a4))->v) = 0xFFFFFFFF;
        (((struct o132_uchar *)(a4))->v) = 0x0;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t29 = 0x14;
    }
    return t29;
}
