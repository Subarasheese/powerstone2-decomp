/* game/system: functions 0C05B794-0C05C15A, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
int FUN_0c0334cc(void);
int FUN_0c038e88(int);
extern int FUN_0c03f40c();
int FUN_0c040034(int, int, int, int);
int FUN_0c052364(int, int);
int FUN_0c05258e(int, int, int, int, int);
int FUN_0c059c54(int);
int FUN_0c05aaf6(int);
int game_reset_objects(void);
int FUN_0c05b048(int, int);
int FUN_0c05bd22(int a4, int a5, int a6, int a7);
int FUN_0c05bf24(int a4, int a5, int a6, int a7);

int FUN_0c05bd22(int a4, int a5, int a6, int a7)
{
    register int t4;

    t4 = 0xC541F42;
    if ((unsigned char)(*(signed char *)0xC541F42) == 0) {
        (((struct o0_uchar *)0xC541F42)->v) = ((*(signed char *)0xC541F42) + 0x1);
        (((struct o1_uchar *)0xC541F42)->v) = 0x0;
        *(unsigned char *)0xC5421F8 = 0x0;
        t4 = 0x0;
    }
    return FUN_0c040034(t4, 0xC541F3C, a6, a7);
}

int FUN_0c05bf24(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)0xC541F42;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            (((struct o0_uchar *)0xC541F41)->v) = 0x1;
            (((struct o1_uchar *)0xC541F41)->v) = 0x0;
            (((struct o3_uchar *)0xC541F41)->v) = 0x0;
            (((struct o2_uchar *)0xC541F41)->v) = 0x0;
            return 0x0;
        }
        t0 = *(short *)0xC541F4E;
        *(unsigned short *)0xC541F4E = (t0 - 1);
        if ((short)(t0 - 1) == 0) {
            (((struct o1_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F42) + 0x1);
        }
        t0 = ((int (*)(int, int, int, int))(FUN_0c03f40c))(0x8, a5, a6, a7);
        return FUN_0c038e88(0x8);
    }
    (((struct o1_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F42) + 0x1);
    *(unsigned short *)0xC541F4E = 0x78;
    FUN_0c0334cc();
    game_reset_objects();
    FUN_0c05b048(0x1, 0x0);
    FUN_0c059c54(0x2);
    FUN_0c05aaf6(0x8C);
    FUN_0c052364(0x0, 0xFFFFFFFF);
    FUN_0c052364(0x1, 0xFFFFFFFF);
    FUN_0c052364(0x2, 0xFFFFFFFF);
    FUN_0c052364(0x3, 0xFFFFFFFF);
    FUN_0c05258e(0x63, 0xA, 0x100, 0x1, 0x0);
    t0 = *(short *)0xC541F4E;
    *(unsigned short *)0xC541F4E = (t0 - 1);
    if ((short)(t0 - 1) == 0) {
        (((struct o1_uchar *)0xC541F41)->v) = ((*(signed char *)0xC541F42) + 0x1);
    }
    t0 = ((int (*)(int))(FUN_0c03f40c))(0x8);
    return FUN_0c038e88(0x8);
}
