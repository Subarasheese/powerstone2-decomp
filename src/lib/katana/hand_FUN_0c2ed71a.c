/* INLINE-ASM: FUN_0c2ed71a, the original machine code: it returns the stack pointer as it is at the call (r15 into r0, in the
   delay slot of its rts), which C has no form for */
#pragma inline_asm(FUN_0c2ed71a)
int FUN_0c2ed71a(void)
{
    rts
    mov r15,r0
}
