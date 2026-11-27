/* game/player: functions 0C16F7FC-0C1717A4, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_short { short v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o28_int { char p[0x28]; int v; };
struct o2C_int { char p[0x2C]; int v; };
struct o30_int { char p[0x30]; int v; };
struct o34_int { char p[0x34]; int v; };
struct o38_int { char p[0x38]; int v; };
struct o38_uint { char p[0x38]; unsigned int v; };
struct o3C_int { char p[0x3C]; int v; };
struct o3C_uint { char p[0x3C]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_short { char p[0x4]; short v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
int FUN_0c0365f0(int);
int FUN_0c03681e(void);
int FUN_0c036864(int, int, int, int);
int FUN_0c036de8(int);
int FUN_0c037ac4(int, int, int, int, int);
int FUN_0c039fbc(void);
int FUN_0c03ea04(int, int);
int FUN_0c03eff6(void);
int FUN_0c03f346(int);
int FUN_0c0522be(int);
int FUN_0c05ffa4(int, int, int);
int FUN_0c064116(void);
int FUN_0c067008(int);
int FUN_0c067294(int);
int FUN_0c16f890(int, int, int, int, int);
int FUN_0c16f91e(int, int, int, int, int);
int FUN_0c16f996(int, int, int, int, int);
int FUN_0c16fa18(int, int, float, float, float);
int FUN_0c16fa76(int);
int FUN_0c16fa90(int, int);
int FUN_0c16fab2(int);
extern int FUN_0c16fd4a();
int FUN_0c1710d4(void);
int FUN_0c171398(void);
int FUN_0c1716d0(int, int);
int memset(int, int, int);
int FUN_0c16fad0(int a4);
int FUN_0c16fe50(void);
int FUN_0c170d30(void);
struct o3_uchar { char p[0x3]; unsigned char v; };


int FUN_0c16fad0(int a4)
{
    register int t0;

    t0 = (((struct o0_int *)0xC475A90)->v);
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return FUN_0c16fab2(a4);
        }
        return FUN_0c16fa90(a4, ((((struct o8_int *)0xC475A90)->v)));
    }
    *(volatile int *)0xC475A94;
    return FUN_0c16fa76(a4);
}

/* manual: the sound/test menu's step (page S[2]: main list, player setup, sound pick, motion pick, the value editor); 453 cases, 781 of 781 instructions */
int FUN_0c16fe50(void)
{
    int *s = (int *)0xC475A64;
    int e, q, btn, sel, i, v, r, m, c, g, p;
    float lo, hi;

    if (*(unsigned short *)0xC542700 & 64) {
        s[0] = 3;
        s[1] = 0;
    }
    v = s[32];
    if (!(*(unsigned short *)0xC5426FC & 0x200)) {
        if (v & 0x2000) {
            if (--s[2] < 0) s[2] = 0;
        } else if (v & 0x1000) {
            if (++s[2] > 0x88) s[2] = 0x88;
        }
    }
    e = FUN_0c05ffa4(s[11] + 1, 0, s[14]);
    btn = s[32] & 0xC00;
    sel = s[11];
    m = s[2];
    switch (m) {
    case 0:
        FUN_0c16f890((int)&s[10], 0, 2, 1, 1);
        if (!(s[32] & 0x200)) break;
        v = s[10];
        if (v == 1 || v == 2) {
            s[0] = v;
            s[1] = 0;
        }
        break;
    case 1:
        if (btn && *(int *)0xC475AB4) goto leave;
        if (!FUN_0c16f890((int)&s[11], 0, 2, 1, 1)) break;
        FUN_0c16fad0(1);
        s[14] = 0;
        v = s[11];
        if (v == 0 || v == 1 || v == 2) s[15] = v;
        goto reset;
    case 2:
        if (sel == 2) break;
        if (btn && *(int *)0xC475AB4) {
            s[0] = 1;
            s[1] = 0;
            s[19] = (s[32] & 0x800) ? 0 : 1;
        } else if (sel == 0) {
            if (FUN_0c16f890((int)&s[12], 0, 15, 1, 1)) {
                FUN_0c16fad0(1);
                s[14] = 0;
                *(char *)0xC53249A = s[12];
                FUN_0c0365f0(0);
                FUN_0c067008(0);
                FUN_0c039fbc();
                *(float *)0xC5324C0 = 0.0f;
                *(float *)0xC5324C4 = 0.0f;
                *(float *)0xC5324C8 = 0.0f;
                *(char *)0xC535BB6 = 1;
                for (i = 0; i < 2; i++) FUN_0c037ac4(0xC532498, i, s[26 + i * 3], s[27 + i * 3], s[28 + i * 3]);
            }
        } else if (sel == 1) {
            if (FUN_0c16f890((int)&s[13], 0, 6, 1, 1)) {
                FUN_0c16fad0(1);
                s[14] = 0;
                FUN_0c03f346(s[36]);
                FUN_0c03681e();
                FUN_0c036864(s[13], 0, 0, 0);
                s[36] = FUN_0c1716d0(s[15], s[16]);
                s[16] = 0;
            }
        }
        if (!s[11] && (s[32] & 0x8000)) {
            *(char *)0xC535BB2 = 1 - *(signed char *)0xC535BB2;
            FUN_0c067294(0xC532498);
        }
        break;
    leave:
        s[0] = 1;
        s[1] = 0;
        s[19] = (s[32] & 0x800) ? 0 : 1;
        break;
    case 3:
        if (!FUN_0c16f890((int)&s[15], 0, 4, 1, 1)) break;
        goto reset;
    case 4:
        v = s[15];
        if (v == 1) p = 0xC4B410C;
        else if (v == 2) p = 0xC4B40D8;
        else if (v == 3) p = 0xC4B40CC;
        else if (v == 4) {
            c = *(signed char *)0xC53249A;
            p = (c == 12 || c == 13) ? 0xC4B40E0 : 0xC4B40FC;
        } else break;
        if (!FUN_0c16f890((int)&s[16], 0, *(int *)(*(int *)p + 0xC), 1, 1)) break;
        goto load;
    reset:
        s[16] = 0;
    load:
        FUN_0c03f346(s[36]);
        s[36] = FUN_0c1716d0(s[15], s[16]);
        s[17] = -1;
        ((int (*)(int))FUN_0c16fd4a)(1);
        break;
    case 5:
        ((int (*)(int, int *))FUN_0c16fd4a)(0, s);
        break;
    case 6:
        FUN_0c16f890((int)&s[14], 0, ((int *)0xC2A5B58)[sel] - 1, 1, 1);
        break;
    default:
        if (!(*(unsigned short *)0xC5426FC & 0x200)) break;
        q = e + (s[2] - 7) / 13 * 32;
        m = (s[2] - 7) % 13;
        r = 0x200;
        switch (m) {
        case 0: r = FUN_0c16f91e(q, 0, 7, 1, 1); break;
        case 1: r = FUN_0c16f91e(q + 2, -1, 19, 1, 1); break;
        case 2: r = FUN_0c16f91e(q + 4, 0, 20, 1, 1); break;
        case 3: r = FUN_0c16f91e(q + 5, 0, 2, 1, 1); break;
        case 4: r = FUN_0c16f996(q + 6, 0, 255, 1, 1); break;
        case 5: r = FUN_0c16f91e(q + 7, 0, -1, 1, 1); break;
        case 6:
            r = FUN_0c16f91e(q + 1, 0, 2, 1, 1);
            if (r) memset(q + 8, 0, 0x18);
            break;
        case 7: case 8: case 9:
            g = q + 8 + (m - 7) * 4;
            lo = -9000;
            hi = 9000;
            goto edit;
        case 10: case 11: case 12:
            c = *(signed char *)(q + 1);
            if (m == 12 ? c != 1 : (c < m - 10 || c > 2)) break;
            g = q + 0x14 + (m - 10) * 4;
            lo = 0;
            hi = 5000;
        edit:
            r = FUN_0c16fa18(g, 1, lo, hi, (*(unsigned short *)0xC5426FC & 128) ? 100 : 1);
            break;
        }
        if (r) *(int *)0xC475AB4 = 1;
    }
    *(char *)(e + 3) = 0;
    r = 0;
    for (p = e; (unsigned int)p < (unsigned int)(e + 0x140); p += 0x20)
        if (*(signed char *)p) *(char *)(e + 3) = r = *(signed char *)(e + 3) + 1;
    return r;
}

