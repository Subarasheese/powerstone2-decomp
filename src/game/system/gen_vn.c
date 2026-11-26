/* Straight-line functions with calls and guards (batch gen_vn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o4_short { char p[0x4]; short v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
int FUN_0c010448(void);
int FUN_0c013b9c(int);
int FUN_0c018e74(int);
int FUN_0c01cb7c(void);
int FUN_0c01d094(void);
int FUN_0c01d262(void);
int FUN_0c01d26e(int);
int FUN_0c01d27a(void);
int FUN_0c01d294(int);
int FUN_0c01e9e4(void);
int FUN_0c0573c0(int, int, int);
int memset(int, int, int);
int FUN_0c0116a0(void);

int FUN_0c0116a0(void)
{
    register int t0;
    register int t2;
    register int t3;

    t0 = *(signed char *)0xC30EF6A;
    if ((unsigned char)t0 != 0) {
    } else {
        (((struct o2_uchar *)0xC30EF68)->v) = ((*(signed char *)0xC30EF6A) + 0x1);
        FUN_0c01e9e4();
        memset(0xC30EF7C, 0x0, 0x20);
        FUN_0c01d262();
    }
    if (((unsigned char)t0 == 0) || ((unsigned char)t0 == 1)) {
        t3 = FUN_0c013b9c(0xC30EF7C);
        if ((short)t3 != 1) {
            t2 = (short)t3;
            if ((short)t3 != 2) {
            } else {
                (((struct o0_uchar *)0xC30EF68)->v) = 0x0;
                (((struct o2_uchar *)0xC30EF68)->v) = 0x0;
                t2 = 0x0;
            }
            t3 = t2;
        } else {
            t2 = *(signed char *)0xC30EF6A;
            (((struct o2_uchar *)0xC30EF68)->v) = (t2 + 0x1);
            t3 = (t2 + 0x1);
        }
        return t3;
    } else {
        if ((unsigned char)t0 != 2) {
            t3 = 0xC30EF6A;
        } else {
            FUN_0c01e9e4();
            FUN_0c01cb7c();
            FUN_0c0573c0(0xFF000000, 0x0, 0x14);
            (((struct o4_ushort *)0xC30EF68)->v) = 0x8C;
            FUN_0c018e74(0x22);
            (((struct o2_uchar *)0xC30EF68)->v) = ((*(signed char *)0xC30EF6A) + 0x1);
            FUN_0c01d094();
            FUN_0c01d27a();
        }
        if (((unsigned char)t0 == 2) || ((unsigned char)t0 == 3)) {
            t2 = (((struct o4_short *)0xC30EF68)->v);
            (((struct o4_ushort *)0xC30EF68)->v) = (t2 - 1);
            if ((int)(short)(t2 - 1) <= 0) {
                (((struct o2_uchar *)0xC30EF68)->v) = ((*(signed char *)0xC30EF6A) + 0x1);
            } else {
                return (short)(t2 - 1);
            }
        } else {
            if ((unsigned char)t0 != 4) {
                return (unsigned char)t0;
            }
            t3 = 0xC30EF6A;
        }
        t0 = FUN_0c01d294(t3);
        if (t0 != 0) {
            if (t0 == 1) {
                (((struct o0_uchar *)0xC30EF68)->v) = 0x0;
                (((struct o2_uchar *)0xC30EF68)->v) = 0x0;
                return 0x0;
            }
            if (t0 == -3) {
                FUN_0c01d26e(t0);
                return FUN_0c010448();
            }
            return t0;
        }
        return t0;
    }
}
