/* Straight-line functions with calls and guards (batch gen_aex): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
int FUN_0c012cb8(int);
int FUN_0c01e9e4(void);
int memset(int, int, int);
int FUN_0c011638(void);

int FUN_0c011638(void)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)0xC30EF6A;
    if ((unsigned char)t0 != 0) {
    } else {
        (((struct o3_uchar *)0xC30EF67)->v) = ((*(signed char *)0xC30EF6A) + 0x1);
        FUN_0c01e9e4();
        memset(0xC30EF7C, 0x0, 0x20);
    }
    t1 = (unsigned char)t0;
    if (((unsigned char)t0 == 0) || ((unsigned char)t0 == 1)) {
        t0 = FUN_0c012cb8(0xC30EF7C);
        if ((short)t0 != 1) {
            t2 = (short)t0;
            if ((short)t0 != 2) {
            } else {
                (((struct o1_uchar *)0xC30EF67)->v) = 0x0;
                (((struct o3_uchar *)0xC30EF67)->v) = 0x0;
                t2 = 0x0;
            }
            t0 = t2;
        } else {
            (((struct o0_uchar *)0xC30EF67)->v) = 0x1;
            (((struct o1_uchar *)0xC30EF67)->v) = 0x0;
            (((struct o3_uchar *)0xC30EF67)->v) = 0x0;
            (((struct o2_uchar *)0xC30EF67)->v) = 0x0;
            t0 = 0x0;
        }
        t1 = t0;
    }
    return t1;
}
