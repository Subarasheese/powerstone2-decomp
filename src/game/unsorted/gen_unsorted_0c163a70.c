/* game/unsorted: functions 0C163A70-0C164A1A, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o4_int { char p[0x4]; int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c07e3ae(int, int);
int FUN_0c163cc0(int, int, int);
int FUN_0c18778c(int, int);
int FUN_0c187798(void);
int FUN_0c163a70(int a4, int a5, int a6, int a7);
int FUN_0c163afc(int a4, int a5, int a6, int a7);
int FUN_0c16498c(int a4, int a5, int a6, int a7);



int FUN_0c16498c(int a4, int a5, int a6, int a7)
{
    register int t0;

    if (a7 != 0) {
        if (a7 != 1) {
            if (a7 != 2) {
                return a7;
            }
            t0 = FUN_0c163a70(a4, a5, a6, 0x2);
            if (t0 != 0) {
                *(unsigned int *)((t0 + 0x4)) = 0xC164644;
                *(unsigned char *)((t0 + 0x2)) = a7;
                *(unsigned char *)((t0 + 0x1)) = a4;
            }
            return FUN_0c163cc0(a4, a5, a6);
        }
        t0 = FUN_0c163a70(a4, a5, a6, 0x1);
        if (t0 != 0) {
            *(unsigned int *)((t0 + 0x4)) = 0xC1642FC;
            *(unsigned char *)((t0 + 0x2)) = a7;
            *(unsigned char *)((t0 + 0x1)) = a4;
        }
        return FUN_0c163cc0(a4, a5, a6);
    }
    t0 = FUN_0c163a70(a4, a5, a6, 0x0);
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x4)) = 0xC163F9E;
        *(unsigned char *)((t0 + 0x2)) = a7;
        *(unsigned char *)((t0 + 0x1)) = a4;
    }
    return FUN_0c163cc0(a4, a5, a6);
}


