/* Straight-line functions with calls and guards (batch gen_abi): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c133c0e(int);
int FUN_0c133d44(int);
int FUN_0c1342b8(int);
int FUN_0c134d80(int, int, int, int);
int FUN_0c134ea2(int);
int FUN_0c134f5a(int, int, int, int);
int FUN_0c135024(int a4, int a5, int a6, int a7);

int FUN_0c135024(int a4, int a5, int a6, int a7)
{
    int stk[2];
    register int t0;
    register int t2;
    register int t11;

    t0 = *(int *)((a4 + 0x10));
    (((struct oA8_uchar *)(a4))->v) = (*(signed char *)((t0 + 0xA8)));
    t2 = *(signed char *)((a4 + 0x14));
    if (t2 == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0x3C;
    }
    if ((t2 == 0) || (t2 == 1)) {
        if ((*(signed char *)((t0 + 0x371A))) == 0) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        }
        t11 = *(signed char *)((a4 + 0x15));
        switch (t11) {
        case 1:
            FUN_0c134d80(a4, a5, a6, a7);
            break;
        case 2:
            FUN_0c133d44(a4);
            FUN_0c134ea2(a4);
            break;
        case 3:
            FUN_0c133d44(a4);
            FUN_0c134f5a(a4, 0x0, 0x0, 0x0);
            break;
        default:
            FUN_0c133d44(a4);
            FUN_0c1342b8(a4);
            break;
        }
        return FUN_0c133c0e(a4);
    } else {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
}
