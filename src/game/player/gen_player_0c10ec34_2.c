/* game/player: functions 0C10EC34-0C110168, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c1171f0(int);
int FUN_0c11ea4e(int);
int FUN_0c187798(int);
int FUN_0c10ff04(int a4, int a5, int a6);
int FUN_0c110024(int a4);


int FUN_0c110024(int a4)
{
    int t0;
    register int t1;

    if (((int)(*(int *)(((*(int *)0xC4739A4) + 0x38))) >= 0) && (t0 = *(signed char *)((a4 + 0x14)), t0 != 0)) {
        (((struct o14_uchar *)(a4))->v) = (*(signed char *)(((*(int *)((a4 + 0x10))) + 0x14)));
    }
    t0 = *(signed char *)((a4 + 0x14));
    t1 = *(int *)0xC4739A4;
    if (t0 != 0) {
        if (t0 == 1) {
            return t0;
        }
        if (t0 != 2) {
            if (t0 != 3) {
                if (t0 != 4) {
                    return t0;
                }
                t0 = FUN_0c058a6e((0xB0 + a4), 0xC29106C, 0xC29107C, (*(int *)((t1 + 0x38))), ((*(int *)((t1 + 0x3C)))), 0x0);
                if ((int)(*(int *)(((*(int *)0xC4739A4) + 0x38))) < 0) {
                    return FUN_0c03f346(a4);
                }
                return t0;
            }
            return (FUN_0c058a6e((0xB0 + a4), 0xC29106C, 0xC29107C, (*(int *)((t1 + 0x38))), ((*(int *)((t1 + 0x3C)))), 0x0));
        }
        return (FUN_0c058a6e((0xB0 + a4), 0xC29106C, 0xC29107C, (*(int *)((t1 + 0x38))), ((*(int *)((t1 + 0x3C)))), 0x0));
    }
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0x61F;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    (((struct o14_uchar *)(a4))->v) = (*(signed char *)(((*(int *)((a4 + 0x10))) + 0x14)));
    FUN_0c1171f0(a4);
    t0 = *(int *)0xC4739A4;
    FUN_0c10ff04(a4, ((*(int *)(((((*(int *)((t0 + 0x34))) << 2) + (t0 + 0x10)) + 0x0))) + 0x1), 0x1);
    t0 = *(int *)(((*(int *)0xC4739A4) + 0x34));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                } else {
                    t0 = (FUN_0c11ea4e(0x2010));
                }
                t1 = t0;
            } else {
                t1 = (FUN_0c11ea4e(0x2004));
            }
            t0 = t1;
        } else {
            t0 = (FUN_0c11ea4e(0x2002));
        }
        t1 = t0;
    } else {
        t1 = (FUN_0c11ea4e(0x2001));
    }
    return FUN_0c10ff04(a4, t1, 0x0);
}
