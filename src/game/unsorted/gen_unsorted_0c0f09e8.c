/* game/unsorted: functions 0C0F09E8-0C0F0AB8, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c0f09e8(int a4, int a5, int a6, int a7);

int FUN_0c0f09e8(int a4, int a5, int a6, int a7)
{

    register int R1;
    register int R2;
    register int R3;
    register float F2;
    register float F3;
    register int T_;
    register int FPUL_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register float w0_0;
    v0_1 = a4;
    v0_3 = *(signed char *)((v0_1 + 0x14));
    v0_2 = (v0_3);
    v0_0 = (((((struct oC4_int *)(v0_1))->v)));
    w0_0 = (1.0f);
    if ((v0_3 == 0)) goto L_C0F09FE;
    if ((v0_2 == 1)) goto L_C0F0A24;
    return FUN_0c03f346(v0_1, v0_0, a6, a7);
    L_C0F0A24:;
    v0_3 = *(signed char *)((v0_1 + 0x15));
    v0_2 = (v0_3);
    if ((v0_3 == 0)) goto L_C0F0A38;
    if ((v0_2 == 1)) goto L_C0F0A44;
    if (!((v0_2 == 2))) goto L_C0F0AB4;
    v0_2 = *(short *)((v0_1 + 0x1E));
    *(unsigned short *)((v0_1 + 0x1E)) = (v0_2 - 1);
    if (((int)(short)(v0_2 - 1) > 0)) goto L_C0F0A8E;
    (((struct o14_uchar *)(v0_1))->v) = ((*(signed char *)((v0_1 + 0x14))) + 0x1);
    goto L_C0F0A8E;
    L_C0F0AB4:;
    return v0_2;
    L_C0F0A8E:;
    (((struct o88_float *)(v0_0))->v) = (((((struct o88_float *)(v0_0))->v)) - w0_0);
    (((struct o8C_float *)(v0_0))->v) = (((((struct o8C_float *)(v0_0))->v)) + 0.200000003f);
    FPUL_ = (0x3E4CCCCD);
    L_C0F0AA4:;
    (((struct o84_float *)(v0_0))->v) = ((((struct o8C_float *)(v0_0))->v));
    v0_2 = (0x84);
    goto L_C0F0AB4;
    L_C0F0A44:;
    v0_2 = *(short *)((v0_1 + 0x1E));
    *(unsigned short *)((v0_1 + 0x1E)) = (v0_2 - 1);
    if (((int)(short)(v0_2 - 1) > 0)) goto L_C0F0A5C;
    (((struct o15_uchar *)(v0_1))->v) = ((*(signed char *)((v0_1 + 0x15))) + 0x1);
    *(unsigned short *)((v0_1 + 0x1E)) = 0xA;
    L_C0F0A5C:;
    (((struct o88_float *)(v0_0))->v) = (((((struct o88_float *)(v0_0))->v)) + 0.5f);
    w0_0 = (((struct o8C_float *)(v0_0))->v);
    (((struct o8C_float *)(v0_0))->v) = (w0_0 + 0.100000001f);
    w0_0 = ((w0_0 + 0.100000001f));
    FPUL_ = (0x3DCCCCCD);
    goto L_C0F0AA4;
    L_C0F0A38:;
    (((struct o15_uchar *)(v0_1))->v) = ((*(signed char *)((v0_1 + 0x15))) + 0x1);
    *(unsigned short *)((v0_1 + 0x1E)) = 0x14;
    goto L_C0F0A44;
    L_C0F09FE:;
    (((struct o14_uchar *)(v0_1))->v) = ((*(signed char *)((v0_1 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(v0_1))->v) = 0x1;
    (((struct o2C_float *)(v0_1))->v) = 8000.0f;
    *(unsigned short *)((v0_0 + 0x6)) = 0x21F;
    (((struct o18_float *)(v0_0))->v) = w0_0;
    (((struct o1C_float *)(v0_0))->v) = w0_0;
    (((struct o20_float *)(v0_0))->v) = w0_0;
    goto L_C0F0A24;
}
