/* game/unsorted: functions 0C02C524-0C02C5DA, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o2C_float { char p[0x2C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
int FUN_0c02c524(int a4);

int FUN_0c02c524(int a4)
{
    int t0;
    int t1;
    register int t2;
    register float u0;

    t2 = *(signed char *)((a4 + 0x14));
    switch (t2) {
    case 0:
        (((struct oA8_uchar *)(a4))->v) = 0x0;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o2C_float *)(a4))->v) = -180.0f;
        if ((*(signed char *)0xC309859) == 3) {
            (((struct oA8_uchar *)(a4))->v) = 0x1;
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        }
        break;
    case 1:
        if ((*(signed char *)0xC309859) == 3) {
            (((struct oA8_uchar *)(a4))->v) = 0x1;
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        }
        break;
    case 2:
        u0 = (((struct o2C_float *)(a4))->v);
        (((struct o2C_float *)(a4))->v) = (u0 + 6.0f);
        if (!(0.0f > (u0 + 6.0f))) {
            (((struct o2C_float *)(a4))->v) = 0.0f;
            (((struct o0_uchar *)0xC30EF5C)->v) = 0x1;
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        }
        if (((*(signed char *)0xC309859) == 2) && (t1 = *(signed char *)0xC30985A, t1 == 6)) {
            (((struct o14_uchar *)(a4))->v) = 0x4;
            (((struct o0_uchar *)0xC30EF5C)->v) = 0x0;
        }
        break;
    case 3:
        if (((*(signed char *)0xC309859) == 2) && (t0 = *(signed char *)0xC30985A, t0 == 6)) {
            (((struct o14_uchar *)(a4))->v) = 0x4;
            (((struct o0_uchar *)0xC30EF5C)->v) = 0x0;
        }
        break;
    case 4:
        u0 = (((struct o2C_float *)(a4))->v);
        (((struct o2C_float *)(a4))->v) = (u0 - 6.0f);
        if (!((u0 - 6.0f) > -180.0f)) {
            (((struct o2C_float *)(a4))->v) = -180.0f;
            (((struct o0_uchar *)0xC30EF5C)->v) = 0x0;
            (((struct o14_uchar *)(a4))->v) = 0x0;
        }
        if ((*(signed char *)0xC309859) == 3) {
            (((struct oA8_uchar *)(a4))->v) = 0x1;
            (((struct o14_uchar *)(a4))->v) = 0x2;
        }
        break;
    }
    (((struct o4_float *)0xC30EF5C)->v) = ((((struct o2C_float *)(a4))->v));
    return 0x2C;
}
