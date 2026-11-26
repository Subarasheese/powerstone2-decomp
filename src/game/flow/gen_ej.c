/* Straight-line functions with calls and guards (batch gen_ej): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

extern int FUN_0c03ea04();
int FUN_0c056e44(int, int);
int FUN_0c0573c0(int, int, int);
int FUN_0c0573cc(int, int, int);
int FUN_0c0f7944(void);
int FUN_0c0f7a38(void);
int FUN_0c0f7c1c(void);
int FUN_0c0f7f08(void);
int FUN_0c0f804c(void);
int FUN_0c0f821a(int, int);
int FUN_0c0f8430(int);
int FUN_0c0f886e(int, int);
int FUN_0c0f89a6(int, int, int);
int FUN_0c0f8abe(void);
int FUN_0c0f8c10(int);
int FUN_0c0f90cc(void);
int FUN_0c0f9116(void);
void FUN_0c0f91d4(void);

/* manual: timed sequence on g_game_work byte 7 (states 0..16), one shared countdown on short 18; 215 cases, 303 of 303 instructions */
void FUN_0c0f91d4(void)
{
    unsigned char *g = (unsigned char *)0xC541F3C;
    short *timer = (short *)(g + 18);
    int s = g[7];

    if (s >= 17)
        return;
    if (s == 0) {
        FUN_0c03ea04(5, 0);
        *timer = ((short *)0xC1FB288)[g[7]];
        FUN_0c0f7944();
        FUN_0c0f7a38();
        FUN_0c0f8c10(10);
        g[7]++;
        s = 1;
    } else if (s == 11 ? *timer == 45 : (s == 13 || s == 16) && *timer == 32) {
        FUN_0c0573cc(s == 16 ? 0xFFFFFFFF : 0xFF000000, 0, s == 11 ? 44 : 30);
    }
    if (--*timer > 0)
        return;
    if (s == 16) {
        g[5]++;
        g[8] = 0;
        g[7] = 0;
        g[6] = 0;
        return;
    }
    if (s == 11)
        FUN_0c03ea04(5, 1);
    if (s == 13) {
        FUN_0c03ea04(5, 2);
        FUN_0c0573c0(0xFF000000, 0, 30);
    }
    *timer = ((short *)0xC1FB288)[g[7]];
    switch (s) {
    case 9:
        FUN_0c0f886e(0, 12);
        break;
    case 10:
        FUN_0c0f8abe();
        FUN_0c0f89a6(0, *timer - 45, 12);
        break;
    case 11:
        FUN_0c0f7c1c();
        FUN_0c0f8430(0);
        FUN_0c0f8430(1);
        FUN_0c0f8430(2);
        FUN_0c0f886e(1, 14);
        ((int *)0xC542440)[2] = -1;
        ((int *)0xC542440)[1] = -1;
        ((int *)0xC542440)[0] = -1;
        FUN_0c0573c0(0xFF000000, 0, 60);
        break;
    case 12:
        break;
    case 13:
        FUN_0c0f7f08();
        break;
    case 14:
        FUN_0c0f804c();
        FUN_0c0f90cc();
        break;
    case 15:
        FUN_0c0f886e(2, 17);
        break;
    default:            /* 1..8 */
        FUN_0c0f821a(((int *)0xC1FB544)[g[7] - 1], 60);
        if (s != 1 && g[7] == 5)
            FUN_0c0f9116();
        break;
    }
    g[7]++;
    if (s == 14)
        FUN_0c056e44(34, 2);
}
