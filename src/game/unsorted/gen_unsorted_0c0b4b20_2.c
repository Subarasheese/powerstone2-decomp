/* game/unsorted: functions 0C0B4B20-0C0B5C28, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o3774_uint { char p[0x3774]; unsigned int v; };
struct o414_int { char p[0x414]; int v; };
struct o418_int { char p[0x418]; int v; };
struct o418_uint { char p[0x418]; unsigned int v; };
int FUN_0c073448(int, int);
int thunk_FUN_0c0385e0(int);
int FUN_0c0b4b20(void);
int FUN_0c0b4b7a(int, int, float);
int FUN_0c0b5398(int);
int FUN_0c0b562a(int, int, int, int);
int FUN_0c0b6a18(int);
int FUN_0c0b711a(int);
float FUN_0c0bb2e0(int, int, float);
int FUN_0c14c1b4(int, int, int, int, int);
int FUN_0c187798(int, int, int);
int FUN_0c0b4f06(int a4, int a5);
int FUN_0c0b551e(int a4);
int FUN_0c0b5b8e(int a4, int a5, int a6);

int FUN_0c0b4f06(int a4, int a5)
{
    register float t23;
    register int t9;

    if ((*(signed char *)((a4 + 0x134))) == 0) {
        if ((*(signed char *)((a4 + 0x0))) == 0) {
            t9 = ((*(int *)((0xC25ACBC + ((*(signed char *)((0xC53249A + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938)))) << 2)))) + 0x14);
        } else {
            t9 = ((*(int *)0xC25AD1C) + 0xA0);
        }
        (((struct o418_uint *)(a5))->v) = t9;
    } else {
        (((struct o418_uint *)(a5))->v) = ((((struct o414_int *)(a4))->v));
    }
    (((struct o3774_uint *)(a5))->v) = a4;
    FUN_0c073448(a5, 0x0);
    t23 = FUN_0c0bb2e0(a5, (*(signed char *)((a4 + 0x1))), (float)(*(short *)((((((struct o418_int *)(a5))->v)) + 0x2))));
    return FUN_0c0b4b7a(a5, 0x0, t23);
}



