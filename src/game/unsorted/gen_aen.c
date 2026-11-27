/* Straight-line functions with calls and guards (batch gen_aen): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12E_short { char p[0x12E]; short v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o3830_ushort { char p[0x3830]; unsigned short v; };
struct o42C_short { char p[0x42C]; short v; };
int FUN_0c037bf6(int, int);
int FUN_0c08d170(int);
int FUN_0c124da6(int, int);
int FUN_0c125254(int, int);
int math_vec3_accumulate(int, int);
int FUN_0c08d658(int a4, int a5);

int FUN_0c08d658(int a4, int a5)
{

    register int R1;
    register int R2;
    register int R3;
    register int R14;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    v0_0 = a4;
    v0_2 = a5;
    v0_1 = R14;
    (((struct o3830_ushort *)(v0_0))->v) = (((((struct o12E_short *)(v0_0))->v)) & 0xFFFFFFF0);
    (((struct o374B_uchar *)(v0_0))->v) = 0x1;
    FUN_0c037bf6(v0_0, v0_2);
    v0_2 = (*(short *)((v0_0 + 0x1C))) == 0;
    R14 = (v0_0);
    if (v0_2) goto L_C08D682;
    *(unsigned short *)((R14 + 0x1C)) = ((*(short *)((R14 + 0x1C))) - 1);
    L_C08D682:;
    v0_2 = *(short *)((R14 + 0x1C));
    v0_1 = (v0_2);
    v0_0 = (v0_2);
    if (((short)v0_2 == 0)) goto L_C08D6A0;
    if (((int)(short)v0_0 >= (int)0x32)) goto L_C08D6D8;
    v0_0 = ((unsigned short)((((struct o42C_short *)(R14))->v)) & 0x200) != 0;
    v0_1 = (0x42C);
    if (v0_0) goto L_C08D6D8;
    L_C08D6A0:;
    FUN_0c08d170(R14);
    FUN_0c124da6(R14, 0x0);
    FUN_0c125254(R14, 0x2);
    *(unsigned short *)((R14 + 0x1C)) = 0x19;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((0x37DC + R14)) = *(struct mv3 *)((R14 + 0x28)); }
    math_vec3_accumulate((R14 + 0x28), (R14 + 0x4C));
    (((struct o15_uchar *)(R14))->v) = 0x2;
    v0_1 = (0x15);
    L_C08D6D8:;
    return v0_1;
}
