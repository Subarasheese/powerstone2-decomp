/* Straight-line functions with calls and guards (batch gen_oe): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o10_float { char p[0x10]; float v; };
struct o160_float { char p[0x160]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c05258e(int, int, int, int, int);
int FUN_0c0b4b20(void);
int FUN_0c0b507a(int, int, int);
float FUN_0c0b4b7a(int a4, int a5, float f4);

#define PL4B7A()  ((char *)0x0C532498 + *(signed char *)(a4 + 1) * 14648)
#define TB4B7A()  (*(char **)(0x0C25D654 + (FUN_0c0b4b20() << 2)))
/* manual: damage to guard gauge a5 of player a4[1], breaking parts, then to its life; returns the damage applied; 194 cases, 299 of 299 instructions */
float FUN_0c0b4b7a(int a4, int a5, float f4)
{
    char *p = PL4B7A();
    float *m = (float *)(p + 0x38F8);
    int i, n, hit = 1;

    m[3 + a5] = 90.0f;
    switch (a5) {
    case 0:
        i = 0;
        n = 1;
        if (*(signed char *)(p + 0x3715) == 32) {
            if (*(signed char *)(p + 0x3739) != 1)
                goto none;
            n = 3;
        }
        break;
    case 1:
        i = 0;
        n = 3;
        if (*(signed char *)(p + 0x3715) == 32) {
            n = *(signed char *)(p + 0x3739);
            if (n != 1 && n != 2)
                goto none;
            n++;
            i = 1;
            hit = 0;
            f4 = 0.0f;
            goto parts;
        }
        break;
    case 2:
        i = 1;
        n = 3;
        if (*(signed char *)(p + 0x3715) != 32 || *(signed char *)(p + 0x3739) != 1)
            goto none;
        break;
    default:
        goto life;
    }
    f4 *= *(float *)(TB4B7A() + (a5 << 4) + 4);
    m[a5] -= f4;
    if (m[a5] > 0.0f)
        goto life;
parts:
    for (; i < n; i++) {
        m[i] = *(float *)(TB4B7A() + (i << 4) + 8);
        m[3 + i] = 0.0f;
    }
    if (hit)
        FUN_0c0b507a((int)PL4B7A(), 0x20, *(int *)(TB4B7A() + (a5 << 4) + 12));
    goto life;
none:
    f4 = 0.0f;
life:
    *(float *)(p + 0x160) -= f4;
    if (!(*(float *)(p + 0x160) > 0.0f)) {
        *(float *)(p + 0x160) = 0.0f;
        FUN_0c05258e(2, 0x14, 0x100, 0x1E, 0);
        p = PL4B7A();
        if (*(signed char *)(p + 0x3715) != 32 || *(signed char *)(p + 0x3739) != 3)
            FUN_0c0b507a((int)PL4B7A(), 0x20, 3);
    }
    return f4;
}
