/* Straight-line functions with calls and guards (batch gen_afh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
int FUN_0c0601da(int a4, int a5);

int FUN_0c0601da(int a4, int a5)
{

    register float F2;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register float w0_0;
    register float w0_1;
    v0_0 = a4;
    v0_1 = a5;
    v0_3 = *(signed char *)((v0_1 + 0x1));
    v0_2 = (v0_3);
    if ((v0_3 == 0)) goto L_C0601EC;
    if ((v0_2 == 1)) goto L_C06022C;
    if ((v0_2 == 2)) goto L_C06024E;
    L_C0601EC:;
    w0_1 = *(float *)((v0_0 + 0x0));
    w0_0 = (w0_1);
    if ((((((struct o4_float *)(v0_0))->v)) > w0_1)) goto L_C060204;
    if ((((((struct o8_float *)(v0_0))->v)) > w0_0)) goto L_C060204;
    v0_2 = (0x14);
    w0_0 = ((*(float *)((v0_0 + 0x0))));
    L_C060274:;
    *(float *)((v0_1 + v0_2)) = ((*(float *)((v0_1 + v0_2))) * w0_0);
    L_C06027A:;
    return v0_2;
    L_C060204:;
    w0_1 = (((struct o8_float *)(v0_0))->v);
    w0_0 = (w0_1);
    if (((*(float *)((v0_0 + 0x0))) > w0_1)) goto L_C06021C;
    if ((((((struct o4_float *)(v0_0))->v)) > w0_0)) goto L_C06021C;
    v0_2 = (0x14);
    v0_3 = (0x8);
    L_C060220:;
    *(float *)((v0_1 + v0_2)) = ((*(float *)((v0_1 + v0_2))) * (*(float *)(((v0_3 + v0_0) + 0x0))));
    goto L_C06027A;
    L_C06021C:;
    v0_2 = (0x14);
    v0_3 = (0x4);
    goto L_C060220;
    L_C06024E:;
    if ((((((struct o8_float *)(v0_0))->v)) > (*(float *)((v0_0 + 0x0))))) goto L_C06025E;
    v0_2 = (0x14);
    w0_0 = ((*(float *)((v0_0 + 0x0))));
    L_C060266:;
    *(float *)((v0_1 + v0_2)) = ((*(float *)((v0_1 + v0_2))) * w0_0);
    v0_2 = (0x18);
    w0_0 = (((((struct o4_float *)(v0_0))->v)));
    goto L_C060274;
    L_C06025E:;
    v0_2 = (0x14);
    w0_0 = (((((struct o8_float *)(v0_0))->v)));
    goto L_C060266;
    L_C06022C:;
    (((struct o14_float *)(v0_1))->v) = (((((struct o14_float *)(v0_1))->v)) * (*(float *)((v0_0 + 0x0))));
    (((struct o18_float *)(v0_1))->v) = (((((struct o18_float *)(v0_1))->v)) * ((((struct o4_float *)(v0_0))->v)));
    v0_2 = (0x1C);
    w0_0 = (((((struct o8_float *)(v0_0))->v)));
    goto L_C060274;
}
