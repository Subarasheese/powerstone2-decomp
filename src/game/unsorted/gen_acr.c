/* Straight-line functions with calls and guards (batch gen_acr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c104cc8(int a4);

int FUN_0c104cc8(int a4)
{
    int t1;
    register int t2;
    register int t3;
    register int t22;
    int t13;
    register int t14;
    register int t15;
    register int t0;
    register int t12;

    if ((unsigned int)0xC542854 < (unsigned int)0xC5428F4) {
        t1 = a4;
        t2 = 0xC542854;
        t3 = 0xC542854;
        for (;;) {
            if ((*(signed char *)((t2 + 0x4))) == 2) {
                t0 = t1;
                if ((t0 & 0x8) != 0) {
                    t1 = (t1 | 0x80);
                }
                t0 = t1;
                if ((t0 & 0x4) != 0) {
                    t1 = (t1 | 0x2);
                }
            }
            if (((unsigned short)(*(short *)((t3 + 0x14))) & t1) == 0) {
                t2 = (t2 + 0x28);
                t3 = (t3 + 0x28);
                if ((unsigned int)t2 >= (unsigned int)0xC5428F4) {
                    break;
                }
                continue;
            }
            return 0x1;
        }
        t13 = t1;
    } else {
        t13 = a4;
    }
    t22 = 0x0;
    if ((unsigned int)0xC542854 < (unsigned int)0xC5428F4) {
        t14 = 0xC542854;
        t15 = 0xC473038;
        for (;;) {
            if ((*(signed char *)((t14 + 0x4))) == 2) {
                t12 = t13;
                if ((t12 & 0x8) != 0) {
                    t13 = (t13 | 0x80);
                }
                t12 = t13;
                if ((t12 & 0x4) != 0) {
                    t13 = (t13 | 0x2);
                }
            }
            t12 = (*(int *)((t15 + 0x0)));
            if ((t12 & t13) != 0) {
                break;
            }
            t14 = (t14 + 0x28);
            t15 = (t15 + 0x4);
            if ((unsigned int)t14 >= (unsigned int)0xC5428F4) {
                return 0x0;
            }
        }
        t22 = 0x1;
    }
    return t22;
}
