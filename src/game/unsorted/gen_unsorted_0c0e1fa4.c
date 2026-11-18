/* game/unsorted: functions 0C0E1FA4-0C0E2168, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03744a(int, int, int, int);
int mdl_vtx_iter_begin(int, int);
int mdl_vtx_iter_next(void);
int mdl_vtx_get_pos(int);
int mdl_vtx_set_pos(int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
float FUN_0c0e2340(int);
int FUN_0c0e2390(int, int, int);
extern int FUN_0c187798();
int FUN_0c0e1fa4(int a4, int a5, int a6, int a7);
int FUN_0c0e2116(int a4);


int FUN_0c0e2116(int a4)
{
    register int t2;
    register int t6;

    FUN_0c037320(0x77, (*(int *)0xC4B410C));
    t2 = FUN_0c03f444(0x5, 0x0, 0x1);
    t6 = t2;
    if (t2 != 0) {
        FUN_0c03744a(((((struct oC4_int *)(t2))->v)), 0x0, 0x77, (*(int *)0xC4B410C));
        *(unsigned int *)((t2 + 0x4)) = 0xC0E1FA4;
        *(unsigned char *)((t2 + 0x1)) = 0xFFFFFFFF;
        (((struct oAC_ushort *)(t2))->v) = 0xF;
        (((struct oA9_uchar *)(t2))->v) = 0x21;
        *(unsigned int *)((t2 + 0x10)) = a4;
        t6 = 0xA9;
    }
    return t6;
}
