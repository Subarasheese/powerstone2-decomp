/* game/player: functions 0C08BA8C-0C08BB94, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17C_float { char p[0x17C]; float v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o376C_int { char p[0x376C]; int v; };
struct o3790_float { char p[0x3790]; float v; };
struct o3810_float { char p[0x3810]; float v; };
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c085eac(int, int);
int FUN_0c0c224c(int, int);
int FUN_0c0c3010(int, int, int);
int math_atan_angle16(float);
float FUN_0c0e2340(int);
int FUN_0c187798(void);
int FUN_0c08ba8c(int a4);

int FUN_0c08ba8c(int a4)
{
    int stk[9];
    register float t20;
    register float u21;
    register float u24;
    register int t30;

    if (((((struct o17C_float *)(a4))->v)) > 0.0f) {
        *(int *)((int)stk + 8) = 0x37;
        *(int *)((int)stk + 4) = 0x3;
        *(int *)((int)stk + 0) = 0xFFFFFFFF;
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0x37, 0xFFFFFFFF, 0x3, 0x37);
        FUN_0c0c224c(a4, ((((struct o376C_int *)(a4))->v)));
        FUN_0c085eac(a4, 0x6);
        FUN_0c0c3010(((((struct o376C_int *)(a4))->v)), (*(signed char *)((a4 + 0x1))), 0x0);
        (((struct o16_uchar *)(a4))->v) = 0x0;
        t30 = 0x16;
    } else {
        *(int *)((int)stk + 8) = 0x39;
        *(int *)((int)stk + 4) = 0x3;
        *(int *)((int)stk + 0) = 0xFFFFFFFF;
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0x39, 0xFFFFFFFF, 0x3, 0x39);
        FUN_0c085eac(a4, 0x6);
        FUN_0c0c3010(((((struct o376C_int *)(a4))->v)), (*(signed char *)((a4 + 0x1))), 0x1);
        FUN_0c187798();
        *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) - ((((struct o28_float *)(a4))->v)));
        *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 16))) - ((((struct o2C_float *)(a4))->v)));
        *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 20))) - ((((struct o30_float *)(a4))->v)));
        t20 = FUN_0c0e2340(((int)stk + 12));
        u21 = t20;
        if (200.0f > t20) {
            u21 = 200.0f;
        }
        u24 = u21;
        if (u21 == 0.0f) {
            u24 = 9.99999975e-05f;
        }
        (((struct o3790_float *)(a4))->v) = ((((((struct o2C_float *)(a4))->v)) - ((((struct o3810_float *)(a4))->v))) + -50.0f);
        *(unsigned int *)((a4 + 0x34)) = (math_atan_angle16((((((struct o3790_float *)(a4))->v)) / u24)));
        (((struct o16_uchar *)(a4))->v) = 0x1;
        (((struct o17_uchar *)(a4))->v) = 0x0;
        t30 = 0x17;
    }
    return t30;
}
