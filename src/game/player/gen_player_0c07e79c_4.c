/* game/player: functions 0C07E79C-0C080320, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o168_float { char p[0x168]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o3717_uchar { char p[0x3717]; unsigned char v; };
struct o3718_uchar { char p[0x3718]; unsigned char v; };
struct o372A_uchar { char p[0x372A]; unsigned char v; };
struct o3768_int { char p[0x3768]; int v; };
struct o376C_int { char p[0x376C]; int v; };
struct o3770_int { char p[0x3770]; int v; };
int FUN_0c064f80(int);
int FUN_0c07f0fc(int);
int FUN_0c07f312(int, int);
int FUN_0c07f67c(int);
extern int FUN_0c07f820();
extern int FUN_0c07f9a2();
int FUN_0c07fc00(int);
int FUN_0c07fcda(int);
int FUN_0c07fdba(int);
int FUN_0c07fe02(int, int, int, int);
int FUN_0c081dfc(int, int, int);
extern int FUN_0c085cac();
int FUN_0c0c30a8(int, int, int);
int FUN_0c07fea4(int a4, int a5, int a6);

/* manual: state chooser of a fighter (a4+0x3717/0x3718 = new state/sub, then FUN_0c085cac): every "set state" exit is one tail (s, t), the mode-2 call chain written once with a flag for the extra steps of its first copy; hand cases cover the paths */
int FUN_0c07fea4(int a4, int a5, int a6)
{
    int stk[2];
    int s;
    int t;
    int first;
    int v;
    if (*(signed char *)(a4 + 0x371C) != 0) {
        if (FUN_0c07f0fc(a4) != 0 && *(signed char *)(a4 + 0x371D) != 1) {
            if (((struct o3768_int *)a4)->v != 0) {
                if (FUN_0c07f312(a4, 0) != 0) return 1;
            } else if (((struct o376C_int *)a4)->v != 0) {
                FUN_0c081dfc(a4, a5, a6);
                return 1;
            }
        }
        v = *(signed char *)(a4 + 0x375A);
        if (v == 1 || v == 2 || v == 4 || v == 5) {
            s = 0x1A;
            t = 0;
            goto L_SET;
        }
    }
    if (((struct o3770_int *)a4)->v != 0 && *(signed char *)(a4 + 0x371D) == 1) {
        s = 0xC;
        t = 0;
        goto L_SET;
    }
    if (*(signed char *)(a4 + 0x3731) == 2) {
        if (*(signed char *)(a4 + 0x3721) != 0) {
            first = 1;
            goto L_CHAIN;
        }
        if (((struct o3768_int *)a4)->v != 0 && FUN_0c07f312(a4, 1) != 0) return 1;
        v = FUN_0c07f820(a4);
        if (v == 0) {
            first = 0;
            goto L_CHAIN;
        }
        s = (v == 1) ? 9 : 0xB;
        t = (v == 1) ? 0 : 1;
        goto L_SET;
    }
    goto L_230;
    L_CHAIN:;
    if (FUN_0c07f9a2(a4, stk, a6) != 0) {
        ((struct o372A_uchar *)a4)->v = stk[0];
        s = 0xB;
        t = 2;
        goto L_SET;
    }
    if (FUN_0c07fdba(a4) != 0 && FUN_0c07f312(a4, 0) != 0) return 1;
    if (FUN_0c07fcda(a4) != 0) return 1;
    if (FUN_0c07fc00(a4) != 0) return 1;
    if (((struct o3768_int *)a4)->v != 0 && FUN_0c07f312(a4, 0) != 0) return 1;
    if (FUN_0c07f67c(a4) != 0) {
        s = 9;
        t = 1;
        goto L_SET;
    }
    if (first) {
        if (FUN_0c07f0fc(a4) != 0) {
            FUN_0c081dfc(a4, a5, a6);
            return 1;
        }
        if (FUN_0c0c30a8(((struct o376C_int *)a4)->v, 1, a4) != 0) {
            FUN_0c07fe02(a4, 1, a6, 0);
            return 1;
        }
    }
    if (FUN_0c064f80(a4) == 0) {
        if (((struct o2C_float *)a4)->v > ((struct o168_float *)a4)->v + 80.0f) {
            s = 7;
            t = 5;
            goto L_SET;
        }
        return 0;
    }
    L_230:;
    if (*(signed char *)(a4 + 0x3731) == 0) {
        if (FUN_0c0c30a8(((struct o376C_int *)a4)->v, 1, a4) != 0) {
            FUN_0c07fe02(a4, 0, a6, 0);
            return 1;
        }
        if (((struct o3768_int *)a4)->v != 0 && *(signed char *)(a4 + 0x371C) == 0 && FUN_0c0c30a8(((struct o3768_int *)a4)->v, 2, a4) != 0) {
            s = 7;
            t = 4;
            goto L_SET;
        }
    }
    if (*(signed char *)(a4 + 0x371C) != 0) {
        s = 0x1A;
        t = 0;
        goto L_SET;
    }
    if (*(signed char *)(a4 + 0x3731) == 2) {
        s = 7;
        t = 6;
        goto L_SET;
    }
    if (*(signed char *)(a4 + 0x3731) != 0) return 0;
    s = 7;
    t = a5;
    L_SET:;
    ((struct o3717_uchar *)a4)->v = s;
    ((struct o3718_uchar *)a4)->v = t;
    FUN_0c085cac(a4, s, t);
    return 1;
}
