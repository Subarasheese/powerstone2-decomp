/* Straight-line functions with calls and guards (batch gen_pu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

/* manual: mode 1 copies a vec3; modes 2-4 move each of x,y,z of a6 toward a5 by (a5-ref)/div, or snap to a5 when |a5-a6| <= |step| (ref = a6 for mode 2, a7 for 3-4; div = a9 for mode 3, a8[i]+1 else); 59 cases, 412 of 429 instructions */
void FUN_0c055368(int a4, int a5, int a6, int a7, int a8, int a9);

void FUN_0c055368(int a4, int a5, int a6, int a7, int a8, int a9)
{
    float *s = (float *)a5;
    float *d = (float *)a6;
    float *r = (float *)a7;
    int *c = (int *)a8;
    int m = a4 & 15;
    int i;
    float dv;
    float diff;
    float ad;
    float q;
    float aq;

    if (m == 1) {
        struct mv3 { int w[3]; };
        *(struct mv3 *)d = *(struct mv3 *)s;
        return;
    }
    if (m < 2 || m > 4) return;
    if (m == 2) r = d;
    for (i = 0; i < 3; i++) {
        diff = s[i] - d[i];
        if (0.0f > diff) ad = -s[i] + d[i]; else ad = diff;
        if (m == 3) dv = (float)a9; else dv = (float)(c[i] + 1);
        q = (s[i] - r[i]) / dv;
        if (0.0f > q) aq = -q; else aq = q;
        if (ad > aq) d[i] = d[i] + (s[i] - r[i]) / dv;
        else d[i] = s[i];
    }
}
