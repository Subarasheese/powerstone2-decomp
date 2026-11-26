/* Straight-line functions with calls and guards (batch gen_abk): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
int FUN_0c05a080(int, int);
int FUN_0c104cc8(int);
int FUN_0c10b740(int);
int FUN_0c117944(int, ...);
int FUN_0c117d54(void);
int FUN_0c117e76(void);
int FUN_0c11e20c(int);
int nlRand(void);
int FUN_0c10bbb8(int a4);

int FUN_0c10bbb8(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 == 0) {
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        (((struct o17_uchar *)(a4))->v) = 0x0;
        (((struct o20_ushort *)(a4))->v) = 0x0;
    }
    if ((t0 == 0) || (t0 == 1)) {
        t1 = *(signed char *)((a4 + 0x17));
        if (t1 != 0) {
            if (t1 == 1) {
            } else {
                t2 = t1;
                if (t1 != 2) {
                } else {
                    t1 = FUN_0c104cc8(0x3FCF);
                    t2 = t1;
                    if (t1 != 0) {
                        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                        (((struct o17_uchar *)(a4))->v) = 0x0;
                        t2 = 0x17;
                    }
                }
                return t2;
            }
        } else {
            t1 = *(short *)((a4 + 0x1E));
            if ((unsigned int)(t1 - 0xA0) < (unsigned int)0x16) {
                switch (((t1 - 0xA0) << 1)) {
                    case 0:
                    case 2:
                    case 4:
                    case 6:
                    case 8:
                    case 10:
                    case 12:
                    case 14:
                    case 16:
                    case 18:
                    {
                        return FUN_0c10b740(a4);
                    }
                    case 20:
                    {
                        t1 = (int)((int)(nlRand()) % (int)0x3);
                        FUN_0c117944((t1 + 0x82));
                        t1 = 0x98;
                    }
                        break;
                    case 22:
                    {
                        t2 = (int)((int)(nlRand()) % (int)0x3);
                        FUN_0c117944((t2 + 0x82));
                        t1 = 0x96;
                    }
                        break;
                    case 24:
                    {
                        t2 = (int)((int)(nlRand()) % (int)0x3);
                        FUN_0c117944((t2 + 0x82));
                        t1 = 0x97;
                    }
                        break;
                    default:
                    {
                        return FUN_0c10b740(a4);
                    }
                }
                (((struct o20_ushort *)(a4))->v) = t1;
            } else {
                t1 = (int)((int)(nlRand()) % (int)0x3);
                FUN_0c117944((t1 + 0x82));
                (((struct o20_ushort *)(a4))->v) = 0x9C;
            }
            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
            return 0x17;
        }
    } else if (t0 == 2) {
        t1 = *(signed char *)((a4 + 0x17));
        if (t1 != 0) {
            if (t1 != 1) {
                if (t1 != 2) {
                    return t1;
                }
                t1 = FUN_0c104cc8(0x3FCF);
                if (t1 != 0) {
                    FUN_0c11e20c(((((struct o20_short *)(a4))->v)));
                    return FUN_0c10b740(a4);
                }
                return t1;
            }
        } else {
            FUN_0c117944(0x85, ((*(int *)(((((((struct o20_short *)(a4))->v)) << 2) + 0xC29DDD0)))));
            FUN_0c05a080(0x1E, 0x0);
            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
            return 0x17;
        }
    } else {
        return t0;
    }
    t0 = FUN_0c117d54();
    t1 = t0;
    if ((int)t0 < 0) {
        FUN_0c117e76();
        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
        t1 = 0x17;
    }
    return t1;
}
