/* Straight-line functions with calls and guards (batch gen_ahm): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uint { unsigned int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
int FUN_0c2b27ae(int, int);
int FUN_0c2b289c(int, int);
int buIsExistFile(int, int);
int vmu_lcd_refresh(int);
int FUN_0c03a7bc(int a4, int a5, int a6, int a7);

/* manual: save-slot record of unit a4 (52 bytes at 0C3C9E10 + a4*52): a5 18 clears it, 2 resets it, 1/12/13/9/7 store a6 and, when a6 is 0, probe the save files (steps run in order: file 0, file 1 pair, files 2-4, then the two FUN_0c2b27ae sizes), 11/14/20 store a6, else nothing; 233 cases, 513 of 513 instructions */
int FUN_0c03a7bc(int a4, int a5, int a6, int a7)
{
    int *r = (int *)(0xC3C9E10 + a4 * 52);
    int *g = (int *)0xC3C9FB0;
    int k, e, n;

    if (a5 == 18) {
        r[0] = a4;
        r[1] = a5;
        r[2] = 0xFFFF0000;
        r[3] = a6;
        r[4] = a7;
        for (k = 5; k < 13; k++) r[k] = 0;
        return 0;
    }
    if (a5 == 2) {
        r[1] = a5;
        r[2] = 0xFFFFFF01;
        for (k = 5; k < 13; k++) r[k] = 0;
        if (g[1] != a4) return 0;
        g[1] = -1;
    } else {
        if (a5 == 1) r[1] = a5;
        else if (a5 != 11 && a5 != 12 && a5 != 9 && a5 != 13 && a5 != 14 && a5 != 20 && a5 != 7) return 0;
        r[2] = a6;
        if (a6 == 0 && a5 != 11 && a5 != 14 && a5 != 20) {
            k = a5 == 7 ? 3 : a5 == 13 ? 1 : a5 == 9 ? 5 : 0;
            e = a5 == 13 ? 2 : 5;
            for (; k < e; k++) {
                if (k == 1) {
                    if (a5 == 12) continue;
                    n = FUN_0c2b289c(a4, 0xC3C9FBC);
                    if (n == 0) {
                        n = buIsExistFile(a4, 0xC1B71F8);
                        if (n == 0) {
                            r[6] = 2;
                            r[7] = 1;
                        } else if (n == -251) {
                            r[6] = 1;
                            r[7] = 2;
                        }
                    } else if (n == -251) {
                        r[6] = 1;
                        r[7] = 1;
                    }
                } else {
                    n = buIsExistFile(a4, 0xC1B71E8 + k * 16);
                    if (n == 0) r[k ? k + 6 : 5] = 2;
                    else if (n == -251) r[k ? k + 6 : 5] = 1;
                }
            }
            r[11] = FUN_0c2b27ae(a4, 0);
            r[12] = FUN_0c2b27ae(a4, 1);
            if (a5 == 1) {
                g[1] = a4;
                vmu_lcd_refresh(a4);
            }
        }
    }
    *g = 0;
    return 0;
}
