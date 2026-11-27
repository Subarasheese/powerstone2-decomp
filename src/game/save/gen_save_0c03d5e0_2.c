/* game/save: functions 0C03D5E0-0C03DFC0, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
int FUN_0c038e88(int);
int FUN_0c03add8(int, int, int, int);
int FUN_0c03ae7a(void);
int FUN_0c03aeec(void);
int FUN_0c03b05a(void);
int FUN_0c03b14a(void);
int FUN_0c03b1c8(void);
int FUN_0c03b3fc(void);
int FUN_0c03cbfa(void);
int FUN_0c03d7f8(int, int, int, int);
int FUN_0c03d860(int, int, int, int);
int FUN_0c03d8f4(int, int, int, int);
int FUN_0c03d94a(int, int, int, int);
int FUN_0c03d9b4(int, int, int, int);
int FUN_0c03da62(int);
extern int FUN_0c03db0e();
int FUN_0c03dc26(void);
int FUN_0c03dd5c(int);
int FUN_0c03f40c(int, int, int, int);
int FUN_0c03d722(int a4, int a5, int a6, int a7);
int FUN_0c03da10(int a4, int a5, int a6, int a7);
int FUN_0c03da82(int a4, int a5, int a6, int a7);
int FUN_0c03db62(int a4, int a5, int a6, int a7);
int FUN_0c03df6a(int a4, int a5, int a6, int a7);

int FUN_0c03d722(int a4, int a5, int a6, int a7)
{

    register int R1;
    register int R2;
    register int R3;
    register int R9;
    register int R10;
    register int R11;
    register int R12;
    register int R13;
    register float F0;
    register float F4;
    register float F15;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    v0_4 = a4;
    v0_0 = a5;
    v0_1 = a7;
    v0_2 = *(signed char *)((v0_4 + 0x2));
    v0_3 = (v0_2);
    v0_4 = (v0_4);
    if ((v0_2 == 0)) goto L_C03D756;
    if ((v0_3 == 1)) goto L_C03D762;
    if ((v0_3 == 2)) goto L_C03D76A;
    if ((v0_3 == 3)) goto L_C03D772;
    if ((v0_3 == 4)) goto L_C03D77A;
    if ((v0_3 == 6)) goto L_C03D782;
    if ((v0_3 == 7)) goto L_C03D78A;
    if ((v0_3 == 8)) goto L_C03D792;
    if ((v0_3 == 9)) goto L_C03D79A;
    if ((v0_3 == 10)) goto L_C03D7E4;
    L_C03D7E8:;
    FUN_0c03f40c(0x5, v0_0, a6, v0_1);
    return FUN_0c038e88(0x5);
    L_C03D7E4:;
    FUN_0c03da10(v0_4, v0_0, 0x0, v0_1);
    goto L_C03D7E8;
    L_C03D79A:;
    FUN_0c03d9b4(v0_4, v0_0, 0x0, v0_1);
    goto L_C03D7E8;
    L_C03D792:;
    FUN_0c03d94a(v0_4, v0_0, 0x0, v0_1);
    goto L_C03D7E8;
    L_C03D78A:;
    FUN_0c03d8f4(v0_4, v0_0, 0x0, v0_1);
    goto L_C03D7E8;
    L_C03D782:;
    FUN_0c03d860(v0_4, v0_0, 0x0, v0_1);
    goto L_C03D7E8;
    L_C03D77A:;
    FUN_0c03d7f8(v0_4, v0_0, 0x0, v0_1);
    goto L_C03D7E8;
    L_C03D772:;
    FUN_0c03da82(v0_4, v0_0, 0x0, v0_1);
    goto L_C03D7E8;
    L_C03D76A:;
    FUN_0c03db62(v0_4, v0_0, 0x0, v0_1);
    goto L_C03D7E8;
    L_C03D762:;
    v0_2 = ((int (*)(int, int, int, int))(FUN_0c03db0e))(v0_4, v0_0, 0x0, v0_1);
    goto L_C03D7E8;
    L_C03D756:;
    *(unsigned char *)((v0_4 + 0x2)) = ((*(signed char *)((v0_4 + 0x2))) + 0x1);
    *(unsigned char *)((v0_4 + 0x3)) = 0x0;
    FUN_0c03dc26();
    goto L_C03D762;
}

int FUN_0c03da10(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x3));
    if (t0 != 0) {
        t1 = t0;
        if (t0 != 1) {
        } else {
            t2 = (((struct o20_short *)(a4))->v);
            (((struct o20_ushort *)(a4))->v) = (t2 - 1);
            t1 = t0;
            if ((short)(t2 - 1) == 0) {
                t0 = FUN_0c03df6a(a4, a5, a6, a7);
                *(unsigned char *)0xC3DC241 = 0x4;
                t1 = t0;
            }
        }
        t0 = t1;
    } else {
        *(unsigned char *)((a4 + 0x3)) = ((*(signed char *)((a4 + 0x3))) + 0x1);
        FUN_0c03df6a(a4, a5, a6, a7);
        FUN_0c03dd5c(0x5);
        t1 = FUN_0c03b3fc();
        (((struct o20_ushort *)(a4))->v) = 0x78;
        t0 = t1;
    }
    return t0;
}



int FUN_0c03df6a(int a4, int a5, int a6, int a7)
{
    register int t0;

    *(unsigned char *)0xC3DC264 = 0x1;
    t0 = FUN_0c03f40c(0x5, a5, a6, a7);
    *(unsigned char *)0xC3DC264 = 0x0;
    return t0;
}
