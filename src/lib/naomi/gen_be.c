/* Straight-line functions with calls and guards (batch gen_be): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c19d3a0(int);
int FUN_0c19e882(int, int, int, int);
int FUN_0c19ebfc(int a4, int a5, int a6, int a7);

int FUN_0c19ebfc(int a4, int a5, int a6, int a7)
{
    register int t1;

    t1 = *(int *)((a4 + 0x30));
    if ((int)(unsigned char)(*(signed char *)((a4 + 0x3))) > 0) {
        *(unsigned int *)((t1 + 0x8)) = 0xC20AC28;
        return FUN_0c19d3a0(a4);
    }
    *(unsigned int *)((t1 + 0x8)) = 0xC20AC38;
    FUN_0c19e882(a4, a5, a6, a7);
    *(unsigned short *)((a4 + 0x8)) = 0x1;
    return 0x1;
}
