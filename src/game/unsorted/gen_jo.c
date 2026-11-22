/* Straight-line functions with calls and guards (batch gen_jo): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o16_uchar { char p[0x16]; unsigned char v; };
struct o2C_float { char p[0x2C]; float v; };
struct o3774_int { char p[0x3774]; int v; };
int FUN_0c085d0c(int, int, int, int);
int FUN_0c15c344(int, int, int, int, float);
int FUN_0c079650(int a4, int a5, int a6, int a7, float f4);

int FUN_0c079650(int a4, int a5, int a6, int a7, float f4)
{
    int t1;
    register int t2;

    if ((((((struct o3774_int *)(a4))->v)) != 0) && (t1 = (((struct o3774_int *)(a4))->v), t2 = *(signed char *)((0x41C + t1)), (unsigned char)t2 == 55)) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)((((((struct o3774_int *)(a4))->v)) + 0x28)); }
        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - 5.0f);
        *(unsigned short *)((a4 + 0x1C)) = 0x1E;
        FUN_0c15c344(a4, (a4 + 0x28), 0x7, a7, f4);
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
        return 0x16;
    }
    return FUN_0c085d0c(a4, a5, a6, a7);
}
