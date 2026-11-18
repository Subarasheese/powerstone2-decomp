/* Straight-line functions with calls and guards (batch gen_ar): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c2ee770(int, int);
int FUN_0c2ee948(void);
int FUN_0c2f426c(void);
int FUN_0c2f4790(void);
int FUN_0c2f4812(void);
int FUN_0c2f5ac0(void);
int FUN_0c2f3f1c(void);

int FUN_0c2f3f1c(void)
{
    register int t0;
    register int t1;
    register int t2;
    int t4;

    for (;;) {
        t0 = FUN_0c2ee770(0xC8DFFF8, 0xC8DFFFC);
        if ((unsigned char)t0 == 0) {
            break;
        }
    }
    t1 = (unsigned char)t0;
    for (;;) {
        if (((*(short *)0xC8DFFFC) != 0) && (t4 = *(signed char *)0xC8DFFAC, t2 = t4, t2 == 0)) {
            t1 = (FUN_0c2f4812());
            *(unsigned char *)0xC8DFF7A = t1;
            t1 = (FUN_0c2f426c());
            t1 = (FUN_0c2f5ac0());
            t1 = (FUN_0c2f4790());
            if ((*(signed char *)0xC8DA0F8) == 0) {
                t1 = (FUN_0c2f5ac0());
            }
            t1 = (FUN_0c2ee948());
            *(unsigned short *)0xC8DFFFC = 0x0;
            t2 = (*(signed char *)0xC8DA0F8);
            if (t2 == 0) {
                for (;;) {
                    t1 = (FUN_0c2ee770(0xC8DFFF8, 0xC8DFFFC));
                    t1 = (unsigned char)t1;
                    if (t1 == 0) {
                        break;
                    }
                }
            }
            continue;
        }
        break;
    }
    return t1;
}
