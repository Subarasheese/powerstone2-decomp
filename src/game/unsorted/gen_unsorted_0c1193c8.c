/* game/unsorted: functions 0C1193C8-0C11A28A, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_int { char p[0x20]; int v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o41C_int { char p[0x41C]; int v; };
struct o41C_uint { char p[0x41C]; unsigned int v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o68_float { char p[0x68]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c1171f0(int);
int FUN_0c1173dc(int, int);
int FUN_0c11e964(int);
int FUN_0c11ea4e(int);
float nlRoundOff(float);
int nlAddVector3op(int, int, int);
int FUN_0c18778c(void);
extern int FUN_0c187798();
int FUN_0c1193c8(int a4, int a5, int a6, int a7);
int FUN_0c1194d0(int a4, int a5, int a6, int a7);
int FUN_0c1195d4(int a4, int a5, int a6, int a7);
int FUN_0c11978c(int a4, int a5, int a6, int a7);
int FUN_0c11990c(int a4);
int FUN_0c119ba4(int a4, int a5);
int FUN_0c119c18(int a4, int a5, int a6, int a7);
int FUN_0c119c94(void);
float FUN_0c119cc6(int a4, int a5, int a6, float f4);






int FUN_0c119ba4(int a4, int a5)
{
    int stk[2];
    register int t1;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    *(unsigned int *)0xC474734 = (*(int *)(((int)stk + 0)));
    (((struct o0_uint *)0xC474404)->v) = 0x0;
    (((struct o4_uint *)0xC474404)->v) = 0x0;
    (((struct o8_uint *)0xC474404)->v) = 0x0;
    t1 = FUN_0c03f444(0x5, 0x0, 0x0);
    if (t1 != 0) {
        *(unsigned char *)((t1 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t1 + 0x4)) = 0xC11990C;
        (((struct o41C_uint *)(t1))->v) = (*(int *)(((int)stk + 0)));
        *(unsigned char *)(((0x41C + t1) + 0x4)) = (*(signed char *)(((int)stk + 4)));
        return t1;
    }
    return 0x0;
}


int FUN_0c119c94(void)
{
    register int t1;
    register int t2;

    t1 = FUN_0c037320(0xF, (*(int *)0xC4B410C));
    t2 = FUN_0c03f444(0x5, 0x0, t1);
    if (t2 != 0) {
        *(unsigned char *)((t2 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t2 + 0x4)) = 0xC119C18;
        return t2;
    }
    return 0x0;
}



