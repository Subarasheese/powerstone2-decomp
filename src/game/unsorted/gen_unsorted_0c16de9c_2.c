/* game/unsorted: functions 0C16DE9C-0C16E154, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c14f824(int, int);
int FUN_0c150010(int, float, float, float, float);
int FUN_0c16defa(int, int, int, int, int, int, int);
int FUN_0c179ac0(void);
int FUN_0c187798(int);
int FUN_0c16e01c(int a4, int a5, int a6, int a7);
int FUN_0c16e0f2(int a4);

int FUN_0c16e01c(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t0;
    register int t5;
    register int t28;
    register int t33;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        t33 = t0;
        if (t0 != 1) {
        } else {
            t33 = (FUN_0c03f346(a4, a5, a6, a7));
        }
    } else {
        t5 = *(short *)((a4 + 0x1E));
        *(unsigned short *)((a4 + 0x1E)) = (t5 - 1);
        if ((short)(t5 - 1) == 0) {
            *(float *)(((int)stk + 0)) = (((((struct o28_float *)(a4))->v)) + (float)(((int)((int)(FUN_0c179ac0()) % (int)0xC8)) - 100));
            *(float *)(((int)stk + 4)) = (((((struct o2C_float *)(a4))->v)) + (float)(((int)((int)(FUN_0c179ac0()) % (int)0xC8)) - 100));
            *(float *)(((int)stk + 8)) = (((((struct o30_float *)(a4))->v)) + (float)(((int)((int)(FUN_0c179ac0()) % (int)0xC8)) - 100));
            FUN_0c16defa(a4, ((int)stk + 0), 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8));
            FUN_0c14f824((*(signed char *)((a4 + 0x1))), ((int)stk + 0));
            FUN_0c150010(((int)stk + 0), 1.0f, 1.0f, 1.0f, 1.0f);
            *(unsigned short *)((a4 + 0x1E)) = (((int)((int)(FUN_0c179ac0()) % (int)0x6)) + 0x3);
        }
        t28 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t28 - 1);
        t33 = (short)(t28 - 1);
        if ((int)(short)(t28 - 1) <= 0) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t33 = 0x14;
        }
    }
    return t33;
}

int FUN_0c16e0f2(int a4)
{
    register int t0;
    register int t9;
    register int t2;

    t0 = FUN_0c03f444(0x1, 0x0, 0x0);
    t9 = t0;
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x4)) = 0xC16E01C;
        FUN_0c187798(t0);
        (((struct o28_float *)(t2))->v) = (((((struct o28_float *)(t2))->v)) + ((((struct o4C_float *)(t2))->v)));
        (((struct o2C_float *)(t2))->v) = (((((struct o2C_float *)(t2))->v)) + ((((struct o50_float *)(t2))->v)));
        (((struct o30_float *)(t2))->v) = (((((struct o30_float *)(t2))->v)) + ((((struct o54_float *)(t2))->v)));
        *(unsigned short *)((t2 + 0x1C)) = 0x64;
        *(unsigned short *)((t2 + 0x1E)) = 0x1;
        t9 = 0x1;
    }
    return t9;
}
