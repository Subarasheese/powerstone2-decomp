/* game/unsorted: functions 0C0E79F4-0C0E8180, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o420_ushort { char p[0x420]; unsigned short v; };
struct o423_uchar { char p[0x423]; unsigned char v; };
struct o424_uchar { char p[0x424]; unsigned char v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAA_uchar { char p[0xAA]; unsigned char v; };
struct oAB_uchar { char p[0xAB]; unsigned char v; };
struct oC0_int { char p[0xC0]; int v; };
int FUN_0c064ee4(int, int);
int FUN_0c064f80(int);
int FUN_0c0c212c(int);
int FUN_0c0c2ab6(int, int);
int FUN_0c0c2d56(int, int, int);
extern int FUN_0c0c4b76();
extern int FUN_0c0c4c1c();
extern int FUN_0c0c5024();
extern int FUN_0c0c52c4();
extern int FUN_0c0c8c08();
extern int FUN_0c0c8c36();
int FUN_0c0e79f4(int a4, int a5, int a6);
int FUN_0c0e7a22(int a4);
int FUN_0c0e7ff0(int a4, int a5, int a6, int a7);

int FUN_0c0e79f4(int a4, int a5, int a6)
{
    register int t3;
    register int t1;
    register int t2;

    FUN_0c0c2d56(a4, a5, a6);
    t3 = 0x0;
    for (;;) {
        if ((int)t3 >= (int)((((struct oC0_int *)(a4))->v))) {
            break;
        }
        t2 = 0xC4;
        t2 = (t2 + a4);
        t1 = (*(int *)((((t3 << 2) + t2) + 0x0)));
        t3 = (t3 + 0x1);
        *(unsigned char *)((t1 + 0x0)) = 0x1;
    }
    return 0xC0;
}

int FUN_0c0e7a22(int a4)
{
    register int t0;

    t0 = FUN_0c064ee4(a4, 0x2);
    if (t0 != 0) {
        return 0x2;
    }
    t0 = FUN_0c064f80(a4);
    if (t0 != 0) {
        return 0x1;
    }
    return 0x0;
}

