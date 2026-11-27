/* Straight-line functions with calls and guards (batch gen_lh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
int FUN_0c05a080(int, int);
int FUN_0c05aab6(int, int);
int FUN_0c05f22c(int);
int FUN_0c104e6a(int, int);
int FUN_0c115e84(int);
int FUN_0c115eae(int);
int FUN_0c115fd2(int);
int FUN_0c116c12(int, int);
int FUN_0c117944(int, ...);
int FUN_0c117a6e(int, ...);
int FUN_0c117d54(void);
int FUN_0c117e76(void);
int FUN_0c1186d4(int);
int FUN_0c1187ba(void);
int nlRand(void);
int thunk_FUN_0c11e20c(int);
int thunk_FUN_0c11e28e(int);
void FUN_0c11664c(int a4);
struct o1C_short { char p[0x1C]; short v; };
struct o1C_ushort { char p[0x1C]; unsigned short v; };
struct o1E_short { char p[0x1E]; short v; };
struct o1E_ushort { char p[0x1E]; unsigned short v; };


#define B(o) (*(signed char *)(p + (o)))
#define S(o) (*(short *)(p + (o)))
#define OBJ (*(char **)0x0C474C00)
#define HUD ((char *)0x0C539B4D)
#define T(a) ((int *)(a))
#define VOICE T(0x0C29DDD0)[S(0x1E)]
/* manual: scripted sequence task, one step per state p[0x17]; 395 cases, 469 of 469 instructions */
void FUN_0c11664c(int a4)
{
    char *p = (char *)a4;
    int again, n;
    switch (B(0x17)) {
    case 0:
        B(0x17)++;
        S(0x1E) = T(0x0C2017E0)[nlRand() % *(int *)0x0C201824];
    case 1:
        FUN_0c117944(0xC5, VOICE);
        FUN_0c116c12(a4, 4);
        HUD[0] = 2;
        HUD[1] = 1;
        break;
    case 2:
    case 11:
    case 21:
    case 31:
    case 45:
        if (FUN_0c117d54() >= 0)
            return;
        n = B(0x17)++;
        if (n == 31)
            thunk_FUN_0c11e28e(S(0x1E));
        else if (n == 45)
            thunk_FUN_0c11e20c(S(0x1E));
        FUN_0c117e76();
        return;
    case 3:
        if (!FUN_0c05f22c(0x3FCF))
            return;
        break;
    case 4:
        FUN_0c117944(0xC6);
        break;
    case 5:
        if (FUN_0c117d54() >= 0)
            return;
        S(0x20) = 0;
        OBJ = (char *)FUN_0c1187ba();
        OBJ[2] = p[0x20];
        break;
    case 6:
        S(0x20) = FUN_0c104e6a(S(0x20), 1);
        OBJ[2] = p[0x20];
        again = 0;
        if (!FUN_0c05f22c(0x101)) {
            if (!FUN_0c05f22c(0x40))
                return;
            S(0x20) = 1;
            OBJ[2] = p[0x20];
            again = 1;
        }
        FUN_0c1186d4(S(0x20));
        S(0x1C) = 0;
        FUN_0c05aab6(0, again || S(0x20) != 0 ? 4 : 3);
        break;
    case 7:
        if ((short)++S(0x1C) <= 10)
            return;
        OBJ[0x14] = 0x63;
        OBJ = 0;
        FUN_0c116c12(a4, 5);
        if (S(0x20) == 0)
            B(0x17) = !FUN_0c115e84(S(0x1E)) ? 20 : B(0x16) == 1 ? 40 : 30;
        else if (S(0x20) == 1)
            B(0x17) = 10;
        return;
    case 10:
        HUD[0] = 0;
        HUD[1] = 0;
        FUN_0c116c12(a4, 6);
        FUN_0c117944(0xC9);
        break;
    case 20:
        n = 0xC7;
        again = 2;
        goto say;
    case 30:
        n = 0xCA;
        again = 3;
        goto say;
    case 40:
        FUN_0c117944(T(0x0C1FC788)[nlRand() % 2]);
        break;
    case 41:
        if (FUN_0c117d54() >= 0)
            return;
        FUN_0c117e76();
        thunk_FUN_0c11e28e(S(0x1E));
        break;
    case 42:
        if (!FUN_0c05f22c(0x3FCF))
            return;
        n = nlRand() % 32;
        S(0x1C) = T(0x0C201630)[n];
        FUN_0c115eae(a4);
        break;
    case 43:
        FUN_0c115fd2(a4);
        B(0x17)++;
    case 44:
        FUN_0c117a6e(0xCD, VOICE);
        FUN_0c05a080(30, 0);
        break;
    case 46:
        if (!FUN_0c05f22c(0x3FCF))
            return;
        if (--S(0x1C) > 0) {
            B(0x17) = 0x2B;
            return;
        }
        break;
    case 47:
        HUD[0] = 0;
        HUD[1] = 0;
        n = T(0x0C1FC790)[nlRand() % 2];
        again = 2;
        goto call;
    say:
        HUD[0] = 0;
        HUD[1] = 0;
    call:
        FUN_0c117944(n);
        FUN_0c116c12(a4, again);
        break;
    case 48:
        if (FUN_0c117d54() >= 0)
            return;
        FUN_0c117e76();
        break;
    case 12:
    case 22:
    case 32:
    case 49:
        if (!FUN_0c05f22c(0x3FCF))
            return;
        B(0x15)++;
        B(0x16) = 1;
        B(0x18) = 0;
        B(0x17) = 0;
    default:
        return;
    }
    B(0x17)++;
}
