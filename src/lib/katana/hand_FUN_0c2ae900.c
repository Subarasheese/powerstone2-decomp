/* Hand-written: FUN_0c2ae900, the start of the program. It reads a byte through the pointer at 0C2FE644, fills the words
   8C00C000-8C00F3FF with 0x41474553, runs _INITSCT (the section initialisation), FUN_0c2ae928 and the game's FUN_0c02d2a8, and ends
   by branching to FUN_0c2ae930 (the original restores pr first and jumps, so what returns is that function). */
void _INITSCT(void);
void FUN_0c2ae928(void);
void FUN_0c02d2a8(void);
void FUN_0c2ae930(void);

void FUN_0c2ae900(void)
{
    register volatile char *src;
    register volatile int *p;
    register char c;

    src = *(volatile char **)0xC2FE644;
    c = *src;
    p = (volatile int *)0x8C00C000;
    do {
        *p = 0x41474553;
        p++;
    } while ((unsigned int)p < 0x8C00F400);
    _INITSCT();
    FUN_0c2ae928();
    FUN_0c02d2a8();
    FUN_0c2ae930();
}
