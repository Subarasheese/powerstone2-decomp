/* game/menu/option: functions 0C15A104-0C15A230, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o16_uchar { char p[0x16]; unsigned char v; };
struct o64_uint { char p[0x64]; unsigned int v; };
struct o670_uint { char p[0x670]; unsigned int v; };
struct o674_uint { char p[0x674]; unsigned int v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o6C_uint { char p[0x6C]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03f444(int, int, int);
int nlStoreMatrix(int);
int nlSelectMatrixStack(int);
int nlUnitMatrix(void);
int FUN_0c18778c(void);
extern int FUN_0c187798();
int FUN_0c187a88(int, int, int);
int FUN_0c15a104(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11);

int FUN_0c15a104(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11)
{
    int stk[4];
    register int t0;
    register int t29;
    register int t2;
    register int t9;
    register int t10;
    register int t20;
    register int t23;
    register int t22;

    *(unsigned char *)(((int)stk + 8)) = a4;
    *(unsigned int *)(((int)stk + 0)) = a5;
    *(unsigned int *)(((int)stk + 4)) = a6;
    *(unsigned int *)(((int)stk + 12)) = a7;
    t0 = FUN_0c03f444(0x5, 0x2, 0x1);
    t29 = 0x0;
    if (t0 != 0) {
        t2 = (((struct oC4_int *)(t0))->v);
        *(unsigned int *)((t2 + 0x8)) = (*(int *)(((int)stk + 4)));
        *(unsigned int *)((t2 + 0xC)) = 0x0;
        *(unsigned int *)((t2 + 0x10)) = 0x0;
        (((struct o68_uint *)(t2))->v) = (*(int *)(((int)stk + 0)));
        FUN_0c187a88((((0x90 + t2) + 0x4) & 0xFFFFFFF8), (*(int *)((t2 + 0x8))), 0x678);
        *(unsigned int *)((t2 + 0x8)) = (((0x90 + t2) + 0x4) & 0xFFFFFFF8);
        *(unsigned char *)((t2 + 0x0)) = 0x1;
        *(unsigned short *)((t2 + 0x6)) = 0x0;
        (((struct oA8_uchar *)(t0))->v) = 0x0;
        (((struct oAC_ushort *)(t0))->v) = 0x200;
        (((struct oA9_uchar *)(t0))->v) = 0x0;
        *(volatile int *)(((int)stk + 12));
        FUN_0c18778c();
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((int)stk + 8)));
        *(unsigned short *)((t0 + 0x1E)) = ((short)(a8 >> 0));
        (((struct o16_uchar *)(t0))->v) = ((signed char)(a9 >> 0));
        t9 = ((int (*)(void))(FUN_0c187798))();
        t10 = ((int (*)(void))(FUN_0c187798))();
        nlSelectMatrixStack(0x1);
        nlUnitMatrix();
        nlStoreMatrix((t2 + 0x28));
        nlStoreMatrix((t0 + 0x64));
        (((struct o64_uint *)((*(int *)((t2 + 0x8)))))->v) = 0x608;
        (((struct o6C_uint *)((*(int *)((t2 + 0x8)))))->v) = 0x30;
        (((struct o670_uint *)((*(int *)((t2 + 0x8)))))->v) = 0x0;
        (((struct o674_uint *)((*(int *)((t2 + 0x8)))))->v) = 0x30;
        *(volatile int *)((t2 + 0x8));
        t20 = ((int (*)(int))(FUN_0c187798))(0xC2035B4);
        *(volatile int *)((t2 + 0x8));
        t23 = ((int (*)(int))(FUN_0c187798))(t22);
        *(unsigned int *)(((*(int *)((t2 + 0x8))) + 0x3C)) = 0xFFFFFFFF;
        *(volatile int *)((t2 + 0x8));
        FUN_0c18778c();
        *(volatile int *)((t2 + 0x8));
        FUN_0c18778c();
        t29 = t0;
    }
    return t29;
}
