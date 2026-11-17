/* game/unsorted: functions 0C127BFC-0C12807C, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC0_int { char p[0xC0]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03f444(int, int, int);
int thunk_FUN_0c058310(int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c07e2f4(int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c187798(void);
int FUN_0c127bfc(int a4, int a5);

int FUN_0c127bfc(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register float u0;

    t1 = FUN_0c037320(0x9, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    t2 = FUN_0c03f444(0x1, 0x0, t1);
    t1 = t2;
    if (t2 != 0) {
        FUN_0c03733c(t2, 0x9, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
        t3 = 0x0;
        t4 = t0;
        for (;;) {
            if ((int)t3 >= (int)((((struct oC0_int *)(t2))->v))) {
                break;
            }
            t4 = t3;
            t4 = (t4 << 2);
            t0 = (*(int *)((((0xC4 + t2) + t4) + 0x0)));
            *(unsigned short *)((t0 + 0x6)) = 0x1F;
            t3 = (t3 + 0x1);
            if ((a5 & 0x1) != 0) {
                t5 = 0xC4;
                t5 = (t5 + t2);
                t4 = (t4 + t5);
                (((struct o80_uint *)((*(int *)((t4 + 0x0)))))->v) = 0x2000;
            } else {
                t0 = 0xC4;
                t0 = (t0 + t2);
                t4 = (t4 + t0);
                (((struct o80_uint *)((*(int *)((t4 + 0x0)))))->v) = 0xFFFFE000;
            }
        }
        *(unsigned char *)((t2 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t2 + 0x10)) = a4;
        (((struct oAC_ushort *)(t2))->v) = 0x1F;
        (((struct oA9_uchar *)(t2))->v) = 0x21;
        *(unsigned int *)((t2 + 0x4)) = 0xC127D88;
        thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC53256C))) + 0x28), (t2 + 0x28));
        FUN_0c187798();
        *(unsigned int *)((t2 + 0x38)) = ((*(int *)((t2 + 0x38))) + (*(int *)(((a5 << 2) + 0xC2A0F50))));
        *(unsigned int *)((t2 + 0x34)) = ((*(int *)((t2 + 0x34))) + (*(int *)(((a5 << 2) + 0xC2A0F64))));
        u0 = *(float *)0xC127DE4;
        (((struct o4C_float *)(t2))->v) = ((math_cos_angle16(((-(*(int *)((t2 + 0x38)))) + 0x14000))) * u0);
        (((struct o54_float *)(t2))->v) = ((math_sin_angle16(((-(*(int *)((t2 + 0x38)))) + 0x14000))) * u0);
        (((struct o50_float *)(t2))->v) = ((math_sin_angle16((-(*(int *)((t2 + 0x34)))))) * u0);
        (((struct o48_float *)(t2))->v) = 1.0f;
        (((struct o44_float *)(t2))->v) = 1.0f;
        (((struct o40_float *)(t2))->v) = 1.0f;
        (((struct o58_float *)(t2))->v) = u0;
        FUN_0c07e2f4(t2, 0x66);
        (((struct o48_float *)(t2))->v) = 1.0f;
        (((struct o44_float *)(t2))->v) = 1.0f;
        (((struct o40_float *)(t2))->v) = 1.0f;
        t1 = (FUN_0c064d24(t2, 0x1, 0x42, 0x0, 0x100, (~((int)0x1 << (int)(*(signed char *)((t2 + 0x1))))), 0x0, 0xFFFFFFF0));
    }
    return t1;
}
