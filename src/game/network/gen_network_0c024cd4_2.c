/* game/network: functions 0C024CD4-0C02624E, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o0_ushort { unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o1F_uchar { char p[0x1F]; unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct oA_uchar { char p[0xA]; unsigned char v; };
int FUN_0c01599c(void);
int FUN_0c018e74(int);
int FUN_0c01a9c0(void);
int FUN_0c01cd2c(int);
int FUN_0c021eb4(void);
int FUN_0c021ec4(void);
int FUN_0c021ed2(void);
int FUN_0c021ee2(void);
int FUN_0c021ef0(int, int, int);
int FUN_0c021f10(void);
int FUN_0c021f28(void);
int FUN_0c022050(void);
int FUN_0c0220c4(int, int, int);
int FUN_0c0221b0(void);
int FUN_0c0222a4(int, int, int);
int FUN_0c025564(void);
int FUN_0c02568a(void);
int FUN_0c02a94e(void);
int FUN_0c02aa9e(void);
int FUN_0c02b692(int, int, int);
int FUN_0c02b7fc(void);
int FUN_0c02bad0(void);
extern int FUN_0c02bae6();
int FUN_0c0573cc(int, int, int);
int FUN_0c05aab6(int, int);
int FUN_0c1864e0(int, int, int);
int FUN_0c186740(int, int, int);
int strcpy(int, int, int);
int FUN_0c024e78(int a4, int a5, int a6);
int FUN_0c025778(int a4, int a5, int a6, int a7);
int FUN_0c025f5c(float f4);
struct o4_ushort { char p[0x4]; unsigned short v; };


/* manual: network menu task: receives one lobby command (100: player row data, types 1-4; 101/6: leave), then handles the pad
   (member select, cursor, start) and sends the request packets; 180 cases, 557 of 558 instructions */
