/* game/unsorted: functions 0C14DA24-0C14DBC4, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o58_float { char p[0x58]; float v; };
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
extern int FUN_0c187798();
int FUN_0c14da24(int a4, int a5);

int FUN_0c14da24(int a4, int a5)
{
    int stk[5];
    register int t0;
    register int t1;
    register int t35;
    register int t3;
    register float u18;
    register float u23;
    register int t25;
    register int t27;

    *(unsigned char *)(((int)stk + 16)) = a5;
    t0 = 0x0;
    for (;;) {
        t1 = FUN_0c03f444(0x1, 0x0, 0x1);
        t35 = t1;
        if (t1 == 0) {
        } else {
            t3 = (int)((int)(FUN_0c179ac0()) % (int)0xE);
            FUN_0c03744a(((((struct oC4_int *)(t1))->v)), t3, 0x51, (*(int *)0xC4B40CC));
            *(unsigned char *)((((((struct oC4_int *)(t1))->v)) + 0x0)) = 0x1;
            *(unsigned short *)((((((struct oC4_int *)(t1))->v)) + 0x6)) = 0x1;
            *(unsigned char *)((t1 + 0x1)) = (*(signed char *)((a4 + 0x1)));
            *(unsigned char *)((t1 + 0x2)) = (*(signed char *)(((int)stk + 16)));
            (((struct oA8_uchar *)(t1))->v) = 0x1;
            (((struct oAC_ushort *)(t1))->v) = 0x1F;
            (((struct oA9_uchar *)(t1))->v) = 0x21;
            *(unsigned int *)((t1 + 0x4)) = 0xC14D830;
            *(unsigned int *)((t1 + 0x10)) = a4;
            FUN_0c187798();
            *(unsigned int *)((t1 + 0x38)) = ((*(int *)((t1 + 0x38))) + (*(int *)(((t0 << 2) + 0xC2A2760))));
            (((struct o58_float *)(t1))->v) = 50.0f;
            u18 = ((((struct o28_float *)(a4))->v));
            u18 = u18 + (math_sin_angle16((*(int *)((t1 + 0x38))))) * ((((struct o58_float *)(t1))->v));
            (((struct o28_float *)(t1))->v) = u18;
            u23 = ((((struct o30_float *)(a4))->v));
            u23 = u23 + (math_cos_angle16((*(int *)((t1 + 0x38))))) * ((((struct o58_float *)(t1))->v));
            (((struct o30_float *)(t1))->v) = u23;
            (((struct o2C_float *)(t1))->v) = (((((struct o2C_float *)(a4))->v)) + 100.0f);
            (((struct o40_float *)(t1))->v) = 0.5f;
            (((struct o44_float *)(t1))->v) = 0.5f;
            (((struct o48_float *)(t1))->v) = 0.5f;
            *(unsigned short *)((t1 + 0x1C)) = 0xA;
            *(unsigned short *)((t1 + 0x1E)) = 0x14;
            t25 = ((~(((~t0) + 0x1) & 0x1)) + 0x1);
            if ((int)t0 >= 0) {
                t25 = (t0 & 0x1);
            }
            (((struct o1B_uchar *)(t1))->v) = t25;
            if ((signed char)t25 != 0) {
                *(int *)((int)stk + 12) = 0xF0;
                *(int *)((int)stk + 8) = 0x0;
                t27 = *(signed char *)((t1 + 0x1));
                *(int *)((int)stk + 4) = (~((int)0x1 << (int)t27));
                *(int *)((int)stk + 0) = 0x100;
                FUN_0c064d24(t1, 0x1, 0x30, 0x0, 0x100, (~((int)0x1 << (int)t27)), 0x0, 0xF0);
                FUN_0c07e2f4(t1, 0x62);
            }
            (((struct o12E_ushort *)(t1))->v) = 0x0;
            t35 = 0x12E;
        }
        t0 = (t0 + 0x1);
        if ((int)t0 < (int)0x8) continue;
        break;
    }
    return t35;
}
