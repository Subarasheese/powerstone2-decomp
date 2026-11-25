/* Straight-line functions with calls and guards (batch gen_amn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c17a550(int);
int FUN_0c2b1b16(int);
int FUN_0c2b1b1c(void);
int dbg_printf(int, ...);
int nlLocate(int, int);
int syRtcGetDate(int);
int FUN_0c101b30(void);

int FUN_0c101b30(void)
{
    register int t0;
    register int t1;

    nlLocate(0x7, 0xA);
    t0 = FUN_0c2b1b1c();
    t1 = 0xFFFF0000;
    if (t0 == 0) {
        t1 = 0xFFFFAAAA;
    }
    FUN_0c17a550(t1);
    t0 = *(int *)0xC290814;
    switch (t0) {
    case 0:
        *(unsigned int *)0xC290814 = ((*(int *)0xC290814) + 0x1);
        FUN_0c2b1b16(0x0);
        break;
    case 1:
        t0 = FUN_0c2b1b1c();
        if (t0 == 0) {
            *(unsigned int *)0xC290814 = ((*(int *)0xC290814) + 0x1);
            syRtcGetDate(0xC472CB4);
        }
        break;
    case 2:
        *(unsigned int *)0xC290814 = 0x0;
        FUN_0c2b1b16(0x1);
        break;
    }
    dbg_printf(0xC1FC038, (unsigned short)(*(short *)0xC472CB4));
    dbg_printf(0xC1FC038, (unsigned char)(*(signed char *)0xC472CB6));
    dbg_printf(0xC1FC03C, (unsigned char)(*(signed char *)0xC472CB7));
    dbg_printf(0xC1FC040, (unsigned char)(*(signed char *)0xC472CB8));
    dbg_printf(0xC1FC040, (unsigned char)(*(signed char *)0xC472CB9));
    return (dbg_printf(0xC1FC044, (unsigned char)(*(signed char *)0xC472CBA)));
}
