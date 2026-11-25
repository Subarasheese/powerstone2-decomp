/* Hand-written C: FUN_0c17244a(menu, fighter), a page of the fighter debug display. The menu (+0 the page, +1 the
   sub-page, +0x3C the cursor) shows one fighter (0C532498 + 14648 * id) at row 19 * id + 4: page 0 its state, model,
   timers and the sub-pages (moves, positions, sound, AI, items), page 1 the object under the cursor, page 2 the input mode,
   page 3 the debug switches (0C475DBC), page 4 the fighter's pad (0C471A9C). FUN_0c172434 marks the cursor's line;
   nlLocate places the text and dbg_printf prints it. */

int FUN_0c17a550(int);
int nlLocate(int, int);
int FUN_0c172434(int, int);
int FUN_0c172204(int);
int dbg_printf(int, ...);

#define C8(o)   (*(signed char *)(e + (o)))
#define S16(o)  (*(short *)(e + (o)))
#define I32(o)  (*(int *)(e + (o)))
#define F32(o)  (*(float *)(e + (o)))
#define P8(o)   (*(signed char *)(P + (o)))
#define DBG     ((signed char *)0x0C475DBC)
#define CUR(n)  FUN_0c172434(*cur, (n))
#define AT(n)   nlLocate(row, (n))
#define LINE(c, n) (CUR(c), AT(n))

#define dec(v)  ((v) > 0 ? (v) - 1 : (v))

