/* game/player: functions 0C07E3FC-0C07E6EA, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o131_uchar { char p[0x131]; unsigned char v; };
struct o134_uchar { char p[0x134]; unsigned char v; };
struct o136_uchar { char p[0x136]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o3760_int { char p[0x3760]; int v; };
struct o3760_uint { char p[0x3760]; unsigned int v; };
struct o3764_uint { char p[0x3764]; unsigned int v; };
struct o377C_int { char p[0x377C]; int v; };
struct o377C_uint { char p[0x377C]; unsigned int v; };
struct o3780_float { char p[0x3780]; float v; };
struct o3784_float { char p[0x3784]; float v; };
struct o414_uint { char p[0x414]; unsigned int v; };
int FUN_0c0b2478(int);
int FUN_0c0b4df6(int, int, int, int);
float math_signed_sqrt(float);
int FUN_0c187798(int, int);
int FUN_0c07e3fc(int a4, int a5);
int FUN_0c07e420(int a4, int a5);
int FUN_0c07e44c(int a4, int a5, int a6, int a7, float f4);

int FUN_0c07e3fc(int a4, int a5)
{
    (((struct o134_uchar *)(a4))->v) = a5;
    (((struct o414_uint *)(a4))->v) = (((((unsigned char)a5 << 2) + (unsigned char)a5) << 2) + (*(int *)0xC25AD1C));
    (((struct o136_uchar *)(a4))->v) = 0x0;
    (((struct o131_uchar *)(a4))->v) = 0x0;
    return 0x131;
}

int FUN_0c07e420(int a4, int a5)
{
    (((struct o134_uchar *)(a4))->v) = a5;
    (((struct o414_uint *)(a4))->v) = ((*(int *)(((((*(signed char *)0xC542237) + 0x10) << 2) + 0xC25ACBC))) + ((((unsigned char)a5 << 2) + (unsigned char)a5) << 2));
    (((struct o136_uchar *)(a4))->v) = 0x0;
    (((struct o131_uchar *)(a4))->v) = 0x0;
    return 0x131;
}

