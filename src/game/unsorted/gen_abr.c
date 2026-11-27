/* Straight-line functions with calls and guards (batch gen_abr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o374A_uchar { char p[0x374A]; unsigned char v; };
struct o382E_ushort { char p[0x382E]; unsigned short v; };
int FUN_0c081a3c(int a4, int a5);

int FUN_0c081a3c(int a4, int a5)
{
    register int t1;
    register int t0;

    if ((signed char)a5 != 12) {
        if ((signed char)a5 != 13) {
            if ((signed char)a5 != 7) {
                if ((signed char)a5 != 8) {
                    if ((signed char)a5 != 14) {
                        return (signed char)a5;
                    }
                    t0 = 0x4;
                } else {
                    t0 = 0x3;
                }
            } else {
                t0 = 0x2;
            }
        } else {
            t0 = 0x0;
        }
    } else {
        t0 = 0x1;
    }
    (((struct o382E_ushort *)(a4))->v) = 0x0;
    t1 = *(signed char *)((a4 + 0x2));
    (((struct o374A_uchar *)(a4))->v) = (*(signed char *)((((t0 << 1) + (0xC25BC80 + (((t1 << 2) + t1) << 1))) + 0x0)));
    return 0x374A;
}
