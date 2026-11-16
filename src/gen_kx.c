/* Straight-line functions with calls and guards (batch gen_kx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
int FUN_0c03f346(int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c1105d8(int, int);
int FUN_0c1171f0(int);
int FUN_0c11e938(int);
int FUN_0c1106b8(int a4);

int FUN_0c1106b8(int a4)
{
    int t0;
    register int t1;
    register int t2;

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
    t0 = FUN_0c11e938((*(int *)((((*(int *)((((*(int *)(((*(int *)0xC4739A4) + 0x34))) << 2) + 0xC473C74))) << 2) + 0xC474410))));
    t1 = *(int *)(((*(int *)0xC4739A4) + 0x34));
    t2 = (t0 + 0x1);
    if (t1 != 0) {
        t2 = ((t0 + 0x1) - 0x80);
        if (t1 != 1) {
            t2 = ((t0 + 0x1) - 0x96);
            if (t1 != 2) {
                t2 = ((t0 + 0x1) - 0xA0);
                if (t1 != 3) {
                    t2 = (t0 + 0x1);
                }
            }
        }
    }
    return FUN_0c1105d8(a4, t2);
}
