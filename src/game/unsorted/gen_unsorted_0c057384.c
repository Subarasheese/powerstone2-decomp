/* game/unsorted: functions 0C057384-0C0579BE, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o18_int { char p[0x18]; int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o24_int { char p[0x24]; int v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o34_float { char p[0x34]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o4_float { char p[0x4]; float v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
int nlSelectMatrixStack(int);
int nlUnitMatrix(void);
int nlObjPutLoadTexture(int, int);
int nlObjPut(int);
int nlObjPutTrnsl(int, float);
int nlObjPutSetFadeColor(float, float, float);
extern int FUN_0c18778c();
int FUN_0c187798(void);
int FUN_0c057384(void);
int FUN_0c05738e(int a4, int a5, int a6, int a7);
int FUN_0c0573c0(int a4, int a5, int a6);
int FUN_0c0573cc(int a4, int a5, int a6);
int FUN_0c0573d8(void);
int FUN_0c0573e6(void);
int FUN_0c057402(float f4, float f5);

int FUN_0c057384(void)
{
    return nlObjPutLoadTexture(0xC1BFA20, 0xC1BFB18);
}

int FUN_0c05738e(int a4, int a5, int a6, int a7)
{
    (((struct o4_uint *)0xC54244C)->v) = a4;
    (((struct o0_uchar *)0xC54244C)->v) = a5;
    (((struct o1_uchar *)0xC54244C)->v) = a6;
    (((struct o2_uchar *)0xC54244C)->v) = a7;
    (((struct o3_uchar *)0xC54244C)->v) = a7;
    if ((signed char)a5 != 0) {
        (((struct o3_uchar *)0xC54244C)->v) = ((*(signed char *)0xC54244F) + 0x1);
    }
    if ((*(signed char *)0xC54244E) == 0) {
        (((struct o2_uchar *)0xC54244C)->v) = 0x1;
    }
    return 0x1E;
}

int FUN_0c0573c0(int a4, int a5, int a6)
{
    int stk[1];

    *(unsigned char *)(((int)stk + 0)) = a6;
    return FUN_0c05738e(a4, a5, 0x0, (*(signed char *)(((int)stk + 0))));
}

int FUN_0c0573cc(int a4, int a5, int a6)
{
    int stk[1];

    *(unsigned char *)(((int)stk + 0)) = a6;
    return FUN_0c05738e(a4, a5, 0x1, (*(signed char *)(((int)stk + 0))));
}

int FUN_0c0573d8(void)
{
    (((struct o0_uchar *)0xC54244D)->v) = 0x0;
    (((struct o2_uchar *)0xC54244D)->v) = 0x0;
    return 0x1F;
}

int FUN_0c0573e6(void)
{
    int t1;

    if (((*(signed char *)0xC54244D) == 1) && (t1 = *(signed char *)0xC54244F, t1 != 0)) {
        return 0x1;
    }
    return 0x0;
}