#define B(a) (*(signed char *)(a))
#define H(a) (*(short *)(a))
#define NET (*(int *)0xC309994)
#define ROW(i) (0xC309E0A + (i) * 0x86)
#define RECV(d) FUN_0c1864e0(NET, (int)(d), 1)
int FUN_0c024e78(int a4, int a5, int a6)
{
    signed char cmd, type, flag, pkt[128];
    unsigned char len;
    short key, val;
    char name[256];
    int i, r, row;

    if (*(int *)0xC30A3F8 != 0)
        return FUN_0c02a94e();
    if (FUN_0c022050() != 0) {
        FUN_0c0220c4((int)&cmd, (int)&len, (int)&type);
        if (cmd == 100 && type == 1) {
            for (i = 0; i < 6; i++)
                if (i != 3)
                    RECV(ROW(B(0xC30A349)) + i);
            RECV(&len);
            for (i = 0; i < len; i++)
                RECV(ROW(B(0xC30A349)) + 6 + i);
            B(ROW(B(0xC30A349)) + 6 + i) = 0;
        } else if (cmd == 100 && type >= 2 && type <= 4) {
            RECV(&key);
            RECV((char *)&key + 1);
            if (type == 4) {
                RECV(&len);
                for (i = 0; i < len; i++)
                    RECV(name + i);
                name[i] = 0;
            } else {
                RECV(&flag);
                if (type == 3) {
                    RECV(&val);
                    RECV((char *)&val + 1);
                }
            }
            for (row = ROW(0); (unsigned int)row < (unsigned int)ROW(10); row += 0x86)
                if (H(row) == key) {
                    if (type == 4)
                        ((int (*)(int, int))strcpy)(row + 6, (int)name);
                    else {
                        B(row + 2) = flag;
                        if (type == 3)
                            H(row + 4) = val;
                    }
                    break;
                }
        } else if (cmd == 101 && type == 6) {
            FUN_0c0221b0();
            *(int *)0xC30A3F8 = 1;
            return FUN_0c01a9c0();
        } else {
            FUN_0c0222a4((int)&cmd, (int)&len, (int)&type);
        }
    }
    if ((r = FUN_0c021f28()) != 0)
        return r;
    if (B(0xC30A34A) != 0) {
        if (FUN_0c021ed2() == 0 && (r = FUN_0c021ee2()) == 0)
            return r;
        B(0xC30A34A) = 0;
    }
    if (FUN_0c021eb4() != 0 && H(0xC30A51C) == 0) {
        row = ROW(B(0xC305416));
        if (B(row + 2) == 0 || B(row + 2) == 2) {
            i = B(row + 2) == 0 ? 1 : 2;
            B(0xC30985A) = 7;
            B(0xC30A34A) = i;
            H(0xC30540C) = 0;
            FUN_0c018e74(0x47);
            B(0xC30985B) = 1;
        } else {
            pkt[0] = 0x73;
            pkt[1] = 5;
            pkt[2] = 1;
            pkt[3] = B(ROW(B(0xC305416)));
            pkt[4] = (H(ROW(B(0xC305416))) & 0xFF00) >> 8;
            FUN_0c186740(NET, (int)pkt, pkt[1]);
            B(0xC30985A)++;
            B(0xC30985B) = 0;
            B(0xC30985C) = 0;
            B(0xC30985D) = 0;
            B(0xC30A34A) = 0;
            B(0xC30A34B) = B(0xC305416);
            H(0xC30B6FE) = 0;
            r = FUN_0c05aab6(0, 3);
            H(0xC30EF6C) = 0;
            return r;
        }
    } else if ((r = FUN_0c021ec4()) != 0 || (r = H(0xC30A51C)) == 2) {
        if (B(0xC30985B) != 0) {
            B(0xC30985B) = 0;
            B(0xC30A34A) = 0;
            H(0xC30A51C) = 0;
            return r;
        }
        pkt[0] = 0x70;
        pkt[1] = 4;
        pkt[2] = 2;
        pkt[3] = 1;
        FUN_0c186740(NET, (int)pkt, pkt[1]);
        if (H(0xC30A51C) != 2)
            FUN_0c05aab6(0, 4);
        B(0xC30985A) = 0;
        B(0xC30A34A) = 0;
        H(0xC30A51C) = 0;
        H(0xC30EF6C) = 0;
        FUN_0c0573cc(0xFF000000, 0, 0x14);
    } else if (B(0xC30985B) == 0) {
        r = FUN_0c021f10();
        if (r & 0x3000) {
            B(0xC305416) = FUN_0c021ef0(r, B(0xC305416), B(0xC30A349) - 1);
        } else {
            if (r & 0x800) {
                if ((signed char)--B(0xC30A347) < 0) {
                    B(0xC30A347) = 0;
                    goto out;
                }
            } else if (r & 0x400) {
                if ((signed char)++B(0xC30A347) > B(0xC30A346)) {
                    B(0xC30A347) = B(0xC30A346);
                    goto out;
                }
            } else {
                goto out;
            }
            B(0xC30A348) = B(0xC30A347) * 10 + 1;
            B(0xC30A349) = 0;
            B(0xC30985A) = 2;
            B(0xC305416) = 0;
            FUN_0c05aab6(0, 5);
        }
    }
out:
    return FUN_0c02bae6();
}
#undef B
#undef H
#undef NET
#undef ROW
#undef RECV

