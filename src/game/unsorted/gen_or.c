/* Straight-line functions with calls and guards (batch gen_or): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o160_float { char p[0x160]; float v; };
struct o38CC_int { char p[0x38CC]; int v; };
struct o38D0_int { char p[0x38D0]; int v; };
struct o38D0_uint { char p[0x38D0]; unsigned int v; };
struct o38D4_int { char p[0x38D4]; int v; };
struct o44_int { char p[0x44]; int v; };
struct o445_uchar { char p[0x445]; unsigned char v; };
struct o446_uchar { char p[0x446]; unsigned char v; };
struct o447_uchar { char p[0x447]; unsigned char v; };
struct o48_int { char p[0x48]; int v; };
struct o8C_float { char p[0x8C]; float v; };
int FUN_0c059df2(int, int);
int FUN_0c059e60(int, int);
int FUN_0c059f20(int, int);
int FUN_0c059f78(int, int);
int FUN_0c059fae(int, int, int);
int FUN_0c0385e0(int a4, int a5);

/* manual: runs the timed event script of a fighter up to the clock; 503 cases, 333 of 333 instructions */
int FUN_0c0385e0(int a4, int a5)
{
    char *p = (char *)a4;
    int *ev;
    char *tab;
    int op;
    int v;

    if (*(int *)(p + 0x38D4) < 0)
        return 0x38D4;
    if (*(int *)(p + 0x38D0) >= *(int *)(p + 0x38D4))
        return 0x38D0;
    do {
        ev = (int *)(*(int *)(p + 0x38D0) * 16 + *(int *)(p + 0x38CC));
        if (*(float *)ev > *(float *)(*(int *)(p + 0x118) + 0x8C))
            return 0x8C;
        op = ev[1];
        switch (op) {
        case 0:
            FUN_0c059df2((signed char)p[1], ev[2]);
            break;
        case 3:
        case 4:
            if (!(*(float *)(p + 0x160) > 0.0f))
                return 0x160;
            if (op == 4) {
                v = 5;
                goto motion;
            }
            v = (*(int *)0x0C3BD87C + 1) & 3;
            *(int *)0x0C3BD87C = v;
            if ((signed char)p[2] == 10 && (signed char)p[0x371A] != 0)
                v = ((int *)0x0C1AAB64)[v & 1];
            else
                v = ((int *)0x0C1AAB54)[v];
            goto motion;
        case 2:
            if ((signed char)p[2] == 10 && (signed char)p[0x371A] != 0) {
                v = ((int *)0x0C1AAB6C)[ev[2]];
                goto motion;
            }
        case 1:
            v = ev[2];
        motion:
            FUN_0c059e60(a4, v);
            break;
        case 5:
        case 6:
        case 7:
            v = (signed char)p[0x135];
            if (v == 0)
                v = 5;
            if (op == 5)
                FUN_0c059fae((signed char)p[1], v, ev[2]);
            else if (op == 6)
                FUN_0c059f78((signed char)p[1], v);
            else
                FUN_0c059f20((signed char)p[1], v);
            break;
        case 8:
        case 9:
            if ((unsigned int)(ev[2] - 16) < 4)
                tab = (char *)0x0C1AAB7C;
            else if ((unsigned int)(ev[2] - 32) < 4)
                tab = (char *)0x0C1AAF7C;
            else {
                p[0x446 - 8 + op] = ev[2];
                break;
            }
            p[0x446 - 8 + op] = *(int *)(tab + (signed char)p[2] * 64 + (ev[2] - 16) * 16 + (signed char)p[0x371A] * 8 + (op - 8) * 4);
            break;
        case 10:
            p[0x445] = ev[2];
            break;
        case 11: {
            char *a = *(char **)(p + 0x10C);
            char *b = *(char **)(p + 0x100);
            *a = 0;
            *b = 0;
            break;
        }
        case 12:
            if ((signed char)p[2] == 10 && (signed char)p[0x371A] == 0) {
                char *a = *(char **)(p + 0x10C);
                char *b = *(char **)(p + 0x100);
                char *c = *(char **)(p + 0xFC);
                char *d = *(char **)(p + 0x108);
                *d = 0;
                *c = 0;
                *a = 0;
                *b = 0;
            }
            break;
        }
        (*(int *)(p + 0x38D0))++;
    } while (*(int *)(p + 0x38D0) < *(int *)(p + 0x38D4));
    return 0x38D0;
}
