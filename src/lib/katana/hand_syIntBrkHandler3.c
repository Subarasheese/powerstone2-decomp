/* Hand-written: syIntBrkHandler3, an exception handler. It saves the registers it uses, calls the debug handler at AC004000 with
   0x200 and 3, restores them and returns with rte: what SHC writes for a function declared with #pragma interrupt. */
#pragma interrupt(syIntBrkHandler3)
void syIntBrkHandler3(void)
{
    ((void (*)(int, int))0xAC004000)(0x200, 3);
}
