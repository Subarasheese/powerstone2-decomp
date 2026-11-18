/* Straight-line functions with calls and guards (batch gen_bm): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[4]; } Stk4;
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
int buFbrSleepFiber(int);
int copyBytes(int, int, int);
int kmSetFogTableColor(Stk4 s);
int thunk_FUN_0c2c2156(int a4, int a5, int a6);
int FUN_0c2f0450(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);

int kmSetFogTableColor(Stk4 s)
{
    (((struct o8_uint *)0xC8D097C)->v) = s.w[0];
    (((struct o0_uint *)0xC8D097C)->v) = (((((struct o0_int *)0xC8D097C)->v)) | 0x1);
    return 0x0;
}

int thunk_FUN_0c2c2156(int a4, int a5, int a6)
{
    return copyBytes(a4, a5, a6);
}

int FUN_0c2f0450(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11)
{
    return buFbrSleepFiber(0x1);
}
