/* Straight-line functions with calls and guards (batch gen_cs): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
int FUN_0c105cec(int a4);
void FUN_0c106508(void);

int FUN_0c105cec(int a4)
{
    (((struct o14_uchar *)(a4))->v) = 0x63;
    return 0x14;
}

void FUN_0c106508(void)
{
    *(unsigned char *)0xC541F45 = 0x2;
}
