/* game/menu/select: functions 0C10CAEC-0C10E7C4, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c10caec(int);
int FUN_0c10d2b4(int, int);
int FUN_0c1171f0(int);
extern int FUN_0c18778c();
int FUN_0c187798(int, int, int);
int FUN_0c10d37a(int a4, int a5, int a6, int a7);
int FUN_0c10d458(int a4, int a5, int a6, int a7);

int FUN_0c10d37a(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    if ((*(signed char *)((0x14 + (*(int *)((a4 + 0x10)))))) == 5) {
        (((struct o14_uchar *)(a4))->v) = 0x63;
    }
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 99) {
                return t0;
            }
            return FUN_0c03f346(a4, a5, a6, a7);
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0x1F;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        FUN_0c1171f0(a4);
    }
    t0 = 0x0;
    t1 = 0x0;
    t2 = 0x0;
    for (;;) {
        if ((int)(unsigned char)(*(signed char *)(((0xC473958 + t0) + 0x0))) > (int)0x5) {
            t1 = (t1 + ((unsigned char)(*(signed char *)(((0xC473958 + t2) + 0x0))) - 5));
        }
        t0 = (t0 + 0x3);
        t2 = (t2 + 0x3);
        if ((unsigned int)t0 >= (unsigned int)0x18) {
            break;
        }
    }
    *(unsigned int *)0xC473974 = t1;
    return FUN_0c10d2b4(a4, t1);
}

