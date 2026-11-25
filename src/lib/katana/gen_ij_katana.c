/* Straight-line functions with calls and guards (batch gen_ij): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03f346(int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c0b4b20(void);
int FUN_0c0b5398(int);
int FUN_0c0b562a(int, int, int, int);
int FUN_0c0b6a18(int);
int FUN_0c0b711a(int);
int FUN_0c1171f0(int);
int FUN_0c1173dc(int, int, int, int);
int FUN_0c2db8cc(int, int, int);
int FUN_0c2db8e0(int, int, int);
int fmMngClearBuf(int, int);
int fmMngReadSctAllData(int);
int thunk_FUN_0c0385e0(int);
int thunk_FUN_0c2c2124(int, int, int);
int FUN_0c1118ac(int a4);
int FUN_0c0b551e(int a4);
int fmMngInit(int a4, int a5, int a6);


int fmMngInit(int a4, int a5, int a6)
{
    int stk[3];
    register int t51;
    register int t6;
    register int t8;
    register int t19;
    register int t20;
    register int t21;
    int t27;
    register int t34;
    int t22;
    register int t23;
    register int t24;

    *(unsigned int *)(((int)stk + 0)) = a5;
    t51 = 0xFFFFFFF9;
    if (((int)a4 >= (int)0x1) && ((int)a4 < (int)0x5)) {
        *(unsigned int *)0xC303D78 = 0xC8CA910;
        FUN_0c2db8cc(a4, (((int)stk + 0) + 0x4), a6);
        *(unsigned short *)(((*(int *)0xC303D78) + 0x0)) = a4;
        *(unsigned int *)(((*(int *)0xC303D78) + 0x4)) = (*(int *)(((int)stk + 4)));
        *(unsigned int *)(((*(int *)0xC303D78) + 0x8)) = (*(int *)(((int)stk + 8)));
        t6 = *(int *)0xC303D78;
        *(unsigned int *)((t6 + 0x18)) = ((int)((*(int *)((t6 + 0x8))) + 0x7FFF) >> 15);
        t8 = *(int *)0xC303D78;
        *(unsigned int *)((t8 + 0x14)) = ((((int)(*(int *)((t8 + 0x8))) >> 6) - (*(int *)((t8 + 0x18)))) - 1);
        *(unsigned int *)(((*(int *)0xC303D78) + 0xC)) = (*(int *)(((int)stk + 0)));
        *(unsigned int *)(((*(int *)0xC303D78) + 0x1C)) = 0x0;
        *(unsigned int *)(((*(int *)0xC303D78) + 0x20)) = 0x0;
        *(unsigned int *)(((*(int *)0xC303D78) + 0x2C)) = 0x0;
        t19 = FUN_0c2db8e0((*(int *)(((*(int *)0xC303D78) + 0x4))), ((*(int *)0xC303D78) + 0x34), 0x40);
        t51 = 0xFFFFFFFF;
        if (t19 == -1) {
        } else {
            t20 = *(int *)0xC303D78;
            t21 = thunk_FUN_0c2c2124((t20 + 0x34), 0xC2FFC4C, 0xC);
            t51 = 0xFFFFFFF8;
            if ((t21 != 0) && (t22 = *(int *)0xC303D78, t23 = *(signed char *)(((t20 + 0x34) + 0x10)), t24 = *(short *)((t22 + 0x0)), t24 == t23)) {
                *(unsigned short *)((t22 + 0x2)) = (*(signed char *)(((t20 + 0x34) + 0x11)));
                t27 = *(short *)(((*(int *)0xC303D78) + 0x2));
                t51 = 0xFFFFFFF8;
                if ((t27 != 0) && (t27 != 1)) {
                } else {
                    fmMngClearBuf((*(int *)(((*(int *)0xC303D78) + 0xC))), (*(int *)(((*(int *)0xC303D78) + 0x8))));
                    t34 = fmMngReadSctAllData((*(int *)0xC303D78));
                    t51 = 0x0;
                    if (t34 != 0) {
                        t51 = t34;
                    }
                }
            }
        }
    }
    return t51;
}
