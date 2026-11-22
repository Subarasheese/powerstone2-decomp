/* Straight-line functions with calls and guards (batch gen_at): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct oD4_uint { char p[0xD4]; unsigned int v; };
int FUN_0c191de2(void);
int FUN_0c19d9ac(int);
int FUN_0c19e64a(int a4);
int thunk_thunk_FUN_0c191de2(void);
int thunk_FUN_0c191de2(void);

int FUN_0c19e64a(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x2));
    if (((unsigned char)t0 & 48) == 0) {
        *(unsigned char *)((a4 + 0x0)) = 0x3;
        (((struct oD4_uint *)(a4))->v) = (thunk_thunk_FUN_0c191de2());
        return FUN_0c19d9ac((a4 + 0x6C));
    }
    return (unsigned char)t0;
}

int thunk_thunk_FUN_0c191de2(void)
{
    return thunk_FUN_0c191de2();
}

int thunk_FUN_0c191de2(void)
{
    return FUN_0c191de2();
}
