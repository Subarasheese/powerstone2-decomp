/* game/unsorted: functions 0C082958-0C082A74, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o160_float { char p[0x160]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o2C_float { char p[0x2C]; float v; };
struct o3715_uchar { char p[0x3715]; unsigned char v; };
struct o372C_uchar { char p[0x372C]; unsigned char v; };
struct o374A_uchar { char p[0x374A]; unsigned char v; };
struct o37A0_float { char p[0x37A0]; float v; };
struct o37F4_float { char p[0x37F4]; float v; };
struct o37FC_float { char p[0x37FC]; float v; };
struct o382E_ushort { char p[0x382E]; unsigned short v; };
struct o445_uchar { char p[0x445]; unsigned char v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
int FUN_0c064f80(int);
int FUN_0c067734(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07ec9a(int);
int FUN_0c179ac0(void);
int FUN_0c082958(int a4, int a5);

int FUN_0c082958(int a4, int a5)
{
    int stk[4];
    register int t4;
    register int t26;

    *(unsigned char *)(((int)stk + 12)) = a5;
    (((struct o3715_uchar *)(a4))->v) = 0xE;
    *(unsigned short *)((a4 + 0x1C)) = (((int)((int)(FUN_0c179ac0()) % (int)0x7)) + 0x8);
    *(unsigned short *)((a4 + 0x1E)) = 0x0;
    (((struct o20_ushort *)(a4))->v) = 0x0;
    FUN_0c067734(a4);
    (((struct o60_float *)(a4))->v) = 0.0f;
    (((struct o58_float *)(a4))->v) = 0.0f;
    (((struct o54_float *)(a4))->v) = 0.0f;
    (((struct o4C_float *)(a4))->v) = 0.0f;
    (((struct o5C_float *)(a4))->v) = ((((struct o37A0_float *)(a4))->v));
    (((struct o50_float *)(a4))->v) = 0.0f;
    (((struct o37FC_float *)(a4))->v) = 0.0f;
    (((struct o37F4_float *)(a4))->v) = 0.0f;
    (((struct o445_uchar *)(a4))->v) = 0x1;
    t4 = FUN_0c064f80(a4);
    if (t4 == 0) {
        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - 5.0f);
    }
    if ((*(signed char *)((a4 + 0x371D))) == 2) {
        FUN_0c07ec9a(a4);
        (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + 0x1);
        *(int *)((int)stk + 8) = 0x59;
        *(int *)((int)stk + 4) = 0x4;
        *(int *)((int)stk + 0) = 0xFFFFFFFF;
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x4, 0x59, 0xFFFFFFFF, 0x4, 0x59);
        t26 = 0x160;
        if (!(((((struct o160_float *)(a4))->v)) > 0.0f)) {
            *(unsigned short *)((a4 + 0x1E)) = 0x78;
            t26 = 0x78;
        }
    } else {
        if ((*(signed char *)(((int)stk + 12))) == 0) {
            *(int *)((int)stk + 8) = 0x35;
            *(int *)((int)stk + 4) = 0x4;
            *(int *)((int)stk + 0) = 0xFFFFFFFF;
            FUN_0c07e79c(a4, 0xFFFFFFFF, 0x4, 0x35, 0xFFFFFFFF, 0x4, 0x35);
            (((struct o372C_uchar *)(a4))->v) = 0x0;
        } else {
            *(int *)((int)stk + 8) = 0x36;
            *(int *)((int)stk + 4) = 0x4;
            *(int *)((int)stk + 0) = 0xFFFFFFFF;
            FUN_0c07e79c(a4, 0xFFFFFFFF, 0x4, 0x36, 0xFFFFFFFF, 0x4, 0x36);
            (((struct o372C_uchar *)(a4))->v) = 0x1;
        }
        t26 = 0x160;
        if (((((struct o160_float *)(a4))->v)) != 0.0f) {
            (((struct o382E_ushort *)(a4))->v) = 0x0;
            (((struct o374A_uchar *)(a4))->v) = 0x1;
            t26 = 0x374A;
        }
    }
    return t26;
}
