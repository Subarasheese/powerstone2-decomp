/* INLINE-ASM: get_stack_pointer, the original machine code: it returns the stack pointer as it is at the call (r15 into r0, in the
   delay slot of its rts), which C has no form for */
#pragma inline_asm(get_stack_pointer)
int get_stack_pointer(void)
{
    rts
    mov r15,r0
}
