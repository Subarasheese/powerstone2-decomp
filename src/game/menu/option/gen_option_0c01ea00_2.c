/* game/menu/option: functions 0C01EA00-0C01FA4E, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c01ea32(void);
int FUN_0c1830c4(void);
int thunk_FUN_0c191d46(void);
int FUN_0c184c36(void);
int FUN_0c184c48(int);
int FUN_0c18520c(void);
int FUN_0c01f6f8(void);

int FUN_0c01f6f8(void)
{
    register int t0;
    register int t1;

    *(unsigned int *)0xC83C6C0 = 0x1;
    t0 = *(signed char *)0xC30985B;
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                t1 = 0x0;
                if (t0 != 3) {
                } else {
                    FUN_0c18520c();
                    FUN_0c01ea32();
                    thunk_FUN_0c191d46();
                    FUN_0c1830c4();
                    *(unsigned char *)0xC3054C5 = 0x0;
                    *(unsigned char *)0xC30985B = 0x0;
                    t1 = 0x1;
                }
                t0 = t1;
            } else {
                FUN_0c184c48(0xC3050F4);
                if ((*(short *)0xC3050FC) == 0) {
                    *(unsigned char *)0xC30985B = ((*(signed char *)0xC30985B) + 0x1);
                } else {
                    *(unsigned char *)0xC30985B = 0x1;
                    *(unsigned short *)0xC30540C = 0x64;
                }
                t0 = 0x0;
            }
            t1 = t0;
        } else {
            t0 = *(short *)0xC30540C;
            *(unsigned short *)0xC30540C = (t0 - 1);
            if ((int)(short)(t0 - 1) < 0) {
                *(unsigned char *)0xC30985B = ((*(signed char *)0xC30985B) + 0x1);
            }
            t1 = 0x0;
        }
        t0 = t1;
    } else {
        *(volatile int *)0xC305068;
        FUN_0c184c36();
        *(unsigned short *)0xC30540C = 0x64;
        *(unsigned char *)0xC30985B = ((*(signed char *)0xC30985B) + 0x1);
        t0 = 0x0;
    }
    return t0;
}
