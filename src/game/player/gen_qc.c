/* Straight-line functions with calls and guards (batch gen_qc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
void FUN_0c0556c8(int a4, int a5, int a6, int a7, int a8, int a9);

/* manual: per-component (x,y,z) step of the vector at a6 toward the one at a5: mode 2 by (n[i]+1), mode 3 by (float)a9 from the
   reference at a7, mode 4 by (n[i]+1) from the reference at a7; a step that would overshoot sets the target; other modes copy 12 bytes;
   728 cases (280 dev+holdout run), 429 of 429 instructions */
void FUN_0c0556c8(int a4, int a5, int a6, int a7, int a8, int a9)
{
    int m = 0xF & a4;
    if (m == 2 || m == 3 || m == 4) {
        float *s = (float *)a5;
        float *t = (float *)a6;
        float *r = (float *)a7;
        int *n = (int *)a8;
        float dv = (float)a9;
        int i;
        for (i = 0; i < 3; i++) {
            float sv = s[i];
            float tv = t[i];
            float d = sv - tv;
            float ad = 0.0f > d ? -sv + tv : d;
            float num = d;
            float q, aq;
            if (m != 2) num = sv - r[i];
            if (m == 3) q = num / dv; else q = num / (float)(n[i] + 1);
            aq = 0.0f > q ? -q : q;
            if (ad > aq) t[i] = t[i] + num / (m == 3 ? dv : (float)(n[i] + 1));
            else t[i] = s[i];
        }
        return;
    }
    { struct mv3 { int w[3]; }; *(struct mv3 *)(a6) = *(struct mv3 *)(a5); }
}
