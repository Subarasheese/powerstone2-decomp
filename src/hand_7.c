/* @runtime _quick_odd_mvn=0C187798 */
/* Hand-written C, slice 11 (large functions). */
typedef struct { int w[3]; } S12;
typedef struct { int w[4]; } S16;

int FUN_0c0582de(int a4, int a5);
int FUN_0c03744a(int a4, int a5, int a6, int a7);
int FUN_0c0588bc(int a4, int a5, int a6, int a7, int a8, int a9);
int FUN_0c058a6e(int a4, int a5, int a6, int a7, int a8, int a9);
int FUN_0c058b06(int a4, int a5, int a6);
int FUN_0c03f346(int a4);

void FUN_0c13b3e0(char *p)
{
    S12 tmp;
    int idx;
    int a;
    int b;
    tmp = *(S12 *)(0x0C2A1FD4 + 12 * p[2]);
    FUN_0c0582de((int)&tmp, *(int *)(0x0C532560 + p[1] * 14648) + 40);
    *(S12 *)(p + 40) = tmp;
    switch (p[20]) {
    case 0:
        p[20] = p[20] + 1;
        FUN_0c03744a(*(int *)(p + 196), 0, 10, ((int *)0x0C4B40FC)[p[1]]);
        FUN_0c03744a(*(int *)(p + 200), 1, 10, ((int *)0x0C4B40FC)[p[1]]);
        p[168] = 1;
        *(short *)(p + 172) = 15;
        **(char **)(p + 196) = 1;
        *(short *)(*(int *)(p + 196) + 6) = 543;
        *(S12 *)(*(int *)(p + 196) + 132) = *(S12 *)0x0C2A208C;
        *(S16 *)(*(int *)(p + 196) + 20) = *(S16 *)0x0C2A1FC4;
        **(char **)(p + 200) = 1;
        *(short *)(*(int *)(p + 200) + 6) = 543;
        *(S12 *)(*(int *)(p + 200) + 132) = *(S12 *)0x0C2A208C;
        *(S16 *)(*(int *)(p + 200) + 20) = *(S16 *)0x0C2A1FC4;
        tmp = *(S12 *)0x0C2A1F9C;
        ((float *)&tmp)[2] = ((float *)&tmp)[2] - 8.0f;
        FUN_0c058b06((int)p + 76, (int)p + 52, (int)&tmp);
        break;
    case 1:
        if (*(short *)(p + 28) <= 20)
            FUN_0c0588bc(*(int *)(p + 196) + 132, 0x0C2A208C + 12, 0x0C2A208C, *(short *)(p + 28), 20, 0);
        if (*(short *)(p + 28) >= 0 && *(short *)(p + 28) <= 20)
            FUN_0c058a6e(*(int *)(p + 196) + 20, 0x0C2A20A4 + 16, 0x0C2A20A4, *(short *)(p + 28), 20, 0);
        if (*(short *)(p + 28) > 20)
            *(float *)(*(int *)(p + 196) + 116) = *(float *)(*(int *)(p + 196) + 116) - 0.1f;
        FUN_0c0588bc(*(int *)(p + 200) + 132, 0x0C2A208C + 12, 0x0C2A208C, *(short *)(p + 28), 40, 0);
        *(float *)(*(int *)(p + 200) + 116) = *(float *)(*(int *)(p + 200) + 116) - 3.0f;
        if (*(short *)(p + 28) >= 32)
            FUN_0c058a6e(*(int *)(p + 200) + 20, 0x0C2A20A4 + 16, 0x0C2A20A4, *(short *)(p + 28), 40, 32);
        *(short *)(p + 28) = *(short *)(p + 28) + 1;
        if (*(short *)(p + 28) > 40)
            p[20] = p[20] + 1;
        break;
    default:
        FUN_0c03f346((int)p);
        break;
    }
}
