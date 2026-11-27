/* Straight-line functions with calls and guards (batch gen_akg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o4_short { char p[0x4]; short v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
int FUN_0c01e9e4(void);
int FUN_0c0573cc(int, int, int);
int FUN_0c02bd48(void);

int FUN_0c02bd48(void)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)0xC30EF15;
    t1 = (unsigned char)t0;
    if ((unsigned char)t0 == 0) {
        (((struct o1_uchar *)0xC30EF14)->v) = ((*(signed char *)0xC30EF15) + 0x1);
        t2 = FUN_0c0573cc(0xFF000000, 0x0, 0x14);
        (((struct o4_ushort *)0xC30EF14)->v) = 0x14;
        t1 = t2;
    }
    if (((unsigned char)t0 == 0) || ((unsigned char)t0 == 1)) {
        t2 = (((struct o4_short *)0xC30EF14)->v);
        (((struct o4_ushort *)0xC30EF14)->v) = (t2 - 1);
        if ((int)(short)(t2 - 1) <= 0) {
            (((struct o3_uchar *)0xC30EF14)->v) = 0x0;
            (((struct o2_uchar *)0xC30EF14)->v) = 0x0;
            (((struct o1_uchar *)0xC30EF14)->v) = 0x0;
            (((struct o0_uchar *)0xC30EF14)->v) = 0x0;
            return FUN_0c01e9e4();
        }
        return t1;
    } else {
        return (unsigned char)t0;
    }
}
