/* game/unsorted: functions 0C04666C-0C0472CA, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03aeec(int, int, int);
int FUN_0c03d3b6(int);
extern int FUN_0c03d44a();
int FUN_0c03f346(int, int, int, int);
int FUN_0c047064(int, int, int, int);
int FUN_0c04666c(int a4, int a5, int a6, int a7);
int FUN_0c047114(void);
int FUN_0c047186(void);
int FUN_0c0471fc(int a4, int a5, int a6, int a7);

/* manual: 16-state pad handshake (4 pads x check/aeec/d44a/aeec/d44a) as one table-free routine, state u: pad u>>2, aeec mask 1<<(u>>1), d44a arg u>>1; cases from the old C's tests plus per-state hand cases */
int FUN_0c04666c(int a4, int a5, int a6, int a7)
{
    register int u;
    register int r;
    register int pad;

    u = (unsigned char)(*(signed char *)0xC541F44);
    if (u >= 16) {
        if ((int)(*(short *)0xC541F50) > (int)0x78) {
            FUN_0c047064(a4, a5, a6, a7);
            r = FUN_0c047114();
            (((struct o1_uchar *)0xC541F43)->v) = 0x0;
            return r;
        }
        (((struct o0_uchar *)0xC541F43)->v) = ((*(signed char *)0xC541F43) + 0x1);
        (((struct o1_uchar *)0xC541F43)->v) = 0x0;
        return 0xC541F43;
    }
    pad = 0xC40F820 + (u >> 2);
    if (!(u & 1)) {
        if (!(u & 2)) {
            r = (unsigned char)(*(signed char *)pad);
            if (r != 2) {
                *(unsigned char *)0xC541F44 = (*(signed char *)0xC541F44) + 0x4;
                return r;
            }
        }
        r = FUN_0c03aeec(a4, 0x0, a6);
        if (r == -1) return r;
        if ((r & (1 << (u >> 1))) == 0) {
            if (u & 2) {
                *(unsigned char *)pad = 0x4;
                r = (*(signed char *)0xC541F44) + 0x2;
                *(unsigned char *)0xC541F44 = r;
                return r;
            }
            *(unsigned char *)0xC541F44 = (*(signed char *)0xC541F44) + 0x2;
            return r;
        }
        *(unsigned char *)0xC541F44 = (*(signed char *)0xC541F44) + 0x1;
        u++;
    }
    r = FUN_0c03d44a(u >> 1, 0x0, a6);
    if (r == -1) return r;
    if (r != 0) {
        *(unsigned char *)pad = 0x4;
    } else {
        *(unsigned char *)pad = 0x3;
        r = FUN_0c03d3b6(u >> 2);
    }
    *(unsigned char *)0xC541F44 = (*(signed char *)0xC541F44) + ((u & 2) ? 0x1 : 0x3);
    return r;
}

int FUN_0c047114(void)
{
    register int t18;
    register int t20;
    register int t22;

    if (((unsigned char)(*(signed char *)0xC3BD447) & 1) != 0) {
        if ((unsigned char)(*(signed char *)0xC40F820) == 1) {
            (((struct o0_uchar *)0xC40F820)->v) = 0x2;
        }
    } else {
        (((struct o0_uchar *)0xC40F820)->v) = 0x0;
    }
    if (((unsigned char)(*(signed char *)0xC3BD447) & 0x2) != 0) {
        if ((unsigned char)(*(signed char *)0xC40F821) == 1) {
            (((struct o1_uchar *)0xC40F820)->v) = 0x2;
        }
    } else {
        (((struct o1_uchar *)0xC40F820)->v) = 0x0;
    }
    if (((unsigned char)(*(signed char *)0xC3BD447) & 4) != 0) {
        if ((unsigned char)(*(signed char *)0xC40F822) == 1) {
            (((struct o2_uchar *)0xC40F820)->v) = 0x2;
        }
    } else {
        (((struct o2_uchar *)0xC40F820)->v) = 0x0;
    }
    t18 = *(signed char *)0xC3BD447;
    if (((unsigned char)t18 & 8) != 0) {
        t20 = *(signed char *)0xC40F823;
        if ((unsigned char)t20 == 1) {
            (((struct o3_uchar *)0xC40F820)->v) = 0x2;
        }
        t22 = (unsigned char)t20;
    } else {
        (((struct o3_uchar *)0xC40F820)->v) = 0x0;
        t22 = (unsigned char)t18;
    }
    return t22;
}

int FUN_0c047186(void)
{
    register int t14;

    if ((unsigned char)(*(signed char *)0xC40F820) == 3) {
        (((struct o0_uchar *)0xC40F820)->v) = 0x5;
    }
    if ((unsigned char)(*(signed char *)0xC40F820) == 4) {
        (((struct o0_uchar *)0xC40F820)->v) = 0x6;
    }
    if ((unsigned char)(*(signed char *)0xC40F821) == 3) {
        (((struct o1_uchar *)0xC40F820)->v) = 0x5;
    }
    if ((unsigned char)(*(signed char *)0xC40F821) == 4) {
        (((struct o1_uchar *)0xC40F820)->v) = 0x6;
    }
    if ((unsigned char)(*(signed char *)0xC40F822) == 3) {
        (((struct o2_uchar *)0xC40F820)->v) = 0x5;
    }
    if ((unsigned char)(*(signed char *)0xC40F822) == 4) {
        (((struct o2_uchar *)0xC40F820)->v) = 0x6;
    }
    if ((unsigned char)(*(signed char *)0xC40F823) == 3) {
        (((struct o3_uchar *)0xC40F820)->v) = 0x5;
    }
    t14 = *(signed char *)0xC40F823;
    if ((unsigned char)t14 == 4) {
        (((struct o3_uchar *)0xC40F820)->v) = 0x6;
    }
    return (unsigned char)t14;
}

int FUN_0c0471fc(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, 0x0, 0x1E, a7);
        }
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        *(unsigned short *)((a4 + 0x1C)) = 0x1E;
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((short)(t0 - 1) == 0) {
        *(unsigned short *)((a4 + 0x1C)) = 0x1E;
        t0 = *(short *)((a4 + 0x1E));
        if (t0 != 0) {
            t2 = t0;
            if (t0 != 1) {
            } else {
                *(unsigned short *)((a4 + 0x1E)) = 0x0;
                t0 = *(signed char *)0xC541F62;
                t3 = 0x74;
                if (((unsigned char)t0 != 0) && ((unsigned char)t0 != 1)) {
                    t3 = 0x78;
                }
                t0 = (((struct oC4_int *)(a4))->v);
                FUN_0c03744a(t0, 0x0, t3, (*(int *)0xC4B410C));
                *(unsigned char *)((t0 + 0x0)) = 0x1;
                *(unsigned short *)((t0 + 0x6)) = 0x1F;
                (((struct o6C_float *)(t0))->v) = -234.0f;
                (((struct o70_float *)(t0))->v) = 192.0f;
                t2 = 0x70;
            }
            t0 = t2;
        } else {
            *(unsigned short *)((a4 + 0x1E)) = 0x1;
            *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x0;
            t0 = 0xC4;
        }
        t1 = t0;
    }
    return t1;
}
