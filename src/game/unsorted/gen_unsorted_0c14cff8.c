/* game/unsorted: functions 0C14CFF8-0C14D1DA, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o60_float { char p[0x60]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c07e2f4(int, int);
float math_cos_angle16(int);
int FUN_0c179ac0(void);
float math_sin_angle16(int);
int FUN_0c187798(void);
int FUN_0c14cff8(int a4, int a5);

int FUN_0c14cff8(int a4, int a5)
{
    int stk[5];
    register int t0;
    register int t1;
    register int t35;
    register float u14;
    register float u18;
    register int t26;

    *(unsigned char *)(((int)stk + 16)) = a5;
    t0 = 0x0;
    for (;;) {
        t1 = FUN_0c03f444(0x1, 0x0, 0x1);
        t35 = t1;
        if (t1 == 0) {
        } else {
            FUN_0c03744a(((((struct oC4_int *)(t1))->v)), 0x0, 0x47, (*(int *)0xC4B40CC));
            *(unsigned char *)((t1 + 0x1)) = (*(signed char *)((a4 + 0x1)));
            *(unsigned char *)((t1 + 0x2)) = (*(signed char *)(((int)stk + 16)));
            (((struct oA8_uchar *)(t1))->v) = 0x1;
            (((struct oAC_ushort *)(t1))->v) = 0x1F;
            (((struct oA9_uchar *)(t1))->v) = 0x21;
            *(unsigned int *)((t1 + 0x4)) = 0xC14CE60;
            *(unsigned int *)((t1 + 0x10)) = a4;
            FUN_0c187798();
            FUN_0c187798();
            *(unsigned int *)((t1 + 0x38)) = ((*(int *)((t1 + 0x38))) + (*(int *)(((t0 << 2) + 0xC2A272C))));
            *(int *)((int)stk + 12) = (t1 + 0x28);
            u14 = ((((struct o28_float *)(t1))->v));
            u14 = u14 + 80.0f * (math_sin_angle16((*(int *)((t1 + 0x38)))));
            (((struct o28_float *)(t1))->v) = u14;
            *(int *)((int)stk + 12) = (t1 + 0x30);
            u18 = ((((struct o30_float *)(t1))->v));
            u18 = u18 + 80.0f * (math_cos_angle16((*(int *)((t1 + 0x38)))));
            (((struct o30_float *)(t1))->v) = u18;
            (((struct o2C_float *)(t1))->v) = (((((struct o2C_float *)(t1))->v)) + 150.0f);
            (((struct o40_float *)(t1))->v) = 1.0f;
            (((struct o44_float *)(t1))->v) = 1.0f;
            (((struct o48_float *)(t1))->v) = 1.0f;
            (((struct o4C_float *)(t1))->v) = ((math_sin_angle16((*(int *)((t1 + 0x38))))) * 25.0f);
            (((struct o54_float *)(t1))->v) = ((math_cos_angle16((*(int *)((t1 + 0x38))))) * 25.0f);
            (((struct o60_float *)(t1))->v) = 0.0f;
            (((struct o58_float *)(t1))->v) = 0.0f;
            *(unsigned int *)((t1 + 0x38)) = ((int)((int)(FUN_0c179ac0()) % (int)0x64));
            *(unsigned short *)((t1 + 0x1C)) = 0x96;
            *(int *)((int)stk + 12) = 0xF0;
            *(int *)((int)stk + 8) = 0x0;
            t26 = *(signed char *)((t1 + 0x1));
            *(int *)((int)stk + 4) = (~((int)0x1 << (int)t26));
            *(int *)((int)stk + 0) = 0x100;
            FUN_0c064d24(t1, 0x1, 0x31, 0x0, 0x100, (~((int)0x1 << (int)t26)), 0x0, 0xF0);
            (((struct o1B_uchar *)(t1))->v) = t0;
            if ((*(signed char *)((t0 + 0xC2A2754))) == 0) {
                (((struct o12A_ushort *)(t1))->v) = 0x0;
                (((struct o20_ushort *)(t1))->v) = 0x8;
            }
            FUN_0c07e2f4(t1, 0x60);
            *(unsigned char *)((((((struct oC4_int *)(t1))->v)) + 0x0)) = 0x1;
            *(unsigned short *)((((((struct oC4_int *)(t1))->v)) + 0x6)) = 0x1;
            t35 = 0x1;
        }
        t0 = (t0 + 0x1);
        if ((int)t0 < (int)0xA) continue;
        break;
    }
    return t35;
}
