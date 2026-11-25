/* game/save: functions 0C015B58-0C017EF8, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o49_uchar { char p[0x49]; unsigned char v; };
struct o4D_uchar { char p[0x4D]; unsigned char v; };
struct o4E_uchar { char p[0x4E]; unsigned char v; };
struct o50_uchar { char p[0x50]; unsigned char v; };
int FUN_0c016230(void);
int FUN_0c016244(void);
int FUN_0c01626a(void);
int FUN_0c016288(void);
int FUN_0c0163c4(int, int, int, int);
int FUN_0c01643e(int);
int FUN_0c0166cc(int);
int FUN_0c016a88(int, int, int, int);
int FUN_0c017c70(void);
extern int thunk_FUN_0c03f346();
int FUN_0c187d44(int, int);
int FUN_0c187d98(int, int, int);
int strncpy(int, int, int);
int FUN_0c016d00(int a4, int a5, int a6, int a7);
int FUN_0c017be8(int a4, int a5, int a6, int a7);

/* manual: key entry of the on-screen keyboard, one body for both layouts (byte +0x49 picks the table); cases in tests/gen_save_0c015b58_5/FUN_0c016d00.json */
int FUN_0c016d00(int a4, int a5, int a6, int a7)
{
    char buf[4];
    int lay, w, k, idx, idx2, c, r, f;

    lay = *(signed char *)((*(int *)0xC304BA0) + 0x49);
    if (*(signed char *)((*(int *)0xC304BA0) + 0x4C) != 0) {
        FUN_0c016a88(a4, a5, a6, a7);
    }
    w = 0;
    k = 0;
    if (lay == 0) {
        if (FUN_0c016230() != 0) {
            w = 1;
        }
        k = *(signed char *)((*(int *)0xC304BA0) + 0x53);
        if ((unsigned char)k == 0x87) {
            k = 0;
        }
        if ((unsigned char)k == 0x89) {
            k = 1;
        }
        k = (unsigned char)k;
    } else {
        k = (unsigned char)(*(signed char *)((*(int *)0xC304BA0) + 0x4F)) - 10;
    }
    idx = FUN_0c016244();
    idx2 = idx;
    if (FUN_0c01626a() != 0) {
        if (lay == 0) {
            if (FUN_0c016288() == 0 && idx <= 1) {
                idx2 = 4;
            }
            strncpy((int)buf, (*(int *)(((w * 5 + idx2) << 2) + 0xC20BDC0)) + (k << 1), 2);
            if (idx2 == 4) {
                c = (unsigned char)buf[0];
                if ((c >= 0x41 && c <= 0x5A) || (c >= 0x61 && c <= 0x7A)) {
                    buf[1] = idx + 1;
                }
            }
        } else {
            strncpy((int)buf, (*(int *)((idx << 2) + 0xC20BDF8)) + (k << 1), 2);
        }
        buf[2] = 0;
        if (FUN_0c187d98((int)buf, 0xC1A5E14, 2) != 0) {
            r = FUN_0c0163c4(0xC304C24, (int)buf, (unsigned char)(*(signed char *)((*(int *)0xC304BA0) + 0x4D)), 0x26);
            f = *(int *)0xC304BA0;
            *(unsigned char *)(f + 0x4D) = *(signed char *)(f + 0x4D) + r;
            if (lay == 0) {
                if (idx2 == 4) {
                    FUN_0c0166cc(idx);
                }
            } else if (*(signed char *)((*(int *)0xC304BA0) + 0x51) != 0) {
                FUN_0c01643e(*(int *)0xC20BE10);
            }
        } else {
            r = FUN_0c0163c4(0xC304BA4, (int)buf, (unsigned char)(*(signed char *)((*(int *)0xC304BA0) + 0x50)), *(int *)((*(int *)0xC304BA0) + 0x18));
            f = *(int *)0xC304BA0;
            *(unsigned char *)(f + 0x50) = *(signed char *)(f + 0x50) + r;
        }
        if (r != 0) {
            *(unsigned char *)((*(int *)0xC304BA0) + 0x4E) = 0;
        }
        return FUN_0c017c70();
    }
    if (idx < 2) {
        return 0;
    }
    if (lay == 0) {
        c = *(signed char *)((*(int *)(((((w << 1) + idx) - 2) << 2) + 0xC20BDE8)) + k);
    } else {
        c = *(signed char *)((*(int *)(((idx - 2) << 2) + 0xC20BE08)) + k);
    }
    c = (unsigned char)c;
    FUN_0c187d44(*(int *)0xC20C8FC, c);
    f = (unsigned char)(*(signed char *)((*(int *)0xC304BA0) + 0x4A));
    if ((f & 4) != 0 && (c < 0x30 || c > 0x39)) {
        return f;
    }
    f = (unsigned char)(*(signed char *)((*(int *)0xC304BA0) + 0x4A));
    if ((f & 8) != 0 && (c < 0x30 || c > 0x39) && c != 45) {
        return c;
    }
    f = (unsigned char)(*(signed char *)((*(int *)0xC304BA0) + 0x4A));
    if ((f & 16) != 0 && (c < 0x30 || c > 0x39) && (c < 0x41 || c > 0x5A)) {
        return f;
    }
    buf[0] = c;
    buf[1] = 0;
    r = FUN_0c0163c4(0xC304BA4, (int)buf, (unsigned char)(*(signed char *)((*(int *)0xC304BA0) + 0x50)), *(int *)((*(int *)0xC304BA0) + 0x18));
    f = *(int *)0xC304BA0;
    *(unsigned char *)(f + 0x50) = *(signed char *)(f + 0x50) + r;
    if (r != 0) {
        *(unsigned char *)((*(int *)0xC304BA0) + 0x4E) = 0;
    }
    return FUN_0c017c70();
}

int FUN_0c017be8(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = ((int (*)(int, int, int, int))(thunk_FUN_0c03f346))((*(int *)(((*(int *)0xC304BA0) + 0x20))), a5, a6, a7);
    t0 = ((int (*)(int))(thunk_FUN_0c03f346))((*(int *)(((*(int *)0xC304BA0) + 0x24))));
    t0 = ((int (*)(int))(thunk_FUN_0c03f346))((*(int *)(((*(int *)0xC304BA0) + 0x2C))));
    t0 = ((int (*)(int))(thunk_FUN_0c03f346))((*(int *)(((*(int *)0xC304BA0) + 0x30))));
    (((struct o49_uchar *)((*(int *)0xC304BA0)))->v) = 0x0;
    return 0x49;
}
