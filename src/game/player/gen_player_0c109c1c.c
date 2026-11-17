/* game/player: functions 0C109C1C-0C10B07E, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o118_int { char p[0x118]; int v; };
struct o11C_int { char p[0x11C]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o18_int { char p[0x18]; int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8C_float { char p[0x8C]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
int FUN_0c03f346(int);
int FUN_0c03f444(int, int, int);
int FUN_0c056e44(int, int, int);
int FUN_0c05a080(int, int);
int FUN_0c05f22c(int);
int FUN_0c104cc8(int);
int FUN_0c104d70(void);
int FUN_0c104db8(void);
int FUN_0c10527c(int, int, int);
int FUN_0c105304(int, int, int);
int FUN_0c106510(void);
int FUN_0c10ae02(int, int, int, int);
int FUN_0c10b6a8(int);
int FUN_0c115120(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c1173a0(void);
int FUN_0c11791c(void);
int FUN_0c117944(int, ...);
int FUN_0c117a6e(int, ...);
int FUN_0c117d14(void);
int FUN_0c117d54(void);
int FUN_0c117e76(void);
int FUN_0c118412(int);
int FUN_0c119ba4(int, int);
int FUN_0c11e28e(int);
int FUN_0c11ea4e(int);
int FUN_0c179ac0(void);
int FUN_0c109c1c(int a4);
int FUN_0c109c2a(int a4);
int FUN_0c109c38(int a4);
int FUN_0c10a46e(int a4, int a5, int a6, int a7);
int FUN_0c10a506(int a4, int a5, int a6, int a7, float f4);
int FUN_0c10ab7c(int a4, int a5, int a6, int a7, float f4);
int FUN_0c10add4(int a4);
int thunk_FUN_0c10b050(void);
int FUN_0c10af02(int a4, int a5, int a6, int a7);
int FUN_0c10af4c(void);
int FUN_0c10af74(void);
int FUN_0c10b01e(void);
int FUN_0c10b050(void);

int FUN_0c109c1c(int a4)
{
    (((struct o14_uchar *)(a4))->v) = 0x1;
    (((struct o15_uchar *)(a4))->v) = 0x0;
    return 0x15;
}

int FUN_0c109c2a(int a4)
{
    (((struct o14_uchar *)(a4))->v) = 0x2;
    (((struct o15_uchar *)(a4))->v) = 0x0;
    return 0x15;
}

int FUN_0c109c38(int a4)
{
    (((struct o14_uchar *)(a4))->v) = 0x63;
    (((struct o15_uchar *)(a4))->v) = 0x0;
    return 0x15;
}

int FUN_0c10a46e(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        if (t0 != 5) {
                            if (t0 != 99) {
                                return t0;
                            }
                            return ((int (*)(int, int, int, int))(0xC10A43E))(a4, a5, a6, a7);
                        }
                        return ((int (*)(int, int, int, int))(0xC10A314))(a4, a5, a6, a7);
                    }
                    return ((int (*)(int, int, int, int))(0xC10A0C0))(a4, a5, a6, a7);
                }
                return ((int (*)(int, int, int, int))(0xC10A01A))(a4, a5, a6, a7);
            }
            return ((int (*)(int, int, int, int))(0xC109DF4))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC109CB6))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC109CB2))(a4, a5, a6, a7);
}

int FUN_0c10a506(int a4, int a5, int a6, int a7, float f4)
{
    int stk[12];

    register int R1;
    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_10;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register int v0_9;
    register float w0_0;
    v0_8 = a4;
    v0_6 = a5;
    v0_5 = a6;
    w0_0 = f4;
    *(unsigned int *)(((int)stk + 12)) = 0xC532498;
    v0_9 = *(signed char *)((v0_8 + 0x16));
    v0_7 = (v0_9);
    v0_2 = (0xC474104);
    v0_1 = (0xC104CC8);
    v0_3 = (0xC474410);
    v0_4 = (0xC474404);
    v0_0 = (v0_8);
    v0_8 = (0xC117944);
    v0_1 = (0x0);
    if ((v0_9 == 0)) goto L_C10A576;
    if ((v0_7 == 1)) goto L_C10A59E;
    if ((v0_7 == 2)) goto L_C10A610;
    if ((v0_7 != 3)) goto L_C10A542;
    v0_5 = *(signed char *)((v0_0 + 0x17));
    v0_7 = (v0_5);
    if ((v0_5 == 0)) goto L_C10A6DC;
    if ((v0_7 == 1)) goto L_C10A704;
    L_C10AB48:;
    return v0_7;
    L_C10A704:;
    v0_5 = (FUN_0c104cc8(0x2008)) == 0;
    v0_8 = (0x1004);
    if (v0_5) goto L_C10A718;
    if (((*(int *)0xC474404) == 0)) goto L_C10A768;
    L_C10A718:;
    v0_5 = (FUN_0c104cc8(v0_8)) == 0;
    if (v0_5) goto L_C10A72E;
    if (((*(int *)0xC474404) == (((((struct o0_int *)0xC474714)->v)) - 1))) goto L_C10A768;
    L_C10A72E:;
    *(unsigned int *)((v0_4 + 0x0)) = (FUN_0c10527c((*(int *)((v0_4 + 0x0))), 0x0, (((((struct o0_int *)0xC474714)->v)) - 1)));
    v0_5 = (FUN_0c104cc8(0x300F)) == 0;
    if (v0_5) goto L_C10A768;
    v0_4 = *(int *)(((((*(int *)((v0_4 + 0x0))) << 2) + v0_3) + 0x0));
    v0_3 = (*(int *)(((v0_4 << 2) + 0xC29DDD0)));
    *(int *)((int)stk + 8) = v0_3;
    v0_2 = (*(int *)((v0_2 + (v0_4 << 2))));
    *(int *)((int)stk + 4) = v0_2;
    *(int *)((int)stk + 0) = 0x58;
    FUN_0c117a6e(0x58, v0_2, v0_3);
    L_C10A768:;
    v0_2 = (FUN_0c104db8()) == 0;
    if (!(v0_2)) goto L_C10AB04;
    v0_2 = FUN_0c104d70();
    v0_7 = (v0_2);
    if ((v0_2 != 0)) goto L_C10A784;
    goto L_C10AB48;
    L_C10AB04:;
    (((struct o16_uchar *)(v0_0))->v) = 0x63;
    L_C10AB0A:;
    (((struct o17_uchar *)(v0_0))->v) = v0_1;
    v0_7 = (0x17);
    goto L_C10AB48;
    L_C10A784:;
    L_C10A95C:;
    (((struct o16_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x16))) + 0x1);
    goto L_C10AB0A;
    L_C10A6DC:;
    (((struct o17_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x17))) + 0x1);
    v0_6 = *(int *)((v0_3 + ((*(int *)((v0_4 + 0x0))) << 2)));
    *(unsigned int *)(((int)stk + 12)) = (v0_6 << 2);
    v0_5 = (*(int *)(((v0_6 << 2) + 0xC29DDD0)));
    *(int *)((int)stk + 8) = v0_5;
    v0_6 = (*(int *)((((v0_6 << 2) + v0_2) + 0x0)));
    *(int *)((int)stk + 4) = v0_6;
    *(int *)((int)stk + 0) = 0x58;
    FUN_0c117a6e(0x58, v0_6, v0_5);
    goto L_C10A704;
    L_C10A542:;
    if ((v0_7 != 4)) goto L_C10A54A;
    v0_2 = *(signed char *)((v0_0 + 0x17));
    v0_7 = (v0_2);
    if ((v0_2 == 0)) goto L_C10A7A0;
    if (!((v0_7 != 1))) goto L_C10A9AE;
    if ((v0_7 == 2)) goto L_C10A7AC;
    goto L_C10AB48;
    L_C10A9AE:;
    v0_1 = FUN_0c117d54();
    v0_7 = (v0_1);
    if (!(((int)v0_1 >= 0))) goto L_C10AADA;
    goto L_C10AB48;
    L_C10AADA:;
    (((struct o17_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x17))) + 0x1);
    return FUN_0c117e76();
    L_C10A7AC:;
    v0_2 = FUN_0c05f22c(0x3FCF);
    v0_7 = (v0_2);
    if ((v0_2 != 0)) goto L_C10A7BC;
    goto L_C10AB48;
    L_C10A7BC:;
    (((struct o16_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x16))) + 0x1);
    (((struct o17_uchar *)(v0_0))->v) = v0_1;
    (((struct o20_ushort *)(v0_0))->v) = v0_1;
    *(unsigned int *)(((int)stk + 12)) = 0xC474C40;
    *(int *)((int)stk + 8) = 0xC474C40;
    *(unsigned int *)0xC474C40 = (FUN_0c10b6a8(0x1));
    *(unsigned short *)(((*(int *)(((*(int *)(((int)stk + 12))) + 0x0))) + 0x1C)) = 0x1;
    v0_7 = (0x1);
    goto L_C10AB48;
    L_C10A7A0:;
    (((struct o17_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x17))) + 0x1);
    v0_8 = (0x62);
    L_C10AAC8:;
    v0_0 = v0_8;
    *(int *)((int)stk + 8) = v0_0;
    v0_7 = ((FUN_0c117944(v0_0)));
    goto L_C10AB48;
    L_C10A54A:;
    if ((v0_7 != 5)) goto L_C10A552;
    *(unsigned int *)(((int)stk + 12)) = 0xC474C40;
    v0_7 = (FUN_0c104cc8(0x1008)) == 0;
    if (v0_7) goto L_C10A830;
    if (((*(short *)(((*(int *)(((*(int *)(((int)stk + 12))) + 0x0))) + 0x1C))) == 1)) goto L_C10A898;
    L_C10A830:;
    v0_7 = (FUN_0c104cc8(0x2004)) == 0;
    if (v0_7) goto L_C10A87E;
    if (((int)((*(int *)((((*(int *)((((*(int *)0xC474404) << 2) + 0xC474410))) << 2) + 0xC474104))) - (*(short *)(((*(int *)(((*(int *)(((int)stk + 12))) + 0x0))) + 0x1C)))) > 0)) goto L_C10A87E;
    v0_8 = *(int *)(((((*(int *)((v0_4 + 0x0))) << 2) + v0_3) + 0x0));
    v0_7 = (*(int *)((v0_2 + (v0_8 << 2))));
    *(int *)((int)stk + 8) = v0_7;
    v0_8 = (*(int *)((0xC29DDD0 + (v0_8 << 2))));
    *(int *)((int)stk + 4) = v0_8;
    *(int *)((int)stk + 0) = 0x66;
    FUN_0c117944(0x66, v0_8, v0_7);
    (((struct o20_ushort *)(v0_0))->v) = 0x78;
    L_C10A898:;
    v0_7 = (int)(FUN_0c117d54()) <= 0;
    if (v0_7) goto L_C10A8A8;
    (((struct o20_ushort *)(v0_0))->v) = 0x1E;
    L_C10A8A8:;
    v0_9 = (((struct o20_short *)(v0_0))->v);
    v0_7 = (0x20);
    v0_8 = (v0_9);
    if ((v0_9 != 0)) goto L_C10A8D0;
    v0_8 = *(int *)((v0_3 + ((*(int *)((v0_4 + 0x0))) << 2)));
    *(unsigned int *)(((int)stk + 12)) = (v0_8 << 2);
    v0_7 = (*(int *)(((v0_8 << 2) + 0xC29DDD0)));
    *(int *)((int)stk + 8) = v0_7;
    v0_8 = (*(int *)((((v0_8 << 2) + v0_2) + 0x0)));
    *(int *)((int)stk + 4) = v0_8;
    *(int *)((int)stk + 0) = 0x58;
    FUN_0c117944(0x58, v0_8, v0_7);
    L_C10A8DC:;
    v0_7 = (FUN_0c104db8()) == 0;
    if (v0_7) goto L_C10A938;
    (((struct o14_uchar *)((*(int *)0xC474C40)))->v) = 0x63;
    *(unsigned int *)0xC474C40 = v0_1;
    v0_3 = *(int *)((v0_3 + ((*(int *)((v0_4 + 0x0))) << 2)));
    *(unsigned int *)(((int)stk + 12)) = (v0_3 << 2);
    v0_1 = (*(int *)(((v0_3 << 2) + 0xC29DDD0)));
    *(int *)((int)stk + 8) = v0_1;
    v0_2 = (*(int *)((((v0_3 << 2) + v0_2) + 0x0)));
    *(int *)((int)stk + 4) = v0_2;
    *(int *)((int)stk + 0) = 0x58;
    FUN_0c117944(0x58, v0_2, v0_1);
    L_C10AA6C:;
    return ((int (*)(int, int, int, int, float))(0xC10A4EA))(v0_0, v0_6, v0_5, a7, w0_0);
    L_C10A938:;
    v0_2 = FUN_0c104d70();
    v0_7 = (v0_2);
    if ((v0_2 != 0)) goto L_C10A946;
    goto L_C10AB48;
    L_C10A946:;
    (((struct o20_ushort *)(v0_0))->v) = (*(short *)(((*(int *)0xC474C40) + 0x1C)));
    (((struct o14_uchar *)((*(int *)0xC474C40)))->v) = 0x63;
    *(unsigned int *)0xC474C40 = v0_1;
    goto L_C10A95C;
    L_C10A8D0:;
    *(unsigned short *)((v0_0 + v0_7)) = (v0_8 - 1);
    if (((int)(*(short *)((v0_0 + v0_7))) >= 0)) goto L_C10A8DC;
    *(unsigned short *)((v0_0 + v0_7)) = v0_1;
    goto L_C10A8DC;
    L_C10A87E:;
    v0_7 = *(int *)(((*(int *)(((int)stk + 12))) + 0x0));
    *(unsigned short *)((v0_7 + 0x1C)) = (FUN_0c105304((*(short *)((v0_7 + 0x1C))), 0x1, (*(int *)((v0_2 + ((*(int *)((v0_3 + ((*(int *)((v0_4 + 0x0))) << 2)))) << 2))))));
    goto L_C10A898;
    L_C10A552:;
    if ((v0_7 != 6)) goto L_C10A55A;
    v0_6 = *(signed char *)((v0_0 + 0x17));
    v0_7 = (v0_6);
    if ((v0_6 == 0)) goto L_C10A97A;
    if ((v0_7 == 1)) goto L_C10A9AE;
    if ((v0_7 == 2)) goto L_C10A9C0;
    goto L_C10AB48;
    L_C10A9C0:;
    v0_6 = FUN_0c05f22c(0x3FCF);
    v0_7 = (v0_6);
    if ((v0_6 != 0)) goto L_C10A9D0;
    goto L_C10AB48;
    L_C10A9D0:;
    v0_7 = (((struct o20_short *)(v0_0))->v);
    v0_9 = *(int *)(((((*(int *)((v0_3 + ((*(int *)((v0_4 + 0x0))) << 2)))) << 2) << 1) + 0xC29D7D0));
    v0_10 = (((struct o8_int *)0xC474714)->v);
    (((struct o8_uint *)0xC474714)->v) = (v0_10 + (v0_7 * v0_9));
    v0_1 = (v0_1);
    v0_8 = (0xC47471C);
    v0_6 = (0x5F5E09C);
    if (((int)(v0_10 + (v0_7 * v0_9)) <= (int)0x5F5E09C)) goto L_C10A9FA;
    *(unsigned int *)((v0_8 + 0x0)) = v0_6;
    L_C10A9FA:;
    v0_8 = (0xC11E28E);
    L_C10AA0A:;
    if (((int)v0_1 < (int)((((struct o20_short *)(v0_0))->v)))) goto L_C10AA00;
    if ((((((struct o0_int *)0xC474714)->v)) != 1)) goto L_C10AA6C;
    if (((int)(*(int *)((v0_2 + ((*(int *)((v0_3 + 0x0))) << 2)))) >= (int)0x1)) goto L_C10AA6C;
    return ((int (*)(int, int, int, int, float))(0xC10A4F8))(v0_0, v0_6, v0_5, a7, w0_0);
    L_C10AA00:;
    FUN_0c11e28e((*(int *)((v0_3 + ((*(int *)((v0_4 + 0x0))) << 2)))));
    v0_1 = ((v0_1 + 0x1));
    goto L_C10AA0A;
    L_C10A97A:;
    (((struct o17_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x17))) + 0x1);
    FUN_0c05a080(0x1A, 0x0);
    v0_0 = FUN_0c179ac0();
    v0_7 = (v0_0);
    if (((int)v0_0 < 0)) goto L_C10A998;
    v0_7 = ((v0_7 & 0x1));
    L_C10A9A2:;
    *(int *)((int)stk + 8) = 0x61;
    v0_7 = ((FUN_0c117944(0x61)));
    goto L_C10AB48;
    L_C10A998:;
    v0_7 = (((~(((~v0_7) + 0x1) & 0x1)) + 0x1));
    goto L_C10A9A2;
    L_C10A55A:;
    if ((v0_7 != 7)) goto L_C10A562;
    v0_2 = *(signed char *)((v0_0 + 0x17));
    v0_7 = (v0_2);
    if ((v0_2 == 0)) goto L_C10AABE;
    if ((v0_7 == 1)) goto L_C10AAD0;
    if ((v0_7 != 2)) goto L_C10AB48;
    v0_2 = FUN_0c05f22c(0x3FCF);
    v0_7 = (v0_2);
    if ((v0_2 == 0)) goto L_C10AB48;
    (((struct o14_uchar *)(v0_0))->v) = 0x1;
    (((struct o15_uchar *)(v0_0))->v) = v0_1;
    v0_7 = (0x15);
    goto L_C10AB48;
    L_C10AAD0:;
    v0_1 = FUN_0c117d54();
    v0_7 = (v0_1);
    if (((int)v0_1 >= 0)) goto L_C10AB48;
    goto L_C10AADA;
    L_C10AABE:;
    (((struct o17_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x17))) + 0x1);
    v0_8 = (0x69);
    goto L_C10AAC8;
    L_C10A562:;
    if ((v0_7 != 8)) goto L_C10A56A;
    v0_2 = *(signed char *)((v0_0 + 0x17));
    v0_7 = (v0_2);
    if ((v0_2 == 0)) goto L_C10AABE;
    if ((v0_7 == 1)) goto L_C10AAD0;
    if ((v0_7 == 2)) goto L_C10AAF8;
    goto L_C10AB48;
    L_C10AAF8:;
    v0_2 = FUN_0c05f22c(0x3FCF);
    v0_7 = (v0_2);
    if ((v0_2 == 0)) goto L_C10AB48;
    goto L_C10AB04;
    L_C10A56A:;
    if ((v0_7 != 99)) goto L_C10A572;
    FUN_0c056e44(0x23, 0x5, v0_5);
    *(int *)((int)stk + 8) = 0xC474B8C;
    (((struct o0_uint *)0xC474B8C)->v) = (FUN_0c118412(0x5));
    (((struct o14_uchar *)(((((struct o18_int *)0xC474B8C)->v))))->v) = 0x63;
    (((struct o18_uint *)0xC474B8C)->v) = v0_1;
    return FUN_0c109c1c(v0_0);
    L_C10A572:;
    goto L_C10AB48;
    L_C10A610:;
    v0_2 = *(signed char *)((v0_0 + 0x17));
    v0_7 = (v0_2);
    if ((v0_2 == 0)) goto L_C10A624;
    if ((v0_7 == 1)) goto L_C10A636;
    if ((v0_7 == 2)) goto L_C10A67E;
    goto L_C10AB48;
    L_C10A67E:;
    v0_1 = (((struct o22_short *)(v0_0))->v);
    (((struct o22_ushort *)(v0_0))->v) = (v0_1 + 0x1);
    v0_7 = (0x22);
    if (((int)(short)(v0_1 + 0x1) > (int)0x3C)) goto L_C10A692;
    goto L_C10AB48;
    L_C10A692:;
    *(int *)((int)stk + 8) = 0xC474BA4;
    (((struct o18_uint *)0xC474B8C)->v) = (FUN_0c119ba4(0x137, 0x2));
    goto L_C10AA6C;
    L_C10A636:;
    (((struct o22_ushort *)(v0_0))->v) = v0_1;
    (((struct o14_uchar *)(((((struct o0_int *)0xC474B8C)->v))))->v) = 0x63;
    (((struct o0_uint *)0xC474B8C)->v) = v0_1;
    FUN_0c056e44(0x23, 0x4, v0_5);
    FUN_0c115120(0x7, 0x0, 0x0, 0x0, *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4), *(int *)((int)stk + 12 + 8), *(int *)((int)stk + 12 + 12), *(int *)((int)stk + 12 + 16), *(int *)((int)stk + 12 + 20), *(int *)((int)stk + 12 + 24), *(int *)((int)stk + 12 + 28));
    v0_1 = (((struct o118_int *)((*(int *)(((int)stk + 12)))))->v);
    (((struct o98_float *)(v0_1))->v) = 8.0f;
    (((struct o94_float *)(v0_1))->v) = 8.0f;
    v0_1 = (((struct o11C_int *)((*(int *)(((int)stk + 12)))))->v);
    (((struct o98_float *)(v0_1))->v) = 8.0f;
    (((struct o94_float *)(v0_1))->v) = 8.0f;
    L_C10A674:;
    (((struct o17_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x17))) + 0x1);
    v0_7 = (0x17);
    goto L_C10AB48;
    L_C10A624:;
    v0_1 = *(signed char *)((0x3715 + (*(int *)(((int)stk + 12)))));
    v0_7 = (v0_1);
    if ((v0_1 == 1)) goto L_C10A632;
    goto L_C10AB48;
    L_C10A632:;
    goto L_C10A674;
    L_C10A59E:;
    v0_2 = *(signed char *)((v0_0 + 0x17));
    v0_7 = (v0_2);
    if ((v0_2 == 0)) goto L_C10A5B2;
    if ((v0_7 == 1)) goto L_C10A5BC;
    if ((v0_7 == 2)) goto L_C10A5FC;
    goto L_C10AB48;
    L_C10A5FC:;
    v0_2 = FUN_0c05f22c(0x3FCF);
    v0_7 = (v0_2);
    if ((v0_2 != 0)) goto L_C10A60C;
    goto L_C10AB48;
    L_C10A60C:;
    goto L_C10A95C;
    L_C10A5BC:;
    v0_1 = FUN_0c117d54();
    v0_7 = (v0_1);
    if (((int)v0_1 < 0)) goto L_C10A5CA;
    goto L_C10AB48;
    L_C10A5CA:;
    FUN_0c117e76();
    goto L_C10A674;
    L_C10A5B2:;
    *(int *)((int)stk + 8) = 0x55;
    FUN_0c117944(0x55);
    goto L_C10A674;
    L_C10A576:;
    v0_2 = (int)(FUN_0c11ea4e(0x137)) <= 0;
    if (v0_2) goto L_C10A588;
    goto L_C10A95C;
    L_C10A588:;
    return ((int (*)(int, int, int, int, float))(0xC10A4DC))(v0_0, v0_6, v0_5, a7, w0_0);
}

int FUN_0c10ab7c(int a4, int a5, int a6, int a7, float f4)
{
    int stk[8];
    register int t0;
    register int t2;
    register int t8;
    register int t3;
    register int t12;
    register int t16;
    register int t121;
    register float u18;
    register int t111;
    register int t20;
    register int t21;
    register int t23;
    register int t24;
    register int t33;
    register int t34;
    register int t43;
    register int t44;
    register int t53;
    register int t54;
    register int t64;
    register int t65;
    register int t75;
    register int t76;
    register int t86;
    register int t87;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 == 1) {
            t2 = *(signed char *)((a4 + 0x17));
            if (t2 != 0) {
                if (t2 != 1) {
                    t8 = t2;
                    if (t2 != 2) {
                    } else {
                        t3 = FUN_0c05f22c(0x3FCF);
                        t8 = t3;
                        if (t3 != 0) {
                            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                            t8 = 0x16;
                        }
                    }
                    return t8;
                }
                t12 = FUN_0c117d54();
                if ((int)t12 < 0) {
                    (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
                    return FUN_0c117e76();
                }
                return t12;
            }
            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
            (((struct o22_ushort *)(a4))->v) = 0x0;
            *(int *)((int)stk + 0) = 0x57;
            return (FUN_0c117944(0x57));
        }
        if (t0 == 2) {
            return FUN_0c109c38(a4);
        }
        return t0;
    }
    t16 = *(signed char *)0xC535BAD;
    t121 = t16;
    if (t16 != 1) {
    } else {
        u18 = (((struct o8C_float *)(((((struct o0_int *)0xC5325B0)->v))))->v);
        t111 = 0x0;
        if ((int)(int)u18 <= (int)0x10) {
        } else {
            if ((int)(int)u18 >= (int)0x74) {
                FUN_0c115120(0x2, 0x0, a6, a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
                t20 = (((struct o0_int *)0xC5325B0)->v);
                (((struct o98_float *)(t20))->v) = 0.0f;
                (((struct o94_float *)(t20))->v) = 0.0f;
                t21 = (((struct o4_int *)0xC5325B0)->v);
                (((struct o98_float *)(t21))->v) = 0.0f;
                (((struct o94_float *)(t21))->v) = 0.0f;
                t111 = 0x1;
            } else {
                if ((int)u18 != 23) {
                    if ((int)u18 != 30) {
                        if ((int)u18 != 40) {
                            if ((int)u18 != 70) {
                                if ((int)u18 != 90) {
                                    if ((int)u18 != 101) {
                                        t111 = 0x0;
                                        if ((int)u18 != 111) {
                                        } else {
                                            FUN_0c115120(0x2, 0x0, a6, a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
                                            t23 = (((struct o0_int *)0xC5325B0)->v);
                                            (((struct o98_float *)(t23))->v) = 10.0f;
                                            (((struct o94_float *)(t23))->v) = 10.0f;
                                            t24 = (((struct o4_int *)0xC5325B0)->v);
                                            (((struct o98_float *)(t24))->v) = 10.0f;
                                            (((struct o94_float *)(t24))->v) = 10.0f;
                                            t111 = 0x1;
                                        }
                                    } else {
                                        FUN_0c115120(0x2, 0x0, a6, a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
                                        t33 = (((struct o0_int *)0xC5325B0)->v);
                                        (((struct o98_float *)(t33))->v) = 10.0f;
                                        (((struct o94_float *)(t33))->v) = 10.0f;
                                        t34 = (((struct o4_int *)0xC5325B0)->v);
                                        (((struct o98_float *)(t34))->v) = 10.0f;
                                        (((struct o94_float *)(t34))->v) = 10.0f;
                                        t111 = 0x1;
                                    }
                                } else {
                                    FUN_0c115120(0x2, 0x0, a6, a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
                                    t43 = (((struct o0_int *)0xC5325B0)->v);
                                    (((struct o98_float *)(t43))->v) = 10.0f;
                                    (((struct o94_float *)(t43))->v) = 10.0f;
                                    t44 = (((struct o4_int *)0xC5325B0)->v);
                                    (((struct o98_float *)(t44))->v) = 10.0f;
                                    (((struct o94_float *)(t44))->v) = 10.0f;
                                    t111 = 0x1;
                                }
                            } else {
                                FUN_0c115120(0x2, 0x0, a6, a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
                                t53 = (((struct o0_int *)0xC5325B0)->v);
                                (((struct o98_float *)(t53))->v) = 20.0f;
                                (((struct o94_float *)(t53))->v) = 20.0f;
                                t54 = (((struct o4_int *)0xC5325B0)->v);
                                (((struct o98_float *)(t54))->v) = 20.0f;
                                (((struct o94_float *)(t54))->v) = 20.0f;
                                t111 = 0x1;
                            }
                        } else {
                            FUN_0c115120(0x2, 0x0, a6, a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
                            t64 = (((struct o0_int *)0xC5325B0)->v);
                            (((struct o98_float *)(t64))->v) = 30.0f;
                            (((struct o94_float *)(t64))->v) = 30.0f;
                            t65 = (((struct o4_int *)0xC5325B0)->v);
                            (((struct o98_float *)(t65))->v) = 30.0f;
                            (((struct o94_float *)(t65))->v) = 30.0f;
                            t111 = 0x1;
                        }
                    } else {
                        FUN_0c115120(0x2, 0x0, a6, a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
                        t75 = (((struct o0_int *)0xC5325B0)->v);
                        (((struct o98_float *)(t75))->v) = 30.0f;
                        (((struct o94_float *)(t75))->v) = 30.0f;
                        t76 = (((struct o4_int *)0xC5325B0)->v);
                        (((struct o98_float *)(t76))->v) = 30.0f;
                        (((struct o94_float *)(t76))->v) = 30.0f;
                        t111 = 0x1;
                    }
                } else {
                    FUN_0c115120(0x2, 0x0, a6, a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24), *(int *)((int)stk + 4 + 28));
                    t86 = (((struct o0_int *)0xC5325B0)->v);
                    (((struct o98_float *)(t86))->v) = 30.0f;
                    (((struct o94_float *)(t86))->v) = 30.0f;
                    t87 = (((struct o4_int *)0xC5325B0)->v);
                    (((struct o98_float *)(t87))->v) = 30.0f;
                    (((struct o94_float *)(t87))->v) = 30.0f;
                    t111 = 0x1;
                }
            }
        }
        t121 = t111;
        if (t111 == 1) {
            (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
            (((struct o17_uchar *)(a4))->v) = 0x0;
            t121 = 0x17;
        }
    }
    return t121;
}

int FUN_0c10add4(int a4)
{
    FUN_0c10b01e();
    return FUN_0c109c1c(a4);
}

int thunk_FUN_0c10b050(void)
{
    return FUN_0c10b050();
}

int FUN_0c10af02(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 99) {
                    return t0;
                }
                thunk_FUN_0c10b050();
                return FUN_0c03f346(a4);
            }
            return FUN_0c10ae02(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC10ADE4))(a4, a5, a6, a7);
    }
    return FUN_0c10add4(a4);
}

int FUN_0c10af4c(void)
{
    register int t0;

    t0 = FUN_0c03f444(0x5, 0x0, 0x0);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC10AF02;
        return t0;
    }
    return 0x0;
}

int FUN_0c10af74(void)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)0xC541F45;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            if ((unsigned char)t0 != 2) {
                return (unsigned char)t0;
            }
            return FUN_0c106510();
        }
        t0 = *(signed char *)0xC541F46;
        if ((unsigned char)t0 != 0) {
            if ((unsigned char)t0 != 1) {
                if ((unsigned char)t0 != 2) {
                } else {
                    (((struct o0_uchar *)0xC541F45)->v) = ((*(signed char *)0xC541F45) + 0x1);
                }
                t1 = (unsigned char)t0;
            } else {
                t0 = *(signed char *)((0x14 + (*(int *)0xC474C0C)));
                if (t0 == 99) {
                    (((struct o1_uchar *)0xC541F45)->v) = 0x2;
                    *(unsigned int *)0xC474C0C = 0x0;
                }
                t1 = t0;
            }
            t0 = t1;
        } else {
            (((struct o1_uchar *)0xC541F45)->v) = ((*(signed char *)0xC541F46) + 0x1);
            (((struct o2_uchar *)0xC541F45)->v) = 0x0;
            t1 = FUN_0c10af4c();
            *(unsigned int *)0xC474C0C = t1;
            t0 = t1;
        }
        return t0;
    }
    (((struct o0_uchar *)0xC541F45)->v) = ((*(signed char *)0xC541F45) + 0x1);
    (((struct o1_uchar *)0xC541F45)->v) = 0x0;
    return 0x0;
}

int FUN_0c10b01e(void)
{
    register int t3;

    (((struct o0_uint *)0xC474718)->v) = 0x2;
    (((struct o24_uint *)0xC474718)->v) = 0x0;
    (((struct o0_uint *)0xC474B8C)->v) = (FUN_0c118412(0x5));
    (((struct oC_uint *)0xC474B8C)->v) = (FUN_0c117d14());
    (((struct o8_uint *)0xC474B8C)->v) = (FUN_0c11791c());
    t3 = FUN_0c1173a0();
    (((struct o4_uint *)0xC474B8C)->v) = t3;
    return t3;
}

int FUN_0c10b050(void)
{
    (((struct o14_uchar *)(((((struct o0_int *)0xC474B8C)->v))))->v) = 0x63;
    (((struct o0_uint *)0xC474B8C)->v) = 0x0;
    (((struct o14_uchar *)(((((struct oC_int *)0xC474B8C)->v))))->v) = 0x63;
    (((struct oC_uint *)0xC474B8C)->v) = 0x0;
    (((struct o14_uchar *)(((((struct o8_int *)0xC474B8C)->v))))->v) = 0x63;
    (((struct o8_uint *)0xC474B8C)->v) = 0x0;
    (((struct o14_uchar *)(((((struct o4_int *)0xC474B8C)->v))))->v) = 0x63;
    (((struct o4_uint *)0xC474B8C)->v) = 0x0;
    return 0x14;
}
