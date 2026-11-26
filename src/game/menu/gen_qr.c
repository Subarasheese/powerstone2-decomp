/* Straight-line functions with calls and guards (batch gen_qr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o6B_uchar { char p[0x6B]; unsigned char v; };
struct o6C_int { char p[0x6C]; int v; };
int FUN_0c05aab6(int, int);
int FUN_0c05dd10(int);
int FUN_0c05dd3e(int a4, int a5, int a6);
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct oA_ushort { char p[0xA]; unsigned short v; };


#define E(o)  (((signed char *)a4)[o])
#define TB    ((signed char *)0x0C1C40E1)
/* manual: name entry, one frame: cursor over the letter table, letter store, confirm / delete; 252 cases, 305 of 305 instructions */
int FUN_0c05dd3e(int a4, int a5, int a6)
{
    int st = E(3), max, i;

    switch (st) {
    case 0:
    case 1:
    case 2:
        max = st ? 44 : 43;
        if (*(int *)(a4 + 0x6C) & 0x800) {
            FUN_0c05aab6(E(9), 5);
            if (--E(4) < 0)
                E(4) = max;
        } else if (*(int *)(a4 + 0x6C) & 0x400) {
            FUN_0c05aab6(E(9), 5);
            if (++E(4) > max)
                E(4) = 0;
        }
        break;
    case 3:
        if (*(int *)(a4 + 0x6C) & 0xC00) {
            FUN_0c05aab6(E(9), 5);
            E(4) = E(4) == 44 ? 43 : 44;
        }
        break;
    case 4:
        *(unsigned short *)(a4 + 0xA) = 1;
        E(4) = 42;
        E(0x6B) = TB[E(4)];
        return 0x6B;
    default:
        return st;
    }
    E(0x68 + E(3)) = TB[E(4)];
    if (!FUN_0c05dd10(a4))
        return 0;
    if (st == 0) {
        FUN_0c05aab6(E(9), 3);
        if (E(4) == 43) {
            *(unsigned short *)(a4 + 0xA) = 1;
            return 1;
        }
        i = E(3) + 1;
        E(3) = i;
        return i;
    }
    if (E(4) == 43) {
        *(unsigned short *)(a4 + 0xA) = 1;
        return FUN_0c05aab6(E(9), st == 3 ? 2 : 3);
    }
    if (E(4) == 44) {
        E(0x68 + E(3)) = TB[42];
        E(3)--;
        for (i = 0; i <= 44; i++)
            if (E(0x68 + E(3)) == TB[i])
                E(4) = i;
        return FUN_0c05aab6(E(9), 4);
    }
    if (st == 3)
        return E(4);
    FUN_0c05aab6(E(9), 3);
    E(3)++;
    if (E(3) != 3)
        return E(3);
    E(4) = 43;
    return 43;
}
