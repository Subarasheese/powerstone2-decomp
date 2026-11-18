/* game/hit: functions 0C05FFA4-0C062660, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o10_float { char p[0x10]; float v; };
struct o135_uchar { char p[0x135]; unsigned char v; };
struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oA4_int { char p[0xA4]; int v; };
struct oC_float { char p[0xC]; float v; };
int math_mat_transform_vector(int, int);
int FUN_0c0582de(int, int);
int FUN_0c060028(int, int, int);
int FUN_0c060074(int, int, int);
float math_interval_overlap(float, float, float, float);
int FUN_0c060290(int, int);
int FUN_0c060376(int, int);
int FUN_0c060c80(int, int, int);
int FUN_0c061222(int, int);
int FUN_0c061284(int, int);
int FUN_0c0612cc(int, int);
int FUN_0c06130a(int, int, int, int);
int FUN_0c061416(int, int, int, int);
int FUN_0c06151a(int, int, int, int, float);
float math_signed_sqrt(float);
int math_vec3_accumulate(int, int);
extern int FUN_0c187798();
int FUN_0c060454(int a4, int a5, float f4);
int FUN_0c061686(int a4, int a5, int a6, int a7);
int FUN_0c061a10(int a4, int a5, int a6, int a7);
int FUN_0c061c54(int a4, int a5, int a6, int a7);
int FUN_0c061ff4(int a4, int a5, int a6, int a7);

int FUN_0c060454(int a4, int a5, float f4)
{
    register int t34;
    register float u11;
    float u12;
    register float u22;
    float u23;

    if ((*(signed char *)((a5 + 0x2))) != -1) {
        FUN_0c0582de((a5 + 0x8), ((*(int *)(((((*(signed char *)((a5 + 0x2))) << 2) + (0xC4 + a4)) + 0x0))) + 0x28));
        FUN_0c060290(a4, a5);
        t34 = 0x1;
    } else {
        t34 = 0x0;
        if ((((((struct o40_float *)(a4))->v)) == 0.0f) && ((u11 = (((struct o44_float *)(a4))->v), u11 == 0.0f) && (u12 = (((struct o48_float *)(a4))->v), u12 == 0.0f))) {
        } else {
            if (((((struct oA4_int *)(a4))->v)) != 0) {
                FUN_0c0582de((a5 + 0x8), (a4 + 0x64));
            } else {
                math_mat_transform_vector((a5 + 0x8), (a4 + 0x64));
                math_vec3_accumulate((a5 + 0x8), (a4 + 0x28));
            }
            if ((((((struct o40_float *)(a4))->v)) == 1.0f) && ((u22 = (((struct o44_float *)(a4))->v), u22 == 1.0f) && (u23 = (((struct o48_float *)(a4))->v), u23 == 1.0f))) {
            } else {
                FUN_0c060376(a4, a5);
            }
            t34 = 0x1;
        }
    }
    return t34;
}




