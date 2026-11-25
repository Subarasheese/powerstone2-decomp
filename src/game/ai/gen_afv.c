/* Straight-line functions with calls and guards (batch gen_afv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o20_uchar { char p[0x20]; unsigned char v; };
struct o21_uchar { char p[0x21]; unsigned char v; };
struct o34_ushort { char p[0x34]; unsigned short v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_ushort { char p[0x7C]; unsigned short v; };
struct o7E_ushort { char p[0x7E]; unsigned short v; };
struct o80_ushort { char p[0x80]; unsigned short v; };
int memset(int, int, int);
int FUN_0c0bbf8e(void);

int FUN_0c0bbf8e(void)
{

    register int R0;
    register int R1;
    register int R2;
    register int R3;
    register int R4;
    register int R5;
    register int R6;
    register int R8;
    register int R9;
    register int R10;
    register int R11;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    v0_0 = R11;
    v0_1 = R10;
    v0_2 = R9;
    v0_3 = R8;
    *(unsigned char *)0xC472462 = 0x0;
    R10 = (0x258);
    R11 = (0x1);
    v0_0 = (0x0);
    v0_1 = (0xC471ACC);
    v0_2 = (0xC472462);
    R8 = (0x264);
    R9 = (0x4);
    L_C0BC0BC:;
    v0_3 = (int)(unsigned char)(*(signed char *)((v0_2 + 0x0))) >= (int)R9;
    if (v0_3) goto L_C0BC0C8;
    memset((((unsigned short)(unsigned char)(*(signed char *)((v0_2 + 0x0))) * (unsigned short)0x264) + v0_1), 0x0, R8);
    *(unsigned int *)(((((unsigned short)(unsigned char)(*(signed char *)((v0_2 + 0x0))) * (unsigned short)0x264) + v0_1) + 0x8)) = 0x0;
    *(unsigned short *)(((((unsigned short)(unsigned char)(*(signed char *)((v0_2 + 0x0))) * (unsigned short)0x264) + v0_1) + 0xC)) = v0_0;
    *(unsigned short *)(((((unsigned short)(unsigned char)(*(signed char *)((v0_2 + 0x0))) * (unsigned short)0x264) + v0_1) + 0x10)) = R10;
    (((struct o7C_ushort *)((((unsigned short)(unsigned char)(*(signed char *)((v0_2 + 0x0))) * (unsigned short)0x264) + v0_1)))->v) = v0_0;
    *(unsigned short *)(((((unsigned short)(unsigned char)(*(signed char *)((v0_2 + 0x0))) * (unsigned short)0x264) + v0_1) + 0x12)) = v0_0;
    *(unsigned char *)(((((unsigned short)(unsigned char)(*(signed char *)((v0_2 + 0x0))) * (unsigned short)0x264) + v0_1) + 0x0)) = v0_0;
    *(unsigned char *)(((((unsigned short)(unsigned char)(*(signed char *)((v0_2 + 0x0))) * (unsigned short)0x264) + v0_1) + 0x1)) = v0_0;
    *(unsigned char *)(((((unsigned short)(unsigned char)(*(signed char *)((v0_2 + 0x0))) * (unsigned short)0x264) + v0_1) + 0x2)) = v0_0;
    *(unsigned char *)(((((unsigned short)(unsigned char)(*(signed char *)((v0_2 + 0x0))) * (unsigned short)0x264) + v0_1) + 0x3)) = v0_0;
    (((struct o20_uchar *)((((unsigned short)(unsigned char)(*(signed char *)((v0_2 + 0x0))) * (unsigned short)0x264) + v0_1)))->v) = v0_0;
    (((struct o21_uchar *)((((unsigned short)(unsigned char)(*(signed char *)((v0_2 + 0x0))) * (unsigned short)0x264) + v0_1)))->v) = v0_0;
    *(unsigned char *)(((((unsigned short)(unsigned char)(*(signed char *)((v0_2 + 0x0))) * (unsigned short)0x264) + v0_1) + 0x4)) = v0_0;
    (((struct o34_ushort *)((((unsigned short)(unsigned char)(*(signed char *)((v0_2 + 0x0))) * (unsigned short)0x264) + v0_1)))->v) = v0_0;
    (((struct o7E_ushort *)((((unsigned short)(unsigned char)(*(signed char *)((v0_2 + 0x0))) * (unsigned short)0x264) + v0_1)))->v) = R11;
    (((struct o80_ushort *)((((unsigned short)(unsigned char)(*(signed char *)((v0_2 + 0x0))) * (unsigned short)0x264) + v0_1)))->v) = R11;
    (((struct o78_uint *)((((unsigned short)(unsigned char)(*(signed char *)((v0_2 + 0x0))) * (unsigned short)0x264) + v0_1)))->v) = (((unsigned short)(unsigned char)(*(signed char *)((v0_2 + 0x0))) * (unsigned short)0x3938) + 0xC532498);
    *(unsigned char *)((v0_2 + 0x0)) = ((*(signed char *)((v0_2 + 0x0))) + 0x1);
    R0 = (0x78);
    goto L_C0BC0BC;
    L_C0BC0C8:;
    *(unsigned int *)0xC472664 = v0_0;
    return R0;
}
