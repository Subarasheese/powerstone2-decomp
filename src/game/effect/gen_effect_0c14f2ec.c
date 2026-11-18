/* game/effect: functions 0C14F2EC-0C14F66C, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o160_float { char p[0x160]; float v; };
struct o168_float { char p[0x168]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o3768_int { char p[0x3768]; int v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct oA4_int { char p[0xA4]; int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int math_mat_transform_vector(int, int);
int math_mat_get_translate(int, int);
extern int FUN_0c187798();
float FUN_0c14f2ec(int a4, int a5, int a6, int a7);
int FUN_0c14f5da(int a4);


int FUN_0c14f5da(int a4)
{
    int stk[1];
    register int t1;
    register int t19;
    register int t2;
    register int t3;

    *(unsigned char *)(((int)stk + 0)) = a4;
    t1 = FUN_0c037320(0x1, (*(int *)0xC4B40CC));
    t19 = t1;
    if ((int)t1 >= 0) {
        t2 = FUN_0c03f444(0x5, 0x0, 0x1);
        t19 = t2;
        if (t2 != 0) {
            t3 = *(signed char *)(((int)stk + 0));
            FUN_0c03744a(((((struct oC4_int *)(t2))->v)), (*(signed char *)(((*(signed char *)(((((short)t3 * (short)0x3938) + 0xC532498) + 0x3719))) + 0xC2A2780))), 0x1, (*(int *)0xC4B40CC));
            *(unsigned char *)((t2 + 0x1)) = (*(signed char *)(((int)stk + 0)));
            *(unsigned int *)((t2 + 0x4)) = 0xC14F2EC;
            (((struct oAC_ushort *)(t2))->v) = 0x1F;
            (((struct oA9_uchar *)(t2))->v) = 0x21;
            (((struct o48_float *)(t2))->v) = (1.0f + 1.0f);
            (((struct o44_float *)(t2))->v) = (1.0f + 1.0f);
            (((struct o40_float *)(t2))->v) = (1.0f + 1.0f);
            (((struct o28_float *)(t2))->v) = ((((struct o28_float *)((((short)t3 * (short)0x3938) + 0xC532498)))->v));
            (((struct o2C_float *)(t2))->v) = ((((struct o2C_float *)((((short)t3 * (short)0x3938) + 0xC532498)))->v));
            (((struct o30_float *)(t2))->v) = ((((struct o30_float *)((((short)t3 * (short)0x3938) + 0xC532498)))->v));
            (((struct oA8_uchar *)(t2))->v) = 0x0;
            t19 = 0xA8;
        }
    }
    return t19;
}
