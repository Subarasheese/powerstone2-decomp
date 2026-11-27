/* game/save: functions 0C015B58-0C017EF8, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_short { short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2_short { char p[0x2]; short v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o44_int { char p[0x44]; int v; };
struct o44_uint { char p[0x44]; unsigned int v; };
struct o48_float { char p[0x48]; float v; };
struct o48_uchar { char p[0x48]; unsigned char v; };
struct o49_uchar { char p[0x49]; unsigned char v; };
struct o4B_uchar { char p[0x4B]; unsigned char v; };
struct o4C_uchar { char p[0x4C]; unsigned char v; };
struct o4D_uchar { char p[0x4D]; unsigned char v; };
struct o4E_uchar { char p[0x4E]; unsigned char v; };
struct o50_uchar { char p[0x50]; unsigned char v; };
struct o51_uchar { char p[0x51]; unsigned char v; };
struct o52_uchar { char p[0x52]; unsigned char v; };
struct o53_uchar { char p[0x53]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
int FUN_0c015cb6(void);
int FUN_0c0167cc(int, int, int, int);
int FUN_0c0169cc(void);
int FUN_0c016a88(int, int, int, int);
int FUN_0c016d00(int, int, int, int);
int FUN_0c017098(void);
int FUN_0c017104(int, ...);
int FUN_0c017160(int);
int FUN_0c01718c(void);
int FUN_0c0171cc(void);
int FUN_0c0173bc(int, int);
int FUN_0c0173e6(int, ...);
int FUN_0c01746e(int, ...);
int FUN_0c017538(int, ...);
int FUN_0c0176ba(void);
int FUN_0c017708(void);
int FUN_0c017be8(void);
int FUN_0c017d4c(void);
int FUN_0c017e58(void);
int FUN_0c017e68(void);
int FUN_0c01cc56(int, int);
int thunk_FUN_0c03f346(int, int, int, int);
int FUN_0c05aab6(int, int);
int memset(int, int, int);
int FUN_0c187d24(int, int);
int strcpy(int, int);
int strlen(int);
int FUN_0c187d98(int, int, int);
int strncpy(int, int, int);
int FUN_0c015b58(void);
int FUN_0c015c38(int a4);
int FUN_0c015f5c(void);
int FUN_0c016226(void);
int FUN_0c016230(void);
int FUN_0c01623a(void);
int FUN_0c016244(void);
int FUN_0c016252(int a4);
int FUN_0c01626a(void);
int FUN_0c016278(void);
int FUN_0c016288(void);
int FUN_0c016296(void);
int FUN_0c0162a6(void);
int FUN_0c0162b6(void);
int FUN_0c0162c6(int a4, int a5, int a6, int a7);
int FUN_0c016334(int a4, int a5);
int FUN_0c0163c4(int a4, int a5, int a6, int a7);
int FUN_0c01643e(int a4, int a5, int a6, int a7);
int FUN_0c0164ec(int a4, int a5);
int FUN_0c016518(int a4, int a5);
int FUN_0c01654e(int a4, int a5);
int FUN_0c0166cc(int a4);
int thunk_FUN_0c0167cc(int a4, int a5, int a6, int a7);
int FUN_0c0168fe(void);
int FUN_0c016930(void);
int FUN_0c016978(void);
void FUN_0c0169c2(void);
int FUN_0c0170ae(void);
int FUN_0c0171f0(void);
int FUN_0c017234(void);
int FUN_0c017292(void);
int FUN_0c017314(void);
int FUN_0c01742e(int a4);
int FUN_0c01760a(void);
int FUN_0c017622(void);
int FUN_0c01763a(void);
int FUN_0c017696(void);
int FUN_0c017a2e(void);
int FUN_0c017c1a(void);
int FUN_0c017c70(int a4, int a5, int a6, int a7);
int FUN_0c017c96(void);
void FUN_0c017d7e(int a4, int a5, int a6, int a7);
int FUN_0c017d92(int a4, int a5, int a6, int a7);
int FUN_0c017e38(void);
int FUN_0c017e48(void);
int FUN_0c017e78(void);
int FUN_0c017eb8(void);
int FUN_0c017ec8(void);
int FUN_0c017ed8(void);
int FUN_0c017ee8(void);

int FUN_0c015b58(void)
{
    register int t9;

    FUN_0c015f5c();
    FUN_0c015cb6();
    if ((*(int *)(((*(int *)0xC304BA0) + 0x4))) == 0) {
        FUN_0c017708();
    }
    t9 = *(int *)0xC304BA0;
    if ((*(int *)((t9 + 0x4))) == 1) {
        strcpy((*(int *)((t9 + 0x14))), 0xC304BA4);
    }
    if ((*(int *)(((*(int *)0xC304BA0) + 0x4))) != 0) {
        *(unsigned char *)0xC30EFA3 = 0x0;
    }
    return (*(int *)(((*(int *)0xC304BA0) + 0x4)));
}

int FUN_0c015c38(int a4)
{
    register int t0;
    register int t1;
    int t2;
    register int t6;
    register int t14;

    t0 = *(int *)0xC304BA0;
    t1 = *(int *)(((t0 + 0x3C) + 0x4));
    t2 = *(int *)(((t0 + 0x3C) + 0x0));
    if (((~t1) & t2) != 0) {
        (((struct o48_uchar *)(t0))->v) = 0x0;
    }
    t6 = *(int *)0xC304BA0;
    if ((t2 & a4) != 0) {
        if (((unsigned char)(*(signed char *)((t6 + 0x48))) & 128) == 0) {
            if ((((~t1) & t2) & a4) != 0) {
                (((struct o48_uchar *)(t6))->v) = 0x9E;
                (((struct o44_uint *)((*(int *)0xC304BA0)))->v) = a4;
                return 0x1;
            }
            return 0x0;
        }
        if (a4 == ((((struct o44_int *)(t6))->v))) {
            t14 = *(signed char *)((t6 + 0x48));
            (((struct o48_uchar *)(t6))->v) = (t14 - 1);
            if ((unsigned char)(t14 - 1) == 0x80) {
                (((struct o48_uchar *)((*(int *)0xC304BA0)))->v) = 0x84;
                return 0x1;
            }
            return 0x0;
        }
        return 0x0;
    }
    if (a4 == ((((struct o44_int *)(t6))->v))) {
        (((struct o44_uint *)(t6))->v) = 0x0;
        (((struct o48_uchar *)((*(int *)0xC304BA0)))->v) = 0x0;
    }
    return 0x0;
}

int FUN_0c015f5c(void)
{
    int stk[2];

    register int R1;
    register int R2;
    register int R3;
    register int R14;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    v0_0 = *(int *)0xC304BA0;
    *(unsigned char *)(((v0_0 + 0x53) + 0x1)) = (*(signed char *)(((v0_0 + 0x53) + 0x0)));
    (((struct o53_uchar *)((*(int *)0xC304BA0)))->v) = (*(signed char *)0xC30EF9C);
    v0_4 = *(int *)0xC304BA0;
    v0_3 = (0x52);
    v0_1 = (0xC304BA0);
    v0_0 = (v0_4);
    v0_2 = (0x80);
    if ((((unsigned char)(*(signed char *)((v0_4 + 0x52))) & 0x80) != 0)) goto L_C015F9E;
    L_C015F80:;
    v0_2 = *(int *)((v0_1 + 0x0));
    v0_5 = *(signed char *)(((v0_2 + 0x53) + 0x0));
    v0_0 = (v0_2);
    v0_4 = ((v0_2 + 0x53));
    v0_2 = ((unsigned char)v0_5);
    if (((unsigned char)v0_5 == 0)) goto L_C015FCA;
    v0_5 = *(signed char *)((v0_4 + 0x1));
    v0_3 = ((unsigned char)v0_5);
    if ((v0_2 == (unsigned char)v0_5)) goto L_C015FCA;
    (((struct o52_uchar *)(v0_0))->v) = 0x9E;
    L_C015FBE:;
    v0_3 = R14;
    *(int *)((int)stk + 4) = v0_3;
    v0_5 = (*(signed char *)(((*(int *)0xC304BA0) + 0x49))) == 0;
    *(unsigned int *)(((int)stk + 0)) = v0_3;
    v0_3 = (0x49);
    if (v0_5) goto L_C015FFE;
    FUN_0c017c70(v0_1, v0_0, v0_4, v0_2);
    FUN_0c017be8();
    v0_1 = FUN_0c017c96();
    v0_3 = (v0_1);
    L_C015FFE:;
    v0_5 = *(signed char *)((((*(int *)0xC304BA0) + 0x53) + 0x0));
    R14 = ((unsigned char)v0_5);
    v0_1 = (v0_5);
    if (((int)(unsigned char)v0_5 >= (int)0x4)) goto L_C016012;
    L_C016220:;
    *(volatile int *)((int)stk + 0);
    return v0_3;
    L_C016012:;
    v0_3 = (0x3C);
    if (((int)R14 < (int)0x3C)) goto L_C016022;
    if (((int)R14 > (int)0x48)) goto L_C016022;
    goto L_C016220;
    L_C016022:;
    if (((int)R14 < (int)0x53)) goto L_C016032;
    if (((int)R14 > (int)0x86)) goto L_C016032;
    goto L_C016220;
    L_C016032:;
    if (((int)R14 < (int)0x8C)) goto L_C01603C;
    goto L_C016220;
    L_C01603C:;
    v0_3 = (R14);
    if ((R14 != 49)) goto L_C016048;
    goto L_C016220;
    L_C016048:;
    if ((v0_3 != 73)) goto L_C016050;
    goto L_C016220;
    L_C016050:;
    if ((v0_3 != 75)) goto L_C016058;
    goto L_C016220;
    L_C016058:;
    if ((v0_3 != 78)) goto L_C016060;
    goto L_C016220;
    L_C016060:;
    if ((v0_3 == 40)) goto L_C0160E0;
    if ((v0_3 == 41)) goto L_C0160EA;
    if ((v0_3 == 42)) goto L_C0160F4;
    if ((v0_3 == 44)) goto L_C0160FE;
    if ((v0_3 == 47)) goto L_C016108;
    if ((v0_3 == 48)) goto L_C016112;
    if ((v0_3 == 53)) goto L_C01611C;
    if ((v0_3 == 57)) goto L_C016126;
    if ((v0_3 == 58)) goto L_C016130;
    if ((v0_3 == 59)) goto L_C01613A;
    if ((v0_3 == 74)) goto L_C016144;
    if ((v0_3 == 76)) goto L_C01614E;
    if ((v0_3 == 77)) goto L_C016158;
    if ((v0_3 == 79)) goto L_C016162;
    v0_5 = (((v0_3 == 80)));
    if ((v0_5)) goto L_C01616C;
    if ((v0_3 == 81)) goto L_C016176;
    if ((v0_3 == 82)) goto L_C016180;
    if ((v0_3 != 0x88)) goto L_C0160C8;
    FUN_0c01763a();
    L_C0161F6:;
    if ((R14 == 41)) goto L_C016210;
    if ((R14 != 40)) goto L_C016214;
    v0_1 = (*(int *)(((*(int *)0xC304BA0) + 0x4))) == 0;
    if (v0_1) goto L_C016214;
    L_C016210:;
    L_C016216:;
    *(volatile int *)((int)stk + 0);
    return FUN_0c05aab6(0x0, v0_0);
    L_C016214:;
    goto L_C016216;
    L_C0160C8:;
    if ((v0_3 != 0x8A)) goto L_C0160D2;
    FUN_0c017696();
    goto L_C0161F6;
    L_C0160D2:;
    if ((v0_3 != 0x8B)) goto L_C0160DC;
    FUN_0c0176ba();
    goto L_C0161F6;
    L_C0160DC:;
    FUN_0c016d00(v0_1, v0_0, v0_4, v0_2);
    goto L_C0161F6;
    L_C016180:;
    FUN_0c017622();
    goto L_C0161F6;
    L_C016176:;
    FUN_0c01760a();
    goto L_C0161F6;
    L_C01616C:;
    FUN_0c017538(*(int *)((int)stk + 0));
    goto L_C0161F6;
    L_C016162:;
    FUN_0c01746e(*(int *)((int)stk + 0));
    goto L_C0161F6;
    L_C016158:;
    FUN_0c01742e(v0_1);
    goto L_C0161F6;
    L_C01614E:;
    FUN_0c0173e6(*(int *)((int)stk + 0));
    goto L_C0161F6;
    L_C016144:;
    FUN_0c0173bc(v0_1, v0_0);
    goto L_C0161F6;
    L_C01613A:;
    FUN_0c017314();
    goto L_C0161F6;
    L_C016130:;
    FUN_0c017292();
    goto L_C0161F6;
    L_C016126:;
    FUN_0c017234();
    goto L_C0161F6;
    L_C01611C:;
    FUN_0c0171f0();
    goto L_C0161F6;
    L_C016112:;
    FUN_0c0171cc();
    goto L_C0161F6;
    L_C016108:;
    FUN_0c01718c();
    goto L_C0161F6;
    L_C0160FE:;
    FUN_0c017160(0x0);
    goto L_C0161F6;
    L_C0160F4:;
    FUN_0c017104(*(int *)((int)stk + 0));
    goto L_C0161F6;
    L_C0160EA:;
    FUN_0c0170ae();
    goto L_C0161F6;
    L_C0160E0:;
    FUN_0c017098();
    goto L_C0161F6;
    L_C015FCA:;
    return v0_3;
    L_C015F9E:;
    v0_4 = ((v0_0 + 0x53));
    if (((*(signed char *)(((v0_0 + 0x53) + 0x0))) != (*(signed char *)(((v0_0 + 0x53) + 0x1))))) goto L_C015FC2;
    v0_5 = *(signed char *)((v0_0 + 0x52));
    (((struct o52_uchar *)(v0_0))->v) = (v0_5 - 1);
    v0_3 = (0x52);
    if (((unsigned char)(v0_5 - 1) != v0_2)) goto L_C015FCA;
    *(unsigned char *)(((*(int *)((v0_1 + 0x0))) + v0_3)) = 0x84;
    goto L_C015FBE;
    L_C015FC2:;
    (((struct o52_uchar *)(v0_0))->v) = 0x0;
    v0_3 = (0x52);
    goto L_C015F80;
}

int FUN_0c016226(void)
{
    return ((unsigned char)(*(signed char *)0xC30EF9F) & 0x44);
}

int FUN_0c016230(void)
{
    return ((unsigned char)(*(signed char *)0xC30EF9F) & 0x22);
}

int FUN_0c01623a(void)
{
    return ((unsigned char)(*(signed char *)0xC30EF9F) & 0x11);
}

int FUN_0c016244(void)
{
    return ((unsigned char)(*(signed char *)((0x4B + (*(int *)0xC304BA0)))) & 0x3);
}

int FUN_0c016252(int a4)
{
    register int t0;

    t0 = *(int *)0xC304BA0;
    (((struct o4B_uchar *)(t0))->v) = ((*(signed char *)((t0 + 0x4B))) & 0xC);
    t0 = *(int *)0xC304BA0;
    (((struct o4B_uchar *)(t0))->v) = ((*(signed char *)((t0 + 0x4B))) | a4);
    return 0x4B;
}

int FUN_0c01626a(void)
{
    return ((unsigned char)(*(signed char *)((0x4B + (*(int *)0xC304BA0)))) & 0x4);
}

int FUN_0c016278(void)
{
    register int t0;

    t0 = *(int *)0xC304BA0;
    (((struct o4B_uchar *)(t0))->v) = ((*(signed char *)((t0 + 0x4B))) ^ 0x4);
    return 0x4B;
}

int FUN_0c016288(void)
{
    return ((unsigned char)(*(signed char *)((0x4B + (*(int *)0xC304BA0)))) & 0x8);
}

int FUN_0c016296(void)
{
    register int t0;

    t0 = *(int *)0xC304BA0;
    (((struct o4B_uchar *)(t0))->v) = ((*(signed char *)((t0 + 0x4B))) ^ 0x8);
    return 0x4B;
}

int FUN_0c0162a6(void)
{
    register int t0;

    t0 = *(int *)0xC304BA0;
    (((struct o4B_uchar *)(t0))->v) = ((*(signed char *)((t0 + 0x4B))) | 0x8);
    return 0x4B;
}

int FUN_0c0162b6(void)
{
    register int t0;

    t0 = *(int *)0xC304BA0;
    (((struct o4B_uchar *)(t0))->v) = ((*(signed char *)((t0 + 0x4B))) & 0xF7);
    return 0x4B;
}

int FUN_0c0162c6(int a4, int a5, int a6, int a7)
{
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t0;

    t1 = a4;
    t2 = 0x0;
    t3 = a7;
    t4 = 0x0;
    for (;;) {
        if (((*(signed char *)((t1 + 0x0))) != 0) && ((int)t4 < (int)a5)) {
            t2 = (*(signed char *)((t1 + 0x0)));
            t2 = (unsigned char)t2;
            if ((((int)t2 >= (int)0x80) && ((int)t2 <= (int)0x9F)) || ((t0 = 0xE0, (int)t2 >= (int)t0) && ((int)t2 <= (int)0xFF))) {
                t2 = 0x2;
            } else {
                t2 = 0x1;
            }
            t4 = (t4 + t2);
            t3 = 0x0;
            if ((int)t2 > 0) {
                for (;;) {
                    t3 = (t3 + 0x1);
                    t1 = (t1 + 0x1);
                    if ((int)t3 >= (int)t2) {
                        break;
                    }
                }
            }
            continue;
        }
        break;
    }
    return t2;
}

int FUN_0c016334(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t2 = strlen(a4);
    t3 = 0x0;
    if (t2 != 0) {
        t2 = t0;
        t0 = 0x0;
        t4 = a4;
        for (;;) {
            if (((*(signed char *)((t4 + 0x0))) != 0) && ((int)t0 < (int)a5)) {
                t2 = (*(signed char *)((t4 + 0x0)));
                t2 = (unsigned char)t2;
                if ((((int)t2 >= (int)0x80) && ((int)t2 <= (int)0x9F)) || ((t1 = 0xE0, (int)t2 >= (int)t1) && ((int)t2 <= (int)0xFF))) {
                    t2 = 0x2;
                } else {
                    t2 = 0x1;
                }
                t4 = (t4 + t2);
                t0 = (t0 + t2);
                continue;
            }
            break;
        }
        t1 = 0xFFFFFFFF;
        if ((int)t0 > (int)a5) {
        } else {
            t0 = *(signed char *)((a5 + a4));
            t2 = 0x1;
            if ((((int)(unsigned char)t0 >= (int)0x80) && ((int)(unsigned char)t0 <= (int)0x9F)) || (((int)(unsigned char)t0 >= (int)0xE0) && ((int)(unsigned char)t0 <= (int)0xFF))) {
                t2 = 0x2;
            }
            t1 = t2;
        }
        t3 = t1;
    }
    return t3;
}

int FUN_0c0163c4(int a4, int a5, int a6, int a7)
{
    int stk[34];
    register int t0;
    register int t1;
    register int t3;
    register int t13;
    int R1000;
    int R1004;

    R1000 = *(int *)((int)stk + 0);
    R1004 = *(int *)((int)stk + 4);

    R1004 = a6;
    R1000 = a7;
    t0 = strlen(a4);
    t1 = strlen(a5);
    if ((int)(t1 + t0) > (int)(R1000)) {
        t3 = R1000;
        *(unsigned char *)((a5 + ((((int)((unsigned int)((int)((unsigned int)(t3 - t0) + (unsigned int)0x0)) + ((((int)0x0 > (int)(t3 - t0))) ? 1u : 0u))) >> 1) << 1))) = 0x0;
    }
    t13 = R1004;
    R1000 = (t13 + a4);
    strcpy((((int)stk + 0) + 0x8), (t13 + a4));
    *(unsigned char *)(((R1000) + 0x0)) = 0x0;
    FUN_0c187d24(a4, a5);
    FUN_0c187d24(a4, (((int)stk + 0) + 0x8));
    return (strlen(a5));
}

int FUN_0c01643e(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;

    t0 = *(int *)0xC304BA0;
    t1 = 0x0;
    if ((int)(unsigned char)(*(signed char *)((t0 + 0x4D))) >= (int)0x2) {
        t2 = *(signed char *)((t0 + 0x4D));
        t0 = *(signed char *)(((((unsigned char)t2 - 2) + 0xC304C24) + 0x0));
        t3 = *(signed char *)(((((unsigned char)t2 - 2) + 0xC304C24) + 0x1));
        t4 = strlen(a4);
        t5 = t4;
        if ((int)t4 < 0) {
            t5 = (t4 + 0x3);
        }
        t4 = 0x0;
        if ((int)(unsigned char)((t5 >> 1) >> 1) > 0) {
            t6 = 0x0;
            t7 = a4;
            for (;;) {
                t8 = *(signed char *)((t7 + 0x0));
                t7 = (t7 + 0x1);
                t9 = *(signed char *)((t7 + 0x0));
                t7 = (t7 + 0x1);
                if ((unsigned short)(((unsigned char)t8 << 8) | (unsigned char)t9) == (unsigned short)(((unsigned char)t0 << 8) | (unsigned char)t3)) {
                    break;
                }
                t6 = (t6 + 0x1);
                t7 = (t7 + 0x2);
                if ((int)(unsigned char)t6 >= (int)(unsigned char)((t5 >> 1) >> 1)) {
                    return 0x0;
                }
            }
            *(unsigned char *)(((((unsigned char)t2 - 2) + 0xC304C24) + 0x0)) = (*(signed char *)((t7 + 0x0)));
            *(unsigned char *)((((((unsigned char)t2 - 2) + 0xC304C24) + 0x1) + 0x0)) = (*(signed char *)(((t7 + 0x1) + 0x0)));
            (((struct o4E_uchar *)((*(int *)0xC304BA0)))->v) = 0x0;
            t4 = 0x1;
        }
        t1 = t4;
    }
    return t1;
}

int FUN_0c0164ec(int a4, int a5)
{
    register int t0;
    register int t2;

    t0 = strlen(a4);
    t2 = t0;
    if ((int)t0 > (int)a5) {
        *(unsigned char *)((a4 + a5)) = 0x0;
        (((struct o4E_uchar *)((*(int *)0xC304BA0)))->v) = 0x0;
        t2 = 0x4E;
    }
    return t2;
}

int FUN_0c016518(int a4, int a5)
{
    register int t2;

    t2 = 0x0;
    if (a5 == 0) {
    } else {
        *(unsigned char *)((a4 + 0x0)) = 0x0;
        FUN_0c187d24(a4, (a5 + a4));
        (((struct o4E_uchar *)((*(int *)0xC304BA0)))->v) = 0x0;
        t2 = a5;
    }
    return t2;
}


int FUN_0c0166cc(int a4)
{
    int stk[4];
    register int t1;
    register int t2;
    register int t3;
    register int t8;
    register int t36;
    register int t9;
    register int t10;
    register int t14;
    register int t17;

    memset((((int)stk + 0) + 0x4), 0x0, 0xA);
    t1 = *(int *)0xC304BA0;
    *(unsigned int *)(((int)stk + 0)) = t1;
    t2 = *(signed char *)((t1 + 0x4D));
    t3 = ((-(unsigned char)t2) + 0x8);
    if ((int)((-(unsigned char)t2) + 0x8) < 0) {
        t3 = 0x0;
    }
    strncpy((t3 + (((int)stk + 0) + 0x4)), ((((unsigned char)(*(signed char *)(((*(int *)(((int)stk + 0))) + 0x4D))) + t3) - 8) + 0xC304C24), (0x8 - t3));
    t8 = FUN_0c01654e(a4, ((((int)stk + 0) + 0x4) + 0x2));
    t36 = t8;
    if (t8 == 0) {
        t9 = FUN_0c01654e(a4, ((((int)stk + 0) + 0x4) + 0x4));
        t36 = t9;
        if (t9 == 0) {
            t10 = FUN_0c01654e(a4, ((((int)stk + 0) + 0x4) + 0x6));
            t36 = t10;
            if (t10 == 0) {
                t14 = *(signed char *)(((((int)stk + 0) + 0x4) + 0x4));
                t36 = (unsigned char)t14;
                if (((unsigned char)t14 == 78) || ((unsigned char)t14 == 110)) {
                    t17 = *(signed char *)(((((int)stk + 0) + 0x4) + 0x6));
                    t36 = (unsigned char)t17;
                    if ((unsigned char)t17 != 89) {
                        t36 = (unsigned char)t17;
                        if ((unsigned char)t17 != 121) {
                            t36 = (strncpy((((unsigned char)(*(signed char *)(((*(int *)0xC304BA0) + 0x4D))) - 4) + 0xC304C24), (*(int *)(((a4 << 2) + 0xC20C900))), 0x2));
                        }
                    }
                }
            }
        }
    }
    return t36;
}

int thunk_FUN_0c0167cc(int a4, int a5, int a6, int a7)
{
    return FUN_0c0167cc(a4, a5, a6, a7);
}

int FUN_0c0168fe(void)
{
    register int t1;
    register int t2;

    t1 = *(signed char *)((0x4A + (*(int *)0xC304BA0)));
    if (((unsigned char)t1 & 2) == 0) {
        t2 = FUN_0c01626a();
        if (t2 == 0) {
            FUN_0c016278();
            FUN_0c016252(0x0);
            FUN_0c017be8();
            return FUN_0c017a2e();
        }
        return t2;
    }
    return (unsigned char)t1;
}

int FUN_0c016930(void)
{
    register int t1;
    register int t2;
    register int t11;

    t1 = *(signed char *)((0x4A + (*(int *)0xC304BA0)));
    if (((unsigned char)t1 & 1) == 0) {
        t2 = FUN_0c01626a();
        if (t2 != 0) {
            if ((*(signed char *)0xC304C24) != 0) {
                FUN_0c016a88(0x0, 0x0, 0x0, 0x0);
            }
            FUN_0c016278();
            t11 = FUN_0c016244();
            if ((int)t11 < (int)0x2) {
                FUN_0c016252(0x3);
            }
            FUN_0c017be8();
            return FUN_0c017a2e();
        }
        return t2;
    }
    return (unsigned char)t1;
}

int FUN_0c016978(void)
{
    register int t1;
    register int t2;

    t1 = *(signed char *)((0x4A + (*(int *)0xC304BA0)));
    if (((unsigned char)t1 & 3) == 0) {
        t2 = FUN_0c01626a();
        if (t2 == 0) {
            FUN_0c016278();
            FUN_0c016252(0x0);
        } else {
            if ((*(signed char *)0xC304C24) != 0) {
                FUN_0c016a88(0x0, 0x0, 0x0, 0x0);
            }
            FUN_0c016278();
            FUN_0c016252(0x3);
        }
        FUN_0c017be8();
        return FUN_0c017a2e();
    }
    return (unsigned char)t1;
}

void FUN_0c0169c2(void)
{
    *(unsigned int *)(((*(int *)0xC304BA0) + 0x4)) = 0xFFFFFFFF;
}

int FUN_0c0170ae(void)
{
    register int t0;

    t0 = *(int *)0xC304BA0;
    if ((*(signed char *)((t0 + 0x4C))) != 0) {
        (((struct o4C_uchar *)(t0))->v) = 0x0;
        (((struct o4E_uchar *)((*(int *)0xC304BA0)))->v) = 0x0;
        return 0x4E;
    }
    if ((*(signed char *)0xC304C24) != 0) {
        (((struct o4E_uchar *)(t0))->v) = 0x0;
        (((struct o4D_uchar *)((*(int *)0xC304BA0)))->v) = 0x0;
        return memset(0xC304C24, 0x0, 0x80);
    }
    *(unsigned int *)((t0 + 0x4)) = 0xFFFFFFFF;
    return 0x4C;
}

int FUN_0c0171f0(void)
{
    register int t1;
    register int t2;
    register int t13;

    t1 = *(signed char *)((0x4A + (*(int *)0xC304BA0)));
    if (((unsigned char)t1 & 3) == 0) {
        t2 = FUN_0c01626a();
        if (t2 == 0) {
            FUN_0c016278();
            t13 = 0x0;
        } else {
            if ((*(signed char *)0xC304C24) != 0) {
                FUN_0c016a88(0x0, 0x0, 0x0, 0x0);
            }
            FUN_0c016278();
            t13 = 0x3;
        }
        FUN_0c016252(t13);
        FUN_0c017d4c();
        return FUN_0c017c96();
    }
    return (unsigned char)t1;
}

int FUN_0c017234(void)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = FUN_0c016244();
    t1 = FUN_0c01626a();
    if (t1 == 0) {
        t1 = FUN_0c016230();
        if (t1 != 0) {
            t2 = 0x2;
            if (t0 != 3) {
                t2 = 0x3;
            }
            FUN_0c016252(t2);
            FUN_0c017d4c();
            return FUN_0c017c96();
        }
        return t1;
    }
    t1 = FUN_0c016230();
    if (t1 == 0) {
        if ((int)t0 <= (int)0x1) {
            FUN_0c016252(0x3);
            FUN_0c017d4c();
            return FUN_0c017c96();
        }
        return t1;
    }
    t1 = 0x3;
    if (t0 == 3) {
        t1 = 0x2;
    }
    FUN_0c016252(t1);
    FUN_0c017d4c();
    return FUN_0c017c96();
}

int FUN_0c017292(void)
{
    register int t0;

    t0 = FUN_0c016244();
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                } else {
                    t0 = FUN_0c01626a();
                    if (t0 == 0) {
                        FUN_0c016252(0x2);
                    } else {
                        FUN_0c016252(0x0);
                        FUN_0c0162b6();
                    }
                }
                FUN_0c017d4c();
                return FUN_0c017c96();
            }
            t0 = *(signed char *)((0x4A + (*(int *)0xC304BA0)));
            if (((unsigned char)t0 & 28) == 0) {
                FUN_0c016252(0x3);
                FUN_0c017d4c();
                return FUN_0c017c96();
            }
            return (unsigned char)t0;
        }
        t0 = FUN_0c016288();
        if (t0 == 0) {
            FUN_0c016252(0x0);
            FUN_0c016296();
        } else {
            FUN_0c016252(0x2);
        }
    } else {
        FUN_0c016252(0x1);
    }
    FUN_0c017d4c();
    return FUN_0c017c96();
}

int FUN_0c017314(void)
{
    register int t0;
    register int t1;

    t0 = FUN_0c016244();
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                } else {
                    FUN_0c016252(0x2);
                }
                FUN_0c017d4c();
                return FUN_0c017c96();
            }
            t0 = *(signed char *)((0x4A + (*(int *)0xC304BA0)));
            if (((unsigned char)t0 & 28) == 0) {
                t1 = FUN_0c01626a();
                if (t1 == 0) {
                    FUN_0c016252(0x3);
                } else {
                    FUN_0c016252(0x1);
                    FUN_0c0162a6();
                }
                FUN_0c017d4c();
                return FUN_0c017c96();
            }
            return (unsigned char)t0;
        }
        FUN_0c016252(0x0);
    } else {
        t0 = FUN_0c016288();
        if (t0 != 0) {
            FUN_0c016252(0x1);
            FUN_0c016296();
        } else {
            FUN_0c016252(0x3);
        }
    }
    FUN_0c017d4c();
    return FUN_0c017c96();
}

int FUN_0c01742e(int a4)
{
    int t0;
    register int t1;

    t1 = 0x4C;
    if (((*(signed char *)(((*(int *)0xC304BA0) + 0x4C))) == 0) && (t0 = *(signed char *)0xC304C24, t0 == 0)) {
        t0 = strlen(0xC304BA4);
        t1 = 0x50;
        if ((unsigned char)(*(signed char *)(((*(int *)0xC304BA0) + 0x50))) != t0) {
            (((struct o50_uchar *)((*(int *)0xC304BA0)))->v) = t0;
            (((struct o4E_uchar *)((*(int *)0xC304BA0)))->v) = 0x0;
            t1 = 0x4E;
        }
    }
    return t1;
}

int FUN_0c01760a(void)
{
    if ((*(signed char *)(((*(int *)0xC304BA0) + 0x4C))) != 0) {
        return FUN_0c017e68();
    }
    return 0x4C;
}

int FUN_0c017622(void)
{
    if ((*(signed char *)(((*(int *)0xC304BA0) + 0x4C))) != 0) {
        return FUN_0c017e58();
    }
    return 0x4C;
}

int FUN_0c01763a(void)
{
    register int t0;
    register int t1;

    t0 = FUN_0c01626a();
    if (t0 != 0) {
        t1 = FUN_0c016226();
        if (t1 != 0) {
            FUN_0c016296();
        } else {
            t1 = FUN_0c016230();
            if (t1 != 0) {
                t1 = FUN_0c016244();
                if (t1 != 1) {
                    FUN_0c016252(0x1);
                } else {
                    t1 = FUN_0c016244();
                    if (t1 != 0) {
                        FUN_0c016252(0x0);
                    }
                }
            } else {
                t1 = FUN_0c016244();
                if (t1 != 0) {
                    FUN_0c016252(0x0);
                }
            }
        }
        FUN_0c017d4c();
        return FUN_0c017c96();
    }
    return t0;
}

int FUN_0c017696(void)
{
    if ((*(signed char *)(((*(int *)0xC304BA0) + 0x4C))) == 0) {
        if ((*(signed char *)0xC304C24) != 0) {
            return FUN_0c0169cc();
        }
        return 0x4C;
    }
    return FUN_0c017e68();
}

int FUN_0c017a2e(void)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = FUN_0c016244();
    t1 = FUN_0c01cc56(t0, 0xC017D7E);
    *(unsigned int *)((t1 + 0x10)) = (*(int *)0xC304BA0);
    *(unsigned int *)(((*(int *)0xC304BA0) + 0x20)) = t1;
    t0 = FUN_0c01cc56(0x35, 0xC017D7E);
    *(unsigned int *)((t0 + 0x10)) = (*(int *)0xC304BA0);
    t1 = FUN_0c01626a();
    t2 = 0x4;
    if (t1 == 0) {
        t2 = 0x47;
    }
    (((struct o28_float *)(t0))->v) = (float)(*(short *)((((t2 << 2) + 0xC20BB70) + 0x0)));
    (((struct o2C_float *)(t0))->v) = (float)(*(short *)((((t2 << 2) + 0xC20BB70) + 0x2)));
    *(unsigned int *)(((*(int *)0xC304BA0) + 0x2C)) = t0;
    t0 = FUN_0c01cc56(0x35, 0xC017D7E);
    *(unsigned int *)((t0 + 0x10)) = (*(int *)0xC304BA0);
    t1 = FUN_0c016244();
    (((struct o28_float *)(t0))->v) = (float)(*(short *)((((t1 << 2) + 0xC20BB70) + 0x0)));
    (((struct o2C_float *)(t0))->v) = (float)(*(short *)((((t1 << 2) + 0xC20BB70) + 0x2)));
    (((struct oAC_ushort *)(t0))->v) = (((((struct oAC_short *)(t0))->v)) | 0x10);
    (((struct o40_float *)(t0))->v) = (1.0f + 1.0f);
    (((struct o48_float *)(t0))->v) = 1.0f;
    (((struct o44_float *)(t0))->v) = 1.0f;
    *(unsigned int *)(((*(int *)0xC304BA0) + 0x30)) = t0;
    t0 = FUN_0c01cc56(0x4, 0xC017DC8);
    *(unsigned int *)((t0 + 0x10)) = (*(int *)0xC304BA0);
    (((struct o28_float *)(t0))->v) = (float)(*(short *)(((((unsigned char)(*(signed char *)(((*(int *)0xC304BA0) + 0x4F))) << 2) + 0xC20BB70) + 0x0)));
    (((struct o2C_float *)(t0))->v) = (float)(*(short *)(((0xC20BB70 + ((unsigned char)(*(signed char *)(((*(int *)0xC304BA0) + 0x4F))) << 2)) + 0x2)));
    (((struct oAC_ushort *)(t0))->v) = (((((struct oAC_short *)(t0))->v)) | 0x10);
    (((struct o48_float *)(t0))->v) = 1.0f;
    (((struct o44_float *)(t0))->v) = 1.0f;
    t1 = *(signed char *)((0x4F + (*(int *)0xC304BA0)));
    if (((unsigned char)t1 != 0) && (((unsigned char)t1 != 1) && (((unsigned char)t1 != 2) && (((unsigned char)t1 != 3) && ((unsigned char)t1 != 38))))) {
        if ((unsigned char)t1 != 72) {
            if (((unsigned char)t1 != 69) && (((unsigned char)t1 != 70) && ((unsigned char)t1 != 73))) {
                (((struct o40_float *)(t0))->v) = 1.0f;
            } else {
                (((struct o40_float *)(t0))->v) = 4.0f;
            }
        } else {
            (((struct o40_float *)(t0))->v) = 3.0f;
        }
    } else {
        (((struct o40_float *)(t0))->v) = (1.0f + 1.0f);
    }
    *(unsigned int *)(((*(int *)0xC304BA0) + 0x24)) = t0;
    (((struct o49_uchar *)((*(int *)0xC304BA0)))->v) = 0x1;
    return 0x49;
}

int FUN_0c017c1a(void)
{
    register int t0;

    t0 = FUN_0c01cc56(0x35, 0xC017D7E);
    *(unsigned int *)((t0 + 0x10)) = (*(int *)0xC304BA0);
    (((struct o28_float *)(t0))->v) = (float)((((struct o0_short *)0xC20BC08)->v));
    (((struct o2C_float *)(t0))->v) = (float)((((struct o2_short *)0xC20BC08)->v));
    (((struct oAC_ushort *)(t0))->v) = (((((struct oAC_short *)(t0))->v)) | 0x10);
    (((struct o40_float *)(t0))->v) = (1.0f + 1.0f);
    (((struct o48_float *)(t0))->v) = 1.0f;
    (((struct o44_float *)(t0))->v) = 1.0f;
    *(unsigned int *)(((*(int *)0xC304BA0) + 0x34)) = t0;
    (((struct o51_uchar *)((*(int *)0xC304BA0)))->v) = 0x1;
    return 0x51;
}

int FUN_0c017c70(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(int *)0xC304BA0;
    if ((*(signed char *)((t0 + 0x51))) != 0) {
        thunk_FUN_0c03f346((*(int *)((t0 + 0x34))), a5, a6, a7);
    }
    (((struct o51_uchar *)((*(int *)0xC304BA0)))->v) = 0x0;
    return 0x51;
}

int FUN_0c017c96(void)
{
    register int t0;
    register int t1;

    t0 = FUN_0c01626a();
    t1 = 0x2D;
    if (t0 == 0) {
        t1 = 0x2C;
    }
    t0 = FUN_0c01cc56(t1, 0xC017D7E);
    *(unsigned int *)((t0 + 0x10)) = (*(int *)0xC304BA0);
    *(unsigned int *)(((*(int *)0xC304BA0) + 0x2C)) = t0;
    t0 = FUN_0c016244();
    t1 = FUN_0c01cc56((t0 + 0x2E), 0xC017D7E);
    *(unsigned int *)((t1 + 0x10)) = (*(int *)0xC304BA0);
    *(unsigned int *)(((*(int *)0xC304BA0) + 0x30)) = t1;
    if ((int)t0 <= (int)0x1) {
        t0 = FUN_0c016288();
        t1 = 0x33;
        if (t0 == 0) {
            t1 = 0x32;
        }
        t0 = FUN_0c01cc56(t1, 0xC017D7E);
        *(unsigned int *)((t0 + 0x10)) = (*(int *)0xC304BA0);
        *(unsigned int *)(((*(int *)0xC304BA0) + 0x34)) = t0;
    } else {
        *(unsigned int *)(((*(int *)0xC304BA0) + 0x34)) = 0x0;
    }
    t0 = FUN_0c01cc56(0x34, 0xC017D7E);
    *(unsigned int *)((t0 + 0x10)) = (*(int *)0xC304BA0);
    *(unsigned int *)(((*(int *)0xC304BA0) + 0x38)) = t0;
    return t0;
}

void FUN_0c017d7e(int a4, int a5, int a6, int a7)
{
    if ((*(int *)(((*(int *)0xC304BA0) + 0x4))) != 0) {
        thunk_FUN_0c03f346(a4, a5, a6, a7);
    return;
    }
}

int FUN_0c017d92(int a4, int a5, int a6, int a7)
{
    register int t5;

    (((struct o28_float *)(a4))->v) = (float)((*(int *)(((*(int *)0xC304BA0) + 0xC))) - 140);
    (((struct o2C_float *)(a4))->v) = (float)((-(*(int *)(((*(int *)0xC304BA0) + 0x10)))) + 0xE4);
    t5 = *(int *)(((*(int *)0xC304BA0) + 0x4));
    if (t5 != 0) {
        return thunk_FUN_0c03f346(a4, 0xC304BA0, a6, a7);
    }
    return t5;
}

int FUN_0c017e38(void)
{
    register int t0;

    t0 = *(int *)0xCA00000;
    return ((int (*)(void))(t0))();
}

int FUN_0c017e48(void)
{
    register int t0;

    t0 = *(int *)0xCA00018;
    return ((int (*)(void))(t0))();
}

int FUN_0c017e78(void)
{
    register int t0;

    t0 = *(int *)0xCA0002C;
    return ((int (*)(void))(t0))();
}

int FUN_0c017eb8(void)
{
    register int t0;

    t0 = *(int *)0xCA00048;
    return ((int (*)(void))(t0))();
}

int FUN_0c017ec8(void)
{
    register int t0;

    t0 = *(int *)0xCA0004C;
    return ((int (*)(void))(t0))();
}

int FUN_0c017ed8(void)
{
    register int t0;

    t0 = *(int *)0xCA00058;
    return ((int (*)(void))(t0))();
}

int FUN_0c017ee8(void)
{
    register int t0;

    t0 = *(int *)0xCA0005C;
    return ((int (*)(void))(t0))();
}
