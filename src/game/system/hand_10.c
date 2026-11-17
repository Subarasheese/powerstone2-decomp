/* Hand-written C: write back the operand cache over a buffer (0C02D0E8, listed as FUN_0c0100b0), before the CPU's data is
   handed to DMA. The buffer start is rounded down to a cache line (32 bytes) and a5 bytes from there are written back, one
   line at a time. C has no form for the cache instruction, so it is an inline routine of one ocbp. */

#pragma inline_asm(cache_ocbp)
static void cache_ocbp(int line)
{
    OCBP @R4
}

int FUN_0c0100b0(int a4, int a5)
{
    int p = a4 & ~31;
    unsigned int n = (unsigned int)a5 >> 5;

    do {
        cache_ocbp(p);
        p += 32;
    } while (--n);
    return p;
}
