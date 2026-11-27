/* game/flow: functions 0C101D38-0C103FB0, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o10_uchar { char p[0x10]; unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o20_int { char p[0x20]; int v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o30_float { char p[0x30]; float v; };
struct o44_ushort { char p[0x44]; unsigned short v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct o8_int { char p[0x8]; int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oC_int { char p[0xC]; int v; };
struct oC_short { char p[0xC]; short v; };
struct oC_ushort { char p[0xC]; unsigned short v; };
struct oD0_int { char p[0xD0]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c037498(int, int, int, int);
int FUN_0c038548(int);
int FUN_0c038e88(int);
int FUN_0c03f346(int);
int FUN_0c03f40c(int);
int FUN_0c03f444(int, int, int);
int FUN_0c059c54(int);
int FUN_0c05aab6(int, int);
int FUN_0c05f22c(int);
int FUN_0c0cff96(int, int);
int FUN_0c1020e8(void);
int FUN_0c1023cc(void);
int FUN_0c103fdc(int);
int FUN_0c104146(int);
int FUN_0c104650(void);
int nlRand(void);
int FUN_0c187798(int, int, int);
int FUN_0c187a88(int, int, int);
int FUN_0c101d38(int a4);
int FUN_0c101d52(int a4, int a5);
int FUN_0c101d72(int a4, int a5, int a6, int a7, int a8, int a9, int a10);
void FUN_0c101dce(int a4);
int FUN_0c101e1a(int a4);
void FUN_0c102086(void);
int FUN_0c10208a(void);
int FUN_0c102350(void);
int FUN_0c102690(void);
int FUN_0c102d68(void);
int FUN_0c10302a(int a4);
int FUN_0c1030c0(int a4);
int FUN_0c10314a(int a4);
int FUN_0c10324c(int a4);
int FUN_0c1034ba(int a4);
int FUN_0c10356c(int a4);
int FUN_0c1035c2(int a4);
int FUN_0c10368c(int a4);
int FUN_0c103716(int a4);
int FUN_0c10384a(void);
int FUN_0c1038e8(int a4, int a5, int a6);
int FUN_0c1039c4(void);
int FUN_0c103ba2(int a4);
int FUN_0c103d00(void);
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_int { char p[0x14]; int v; };
struct o18_int { char p[0x18]; int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_int { char p[0x1C]; int v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o34_int { char p[0x34]; int v; };
struct o38_int { char p[0x38]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_uint { char p[0xC]; unsigned int v; };


int FUN_0c101d38(int a4)
{
    return ((((*(int *)((0xC5426C4 + ((((a4 << 2) + a4) << 2) << 1)))) == 1)) ? 1 : 0);
}

int FUN_0c101d52(int a4, int a5)
{
    if (((unsigned short)(*(short *)(((((((a4 << 2) + a4) << 2) << 1) + 0xC5426C4) + 0x14))) & a5) != 0) {
        return 0x1;
    }
    return 0x0;
}

int FUN_0c101d72(int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    register int t0;
    register int t2;

    t0 = FUN_0c101d52(a4, a5);
    t2 = 0x0;
    if (t0 != 0) {
        t0 = *(int *)((a7 + 0x0));
        *(unsigned int *)((a7 + 0x0)) = (t0 - a8);
        if ((int)(t0 - a8) < (int)a9) {
            *(unsigned int *)((a7 + 0x0)) = a10;
        }
        t2 = 0x1;
    }
    t0 = FUN_0c101d52(a4, a6);
    if (t0 != 0) {
        t0 = *(int *)((a7 + 0x0));
        *(unsigned int *)((a7 + 0x0)) = (t0 + a8);
        if ((int)(t0 + a8) > (int)a10) {
            *(unsigned int *)((a7 + 0x0)) = a9;
        }
        t2 = 0x1;
    }
    return t2;
}

void FUN_0c101dce(int a4)
{
    register int t1;
    register int t2;
    register int t3;
    register int t0;

    *(unsigned int *)0xC472D20 = 0x0;
    t1 = 0xC1FC4F4;
    t2 = 0xC1FC4F4;
    t3 = 0x0;
    for (;;) {
        t3 = (t3 + 0x1);
        if ((((int)0x1 << (int)(*(signed char *)((t2 + 0x0)))) & (unsigned short)a4) != 0) {
            t0 = 0xC472CEC;
            t0 = (t0 + 0x24);
            t0 = (t0 + (*(int *)0xC472D20));
            *(unsigned char *)((t0 + 0x0)) = (*(signed char *)((t1 + 0x0)));
            *(unsigned int *)0xC472D20 = ((*(int *)0xC472D20) + 0x1);
        }
        t1 = (t1 + 0x1);
        t2 = (t2 + 0x1);
        if ((unsigned int)t3 >= (unsigned int)0x10) {
            break;
        }
    }
}

int FUN_0c101e1a(int a4)
{
    if (((int)(*(int *)0xC472D20) > (int)0x1) && (((unsigned short)a4 & 0xFFF) == 0xFFF)) {
        return 0x1;
    }
    return 0x0;
}

void FUN_0c102086(void)
{
    
}

int FUN_0c10208a(void)
{
    if ((unsigned char)(*(signed char *)0xC541F42) == 0) {
        FUN_0c1023cc();
    }
    FUN_0c1020e8();
    FUN_0c03f40c(0x5);
    FUN_0c038548(0x5);
    FUN_0c038e88(0x5);
    FUN_0c03f40c(0x8);
    return FUN_0c038e88(0x8);
}

int FUN_0c102350(void)
{
    register int t0;
    register int t1;
    register int t3;

    t0 = 0x0;
    for (;;) {
        *(unsigned int *)((((((t0 << 2) + t0) << 2) + 0xC472DA8) + 0x0)) = 0x0;
        *(unsigned int *)((((((t0 << 2) + t0) << 2) + 0xC472DA8) + 0x4)) = t0;
        *(unsigned int *)((((((t0 << 2) + t0) << 2) + 0xC472DA8) + 0x10)) = 0x0;
        (((struct o44_ushort *)(((t0 * 0x98) + 0xC541CDC)))->v) = 0x0;
        t1 = ((((t0 << 2) + t0) << 2) + 0xC472DA8);
        t3 = t0;
        t0 = (t0 + 0x1);
        *(unsigned int *)((t1 + 0xC)) = (*(signed char *)((0xC1FC504 + t3)));
        if ((int)t0 >= (int)0x4) {
            break;
        }
    }
    return t3;
}

struct sel_0c102690 { int state; int bit; int pic; int sel; int mode; };
/* manual: character select step: count-in, per player cursor / option input and confirm, then fill the player and stage setup; 132 cases, 798 of 798 instructions */
int FUN_0c102690(void)
{
    int *b;
    int *p;
    struct sel_0c102690 *q;
    signed char *m;
    signed char *e;
    int i;
    int j;
    int n;
    int r;
    int a5;
    int a6;
    int lim;
    int mode;
    unsigned char t;

    r = *(signed char *)0xC541F45 & 0xFF;
    if (r == 0 || r == 1) {
        if (r == 0) {
            *(signed char *)0xC541F45 += 1;
            FUN_0c059c54(0);
        }
        r = FUN_0c05f22c(0x8000);
        if (r != 0) *(short *)0xC541F50 = 1;
        if ((short)(*(short *)0xC541F50 -= 1) != 0) return r;
        *(signed char *)0xC541F45 += 1;
        for (i = 0; i < 4; i++) {
            FUN_0c10368c(i);
            r = FUN_0c103ba2(i);
        }
        return r;
    }
    b = (int *)0xC472CEC;
    b[8] -= 1;
    for (i = 0; i < 4; i++) {
        m = (signed char *)(i * 35 + 0xC83C590);
        p = b + 15 + i * 8;
        if (m[1] == 0) p[0] = m[0];
        else p[0] = FUN_0c101d38(i);
        if (p[0] == 0) continue;
        if (p[2] == 0) {
            if (FUN_0c101d72(i, 0x800, 0x400, (int)&p[3], 1, m[5], m[6])) FUN_0c05aab6(i, 5);
            q = (struct sel_0c102690 *)(b + 47) + p[3];
            if (m[4] != 0) {
                if (q->state == 2) p[4] = 0;
                else if (FUN_0c101d72(i, 0x2000, 0x1000, (int)&p[4], 1, 0, 2)) FUN_0c05aab6(i, 6);
            }
            r = p[4];
            if (r == 0 || r == 1) {
                if (FUN_0c101d72(i, 0x40, 0x100, r == 0 ? (int)&q->state : (int)&q->bit, 1, 0, r + 2)) FUN_0c05aab6(i, 5);
            } else if (r == 2) {
                if (b[7] == 0) {
                    a5 = 0x40;
                    a6 = 0x100;
                    lim = b[13];
                } else {
                    a5 = 0x800;
                    a6 = 0x400;
                    lim = b[14] ? b[13] : b[13] - 1;
                }
                r = FUN_0c101d72(i, a5, a6, (int)&q->sel, 1, 0, lim);
                q->pic = ((signed char *)(b + 9))[q->sel];
                if (r != 0) {
                    FUN_0c05aab6(i, b[13] == 1 ? 4 : 5);
                    if (q->mode == 0) {
                        q->mode = 1;
                        r = ((signed char *)0xC1FC504)[p[3]];
                        q->sel = r;
                        q->pic = ((signed char *)(b + 9))[r];
                    } else if (q->sel == b[13]) q->mode = 2;
                    else q->mode = 1;
                }
            }
        }
        if (b[7] == 0 || ((struct sel_0c102690 *)(b + 47))[i].mode == 0) continue;
        if (FUN_0c101d52(i, 0x8100)) {
            if (p[2] != 0) continue;
            p[2] = 1;
            if (b[6] == 0) b[4] = i;
            b[6] += 1;
            n = 1;
            a5 = 2;
        } else {
            if (!FUN_0c101d52(i, 0x40) || p[2] == 0) continue;
            p[2] = 0;
            b[6] -= 1;
            n = 0;
            a5 = 4;
        }
        j = m[9];
        if (j >= 0) b[15 + j * 8 + 2] = n;
        FUN_0c05aab6(i, a5);
    }
    b[0] = 0;
    n = 0;
    for (i = 0; i < 4; i++) {
        q = (struct sel_0c102690 *)(b + 47) + i;
        if (q->state != 2 && q->mode != 0) n |= 1 << q->bit;
    }
    for (i = 4; i != 0; i--) {
        if (n & 1) b[0] += 1;
        n >>= 1;
    }
    r = 0;
    if (b[7] != 0) {
        if (b[6] >= b[5]) r = 1;
        else if (b[8] <= 0) {
            r = 1;
            if (b[4] == -1) b[4] = (nlRand() % 2) << 1;
        }
    } else if (b[0] >= 2) {
        for (i = 0; i < 4; i++) {
            q = (struct sel_0c102690 *)(b + 47) + i;
            if (q->state != 2 && q->mode != 0 && FUN_0c101d52(i, 0x8000)) {
                b[4] = i;
                FUN_0c05aab6(i, 3);
                r = 1;
                break;
            }
        }
    }
    if (r != 1) return r;
    *(unsigned char *)0xC541F44 = 1;
    *(unsigned char *)0xC541F45 = 0;
    *(unsigned short *)0xC541F50 = 30;
    b[1] = 0;
    b[2] = 0;
    b[3] = 0;
    FUN_0c103fdc(b[4]);
    mode = b[7];
    for (i = 0; i < 4; i++) {
        q = (struct sel_0c102690 *)(b + 47) + i;
        if (mode == 0) {
            if (q->mode == 0) q->state = 2;
            if (q->state == 2 || q->mode != 2) continue;
        } else {
            if (q->state == 2 || (q->mode != 0 && q->mode != 2)) continue;
        }
        q->mode = 2;
        /* the original holds &q->pic pushed across nlRand; p's stack slot carries it */
        *(int * volatile *)&p = &q->pic;
        **(int * volatile *)&p = ((signed char *)0xC1FC504)[nlRand() % b[13]];
    }
    n = 0;
    for (i = 0; i < 4; i++) {
        if (((struct sel_0c102690 *)(b + 47))[i].state != 2) n++;
    }
    FUN_0c187a88(0xC472CC0, 0xC1FC508, 0x1C);
    FUN_0c187a88(0xC472CDC, 0xC1FC524, 0xA);
    *(int *)0xC472CE8 = 5;
    for (j = 0; j < 6; j++) {
        if (((signed char *)(b[4] * 35 + 0xC83C590))[8] < j + 5) break;
        e = (signed char *)0xC1FC52E + j * 3;
        if (e[0] != 0 && (n > 2 || *(int *)0xC472D08 != 0)) continue;
        t = j + 5;
        ((unsigned char *)0xC472CC0)[e[1] * 7 + e[2]] = t;
        ((unsigned char *)0xC472CC0)[e[1] * 7] += 1;
        ((unsigned char *)0xC472CC0)[e[2]] += 1;
        ((unsigned char *)0xC472CDC)[*(int *)0xC472CE8] = t;
        *(int *)0xC472CE8 += 1;
    }
    b[8] = 0x4B0;
    if (((signed char *)(b[4] * 35 + 0xC83C590))[8] >= 8) FUN_0c104650();
    FUN_0c103d00();
    return FUN_0c104146(b[3]);
}

