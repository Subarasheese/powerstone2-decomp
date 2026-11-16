/* @runtime _quick_odd_mvn=0C187798 */
/* Hand-written C, slice 10. */
typedef struct { int w[3]; } S12;
typedef struct { int w[4]; } S16;
typedef struct { float x, y, z; } V12;

int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c064f80(int);
int FUN_0c058716(int, int);
int FUN_0c058542(int, float);
int FUN_0c150010(int, float, float, float, float);
int FUN_0c17c130(int, int, int);
int FUN_0c03f346(int);
int FUN_0c163f66(int, int);

void FUN_0c163f9e(int a4)
{
    int e = a4;
    int p = 0x0C532498 + ((signed char)*(char *)(e + 1)) * 14648;
    int *k = (int *)0x0C4B40CC;
    int s = (int)*(signed char *)(e + 20);

    if (s == 0) {
        int r;
        V12 v;
        *(char *)(e + 20) = *(char *)(e + 20) + 1;
        *(char *)(e + 168) = 1;
        *(short *)(e + 172) = 15;
        *(S12 *)(e + 64) = *(S12 *)0x0C2A303C;
        FUN_0c03744a(*(int *)(e + 196), 0, 54, *k);
        FUN_0c03744a(*(int *)(e + 200), 0, 54, *k);
        FUN_0c03744a(*(int *)(e + 204), 1, 54, *k);
        FUN_0c03744a(*(int *)(e + 208), 4, 54, *k);
        *(short *)(*(int *)(e + 196) + 6) = 575;
        *(S12 *)(*(int *)(e + 196) + 132) = *(S12 *)0x0C2A3144;
        *(S16 *)(*(int *)(e + 196) + 20) = *(S16 *)0x0C2A3124;
        *(short *)(*(int *)(e + 200) + 6) = 575;
        *(S12 *)(*(int *)(e + 200) + 132) = *(S12 *)0x0C2A3144;
        *(S16 *)(*(int *)(e + 200) + 20) = *(S16 *)0x0C2A3124;
        *(short *)(*(int *)(e + 204) + 6) = 575;
        *(S12 *)(*(int *)(e + 204) + 132) = *(S12 *)0x0C2A3144;
        *(S16 *)(*(int *)(e + 204) + 20) = *(S16 *)0x0C2A3058;
        *(short *)(*(int *)(e + 208) + 6) = 575;
        *(S12 *)(*(int *)(e + 208) + 132) = *(S12 *)0x0C2A3144;
        *(S16 *)(*(int *)(e + 208) + 20) = *(S16 *)0x0C2A3134;
        if (FUN_0c064f80(p) == 0) {
            *(S12 *)&v = *(S12 *)(p + 0x380C);
            v.y = v.y + 100.0f;
            r = FUN_0c058716(e, (int)&v);
            if (r > 0x4000)
                r = 0;
            else if (r > 0x38E3)
                r = 0x38E3;
            else if (r < 0)
                r = 0;
            *(int *)(e + 52) = r;
        }
        FUN_0c058542(e, 20.0f);
        s = 1;
    }
    if (s == 1) {
        if (*(char *)(e + 305) != 0 || *(char *)(e + 306) != 0) {
            *(char *)(e + 20) = 2;
            return;
        }
        if (*(int *)(e + 1028) != 0) {
            FUN_0c150010(e + 40, 1.0f, 1.0f, 1.0f, 1.0f);
            *(char *)(e + 20) = 2;
            return;
        }
        {
            int *g = (int *)0x0C2A3180;
            if (*(short *)(e + 28) <= g[1]) {
                FUN_0c0588bc(*(int *)(e + 196) + 132, 0x0C2A3144 + 12, 0x0C2A3144, *(short *)(e + 28), g[1], 0);
                FUN_0c0588bc(*(int *)(e + 200) + 132, 0x0C2A3144 + 24, 0x0C2A3144, *(short *)(e + 28), g[1], 0);
                FUN_0c0588bc(*(int *)(e + 204) + 132, 0x0C2A3144 + 36, 0x0C2A3144, *(short *)(e + 28), g[1], 0);
                FUN_0c0588bc(*(int *)(e + 208) + 132, 0x0C2A3144 + 48, 0x0C2A3144, *(short *)(e + 28), g[1], 0);
            }
            if (*(short *)(e + 28) % g[2] == 0)
                FUN_0c163f66(e + 40, *(signed char *)(e + 2));
            *(int *)(*(int *)(e + 196) + 128) += 1024;
            *(int *)(*(int *)(e + 200) + 128) -= 1024;
            *(int *)(*(int *)(e + 204) + 128) += 2048;
            *(int *)(*(int *)(e + 208) + 128) += 2048;
            FUN_0c17c130(e + 40, e + 40, e + 76);
            *(short *)(e + 28) = *(short *)(e + 28) + 1;
            if (*(short *)(e + 28) > g[0])
                *(char *)(e + 20) = 2;
        }
    } else if (s == 2) {
        FUN_0c03f346(e);
    }
}
