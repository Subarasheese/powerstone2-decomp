/* Straight-line functions with calls and guards (batch gen_aef): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0c3258(int a4, int a5);

int FUN_0c0c3258(int a4, int a5)
{
    int stk[1];
    register int t3;
    register int t4;
    register int t12;
    int t2;
    int t11;

    if (((*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((a5 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0x0))) == 0) && (t2 = *(signed char *)((a5 + 0x41D)), t2 == 8)) {
        t3 = *(signed char *)((a5 + 0x41C));
        *(unsigned int *)(((int)stk + 0)) = (unsigned char)t3;
        if ((unsigned char)t3 == 0xC3) {
            t4 = *(signed char *)((a5 + 0x424));
            if (((*(short *)((((*(signed char *)(((((t4 << 2) + t4) << 1) + 0xC278844))) << 1) + 0xC278D18))) & ((int)0x1 << (int)(*(signed char *)((a4 + 0x2))))) == 0) {
            } else {
                return 0x1;
            }
        }
        if (((*(int *)(((int)stk + 0))) == 0xC3) && (t11 = *(signed char *)((a4 + 0x371C)), t11 != 0)) {
            return 0x1;
        }
        t12 = *(signed char *)((a5 + 0x41C));
        *(unsigned char *)(((int)stk + 0)) = t12;
        if ((unsigned char)t12 != 0xC3) {
            if (((*(short *)((((*(signed char *)(((0xC2738B8 + ((unsigned short)(unsigned char)(*(signed char *)(((int)stk + 0))) * (unsigned short)0x34)) + 0x14))) << 1) + 0xC278D18))) & ((int)0x1 << (int)(*(signed char *)((a4 + 0x2))))) != 0) {
                return 0x1;
            }
            return 0x0;
        }
        return 0x0;
    }
    return 0x0;
}