int FUN_0c170d30(void)
{

    (((struct o0_uchar *)0xC541F44)->v) = ((*(signed char *)0xC541F44) + 0x1);
    (((struct o1_uchar *)0xC541F44)->v) = 0x0;
    memset(0xC475A64, 0x0, 0x98);
    FUN_0c03eff6();
    *(unsigned char *)0xC535BAC = 0x1;
    *(unsigned char *)0xC540754 = 0x0;
    *(unsigned char *)0xC53CE1C = 0x0;
    *(unsigned char *)0xC5394E4 = 0x0;
    (((struct o4_uint *)0xC542440)->v) = 0xFF000080;
    (((struct o0_uint *)0xC542440)->v) = 0xFF000080;
    (((struct o8_uint *)0xC542440)->v) = 0xFF008080;
    FUN_0c0522be((*(int *)0xC241B60));
    FUN_0c036de8(0x1);
    FUN_0c036864(0x0, 0x0, 0x0, 0x0);
    FUN_0c064116();
    FUN_0c1710d4();
    FUN_0c171398();
    FUN_0c03ea04(0x0, 0x0);
    (((struct o8_float *)0xC5410B8)->v) = 0.0f;
    (((struct o0_float *)0xC5410B8)->v) = 0.0f;
    (((struct o4_float *)0xC5410B8)->v) = -1.0f;
    return 0x744;
}