/* manual: select screen step: states 0/1 count down the intro timer, then moves the cursor over the 3 x 6 table (two axes, the
   range of each found in the table), picks the entry (random on one cell), and handles decide, timeout and cancel; 225 cases, 305 of 305 instructions */
int FUN_0c102d68(void)
{
    signed char *g = (signed char *)0xC541F3C;
    int *w = (int *)0xC472CEC;
    signed char *t;
    int first, last, i, k, n, s, old, cur;
    int a;
    int *q = w + 1;

    switch ((unsigned char)g[9]) {
    case 0:
        g[9]++;
        FUN_0c059c54(1);
    case 1:
        if (FUN_0c05f22c(0x8000) != 0)
            *(short *)(g + 0x14) = 1;
        if ((i = --*(short *)(g + 0x14)) != 0)
            return i;
        g[9]++;
        *(short *)(g + 0x16) = 0;
        return 0;
    }
    w[8]--;
    old = w[1] * 6 + w[2];
    for (k = 0, a = 0x2000; k < 2; k++, a >>= 2) {
        t = (signed char *)0xC472CC8;
        if (k) {
            t += w[1] * 7; s = 1; n = 6;
        } else {
            t += w[2]; s = 7; n = 3;
        }
        for (i = 0; i < n; i++)
            if (t[i * s] >= 0) {
                first = i;
                break;
            }
        for (i = first; i < n && t[i * s] >= 0; i++)
            last = i;
        FUN_0c101d72(w[4], a, a >> 1, (int)(q + k), 1, first, last);
    }
    cur = w[1] * 6 + w[2];
    if (cur != old)
        FUN_0c05aab6(0, 1);
    if (w[1] == 1 && w[2] == 2) {
        if (cur != old) {
            *(short *)(g + 0x16) = 5;
        } else {
            if (--*(short *)(g + 0x16) <= 0) {
                *(short *)(g + 0x16) = 10;
                FUN_0c05aab6(0, 6);
            }
            w[3] = *(signed char *)(0xC472CDC + nlRand() % *(int *)0xC472CE8);
        }
    } else {
        w[3] = *((signed char *)0xC472CC8 + w[1] * 7 + w[2]);
    }
    k = w[7];
    if (FUN_0c101d52(w[4], 0x8101) != 0 || (k != 0 && w[8] <= 0)) {
        g[7]++;
        g[8] = 0;
        g[9] = 0;
        return FUN_0c05aab6(0, 2);
    }
    if (w[7] != 0 || (i = FUN_0c101d52(w[4], 0x40)) == 0)
        return 0;
    g[8] = 0;
    g[9] = 0;
    *(short *)(g + 0x14) = 30;
    i = FUN_0c05aab6(w[4], 4);
    for (k = 0; k < 4; k++)
        w[17 + k * 8] = 0;
    w[6] = 0;
    return i;
}