/* manual: the fighter debug page; the cursor byte is read through one pointer held in a register (a call to a function of another unit cannot be a bsr, so the copy `mov r14,r4; add #60,r4` per line went); 89 cases, 1551 of 1551 instructions */
void FUN_0c17244a(int a4, int a5)
{
    char *e = (char *)a4;
    char *P = (char *)0x0C532498 + (signed char)a5 * 14648;
    int row = (signed char)a5 * 19 + 4;
    signed char *cur = (signed char *)(e + 0x3C);
    char *q, *t, *pad;
    float f;
    int v, fmt;

    FUN_0c17a550(-1);
    switch (C8(0)) {
    case 0:
        AT(1);
        dbg_printf(0x0C204188);
        AT(2);
        dbg_printf(0x0C204194, *(short *)(*(int *)(P + 280) + 120) + -1);
        AT(3);
        dbg_printf(0x0C2041A0, *(float *)(*(int *)(P + 280) + 152));
        AT(4);
        dbg_printf(0x0C2041AC, *(float *)(*(int *)(P + 280) + 140), F32(76));
        AT(5);
        dbg_printf(0x0C2041C0, (unsigned char)(int)*(float *)(*(int *)(P + 280) + 140), (unsigned char)(int)F32(76));
        switch (C8(1)) {
        case 0:
            LINE(0, 6);
            dbg_printf(0x0C2041D0);
            LINE(1, 7);
            dbg_printf(0x0C2041D8, C8(2));
            LINE(2, 8);
            dbg_printf(0x0C2041E8, C8(3));
            LINE(3, 9);
            dbg_printf(C8(4) == 0 ? 0x0C2041F8 : 0x0C204204);
            LINE(4, 10);
            dbg_printf(0x0C204210, C8(5));
            LINE(5, 11);
            dbg_printf(0x0C204220, C8(6));
            LINE(6, 12);
            dbg_printf(0x0C204230, (unsigned char)C8(7));
            LINE(7, 13);
            dbg_printf(0x0C204240, C8(8));
            LINE(8, 14);
            dbg_printf(0x0C204250, C8(9));
            LINE(9, 15);
            dbg_printf(0x0C204260, (unsigned char)C8(10));
            LINE(10, 16);
            v = *(int *)(P + 1104 + C8(3) * 4);
            dbg_printf(0x0C204270, P8(1093), dec(v));
            LINE(11, 17);
            v = *(int *)(P + 1112 + C8(3) * 4);
            dbg_printf(0x0C204280, P8(1094), dec(v));
            LINE(12, 18);
            v = *(int *)(P + 1120 + C8(3) * 4);
            dbg_printf(0x0C204290, P8(1095), dec(v));
            LINE(13, 19);
            dbg_printf(0x0C2042A0, F32(28));
            LINE(14, 20);
            dbg_printf(0x0C2042B0, *(float *)(P + 64));
            return;
        case 1:
            LINE(0, 6);
            dbg_printf(0x0C2042C0);
            LINE(1, 7);
            dbg_printf(0x0C2042C8, (int)F32(32));
            LINE(2, 8);
            dbg_printf(0x0C2042D4, (int)F32(36));
            LINE(3, 9);
            dbg_printf(0x0C2042E0, (int)F32(40));
            LINE(4, 10);
            dbg_printf(0x0C2042EC, (unsigned short)*(int *)(P + 56));
            return;
        case 2:
            LINE(0, 6);
            dbg_printf(0x0C2042FC);
            LINE(1, 7);
            dbg_printf(0x0C204304, (unsigned char)DBG[0]);
            LINE(2, 8);
            q = (char *)0x0C5410FC + *(signed char *)0x0C5421DC * 760;
            dbg_printf(0x0C204314, (int)*(float *)(q + 608));
            LINE(3, 9);
            q = (char *)0x0C5410FC + *(signed char *)0x0C5421DC * 760;
            dbg_printf(0x0C204324, *(unsigned short *)(q + 616));
            LINE(4, 10);
            q = (char *)0x0C5410FC + *(signed char *)0x0C5421DC * 760;
            dbg_printf(0x0C204338, *(unsigned short *)(q + 612));
            return;
        case 3:
            LINE(0, 6);
            dbg_printf(0x0C20434C);
            LINE(1, 7);
            dbg_printf(0x0C204354, *(signed char *)(P + 11208 + P8(14106) * 720 + P8(1094) * 144));
            LINE(2, 8);
            dbg_printf(0x0C204360, *(signed char *)(P + 12648 + P8(14106) * 720 + P8(1095) * 144));
            LINE(3, 9);
            dbg_printf(0x0C20436C, **(signed char **)(P + 256));
            LINE(4, 10);
            dbg_printf(0x0C204378, **(signed char **)(P + 268));
            LINE(5, 11);
            dbg_printf(0x0C204384, P8(14444));
            LINE(6, 12);
            dbg_printf(0x0C204390, P8(14452));
            LINE(7, 13);
            dbg_printf(0x0C20439C, P8(14460));
            LINE(8, 14);
            dbg_printf(0x0C2043A8, P8(14468));
            LINE(9, 15);
            dbg_printf(0x0C2043B4, P8(14476));
            LINE(10, 16);
            dbg_printf(0x0C2043C0, P8(14484));
            LINE(11, 17);
            dbg_printf(0x0C2043CC);
            LINE(12, 18);
            dbg_printf(0x0C2043D8);
            return;
        case 4:
            LINE(0, 6);
            dbg_printf(0x0C2043E4);
            LINE(1, 7);
            dbg_printf(0x0C2043EC, P8(14110));
            LINE(2, 8);
            dbg_printf(0x0C2043FC, *(short *)(P + 28));
            FUN_0c172204(a5);
            return;
        }
        return;
    case 1:
        AT(1);
        dbg_printf(0x0C20440C);
        switch (C8(1)) {
        case 0: fmt = 0x0C204414; break;
        case 1: fmt = 0x0C204418; break;
        case 2: fmt = 0x0C204424; break;
        case 3: fmt = 0x0C204430; break;
        case 4:
            LINE(0, 6);
            if (DBG[7] == 0)
                dbg_printf(0x0C204438);
            else if (DBG[7] == 1)
                dbg_printf(0x0C204440);
            goto rest;
        case 5: fmt = 0x0C204448; break;
        case 6: fmt = 0x0C204450; break;
        case 7: fmt = 0x0C204458; break;
        case 8: fmt = 0x0C204460; break;
        default: goto rest;
        }
        LINE(0, 6);
        dbg_printf(fmt);
rest:
        LINE(1, 7);
        dbg_printf(0x0C204468, S16(14));
        LINE(2, 8);
        dbg_printf(0x0C204478, (unsigned char)C8(16));
        LINE(3, 9);
        dbg_printf(0x0C204488, I32(56) ? F32(24) : 0.0f);
        LINE(4, 10);
        dbg_printf(0x0C204498, C8(5));
        LINE(5, 11);
        dbg_printf(0x0C2044A8, (unsigned char)C8(7));
        LINE(6, 12);
        switch ((unsigned char)C8(11)) {
        case 0: dbg_printf(0x0C2044B8); break;
        case 1: dbg_printf(0x0C2044C4); break;
        case 2: dbg_printf(0x0C2044D4); break;
        case 3: dbg_printf(0x0C2044E4); break;
        case 4: dbg_printf(0x0C2044F4); break;
        case 5: dbg_printf(0x0C204504); break;
        case 6: dbg_printf(0x0C204514); break;
        case 7: dbg_printf(0x0C204524); break;
        case 8: dbg_printf(0x0C204530); break;
        case 9: dbg_printf(0x0C204540); break;
        case 10: dbg_printf(0x0C204550); break;
        case 11: dbg_printf(0x0C204560); break;
        }
        LINE(7, 13);
        dbg_printf(0x0C204570, C8(12));
        LINE(8, 14);
        dbg_printf(0x0C204580, (unsigned short)I32(44));
        LINE(9, 15);
        dbg_printf(0x0C204590, (unsigned short)I32(48));
        LINE(10, 16);
        dbg_printf(0x0C2045A0, (unsigned short)I32(52));
        LINE(11, 17);
        dbg_printf(0x0C2045B0, (int)F32(32));
        LINE(12, 18);
        dbg_printf(0x0C2045C0, (int)F32(36));
        LINE(13, 19);
        dbg_printf(0x0C2045D0, (int)F32(40));
        LINE(14, 20);
        t = *(char **)(e + 56);
        dbg_printf(0x0C2045E0, t ? *(signed char *)(t + 170) : 0);
        LINE(15, 21);
        t = *(char **)(e + 56);
        dbg_printf(0x0C2045F4, t ? *(signed char *)(t + 171) : 0);
        LINE(16, 22);
        t = *(char **)(e + 56);
        dbg_printf(0x0C204604, t ? *(float *)(t + 64) : 0.0f);
        LINE(17, 23);
        t = *(char **)(e + 56);
        dbg_printf(0x0C204614, t ? *(float *)(t + 68) : 0.0f);
        LINE(18, 24);
        t = *(char **)(e + 56);
        dbg_printf(0x0C204624, t ? *(float *)(t + 72) : 0.0f);
        return;
    case 2:
        AT(1);
        dbg_printf(0x0C204634);
        LINE(0, 2);
        v = *(signed char *)0x0C542237;
        switch (v) {
        case 10: dbg_printf(0x0C204650); break;
        case 11: dbg_printf(0x0C204664); break;
        case 12: dbg_printf(0x0C204450); break;
        case 13: dbg_printf(0x0C204458); break;
        case 14: dbg_printf(0x0C204460); break;
        default: dbg_printf(0x0C204640, v); break;
        }
        LINE(1, 3);
        if (DBG[7] == 0)
            dbg_printf(0x0C20467C);
        else if (DBG[7] == 1)
            dbg_printf(0x0C204688);
        return;
    case 3:
        AT(1);
        dbg_printf(0x0C204694);
        LINE(0, 2);
        dbg_printf(0x0C2046A0, (unsigned char)DBG[1]);
        LINE(1, 3);
        dbg_printf(DBG[2] == 0 ? 0x0C2046B0 : 0x0C2046C0);
        LINE(2, 4);
        dbg_printf(0x0C2046D0, DBG[6]);
        LINE(3, 5);
        dbg_printf(*(signed char *)0x0C478C02 == 0 ? 0x0C2046E0 : 0x0C2046F0);
        LINE(4, 6);
        dbg_printf(DBG[8] == 0 ? 0x0C204700 : 0x0C204710);
        LINE(5, 7);
        switch (*(unsigned char *)0x0C541F62) {
        case 0: dbg_printf(0x0C204720); break;
        case 1: dbg_printf(0x0C204730); break;
        case 3: dbg_printf(0x0C20473C); break;
        case 4: dbg_printf(0x0C20474C); break;
        case 2: dbg_printf(0x0C20475C); break;
        case 5: dbg_printf(0x0C20476C); break;
        case 6: dbg_printf(0x0C204780); break;
        }
        LINE(6, 8);
        dbg_printf(DBG[9] == 0 ? 0x0C204790 : 0x0C2047A0);
        return;
    case 4:
        AT(1);
        dbg_printf(0x0C2047B0);
        LINE(1, 3);
        v = *(unsigned char *)(0x0C471AA1 + (signed char)a5 * 12);
        if (v == 8)
            dbg_printf(0x0C2047D4);
        else if (v == 128)
            dbg_printf(0x0C2047E8);
        else
            dbg_printf(0x0C2047C0);
        LINE(2, 4);
        pad = (char *)0x0C471A9C + (signed char)a5 * 12;
        dbg_printf(0x0C2047FC, *(signed char *)(pad + 6));
        LINE(3, 5);
        dbg_printf(0x0C204808, *(unsigned char *)(pad + 7));
        LINE(4, 6);
        dbg_printf(0x0C204814, S16(84));
        LINE(4, 7);
        dbg_printf(0x0C204820, *(short *)(pad + 2));
        return;
    }
}
