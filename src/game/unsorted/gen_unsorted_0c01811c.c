/* game/unsorted: functions 0C01811C-0C0185B4, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
int FUN_0c0162c6(int, int);
int FUN_0c016334(int, int);
int FUN_0c01cc56(int, int);
int thunk_FUN_0c03f346(int, int, int, int);
int FUN_0c02b3ba(int, float, float, float);
int FUN_0c02b502(int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int strcpy(int, int);
int strlen(int);
int strncpy(int, int, int);
int FUN_0c187e08(int, int);
int FUN_0c01811c(int a4, int a5);
int FUN_0c01817e(int a4, int a5);
int FUN_0c01821e(int a4);
int FUN_0c018344(void);
int FUN_0c018368(int a4, int a5, int a6, int a7);



int FUN_0c01821e(int a4)
{
    int stk[4];
    register int t1;
    register int t39;
    register int t5;
    register int t7;
    register int t8;
    register int t9;
    register int t10;
    register int t21;
    register int t12;
    register int t17;
    register int t34;
    register int t6;
    register int t20;
    register int t22;

    t10 = strlen(a4);
    t1 = (int)((int)t10 / (int)0x20);
    *(unsigned int *)(((int)stk + 8)) = (t1 + 0x1);
    *(unsigned int *)(((int)stk + 12)) = (0xE4 - ((((((t1 + 0x1) - 1) << 2) << 1) + ((t1 + 0x1) - 1)) << 1));
    *(unsigned int *)(((int)stk + 4)) = 0x0;
    t8 = *(int *)(((int)stk + 8));
    t39 = 0xC018330;
    if ((int)t8 > 0) {
        t5 = 0xC018330;
        t7 = (0xE4 - ((((((t1 + 0x1) - 1) << 2) << 1) + ((t1 + 0x1) - 1)) << 1));
        t9 = 0x0;
        for (;;) {
            t21 = t10;
            if ((int)t10 > (int)0x20) {
                t7 = 0xC016334;
                t5 = (FUN_0c016334((t9 + a4), 0x20));
                t12 = 0x20;
                if ((int)t5 < 0) {
                    t12 = 0x21;
                }
                t21 = t12;
                if (t12 != t10) {
                    *(unsigned int *)(((int)stk + 0)) = (t9 + a4);
                    t5 = (FUN_0c01817e((t9 + a4), t12));
                    t17 = (t12 - t5);
                    t5 = (FUN_0c01811c((*(int *)(((int)stk + 0))), (t12 - t5)));
                    t21 = (t17 + t5);
                }
            } else {
                t20 = t6;
                t22 = t7;
            }
            t6 = t20;
            t7 = t22;
            t8 = 0xC187DD8;
            t5 = (strncpy(0xC304E24, (t9 + a4), t21));
            t5 = t21;
            t7 = t5;
            t7 = (t7 << 1);
            t8 = t5;
            t6 = 0x280;
            t7 = (t7 + t8);
            *(unsigned char *)((0xC304E24 + t5)) = 0x0;
            t7 = (t7 << 2);
            t6 = (t6 - t7);
            t8 = 0x0;
            t6 = ((int)((unsigned int)((int)((unsigned int)t6 + (unsigned int)t8)) + ((((int)t8 > (int)t6)) ? 1u : 0u)));
            t8 = 0xC02B502;
            t6 = (t6 >> 1);
            *(unsigned int *)(((int)stk + 0)) = t6;
            t5 = (FUN_0c02b502(0x7));
            t7 = (*(int *)(((int)stk + 12)));
            t8 = (*(int *)(((int)stk + 0)));
            t34 = t8;
            t8 = 0xC02B3BA;
            t5 = (FUN_0c02b3ba(0xC304E24, (float)t34, (float)t7, 3.0f));
            t7 = (*(int *)(((int)stk + 12)));
            t10 = (t10 - t21);
            t7 = (t7 + 0x24);
            *(unsigned int *)(((int)stk + 12)) = t7;
            t8 = (*(int *)(((int)stk + 4)));
            t8 = (t8 + 0x1);
            *(unsigned int *)(((int)stk + 4)) = t8;
            t6 = (*(int *)(((int)stk + 8)));
            t9 = (t9 + t21);
            if ((int)t8 >= (int)t6) {
                break;
            }
        }
        t39 = t5;
    }
    return t39;
}

int FUN_0c018344(void)
{
    (((struct oA8_uchar *)((FUN_0c01cc56(0x8, 0xC018368))))->v) = 0x0;
    *(unsigned int *)0xC304F24 = 0x1;
    return 0xA8;
}

