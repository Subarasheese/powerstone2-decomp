/* game/unsorted: functions 0C13A044-0C13A332, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c03f444(int, int, int);
int FUN_0c13a044(int a4);

#define ANG(v) ((int)((float)(v) * 65536.0f / 360.0f + 0.5f) & 0xFFFF)

/* manual: 0C2A1E44 holds six angles in degrees and six floats; expands them into the 12-entry tables at 0C2A1CD8 (fixed
   multiples of the first three angles) and 0C2A1D98 (the other three angles, spread 5/4/3), copies the floats the same way
   to 0C2A1D08 and 0C2A1D38, then adds task FUN_0c139d98; 56 cases, 375 of 375 instructions */
int FUN_0c13a044(int a4)
{
    int *in = (int *)0xC2A1E44;
    int *out = (int *)0xC2A1CD8;
    int i, k, v, x, t;

    for (i = 0; i < 12; i++) {
        if ((i & 7) == 2) {
            out[i] = 0;
            continue;
        }
        if (i < 5)
            v = in[0] * (i - 2);
        else if (i < 9) {
            x = in[1];
            v = i < 7 ? x / 2 - x * (7 - i) : x * (i - 6) - x / 2;
        } else
            v = in[2] * (i - 10);
        out[i] = ANG(v);
    }
    for (k = 0; k < 3; k++)
        for (i = 0; i < 12; i++) {
            t = (i >= 5) + (i >= 9);
            if (k == 0)
                out[48 + i] = ANG(in[3 + t]);
            else
                ((float *)out)[12 * k + i] = ((float *)in)[3 + 3 * k + t];
        }
    t = FUN_0c03f444(5, 0, 1);
    if (t != 0) {
        v = *(signed char *)(a4 + 1);
        *(unsigned char *)(t + 1) = v;
        *(unsigned int *)(t + 4) = 0xC139D98;
        return v;
    }
    return t;
}
