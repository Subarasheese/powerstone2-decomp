/* game/unsorted: functions 0C14B9C0-0C14BB50, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o128_ushort { char p[0x128]; unsigned short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o404_uint { char p[0x404]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
int FUN_0c03f444(int, int, int);
int math_mat_transform_vector(int, int);
int math_mat_get_translate(int, int);
int FUN_0c064d5a(int, int);
float math_signed_sqrt(float);
int math_atan2_angle16(float, float);
int FUN_0c14b9c0(int a4, int a5);
float FUN_0c14ba34(int a4);

int FUN_0c14b9c0(int a4, int a5)
{
    int stk[2];
    register int t0;
    register int t10;
    register int t6;

    *(unsigned int *)(((int)stk + 0)) = a4;
    *(unsigned int *)(((int)stk + 4)) = a5;
    t0 = FUN_0c03f444(0x2, 0x0, 0x0);
    t10 = t0;
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x4)) = 0xC14BA34;
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)(((*(int *)(((int)stk + 0))) + 0x1)));
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x0;
        *(unsigned int *)((t0 + 0x10)) = (*(int *)(((int)stk + 0)));
        (((struct o48_float *)(t0))->v) = 1.0f;
        (((struct o44_float *)(t0))->v) = 1.0f;
        (((struct o40_float *)(t0))->v) = 1.0f;
        *(unsigned char *)((t0 + 0x2)) = (*(signed char *)(((int)stk + 4)));
        t6 = 0xC202BD0;
        if ((*(int *)(((int)stk + 4))) == 8) {
            t6 = 0xC202BB8;
        }
        FUN_0c064d5a(t0, t6);
        (((struct o128_ushort *)(t0))->v) = ((int)0x1 << (int)(*(signed char *)((t0 + 0x1))));
        (((struct o12E_ushort *)(t0))->v) = 0x0;
        t10 = 0x12E;
    }
    return t10;
}

float FUN_0c14ba34(int a4)
{
    int stk[3];

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R10;
    register int R11;
    register int R12;
    register float F0;
    register float F3;
    register float F4;
    register float F5;
    register float F12;
    register float F13;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register float w0_0;
    register float w0_1;
    v0_1 = a4;
    v0_2 = *(signed char *)((v0_1 + 0x14));
    v0_3 = (v0_2);
    v0_0 = (0x0);
    v0_1 = (v0_1);
    if ((v0_2 == 0)) goto L_C14BA5A;
    if ((v0_3 == 1)) goto L_C14BA70;
    L_C14BB3C:;
    return F0;
    L_C14BA70:;
    v0_2 = *(int *)(((((*(signed char *)((v0_1 + 0x2))) << 2) + (0xC4 + (*(int *)((v0_1 + 0x10))))) + 0x0));
    math_mat_get_translate((v0_2 + 0x28), (v0_1 + 0x28));
    *(float *)(((int)stk + 4)) = 0.0f;
    *(float *)(((int)stk + 0)) = 0.0f;
    *(float *)(((int)stk + 8)) = 1.0f;
    math_mat_transform_vector(((int)stk + 0), (v0_2 + 0x28));
    *(unsigned int *)((v0_1 + 0x38)) = (math_atan2_angle16((*(float *)(((int)stk + 0))), (*(float *)(((int)stk + 8)))));
    w0_1 = *(float *)(((int)stk + 8));
    w0_0 = *(float *)(((int)stk + 0));
    w0_1 = (w0_1 * w0_1);
    w0_1 = w0_1 + w0_0 * w0_0;
    w0_0 = math_signed_sqrt(w0_1);
    *(unsigned int *)((v0_1 + 0x34)) = (math_atan2_angle16((-(*(float *)(((int)stk + 4)))), w0_0));
    w0_0 = (1.0f);
    w0_1 = (0.0f);
    if (((*(signed char *)((0x3715 + (*(int *)((v0_1 + 0x10)))))) == 23)) goto L_C14BB28;
    (((struct o12E_ushort *)(v0_1))->v) = (~((int)0x1 << (int)(*(signed char *)((v0_1 + 0x1)))));
    (((struct o48_float *)(v0_1))->v) = w0_0;
    (((struct o44_float *)(v0_1))->v) = w0_0;
    (((struct o40_float *)(v0_1))->v) = w0_0;
    v0_3 = (0x40);
    goto L_C14BB3C;
    L_C14BB28:;
    (((struct o12E_ushort *)(v0_1))->v) = v0_0;
    (((struct o404_uint *)(v0_1))->v) = v0_0;
    (((struct o48_float *)(v0_1))->v) = w0_1;
    (((struct o44_float *)(v0_1))->v) = w0_1;
    (((struct o40_float *)(v0_1))->v) = w0_1;
    v0_3 = (0x40);
    goto L_C14BB3C;
    L_C14BA5A:;
    v0_3 = (0x3714);
    if (((*(signed char *)(((*(int *)((v0_1 + 0x10))) + 0x3714))) == 0)) goto L_C14BB3C;
    (((struct o14_uchar *)(v0_1))->v) = ((*(signed char *)((v0_1 + 0x14))) + 0x1);
    (((struct oA4_uint *)(v0_1))->v) = v0_0;
    goto L_C14BA70;
}