int FUN_0c1030c0(int a4)
{
    register int t1;
    register int t4;
    register int t5;
    register int t9;

    t1 = 0x0;
    for (;;) {
        t4 = FUN_0c037320((*(int *)(((((a4 << 2) << 1) + 0xC290818) + (t1 << 2)))), (*(int *)0xC4B410C));
        t5 = FUN_0c03f444(0x5, 0x0, t4);
        t9 = t5;
        if (t5 != 0) {
            FUN_0c03733c(t5, (*(int *)(((((a4 << 2) << 1) + 0xC290818) + (t1 << 2)))), (*(int *)0xC4B410C));
            (((struct oA8_uchar *)(t5))->v) = 0x1;
            (((struct oAC_ushort *)(t5))->v) = 0xF;
            (((struct oA9_uchar *)(t5))->v) = 0x80;
            *(unsigned char *)((t5 + 0x1)) = 0xFFFFFFFF;
            *(unsigned char *)((t5 + 0x2)) = t1;
            *(unsigned int *)((t5 + 0x4)) = 0xC10302A;
            t9 = t1;
        }
        t1 = (t1 + 0x1);
        if ((int)t1 >= (int)0x2) {
            break;
        }
    }
    return t9;
}

int FUN_0c10314a(int a4)
{
    register int t0;
    register int t1;

    FUN_0c037498(((((struct oC8_int *)(a4))->v)), 0x0, (*(int *)((((*(short *)((a4 + 0x1C))) << 2) + ((((struct o4_int *)0xC290898)->v))))), (*(int *)0xC4B410C));
    t0 = *(int *)0xC4B410C;
    if ((*(short *)((a4 + 0x1C))) == 2) {
        FUN_0c037498(((((struct oC4_int *)(a4))->v)), 0x0, (*(int *)((((((struct o0_int *)0xC290898)->v)) + 0x10))), t0);
        *(unsigned char *)((((((struct oCC_int *)(a4))->v)) + 0x0)) = 0x0;
        *(unsigned char *)((((((struct oD0_int *)(a4))->v)) + 0x0)) = 0x0;
    } else {
        FUN_0c037498(((((struct oC4_int *)(a4))->v)), 0x0, (*(int *)((((*(short *)((a4 + 0x1E))) << 2) + ((((struct o0_int *)0xC290898)->v))))), t0);
        FUN_0c037498(((((struct oCC_int *)(a4))->v)), 0x0, (*(int *)((((*(short *)((a4 + 0x1E))) << 2) + ((((struct o8_int *)0xC290898)->v))))), (*(int *)0xC4B410C));
        *(unsigned char *)((((((struct oCC_int *)(a4))->v)) + 0x0)) = 0x1;
        t0 = *(int *)0xC4B410C;
        if (((((struct o22_short *)(a4))->v)) == 0) {
            FUN_0c037498(((((struct oD0_int *)(a4))->v)), 0x0, 0x82, t0);
        } else {
            t1 = 0x83;
            if (((((struct o22_short *)(a4))->v)) == 2) {
            } else {
                t1 = (*(int *)(((((((struct o20_short *)(a4))->v)) << 2) + ((((struct oC_int *)0xC290898)->v)))));
            }
            FUN_0c037498(((((struct oD0_int *)(a4))->v)), 0x0, t1, t0);
        }
        *(unsigned char *)((((((struct oD0_int *)(a4))->v)) + 0x0)) = 0x1;
    }
    return 0xD0;
}


