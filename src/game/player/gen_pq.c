/* Straight-line functions with calls and guards (batch gen_pq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o114_int { char p[0x114]; int v; };
struct o68_int { char p[0x68]; int v; };
struct o6C_int { char p[0x6C]; int v; };
struct o88_float { char p[0x88]; float v; };
struct o90_float { char p[0x90]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct oC0_int { char p[0xC0]; int v; };
int FUN_0c037ec0(int, int);
int FUN_0c037f40(int, int);
int FUN_0c037f80(int, int);
int math_angle3_delta_scaled(int, int, int, float);
int math_vec3_sub_scaled(int, int, int, float);
int math_vec3i_add(int, int, int);
int nlAddVector3op(int, int, int);
int FUN_0c038024(int a4);

/* manual: blend a list of models between two key frames (position, angle, scale of each model, then of each of its parts);
   94 cases, 389 of 389 instructions */
int FUN_0c038024(int a4)
{
    int stk[14];        /* 0: stream of key B, 1: of key A, 2: angle B, 5: angle A, 8: vector B, 11: vector A */
    int i, j, k, last, run, flag, e, base, off, dst;
    int *pb;
    float w, d;

    for (i = 0; i < *(int *)(a4 + 0x114); i++) {
        e = *(int *)(a4 + 0x118 + i * 4);
        *(volatile signed char *)(e + 0x7E);
        flag = *(signed char *)(e + 0x7C);
        d = *(float *)(e + 0x98);
        if (!(d > 0.0f))
            d = *(float *)(e + 0x90);
        w = (*(float *)(e + 0x98) - *(float *)(e + 0x94)) / d;
        off = flag ? 18 : 6;
        stk[1] = *(int *)(e + 0x68) + off;
        stk[0] = *(int *)(e + 0x6C) + off;
        base = e;
        pb = &base;
        off = 0;
        k = 0;
        last = flag ? 3 : 2;
        run = flag || i == 0;
        for (j = 0;;) {
            for (; k < last; k++) {
                if (!run) {
                    stk[1] += 6;
                    stk[0] += 6;
                } else if (k == 1) {
                    FUN_0c037ec0((int)&stk[5], (int)&stk[1]);
                    FUN_0c037ec0((int)&stk[2], (int)&stk[0]);
                    math_angle3_delta_scaled(*pb + off + 12, (int)&stk[5], (int)&stk[2], w);
                    dst = *pb + off + 12;
                    math_vec3i_add(dst, dst, (int)&stk[2]);
                } else {
                    int (*load)(int, int) = k ? FUN_0c037f80 : FUN_0c037f40;

                    load((int)&stk[11], (int)&stk[1]);
                    load((int)&stk[8], (int)&stk[0]);
                    if (off + k == 0) {
                        *(float *)&stk[12] *= *(float *)(e + 0x88);
                        *(float *)&stk[9] *= *(float *)(e + 0x88);
                    }
                    dst = *pb + off + k * 12;
                    math_vec3_sub_scaled(dst, (int)&stk[8], (int)&stk[11], w);
                    nlAddVector3op(dst, dst, (int)&stk[8]);
                }
            }
            if (!(j < *(int *)(a4 + 0xC0)))
                break;
            pb = (int *)(a4 + 0xC4) + j;
            j++;
            off = 0x6C;
            if (flag) {
                base = *pb;
                pb = &base;
                k = 0;
            } else {
                run = i == *(signed char *)(*pb + 2);
                k = 1;
            }
        }
    }
    return 0x114;
}
