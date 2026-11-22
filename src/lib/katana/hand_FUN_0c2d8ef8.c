/* INLINE-ASM: FUN_0c2d8ef8, the original machine code: an exception entry. It calls the debug handler at AC004000 (0x200, 2) with
   pr, r0, r4 and r5 saved, then pushes r1, keeps r0 in a word of its own code (0C2D8F3C, addressed as such: the routine is in layout.txt's
   kept block, which stays at its address), copies INTEVT (FF000028) to 0C2D9284 and jumps
   to the common interrupt entry FUN_0c2d8f78 with r0 back: registers kept across, which C has no form for */
extern void FUN_0c2d8f78(void);
#pragma inline_asm(FUN_0c2d8ef8)
void FUN_0c2d8ef8(void)
{
    .IMPORT _FUN_0c2d8f78
    sts.l pr,@-r15
    mov.l r0,@-r15
    mov.l r4,@-r15
    mov.l r5,@-r15
    mov.l PN_00000200,r4
    mov.l PN_ac004000,r0
    mov.l PN_00000002,r5
    jsr @r0
    nop
    mov.l @r15+,r5
    mov.l @r15+,r4
    mov.l @r15+,r0
    lds.l @r15+,pr
    mov.l r1,@-r15
    mov r0,r1
    mov.l PN_0c2d8f3c,r0
    mov.l r1,@r0
    mov #-1,r1
    shll16 r1
    shll8 r1
    add #40,r1
    mov.l @r1,r1
    mov.l PN_0c2d9284,r0
    mov.l r1,@r0
    mov.l PA_FUN_0c2d8f78,r1
    mov.l PN_0c2d8f3c,r0
    jmp @r1
    mov.l @r0,r0
    .ALIGN 4
PN_00000200:
    .DATA.L H'00000200
PN_00000002:
    .DATA.L H'00000002
PN_0c2d9284:
    .DATA.L H'0C2D9284
PN_0c2d8f3c:
    .DATA.L H'0C2D8F3C
PN_ac004000:
    .DATA.L H'AC004000
PA_FUN_0c2d8f78:
    .DATA.L _FUN_0c2d8f78
}
