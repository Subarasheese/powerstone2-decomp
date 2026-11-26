/* Straight-line functions with calls and guards (batch gen_lv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o2_ushort { char p[0x2]; unsigned short v; };
struct o5_uchar { char p[0x5]; unsigned char v; };
int FUN_0c01e988(int, int, int);
int FUN_0c022050(void);
int FUN_0c0220c4(int, int, int);
int FUN_0c0222a4(int, int, int);
int FUN_0c1864e0(int, int, int);
int FUN_0c186740(int, int, int);
int FUN_0c187a88(int, int, int);
extern int strcpy();
int FUN_0c022c30(int a4, int a5);
struct o2_uchar { char p[0x2]; unsigned char v; };


/* manual: reads a command packet (kind byte, count byte, selector byte) and answers it: selector 110 / kind 1 and selector 98 / kind 5 drain a counted
   byte list into a buffer, selector 98 kinds 6,7,2,4,3 drain a fixed list and send a packet 0x72,9,code, selector 97 / kind 13 sends two packets; cases: 59 dev + 59 holdout, 447 of 451 instructions */
int FUN_0c022c30(int a4, int a5)
{
    char s[788];
    int h;
    int R6;
    int n;
    int i;
    int base;
    int code;
    int str;
    int r;

    if (*(short *)0xC30EF6C > 0) {
        *(short *)0xC30EF6C = *(short *)0xC30EF6C - 1;
        return -788;
    }
    if (FUN_0c022050() == 0) return 0;
    FUN_0c0220c4((int)s + 12, (int)s + 4, (int)s);
    h = *(int *)0xC309994;
    if (s[12] == 110 && s[0] == 1) {
        base = 0xC30AC5C;
        goto drain;
    }
    if (s[12] == 97 && s[0] == 13) {
        FUN_0c01e988(h, s[12], R6);
        s[0x14] = 0x71;
        s[0x15] = 0xFE;
        s[0x16] = 0xD;
        s[0x17] = 0xFA;
        FUN_0c187a88((int)s + 0x18, 0xC30AB2E, (unsigned char)s[0x17]);
        FUN_0c186740(*(int *)0xC309994, (int)s + 0x14, (unsigned char)s[0x15]);
        strcpy(0xC3053B8, 0xC1A8AF0);
        code = 6;
        goto packet;
    }
    if (s[12] != 98) goto dflt;
    switch (s[0]) {
    case 6: base = 0xC309BD4; n = 8; code = 7; str = 0xC1A8B00; break;
    case 7: base = 0xC309BE0; n = 4; code = 2; str = 0xC1A8B24; break;
    case 2: base = 0xC309BE4; n = 1; code = 4; str = 0xC1A8B48; break;
    case 4: base = 0xC309BE8; n = 4; code = 3; str = 0xC1A8B70; break;
    case 3: base = 0xC309C6C; n = 6; code = 5; str = 0xC1A8B9C; break;
    case 5:
        base = 0xC309BEC;
        goto drain;
    default:
        goto dflt;
    }
    FUN_0c1864e0(h, base, 1);
    for (i = 1; i < n; i++)
        FUN_0c1864e0(*(int *)0xC309994, base + i, 1);
packet:
    s[0x194] = 0x72;
    s[0x195] = 9;
    s[0x196] = code;
    FUN_0c187a88((int)s + 0x197, 0xC30999E, 6);
    r = FUN_0c186740(*(int *)0xC309994, (int)s + 0x194, s[0x195]);
    if (s[12] == 97) return r;
    return strcpy(0xC3053B8, str);
drain:
    FUN_0c1864e0(h, (int)s + 4, 1);
    for (i = 0; i < (unsigned char)s[4]; i++)
        FUN_0c1864e0(*(int *)0xC309994, base + i, 1);
    *(char *)(base + i) = 0;
    if (s[12] == 110) return base;
    *(char *)0xC30985A = 4;
    *(unsigned short *)0xC30540C = *(char *)0xC30AF89 ? 0x12C : 0x258;
    *(char *)0xC30A51A = 0;
    *(unsigned short *)0xC30A51C = 0;
    *(char *)0xC30A51B = 1;
    *(char *)0xC30542B = 1;
    *(char *)0xC30985F = 0;
    *(int *)0xC30AF8C = 0;
    *(char *)0xC30AF8A = 1;
    return strcpy(0xC3053B8, 0xC1A8BC8);
dflt:
    return FUN_0c0222a4((int)s + 12, (int)s + 4, (int)s);
}
