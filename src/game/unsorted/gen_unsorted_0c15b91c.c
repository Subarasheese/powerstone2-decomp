/* game/unsorted: functions 0C15B91C-0C15BA4C, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o378C_float { char p[0x378C]; float v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int thunk_FUN_0c058310(int, int);
int FUN_0c14f960(int, int);
int FUN_0c17c4d0(int);
int FUN_0c187798(int, int, int);
int FUN_0c15b91c(int a4, int a5, int a6, int a7);

int FUN_0c15b91c(int a4, int a5, int a6, int a7)
{
    int stk[6];
    register int t0;
    register int t5;
    register float u21;
    register float u22;
    register float u26;
    register float u27;
    register float u31;
    register float u32;
    register int t42;
    register int t43;
    register int t58;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        t58 = t0;
        if (t0 == 1) {
            t58 = (FUN_0c03f346(a4, a5, a6, a7));
        }
    } else {
        t5 = *(int *)((a4 + 0x10));
        *(volatile signed char *)((t5 + 0x1));
        FUN_0c187798(a4, a5, a6);
        thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532564))) + 0x28), ((int)stk + 0));
        *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) - (*(float *)(((int)stk + 0))));
        *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 16))) - (*(float *)(((int)stk + 4))));
        *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 20))) - (*(float *)(((int)stk + 8))));
        FUN_0c17c4d0((((int)stk + 0) + 0xC));
        u21 = ((*(float *)(((int)stk + 12))) * ((((struct o378C_float *)(t5))->v)));
        u22 = (*(float *)(((int)stk + 0)));
        u22 = u22 + 100.0f * u21;
        (((struct o28_float *)(a4))->v) = u22;
        u26 = ((*(float *)(((int)stk + 20))) * ((((struct o378C_float *)(t5))->v)));
        u27 = (*(float *)(((int)stk + 8)));
        u27 = u27 + 100.0f * u26;
        (((struct o30_float *)(a4))->v) = u27;
        u31 = ((*(float *)(((int)stk + 16))) * ((((struct o378C_float *)(t5))->v)));
        u32 = (*(float *)(((int)stk + 4)));
        u32 = u32 + 100.0f * u31;
        (((struct o2C_float *)(a4))->v) = u32;
        if (((*(int *)0xC542260) & 7) == 0) {
            FUN_0c14f960((*(signed char *)((a4 + 0x1))), (a4 + 0x28));
        }
        t42 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t42 - 1);
        if ((int)(short)(t42 - 1) <= 0) {
            *(unsigned short *)((a4 + 0x1C)) = 0x5;
            t43 = *(short *)((a4 + 0x1E));
            *(unsigned short *)((a4 + 0x1E)) = (t43 + 0x1);
            if ((int)(short)(t43 + 0x1) > (int)0x3) {
                *(unsigned short *)((a4 + 0x1E)) = 0x0;
            }
        }
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), (*(short *)((a4 + 0x1E))), 0x13, (*(int *)0xC4B40CC));
        if (((*(signed char *)((t5 + 0x3715))) == 32) && (t58 = *(signed char *)((t5 + 0x3739)), t58 == 11)) {
        } else {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t58 = 0x14;
        }
    }
    return t58;
}
