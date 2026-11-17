/* game/sound: functions 0C05A0B8-0C05A174, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uint { unsigned int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
int FUN_0c035bf0(int);
int FUN_0c05a40c(int);
int FUN_0c05a418(int, int);
int FUN_0c05a4a6(int, int);
int FUN_0c05aab6(int, int);
int FUN_0c05b15c(void);
int FUN_0c18020e(int, int);
int FUN_0c1803fc(int, int);
int FUN_0c18098e(int);
int FUN_0c18106a(int, int, int);
int FUN_0c2b431c(int, int, int);
int FUN_0c05a0b8(void);

int FUN_0c05a0b8(void)
{
    register int t0;

    FUN_0c18020e(0xC242340, 0x0);
    t0 = 0x0;
    for (;;) {
        FUN_0c18098e(t0);
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x8) {
            break;
        }
    }
    FUN_0c035bf0(0x53);
    FUN_0c1803fc(0xCB00000, 0x1);
    FUN_0c05aab6(0x0, 0x20);
    FUN_0c035bf0(0x51);
    FUN_0c1803fc(0xCB00000, 0x2);
    FUN_0c05a40c(0x1);
    FUN_0c18106a(0x1, 0x1, 0x0);
    (((struct o0_uint *)0xC46DE80)->v) = (FUN_0c2b431c(0x1, 0xC413CF8, 0x2D0C4));
    (((struct o4_uint *)0xC46DE80)->v) = (FUN_0c2b431c(0x2, 0xC440DBC, 0x2D0C4));
    FUN_0c05a418(0x7F, 0x7F);
    FUN_0c05a4a6(0x0, 0x7F);
    FUN_0c05a4a6(0x1, 0x7F);
    FUN_0c05a4a6(0x2, 0x7F);
    t0 = 0x3;
    for (;;) {
        FUN_0c05a4a6(t0, 0x7C);
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x7) {
            break;
        }
    }
    FUN_0c05a4a6(0x7, 0x7C);
    return FUN_0c05b15c();
}
