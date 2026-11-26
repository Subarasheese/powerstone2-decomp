/* Straight-line functions with calls and guards (batch gen_aju): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int nlRand(void);
int FUN_0c11fbec(int a4);

int FUN_0c11fbec(int a4)
{
    register int t0;
    register int t1;
    register int t3;
    register int t4;

    t0 = 0x0;
    if ((*(signed char *)0xC542264) != 0) {
        t1 = *(int *)0xC475204;
        t0 = 0x7;
        if ((unsigned int)t1 <= (unsigned int)0x7080) {
        } else {
            t3 = 0x6;
            if ((unsigned int)t1 <= (unsigned int)0x7E90) {
            } else {
                t4 = 0x5;
                if ((unsigned int)t1 <= (unsigned int)0x8CA0) {
                } else {
                    t4 = 0x4;
                    if ((unsigned int)t1 <= (unsigned int)0x9AB0) {
                    } else {
                        t4 = 0x3;
                        if ((unsigned int)t1 <= (unsigned int)0xA8C0) {
                        } else {
                            t4 = 0x2;
                            if ((unsigned int)t1 <= (unsigned int)0xB6D0) {
                            } else {
                                t4 = 0x0;
                                if ((unsigned int)t1 <= (unsigned int)0xC4E0) {
                                    t4 = 0x1;
                                }
                            }
                        }
                    }
                }
                t3 = t4;
            }
            t0 = t3;
        }
        t1 = *(signed char *)((((0xC1C71E0 + (((*(signed char *)0xC5429AD) << 2) << 1)) + t0) + 0x0));
        t0 = 0x0;
        if ((int)(unsigned char)t1 > 0) {
            t3 = nlRand();
            t4 = (t3 % 0x8);
            t0 = ((unsigned char)(*(signed char *)(((0xC1C7220 + (((unsigned char)t1 << 2) << 1)) + t4))) + 0x1);
        }
    }
    return t0;
}
