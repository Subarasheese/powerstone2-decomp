/* Straight-line functions with calls and guards (batch gen_mb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
int FUN_0c037bf6(int, int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c08515a(int, int);
int FUN_0c0c28f6(int, int);
int math_angle_between_points_xz(int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int FUN_0c06ee64(int a4, int a5, int a6);
struct o1E_ushort { char p[0x1E]; unsigned short v; };
struct o4_int { char p[0x4]; int v; };


/* manual: when FUN_0c037bf6 is done: starts animation 0x11 (kinds 8/10 their own), unit scales, steps 50 towards the target of kind 4 if it is
   visible; else the same with animation 0x12 and state 2; 84 cases, 277 of 277 instructions */
int FUN_0c06ee64(int a4, int a5, int a6)
{
    int pass, n, t, k, c, p0, p1;
    float y;

    if ((unsigned char)FUN_0c037bf6(a4, a5, a6) != 0) {
        for (pass = 0;; pass++) {
            n = pass + 0x11;
            t = *(signed char *)(a4 + 2);
            if (t == 8) {
                k = *(signed char *)(a4 + 0x371C) != 0 ? 0x22 : n;
            } else {
                if (t == 10) {
                    k = *(signed char *)(a4 + 0x371C) != 0 ? 0x25 + pass : n;
                    c = *(signed char *)(a4 + 1);
                    FUN_0c07e79c(a4, c, 0, k, c, 0, k);
                }
                k = n;
            }
            c = *(signed char *)(a4 + 1);
            FUN_0c07e79c(a4, c, 0, k, c, 0, k);
            p1 = *(int *)(a4 + 0x11C);
            p0 = *(int *)(a4 + 0x118);
            *(float *)(p1 + 0xA0) = 1.0f;
            *(float *)(p1 + 0x9C) = 1.0f;
            *(float *)(p0 + 0xA0) = 1.0f;
            *(float *)(p0 + 0x9C) = 1.0f;
            p1 = *(int *)(a4 + 0x11C);
            p0 = *(int *)(a4 + 0x118);
            *(float *)(p1 + 0x98) = 1.0f;
            *(float *)(p0 + 0x98) = 1.0f;
            *(float *)(p1 + 0x94) = 1.0f;
            *(float *)(p0 + 0x94) = 1.0f;
            if (pass != 0) {
                break;
            }
            FUN_0c037bf6(a4, p0, p1);
            *(short *)(a4 + 0x1E) = 6;
            t = FUN_0c08515a(a4, 4);
            if (t != 0 && FUN_0c0c28f6(*(int *)(t + 4), (int)&y) != 0) {
                *(float *)(a4 + 0x2C) = y;
                k = math_angle_between_points_xz(a4 + 0x28, *(int *)(t + 4) + 0x28);
                *(float *)(a4 + 0x28) += 50.0f * math_sin_angle16(k);
                *(float *)(a4 + 0x30) += 50.0f * math_cos_angle16(k);
                *(unsigned char *)(a4 + 0x16) = *(unsigned char *)(a4 + 0x16) + 1;
                goto move;
            }
        }
        *(unsigned char *)(a4 + 0x16) = 2;
        *(short *)(a4 + 0x20) = 0;
        return 0x20;
    }
move:
    return math_vec3_accumulate(a4 + 0x28, a4 + 0x4C);
}