int FUN_0c1034ba(int a4)
{
    register int t0;
    register int t10;
    register int t1;
    register int t2;

    t0 = FUN_0c03f444(0x5, 0x0, 0x4);
    t10 = t0;
    if (t0 != 0) {
        t1 = 0x0;
        t2 = 0x0;
        for (;;) {
            (((struct o6C_float *)((*(int *)((((0xC4 + t0) + t1) + 0x0)))))->v) = (*(float *)((((a4 << 2) + 0xC2908A8) + 0x0)));
            (((struct o70_float *)((*(int *)((((0xC4 + t0) + t1) + 0x0)))))->v) = (*(float *)((t1 + 0xC2908B8)));
            t2 = (t2 + 0x1);
            (((struct o74_float *)((*(int *)((((0xC4 + t0) + t1) + 0x0)))))->v) = (*(float *)((0xC2908D8 + t1)));
            t1 = (t1 + 0x4);
            if ((int)t2 >= (int)0x4) {
                break;
            }
        }
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x80;
        *(unsigned char *)((t0 + 0x1)) = a4;
        *(unsigned int *)((t0 + 0x4)) = 0xC10324C;
        t10 = a4;
    }
    return t10;
}

int FUN_0c10356c(int a4)
{
    FUN_0c037498(((((struct oC8_int *)(a4))->v)), 0x0, (*(int *)(((((int)((int)(*(short *)((a4 + 0x1C))) / (int)0xA)) << 2) + ((((struct o0_int *)0xC290918)->v))))), (*(int *)0xC4B410C));
    return FUN_0c037498(((((struct oCC_int *)(a4))->v)), 0x0, (*(int *)(((((int)((int)(*(short *)((a4 + 0x1C))) % (int)0xA)) << 2) + ((((struct o4_int *)0xC290918)->v))))), (*(int *)0xC4B410C));
}

