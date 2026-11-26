/* Straight-line functions with calls and guards (batch gen_ll): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct vec3_0c15b00c { float x, y, z; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c15af80(struct vec3_0c15b00c *, struct vec3_0c15b00c *, struct vec3_0c15b00c *);
float math_cos_angle16(int);
float math_sin_angle16(int);
int math_vec3_accumulate(int, int);
int nlRand(void);
struct word_0c15b00c { float f; };
int FUN_0c15b00c(int a4, int a5, int a6, int a7);

/* manual: states 0 and 1 (byte a4+0x14) of an emitter: every period (0C2A2AD0) frames, and once at start, call FUN_0c15af80 at a
   random point around a4's position; counts frames at a4+0x1C up to 0C2A2ACC. Other states: FUN_0c03f346. The two spawn copies of
   the original are one loop; 138 cases, 357 of 357 instructions */
int FUN_0c15b00c(int a4, int a5, int a6, int a7)
{
    int angle[3];
    struct vec3_0c15b00c pos, vel, acc;
    int state, i, n, t;
    float speed, r;
    struct word_0c15b00c s;

    state = *(signed char *)(a4 + 0x14);
    if (state != 0 && state != 1) return FUN_0c03f346(a4, a5, a6, a7);
    for (; state < 2; state++) {
        if (state == 0) {
            *(char *)(a4 + 0x14) = *(signed char *)(a4 + 0x14) + 1;
        } else {
            n = *(int *)0x0C2A2AD0;
            if (*(short *)(a4 + 0x1C) % n != n - 1) break;
        }
        for (i = 0; i < 3; i++) angle[i] = (nlRand() % 16) << 12;
        speed = *(float *)0x0C2A2AF8;
        n = nlRand() % *(int *)0x0C2A2AD4;
        r = speed * (float)n / (float)*(int *)0x0C2A2AD4 / 2.0f;
        speed = math_cos_angle16(angle[0]);
        pos.x = *(float *)(a4 + 0x28) + r * speed;
        speed = math_sin_angle16(angle[1]);
        pos.y = *(float *)(a4 + 0x2C) + r * speed;
        s.f = math_sin_angle16(angle[2]);
        speed = *(float *)0x0C2A2AF8;
        n = ((int (*)(struct word_0c15b00c))nlRand)(s) % *(int *)0x0C2A2AD4;     /* the original has the sine pushed here */
        pos.z = *(float *)(a4 + 0x30) + speed * (float)n / (float)*(int *)0x0C2A2AD4 * s.f;
        vel.x = 0.0f;
        vel.y = 0.0f;
        vel.z = 0.0f;
        acc = vel;
        FUN_0c15af80(&pos, &vel, &acc);
    }
    math_vec3_accumulate(a4 + 0x28, a4 + 0x4C);
    t = *(short *)(a4 + 0x1C);
    if (t == *(int *)0x0C2A2ACC) {
        *(char *)(a4 + 0x14) = *(signed char *)(a4 + 0x14) + 1;
        return 0x14;
    }
    *(short *)(a4 + 0x1C) = t + 1;
    return t + 1;
}
