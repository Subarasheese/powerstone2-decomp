/* Hand-written: gdFsInitOvl installs the overlay table at 0C2FE774 (its address into 0C3036F0) and calls the table's entry at +12
   with its own r4-r7 passed on as they came and the table's address as a fifth argument, on the stack. */
int gdFsInitOvl(int a4, int a5, int a6, int a7)
{
    *(int *)0xC3036F0 = 0xC2FE774;
    return ((int (*)(int, int, int, int, int))(*(int *)(0xC2FE774 + 12)))(a4, a5, a6, a7, 0xC2FE774);
}
