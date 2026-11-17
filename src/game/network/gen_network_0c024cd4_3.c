/* game/network: functions 0C024CD4-0C02624E, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
int FUN_0c014a68(void);
int FUN_0c01e9e4(void);
int FUN_0c022050(void);
int FUN_0c0220c4(int, int, int);
int FUN_0c0222a4(int, int, int);
int FUN_0c02568a(void);
int FUN_0c02b7fc(float);
int FUN_0c0573cc(int, int, int);
int FUN_0c025e28(float f4);

int FUN_0c025e28(float f4)
{
    int stk[99];
    register int t2;
    register int t7;
    register int t11;
    register int t14;

    FUN_0c02b7fc(f4);
    FUN_0c02568a();
    t2 = FUN_0c022050();
    if (t2 != 0) {
        FUN_0c0220c4(((int)stk + 0), (((int)stk + 0) + 0x4), (((int)stk + 0) + 0x8));
        FUN_0c0222a4(((int)stk + 0), (((int)stk + 0) + 0x4), (((int)stk + 0) + 0x8));
    }
    t7 = *(short *)0xC30EF6C;
    *(unsigned short *)0xC30EF6C = (t7 + 0x1);
    if ((short)(t7 + 0x1) == 16) {
        FUN_0c0573cc(0xFF000000, 0x0, 0x14);
    }
    t11 = *(short *)0xC30EF6C;
    t14 = t11;
    if ((int)t11 >= (int)0x24) {
        (((struct o0_uchar *)0xC309859)->v) = 0x4;
        (((struct o1_uchar *)0xC309859)->v) = 0x0;
        (((struct o2_uchar *)0xC309859)->v) = 0x0;
        (((struct o3_uchar *)0xC309859)->v) = 0x0;
        *(unsigned char *)0xC305416 = 0x0;
        *(unsigned char *)0xC30AF9A = 0x0;
        FUN_0c01e9e4();
        FUN_0c014a68();
        *(unsigned short *)0xC30EF6C = 0x0;
        t14 = 0x0;
    }
    return t14;
}