int FUN_0c1035c2(int a4)
{
    register int t15;
    register int t18;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        FUN_0c037498(((((struct oC4_int *)(a4))->v)), 0x0, (*(int *)(((*(int *)0xC290914) + 0x0))), (*(int *)0xC4B410C));
        *(unsigned short *)((a4 + 0x1C)) = (*(short *)((0xC541D20 + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x98))));
        FUN_0c10356c(a4);
    }
    if ((*(signed char *)((a4 + 0x15))) == 0) {
        t15 = *(signed char *)0xC541F44;
        t18 = (unsigned char)t15;
        if ((unsigned char)t15 == 1) {
            (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x400);
            (((struct oB0_float *)(a4))->v) = 1.0f;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            t18 = 0x15;
        }
        return t18;
    }
    (((struct oB0_float *)(a4))->v) = (((((struct oB0_float *)(a4))->v)) - 0.0333333351f);
    if (0.0f > ((((struct oB0_float *)(a4))->v))) {
        return FUN_0c03f346(a4);
    }
    return 0xB0;
}

int FUN_0c10368c(int a4)
{
    register int t0;
    register int t11;
    register float u1;
    register float u3;
    register int t4;
    register int t5;

    t0 = FUN_0c03f444(0x5, 0x0, 0x3);
    t11 = t0;
    if (t0 != 0) {
        u1 = (((struct o0_float *)0xC10379C)->v);
        u3 = (((struct o4_float *)0xC10379C)->v);
        t4 = 0x0;
        t5 = 0x0;
        for (;;) {
            (((struct o6C_float *)((*(int *)((((0xC4 + t0) + t4) + 0x0)))))->v) = (*(float *)((t4 + ((((a4 << 1) + a4) << 2) + 0xC290920))));
            t5 = (t5 + 0x1);
            (((struct o70_float *)((*(int *)((((0xC4 + t0) + t4) + 0x0)))))->v) = u1;
            (((struct o74_float *)((*(int *)((((0xC4 + t0) + t4) + 0x0)))))->v) = u3;
            t4 = (t4 + 0x4);
            if ((int)t5 >= (int)0x3) {
                break;
            }
        }
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x80;
        *(unsigned char *)((t0 + 0x1)) = a4;
        *(unsigned int *)((t0 + 0x4)) = 0xC1035C2;
        t11 = a4;
    }
    return t11;
}

