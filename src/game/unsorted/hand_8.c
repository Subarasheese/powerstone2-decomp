/* @runtime _quick_odd_mvn=0C187798 */
/* Hand-written C, agent 8: large functions. */
typedef struct { int w[3]; } S12;
typedef struct { int w[4]; } S16;

int nlRand(void);
int FUN_0c03744a(int a4, int a5, int a6, int a7);
float math_sin_angle16(int a4);
float math_cos_angle16(int a4);
int math_atan2_angle16(float a4, float a5);
float math_signed_sqrt(float a4);
int FUN_0c0588bc(int a4, int a5, int a6, int a7, int a8, int a9);
int FUN_0c058a6e(int a4, int a5, int a6, int a7, int a8, int a9);
int FUN_0c145d1c(int a4, int a5);
int FUN_0c03f346(int a4);

/* A burst effect object: state 0 sets it up with a random direction, state 1 runs it. */
void FUN_0c1460cc(int a4)
{
    char *p = (char *)a4;
    int *cfg = (int *)0x0C2A245C;
    char *o;
    int ang;
    float rad;
    float v[3];
    int fr;

    if (p[20] == 0) {
        p[20] = p[20] + 1;
        p[0xA8] = 1;
        *(short *)(p + 0xAC) = 31;
        *(S12 *)(p + 64) = *(S12 *)0x0C2A2444;
        p[0xA9] = 33;
        FUN_0c03744a(*(int *)(p + 196), nlRand() % 2 + 1, 12,
                     *(int *)(0x0C4B40E0 + p[2] * 8));
        o = (char *)*(int *)(p + 196);
        *(short *)(o + 6) = 0x20F;
        *(S12 *)(o + 132) = *(S12 *)0x0C2A2394;
        *(S16 *)(*(int *)(p + 196) + 20) = *(S16 *)0x0C2A23BC;
        ang = (int)((float)(nlRand() % cfg[6]) * 360.0f / (float)cfg[6] * 65536.0f / 360.0f + 0.5f) & 0xFFFF;
        rad = *(float *)0x0C2A2478 + *(float *)0x0C2A247C * (float)(nlRand() % cfg[5]);
        *(float *)(*(int *)(p + 196) + 108) = math_sin_angle16(ang) * rad;
        *(float *)(*(int *)(p + 196) + 112) = math_cos_angle16(ang) * rad;
        *(float *)(*(int *)(p + 196) + 116) = *(float *)0x0C2A2480;
        *(S12 *)v = *(S12 *)(*(int *)(p + 196) + 108);
        if (v[0] == 0.0f)
            v[0] = 1.0e-6f;
        *(int *)(*(int *)(p + 196) + 128) = math_atan2_angle16(v[1], v[0]) & 0xFFFF;
        *(int *)(*(int *)(p + 196) + 128) += 0xC000;
        *(int *)(*(int *)(p + 196) + 128) &= 0xFFFF;
        {
            float s = math_signed_sqrt(v[1] * v[1] + v[0] * v[0]);
            if (s == 0.0f)
                s = 1.0e-6f;
            *(int *)(*(int *)(p + 196) + 120) = math_atan2_angle16(v[2], s) & 0xFFFF;
        }
    } else if (p[20] != 1) {
        FUN_0c03f346(a4);
        return;
    }
    *(int *)(*(int *)(p + 196) + 128) += *(int *)0x0C2A2484;
    fr = *(short *)(p + 28);
    if (fr >= cfg[1] && fr <= cfg[2])
        FUN_0c0588bc(a4 + 64, 0x0C2A2450, 0x0C2A2444, *(short *)(p + 28), cfg[2], cfg[1]);
    fr = *(short *)(p + 28);
    if (fr >= cfg[3] && fr <= cfg[4])
        FUN_0c058a6e(*(int *)(p + 196) + 20, 0x0C2A23AC, 0x0C2A23BC, *(short *)(p + 28), cfg[4], cfg[3]);
    *(unsigned short *)(*(int *)(p + 196) + 6) |= 0x1000;
    FUN_0c145d1c(a4, *(int *)(p + 196));
    *(short *)(p + 28) = *(short *)(p + 28) + 1;
    if (*(short *)(p + 28) > cfg[0])
        p[20] = p[20] + 1;
}
