/* Straight-line functions with calls and guards (batch gen_so): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o20_short { char p[0x20]; short v; };
struct o2C_float { char p[0x2C]; float v; };
struct o50_float { char p[0x50]; float v; };
int FUN_0c037bf6(int, int, int);
int FUN_0c07d6cc(int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c07ed90(int, int);
extern int FUN_0c085cac();
extern int FUN_0c085d0c();
int math_vec3_accumulate(int, int);
int FUN_0c06d3b2(int a4, int a5, int a6, int a7);

int FUN_0c06d3b2(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;

    t0 = (((struct o20_short *)(a4))->v);
    if (t0 != 0) {
        t1 = 0;
        if ((t0 != 4) && (t0 != 9)) {
            if (t0 != 5) {
                if (t0 != 6) {
                    if (t0 == 7) {
                        return ((int (*)(int, int, int, int))(FUN_0c085d0c))(a4, a5, a6, a7);
                    }
                    if (t0 == 8) {
                        FUN_0c037bf6(a4, a5, a6);
                        t1 = 1;
                    }
                } else {
                    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + (((-((((struct o2C_float *)(a4))->v))) + 1000.0f) / (float)(*(short *)((a4 + 0x1C)))));
                    if ((*(short *)((a4 + 0x1C))) != 0) {
                        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
                    }
                    t0 = FUN_0c037bf6(a4, a5, a6);
                    t2 = (unsigned char)t0;
                    if ((unsigned char)t0 != 0) {
                        t2 = (((int (*)(int, int, int))(FUN_0c085cac))(a4, 0x1B, 0x1));
                    }
                    return t2;
                }
            } else {
                return (((int (*)(int, int, int, int))(FUN_0c085cac))(a4, 0x1B, 0x1, a7));
            }
        } else {
            t0 = FUN_0c037bf6(a4, a5, a6);
            if ((unsigned char)t0 != 0) {
                return (((int (*)(int, int, int))(FUN_0c085cac))(a4, 0x5, 0x7));
            }
            FUN_0c07ed90(a4, 0x0);
            t1 = 1;
        }
        if (t1) {
            math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
            math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
            t0 = 0x50;
            if (0.0f > ((((struct o50_float *)(a4))->v))) {
                t1 = FUN_0c07ecc6(a4, 0x0, 0x0);
                t2 = t1;
                if (t1 != 0) {
                    t2 = (((int (*)(int, int, int))(FUN_0c085cac))(a4, 0x6, 0x0));
                }
                t0 = t2;
            }
            return t0;
        }
    }
    FUN_0c037bf6(a4, a5, a6);
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        return ((int (*)(int))(FUN_0c085d0c))(a4);
    }
    t0 = FUN_0c07d6cc(a4);
    t1 = *(int *)((a4 + 0x38));
    t2 = (unsigned short)(t1 - t0);
    if ((0x8000 & (unsigned short)(t1 - t0)) != 0) {
        t2 = ((unsigned short)(t1 - t0) | 0xFFFF0000);
    }
    if (((int)t2 <= (int)0xFFFFF8E4) || ((int)t2 >= (int)0x71C)) {
        t1 = 0x38E;
        if ((int)t2 > 0) {
            t1 = 0xFFFFFC72;
        }
        *(unsigned int *)((a4 + 0x38)) = (((*(int *)((a4 + 0x38))) + t1) & 0xFFFF);
    }
    return t0;
}