int FUN_0c103716(int a4)
{

    register int R1;
    register int R2;
    register int R3;
    register int R12;
    register int R13;
    register float F2;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register float w0_0;
    register float w0_1;
    v0_0 = a4;
    v0_4 = (0x0);
    if (((*(signed char *)((v0_0 + 0x14))) != 0)) goto L_C10374C;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    v0_2 = *(signed char *)((v0_0 + 0x2));
    v0_1 = (v0_2);
    if ((v0_2 == 0)) goto L_C103736;
    if ((v0_1 == 1)) goto L_C103742;
    L_C10374C:;
    if (((*(signed char *)0xC541F43) == 0)) goto L_C103764;
    if (((int)(*(signed char *)((v0_0 + 0x15))) >= (int)0xA)) goto L_C103764;
    (((struct o15_uchar *)(v0_0))->v) = 0xA;
    L_C103764:;
    v0_5 = *(signed char *)((v0_0 + 0x15));
    v0_1 = (v0_5);
    v0_2 = (0xC541F44);
    v0_3 = (0xC290950);
    w0_0 = (1.0f);
    w0_1 = (0.0500000007f);
    if ((v0_5 == 0)) goto L_C1037B8;
    if ((v0_1 == 1)) goto L_C10382A;
    if ((v0_1 == 2)) goto L_C1037CA;
    if ((v0_1 == 3)) goto L_C1037F2;
    if ((v0_1 == 10)) goto L_C103810;
    if ((v0_1 == 11)) goto L_C10382A;
    L_C103846:;
    return v0_1;
    L_C10382A:;
    (((struct oB0_float *)(v0_0))->v) = (((((struct oB0_float *)(v0_0))->v)) - w0_1);
    v0_1 = (0xB0);
    if ((!(0.0f > ((((struct oB0_float *)(v0_0))->v))))) goto L_C103846;
    (((struct oA8_uchar *)(v0_0))->v) = v0_4;
    L_C10383E:;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    v0_1 = (0x15);
    goto L_C103846;
    L_C103810:;
    (((struct oAC_ushort *)(v0_0))->v) = (((((struct oAC_short *)(v0_0))->v)) | 0x400);
    (((struct oB0_float *)(v0_0))->v) = w0_0;
    *(unsigned short *)((v0_0 + 0x1C)) = 0x14;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    goto L_C10382A;
    L_C1037F2:;
    (((struct oB0_float *)(v0_0))->v) = (((((struct oB0_float *)(v0_0))->v)) + w0_1);
    v0_1 = (0xB0);
    if ((!(((((struct oB0_float *)(v0_0))->v)) > w0_0))) goto L_C103846;
    (((struct oAC_ushort *)(v0_0))->v) = (((((struct oAC_short *)(v0_0))->v)) & 0xFBFF);
    (((struct o15_uchar *)(v0_0))->v) = v0_4;
    v0_1 = (0x15);
    goto L_C103846;
    L_C1037CA:;
    v0_4 = *(signed char *)((v0_0 + 0x2));
    v0_1 = ((v0_4 << 2));
    if (((unsigned char)(*(signed char *)((v0_2 + 0x0))) != (*(int *)((v0_3 + (v0_4 << 2)))))) goto L_C103846;
    (((struct oA8_uchar *)(v0_0))->v) = 0x1;
    L_C1037DE:;
    (((struct oAC_ushort *)(v0_0))->v) = (((((struct oAC_short *)(v0_0))->v)) | 0x400);
    (((struct oB0_float *)(v0_0))->v) = w0_0;
    *(unsigned short *)((v0_0 + 0x1C)) = 0x14;
    goto L_C10383E;
    L_C1037B8:;
    v0_4 = *(signed char *)((v0_0 + 0x2));
    v0_1 = ((v0_4 << 2));
    if (((unsigned char)(*(signed char *)((v0_2 + 0x0))) != (*(int *)((v0_3 + (v0_4 << 2)))))) goto L_C1037DE;
    goto L_C103846;
    L_C103742:;
    (((struct o15_uchar *)(v0_0))->v) = 0x2;
    (((struct oA8_uchar *)(v0_0))->v) = v0_4;
    goto L_C10374C;
    L_C103736:;
    (((struct o15_uchar *)(v0_0))->v) = v0_4;
    (((struct oA8_uchar *)(v0_0))->v) = 0x1;
    goto L_C10374C;
}

