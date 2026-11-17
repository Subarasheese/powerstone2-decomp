/* game/unsorted: functions 0C148494-0C148974, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o10_float { char p[0x10]; float v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o22_short { char p[0x22]; short v; };
struct o376C_uint { char p[0x376C]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o964_uint { char p[0x964]; unsigned int v; };
int FUN_0c04307c(void);
int math_vec3_mul_xyz(int, float, float, float);
int math_mat_transform_vector(int, int);
int math_mat_get_translate(int, int);
int FUN_0c059e9a(int, int, int);
int FUN_0c14803c(int, int, int, int, float);
int FUN_0c148494(int, int, int);
int FUN_0c17c130(int, int, int);
int FUN_0c187798(void);
int FUN_0c14873c(int a4);

int FUN_0c14873c(int a4)
{
    int stk[9];
    register int t0;
    register int t1;
    register int t2;
    register float u13;
    register int t22;
    register int t34;

    t0 = *(signed char *)((a4 + 0x1));
    t1 = (((struct o22_short *)(a4))->v);
    t2 = FUN_0c04307c();
    if (t2 != 0) {
        t34 = (FUN_0c148494(a4, 0x2, (*(signed char *)((a4 + 0x1)))));
    } else {
        (((struct o964_uint *)((((short)t1 * (short)0x3938) + 0xC532498)))->v) = ((*(int *)(((((short)t1 * (short)0x3938) + 0xC532498) + 0x38))) - (*(int *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x38))));
        if ((*(signed char *)((a4 + 0x15))) == 0) {
            math_mat_get_translate((a4 + 0x64), (((int)stk + 0) + 0x18));
            *(float *)(((int)stk + 12)) = 0.0f;
            *(float *)(((int)stk + 16)) = ((((struct o0_float *)0xC148890)->v));
            *(float *)(((int)stk + 20)) = ((((struct o4_float *)0xC148890)->v));
            math_mat_transform_vector((((int)stk + 0) + 0xC), (a4 + 0x64));
            FUN_0c187798();
            u13 = (((struct o10_float *)0xC148890)->v);
            math_vec3_mul_xyz(((int)stk + 0), u13, u13, u13);
            FUN_0c17c130((((int)stk + 0) + 0xC), (((int)stk + 0) + 0xC), (((int)stk + 0) + 0x18));
            FUN_0c17c130(((int)stk + 0), ((int)stk + 0), (((int)stk + 0) + 0x18));
            FUN_0c14803c((*(signed char *)((a4 + 0x1))), ((((struct o22_short *)(a4))->v)), (((int)stk + 0) + 0xC), ((int)stk + 0), 1.0f);
            FUN_0c059e9a((((short)t1 * (short)0x3938) + 0xC532498), 0x2A, (((int)stk + 0) + 0x18));
            *(unsigned short *)((a4 + 0x1C)) = 0x1E;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        } else {
            t22 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t22 - 1);
            if ((int)(short)(t22 - 1) <= 0) {
                FUN_0c148494(a4, 0x5, (*(signed char *)((a4 + 0x1))));
            }
        }
        (((struct o376C_uint *)((((short)t0 * (short)0x3938) + 0xC532498)))->v) = a4;
        t34 = 0x376C;
    }
    return t34;
}
