/* Straight-line functions with calls and guards (batch gen_adi): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17C_float { char p[0x17C]; float v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o376C_int { char p[0x376C]; int v; };
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c085eac(int, int);
int FUN_0c0c224c(int, int);
int FUN_0c08b088(int a4);

int FUN_0c08b088(int a4)
{
    int stk[6];
    register int R1004;
    register int R1008;
    register int R1012;
    register int R1016;
    register int R1020;
    register int R1024;
    register int R1028;

    R1004 = *(int *)((int)stk + 0);
    R1008 = *(int *)((int)stk + 4);
    R1012 = *(int *)((int)stk + 8);
    R1016 = *(int *)((int)stk + 12);
    R1020 = *(int *)((int)stk + 16);
    R1024 = *(int *)((int)stk + 20);
    R1028 = *(int *)((int)stk + 24);

    if (((((struct o17C_float *)(a4))->v)) > 0.0f) {
        R1012 = 0x6C;
        R1008 = 0x3;
        R1004 = 0xFFFFFFFF;
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0x6C, 0xFFFFFFFF, 0x3, 0x6C);
        FUN_0c0c224c(a4, ((((struct o376C_int *)(a4))->v)));
        FUN_0c085eac(a4, 0x3);
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
        (((struct o16_uchar *)(a4))->v) = 0x0;
    } else {
        R1012 = 0x6E;
        R1008 = 0x3;
        R1004 = 0xFFFFFFFF;
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0x6E, 0xFFFFFFFF, 0x3, 0x6E);
        FUN_0c0c224c(a4, ((((struct o376C_int *)(a4))->v)));
        FUN_0c085eac(a4, 0x3);
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
        (((struct o16_uchar *)(a4))->v) = 0x1;
    }
    (((struct o20_ushort *)(a4))->v) = 0x0;
    return 0x20;
}