int FUN_0c10384a(void)
{
    register int t0;
    register int t3;
    register int t4;
    register int t8;

    t0 = 0x0;
    for (;;) {
        t3 = FUN_0c037320((*(int *)((0xC290958 + (t0 << 2)))), (*(int *)0xC4B410C));
        t4 = FUN_0c03f444(0x5, 0x0, t3);
        t8 = t4;
        if (t4 != 0) {
            FUN_0c03733c(t4, (*(int *)((0xC290958 + (t0 << 2)))), (*(int *)0xC4B410C));
            (((struct oAC_ushort *)(t4))->v) = 0xF;
            (((struct oA9_uchar *)(t4))->v) = 0x80;
            *(unsigned char *)((t4 + 0x1)) = 0xFFFFFFFF;
            *(unsigned char *)((t4 + 0x2)) = t0;
            *(unsigned int *)((t4 + 0x4)) = 0xC103716;
            t8 = t0;
        }
        t0 = (t0 + 0x1);
        if ((unsigned int)t0 >= (unsigned int)0x2) {
            break;
        }
    }
    return t8;
}


int FUN_0c1039c4(void)
{
    register int t0;
    register int t3;
    register int t4;
    register int t8;

    t0 = 0x0;
    for (;;) {
        t3 = FUN_0c037320((*(int *)((0xC290960 + (t0 << 2)))), (*(int *)0xC4B410C));
        t4 = FUN_0c03f444(0x5, 0x0, t3);
        t8 = t4;
        if (t4 != 0) {
            FUN_0c03733c(t4, (*(int *)((0xC290960 + (t0 << 2)))), (*(int *)0xC4B410C));
            (((struct oAC_ushort *)(t4))->v) = 0xF;
            (((struct oA9_uchar *)(t4))->v) = 0x80;
            *(unsigned char *)((t4 + 0x1)) = 0xFFFFFFFF;
            *(unsigned char *)((t4 + 0x2)) = (t0 + 0x2);
            *(unsigned int *)((t4 + 0x4)) = 0xC1038E8;
            t8 = (t0 + 0x2);
        }
        t0 = (t0 + 0x1);
        if ((unsigned int)t0 >= (unsigned int)0x3) {
            break;
        }
    }
    return t8;
}