int FUN_0c025778(int a4, int a5, int a6, int a7)
{
    int stk[138];

    int v0_3;
    int v0_6;
    int v0_7;
    int v0_0;
    int v0_4;
    int v0_1;
    int v0_5;
    int T_;
    int R2;
    int R1;
    int v0_9;
    int v0_10;
    int v0_2;
    int v0_8;
    v0_6 = a4;
    v0_7 = a5;
    v0_8 = a6;
    v0_9 = a7;
    v0_3 = (0xFFFFFDD8);
    if (((*(int *)0xC30A3F8) == 0)) goto L_C02579E;
    v0_3 = ((FUN_0c02a94e()));
    L_C025C30:;
    return v0_3;
    L_C02579E:;
    v0_0 = *(short *)0xC30EF6C;
    *(unsigned short *)0xC30EF6C = (v0_0 + 0x1);
    v0_1 = (0xC30EF6C);
    v0_6 = (0x14);
    if (((int)(short)(v0_0 + 0x1) >= (int)0x14)) goto L_C0257B2;
    goto L_C025C30;
    L_C0257B2:;
    *(unsigned short *)(v0_1) = v0_6;
    v0_1 = (0xC30985B);
    v0_0 = (0x0);
    v0_2 = (0x1);
    if (((*(signed char *)0xC30985B) != 2)) goto L_C0257DA;
    (((struct o0_uchar *)0xC309859)->v) = 0x2;
    (((struct o1_uchar *)0xC309859)->v) = v0_2;
    *(unsigned char *)(v0_1) = v0_0;
    FUN_0c02bad0();
    v0_3 = ((FUN_0c02bae6()));
    goto L_C025C30;
    L_C0257DA:;
    FUN_0c02b7fc();
    FUN_0c02568a();
    v0_6 = FUN_0c022050();
    v0_3 = (v0_6);
    v0_4 = ((0xA8 + ((int)stk + 0)));
    v0_5 = (0xC309994);
    if (!((v0_6 != 0))) goto L_C025A46;
    FUN_0c0220c4((((int)stk + 0) + 0xC), (((int)stk + 0) + 0x4), (((int)stk + 0) + 0x8));
    v0_3 = *(signed char *)(((int)stk + 12));
    v0_6 = (0xC1864E0);
    v0_7 = (v0_3);
    if ((v0_3 != 107)) goto L_C0258DE;
    if (((*(signed char *)(((int)stk + 8))) != 1)) goto L_C0258DE;
    *(unsigned int *)(((int)stk + 0)) = 0xC30AD5C;
    v0_7 = (v0_0);
    goto L_C02582E;
    L_C025A46:;
    if (((*(signed char *)(v0_1)) == 0)) goto L_C025A50;
    goto L_C025C30;
    L_C025A50:;
    v0_6 = FUN_0c021f28();
    v0_3 = (v0_6);
    if ((v0_6 == 0)) goto L_C025A5E;
    goto L_C025C30;
    L_C025A5E:;
    v0_7 = (0xC30985C);
    if (((*(signed char *)0xC30985C) == 0)) goto L_C025A6A;
    v0_3 = ((FUN_0c025564()));
    goto L_C025C30;
    L_C025A6A:;
    v0_3 = (short)(FUN_0c01cd2c(0xA)) != 0;
    v0_6 = (0xC30B6FE);
    if (v0_3) goto L_C025A82;
    if ((((unsigned char)(*(signed char *)0xC30EFA1) & 8) == 0)) goto L_C025A88;
    L_C025A82:;
    *(unsigned short *)(v0_6) = ((*(short *)(v0_6)) ^ 0x1);
    L_C025A88:;
    if (((*(short *)(v0_6)) == 0)) goto L_C025AA8;
    v0_8 = FUN_0c01cd2c(0x40);
    v0_3 = ((short)v0_8);
    if (((short)v0_8 != 0)) goto L_C025AA6;
    if (((*(short *)0xC30A51C) != 0)) goto L_C025AA6;
    goto L_C025C30;
    L_C025AA6:;
    *(unsigned short *)(v0_6) = v0_0;
    L_C025AA8:;
    v0_3 = (FUN_0c021eb4()) == 0;
    v0_6 = (0xC305416);
    if (v0_3) goto L_C025B24;
    if (((*(short *)0xC30A51C) != 0)) goto L_C025B24;
    v0_8 = *(signed char *)(v0_6);
    v0_3 = (v0_8);
    if ((v0_8 == 2)) goto L_C025ACE;
    if ((v0_3 == 1)) goto L_C025AFE;
    if (!((v0_3 == 0))) goto L_C025B18;
    (((struct o1_uchar *)0xC309859)->v) = 0x8;
    *(unsigned char *)(v0_1) = v0_0;
    *(unsigned char *)(v0_6) = v0_0;
    *(unsigned short *)0xC30EF6C = v0_0;
    goto L_C025B18;
    L_C025B18:;
    v0_3 = ((FUN_0c05aab6(0x0, 0x3)));
    goto L_C025C30;
    L_C025AFE:;
    *(unsigned char *)(v0_7) = ((*(signed char *)(v0_7)) + 0x1);
    (((struct o4_uchar *)0xC309859)->v) = v0_0;
    goto L_C025B18;
    L_C025ACE:;
    *(unsigned char *)(v0_4) = 0x75;
    *(unsigned int *)(((int)stk + 0)) = (v0_4 + 0x1);
    (((struct o1_uchar *)(v0_4))->v) = 0x3;
    (((struct o2_uchar *)(v0_4))->v) = v0_2;
    FUN_0c186740((*(int *)(v0_5)), v0_4, (*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))));
    (((struct o0_uchar *)0xC309859)->v) = 0x3;
    (((struct o1_uchar *)0xC309859)->v) = v0_0;
    *(unsigned char *)0xC30AF9A = v0_0;
    goto L_C025B18;
    L_C025B24:;
    v0_3 = (FUN_0c021ee2()) != 0;
    if (v0_3) goto L_C025B36;
    if (!(((*(short *)0xC30A51C) != 2))) goto L_C025B36;
    v0_1 = FUN_0c01599c();
    v0_3 = (v0_1);
    if ((v0_1 == 0)) goto L_C025BF0;
    *(unsigned char *)(v0_7) = ((*(signed char *)(v0_7)) + 0x1);
    (((struct o4_uchar *)0xC309859)->v) = v0_0;
    goto L_C025C30;
    L_C025B36:;
    *(unsigned char *)(v0_4) = 0x73;
    *(unsigned int *)(((int)stk + 0)) = (v0_4 + 0x1);
    (((struct o1_uchar *)(v0_4))->v) = 0x5;
    (((struct o2_uchar *)(v0_4))->v) = 0x2;
    (((struct o3_uchar *)(v0_4))->v) = (*(signed char *)0xC309BC8);
    (((struct o4_uchar *)(v0_4))->v) = ((int)((*(short *)0xC309BC8) & 0xFF00) >> 8);
    FUN_0c186740((*(int *)(v0_5)), v0_4, (*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))));
    v0_4 = *(short *)0xC30A51C;
    v0_3 = (v0_4);
    if ((v0_4 == 2)) goto L_C025B76;
    v0_3 = ((FUN_0c05aab6(0x0, 0x4)));
    L_C025B76:;
    *(unsigned char *)(v0_1) = v0_2;
    *(unsigned short *)0xC30A51C = v0_0;
    goto L_C025C30;
    L_C025BF0:;
    v0_1 = (short)(FUN_0c01cd2c(0x800)) == 0;
    if (v0_1) goto L_C025C08;
    v0_1 = *(signed char *)(v0_6);
    v0_3 = (v0_1);
    if ((v0_1 != 2)) goto L_C025C30;
    *(unsigned char *)(v0_6) = v0_0;
    L_C025C20:;
    v0_3 = ((FUN_0c05aab6(0x0, 0x5)));
    goto L_C025C30;
    L_C025C08:;
    v0_0 = FUN_0c01cd2c(0x400);
    v0_3 = ((short)v0_0);
    if (((short)v0_0 == 0)) goto L_C025C30;
    if (((*(signed char *)(v0_6)) != 0)) goto L_C025C30;
    *(unsigned char *)(v0_6) = 0x2;
    goto L_C025C20;
    L_C02582E:;
    if (((int)v0_7 < (int)0x6)) goto L_C025822;
    *(unsigned char *)(v0_7 + 0xC30AD5C) = v0_0;
    FUN_0c1864e0((*(int *)(v0_5)), (((int)stk + 0) + 0x4), 0x1);
    *(unsigned int *)(((int)stk + 0)) = 0xC309C74;
    v0_7 = (v0_0);
    L_C025856:;
    if (((int)v0_7 < (int)(unsigned char)(*(signed char *)(((int)stk + 4))))) goto L_C02584A;
    *(unsigned char *)(v0_7 + 0xC309C74) = v0_0;
    FUN_0c1864e0((*(int *)(v0_5)), (((int)stk + 0) + 0x4), 0x1);
    *(unsigned int *)(((int)stk + 0)) = 0xC309C86;
    v0_7 = (v0_0);
    L_C0258C4:;
    if (((int)v0_7 < (int)(unsigned char)(*(signed char *)(((int)stk + 4))))) goto L_C0258B8;
    *(unsigned char *)(v0_7 + 0xC309C86) = v0_0;
    v0_3 = ((FUN_0c02b692(0xC30AD5C, 0xC309C74, 0xC309C86)));
    goto L_C025A46;
    L_C0258B8:;
    FUN_0c1864e0((*(int *)(v0_5)), ((*(int *)(((int)stk + 0))) + v0_7), 0x1);
    v0_7 = (v0_7 + 0x1);
    goto L_C0258C4;
    L_C02584A:;
    FUN_0c1864e0((*(int *)(v0_5)), ((*(int *)(((int)stk + 0))) + v0_7), 0x1);
    v0_7 = (v0_7 + 0x1);
    goto L_C025856;
    L_C025822:;
    FUN_0c1864e0((*(int *)(v0_5)), ((*(int *)(((int)stk + 0))) + v0_7), 0x1);
    v0_7 = (v0_7 + 0x1);
    goto L_C02582E;
    L_C0258DE:;
    v0_6 = ((*(int *)(v0_5)));
    if ((v0_7 != 99)) goto L_C025962;
    if (((*(signed char *)(((int)stk + 8))) != 2)) goto L_C025962;
    FUN_0c1864e0(v0_6, 0xC309BC8, 0x1);
    FUN_0c1864e0((*(int *)(v0_5)), 0xC309BC9, 0x1);
    FUN_0c1864e0((*(int *)(v0_5)), (((int)stk + 0) + 0xC), 0x1);
    v0_6 = *(signed char *)(((int)stk + 12));
    v0_3 = (v0_6);
    if ((v0_6 == 0)) goto L_C02595E;
    *(unsigned char *)(v0_4) = 0x70;
    *(unsigned int *)(((int)stk + 0)) = (v0_4 + 0x1);
    (((struct o1_uchar *)(v0_4))->v) = 0x4;
    (((struct o2_uchar *)(v0_4))->v) = 0x4;
    (((struct o3_uchar *)(v0_4))->v) = v0_2;
    FUN_0c186740((*(int *)(v0_5)), v0_4, (*(signed char *)(((*(int *)(((int)stk + 0))) + 0x0))));
    v0_3 = *(signed char *)0xC30A347;
    (((struct o0_uchar *)0xC30A348)->v) = ((((v0_3 << 2) + v0_3) << 1) + 0x1);
    (((struct o1_uchar *)0xC30A348)->v) = v0_0;
    *(unsigned char *)(v0_1) = 0x2;
    *(unsigned short *)0xC30EF6C = v0_0;
    v0_3 = ((FUN_0c0573cc(0xFF000000, 0x0, 0x14)));
    goto L_C025A46;
    L_C02595E:;
    *(unsigned char *)(v0_1) = v0_0;
    goto L_C025A46;
    L_C025962:;
    if ((v0_7 != 100)) goto L_C025A10;
    if (((*(signed char *)(((int)stk + 8))) != 3)) goto L_C025A10;
    FUN_0c1864e0(v0_6, (((int)stk + 0) + 0x14), 0x1);
    FUN_0c1864e0((*(int *)(v0_5)), ((((int)stk + 0) + 0x14) + 0x1), 0x1);
    FUN_0c1864e0((*(int *)(v0_5)), (((int)stk + 0) + 0x18), 0x1);
    FUN_0c1864e0((*(int *)(v0_5)), (((int)stk + 0) + 0x10), 0x1);
    v0_3 = ((FUN_0c1864e0((*(int *)(v0_5)), ((((int)stk + 0) + 0x10) + 0x1), 0x1)));
    v0_6 = (0xC309E0A);
    v0_7 = (0xC309E0A);
    v0_9 = (0xC30A346);
    if (((unsigned int)0xC309E0A >= (unsigned int)0xC30A346)) goto L_C025A46;
    v0_8 = (0x86);
    L_C0259B4:;
    v0_10 = *(short *)(((int)stk + 20));
    v0_3 = (v0_10);
    if (((*(short *)(v0_6)) != v0_10)) goto L_C025A04;
    (((struct o2_uchar *)(v0_7))->v) = (*(signed char *)(((int)stk + 24)));
    v0_3 = *(short *)(((int)stk + 16));
    (((struct o4_ushort *)(v0_7))->v) = v0_3;
    v0_3 = (v0_3);
    goto L_C025A46;
    L_C025A04:;
    v0_10 = (unsigned int)(v0_6 + v0_8) < (unsigned int)v0_9;
    v0_6 = ((v0_6 + v0_8));
    v0_7 = ((v0_7 + v0_8));
    if (v0_10) goto L_C0259B4;
    goto L_C025A46;
    L_C025A10:;
    if (((*(signed char *)(v0_1)) != 0)) goto L_C025A36;
    if ((v0_7 != 101)) goto L_C025A36;
    if (((*(signed char *)(((int)stk + 8))) != 6)) goto L_C025A36;
    FUN_0c0221b0();
    *(unsigned int *)0xC30A3F8 = v0_2;
    v0_3 = ((FUN_0c01a9c0()));
    goto L_C025C30;
    L_C025A36:;
    v0_3 = ((FUN_0c0222a4((((int)stk + 0) + 0xC), (((int)stk + 0) + 0x4), (((int)stk + 0) + 0x8))));
    goto L_C025A46;
}

