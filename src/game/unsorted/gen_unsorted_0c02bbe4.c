/* game/unsorted: functions 0C02BBE4-0C02BCBC, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o10_uchar { char p[0x10]; unsigned char v; };
struct o31_uchar { char p[0x31]; unsigned char v; };
struct o32_uchar { char p[0x32]; unsigned char v; };
struct o35_uchar { char p[0x35]; unsigned char v; };
struct o36_uchar { char p[0x36]; unsigned char v; };
struct oB_uchar { char p[0xB]; unsigned char v; };
struct oC_uchar { char p[0xC]; unsigned char v; };
struct oD_uchar { char p[0xD]; unsigned char v; };
struct oE_uchar { char p[0xE]; unsigned char v; };
struct oF_uchar { char p[0xF]; unsigned char v; };
void FUN_0c02bbe4(int a4, int a5, int a6, int a7);

void FUN_0c02bbe4(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;

    (((struct o10_uchar *)0xC30EF15)->v) = (*(signed char *)0xC30EF24);
    t1 = *(signed char *)0xC30EF15;
    if ((unsigned char)t1 != 0) {
        if ((unsigned char)t1 != 1) {
            if ((unsigned char)t1 != 16) {
            } else {
                (((struct oF_uchar *)0xC30EF15)->v) = 0x1;
                if ((*(signed char *)0xC30985A) == 4) {
                    (((struct o0_uchar *)0xC30EF15)->v) = 0x0;
                    (((struct oF_uchar *)0xC30EF15)->v) = 0x0;
                }
            }
        } else {
            if ((*(signed char *)0xC30A34A) == 0) {
                (((struct o0_uchar *)0xC30EF15)->v) = 0x0;
                (((struct o36_uchar *)0xC30EF15)->v) = 0x0;
                (((struct o35_uchar *)0xC30EF15)->v) = 0x0;
            }
        }
    } else {
        (((struct oD_uchar *)0xC30EF15)->v) = (*(signed char *)0xC30EF20);
        (((struct oE_uchar *)0xC30EF15)->v) = (*(signed char *)0xC30EF21);
        (((struct oB_uchar *)0xC30EF15)->v) = (*(signed char *)0xC30A347);
        (((struct oC_uchar *)0xC30EF15)->v) = (*(signed char *)0xC305416);
        t1 = *(signed char *)0xC30EF23;
        if ((*(signed char *)0xC30EF21) != t1) {
            t2 = *(signed char *)0xC30EF21;
            if ((int)(signed char)t2 < (int)t1) {
                if ((int)(signed char)t2 < (int)(*(signed char *)0xC30EF46)) {
                    (((struct o31_uchar *)0xC30EF15)->v) = t2;
                    (((struct o32_uchar *)0xC30EF15)->v) = ((*(signed char *)0xC30EF47) - 1);
                }
            } else {
                if ((int)(signed char)t2 > (int)(*(signed char *)0xC30EF47)) {
                    (((struct o32_uchar *)0xC30EF15)->v) = t2;
                    (((struct o31_uchar *)0xC30EF15)->v) = ((*(signed char *)0xC30EF46) + 0x1);
                }
            }
        }
        if ((*(signed char *)0xC30A51A) == 0) {
            if (((*(signed char *)0xC30EFA2) == 0) && (t0 = *(signed char *)0xC30985A, (int)t0 > (int)0x4)) {
                t0 = *(signed char *)0xC30A34A;
                if (t0 != 1) {
                    if (t0 != 2) {
                        (((struct o0_uchar *)0xC30EF15)->v) = 0x10;
                    } else {
                        (((struct o36_uchar *)0xC30EF15)->v) = 0x1;
                        (((struct o0_uchar *)0xC30EF15)->v) = 0x1;
                    }
                } else {
                    (((struct o35_uchar *)0xC30EF15)->v) = 0x1;
                    (((struct o0_uchar *)0xC30EF15)->v) = 0x1;
                }
            }
        }
    }
}