int FUN_0c103ba2(int a4)
{
    register int t0;
    register int t1;

    t0 = FUN_0c037320((*(int *)(((a4 << 2) + 0xC29096C))), (*(int *)0xC4B410C));
    t1 = FUN_0c03f444(0x5, 0x0, t0);
    t0 = t1;
    if (t1 != 0) {
        FUN_0c03733c(t1, (*(int *)(((a4 << 2) + 0xC29096C))), (*(int *)0xC4B410C));
        (((struct oA8_uchar *)(t1))->v) = 0x1;
        (((struct oAC_ushort *)(t1))->v) = 0xF;
        (((struct oA9_uchar *)(t1))->v) = 0x80;
        *(unsigned char *)((t1 + 0x1)) = a4;
        *(unsigned int *)((t1 + 0x4)) = 0xC103A3E;
        (((struct o30_float *)(t1))->v) = 10.0f;
        t0 = 0x30;
    }
    return t0;
}

int FUN_0c103d00(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;

    t0 = FUN_0c03f444(0x5, 0x0, 0x9);
    t1 = t0;
    if (t0 != 0) {
        u0 = *(float *)0xC103E5C;
        t2 = 0x0;
        for (;;) {
            FUN_0c037498((*(int *)((((0xC4 + t0) + (t2 << 2)) + 0x0))), 0x0, (*(int *)((0xC29097C + (t2 << 2)))), (*(int *)0xC4B410C));
            t3 = (int)((int)t2 / (int)0x3);
            t4 = (int)((int)t2 % (int)0x3);
            if ((int)(*(signed char *)((((0xC472CC0 + (((t3 << 2) << 1) - t3)) + t4) + 0x8))) >= 0) {
                *(unsigned char *)(((*(int *)((((t2 << 2) + (0xC4 + t0)) + 0x0))) + 0x0)) = 0x1;
            } else {
                *(unsigned char *)(((*(int *)((((t2 << 2) + (0xC4 + t0)) + 0x0))) + 0x0)) = 0x0;
            }
            (((struct o6C_float *)((*(int *)((((0xC4 + t0) + (t2 << 2)) + 0x0)))))->v) = (*(float *)((((((((t3 << 1) + t3) << 2) << 1) + 0xC1FC68C) + ((t4 << 2) << 1)) + 0x0)));
            (((struct o70_float *)((*(int *)((((0xC4 + t0) + (t2 << 2)) + 0x0)))))->v) = ((((struct o4_float *)(((((((t3 << 1) + t3) << 2) << 1) + 0xC1FC68C) + ((t4 << 2) << 1))))->v));
            t3 = *(int *)((((t2 << 2) + (0xC4 + t0)) + 0x0));
            t2 = (t2 + 0x1);
            (((struct o74_float *)(t3))->v) = u0;
            if ((int)t2 >= (int)0x9) {
                break;
            }
        }
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x80;
        *(unsigned int *)((t0 + 0x4)) = 0xC103C44;
        t1 = 0xA9;
    }
    return t1;
}
