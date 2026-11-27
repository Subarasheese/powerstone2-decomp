/* Straight-line functions with calls and guards (batch gen_ts): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c12c5c6(int a4, int a5, int a6, int a7);

int FUN_0c12c5c6(int a4, int a5, int a6, int a7)
{

    register int R1;
    register int R2;
    register int R3;
    register int R12;
    register int R13;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register float w0_0;
    register float w0_1;
    v0_0 = a4;
    v0_3 = *(signed char *)((v0_0 + 0x14));
    v0_1 = (v0_3);
    v0_2 = (0xA);
    w0_0 = (0.100000001f);
    if ((v0_3 == 0)) goto L_C12C5E6;
    if ((v0_1 == 1)) goto L_C12C5F8;
    if ((v0_1 == 2)) goto L_C12C65C;
    if ((v0_1 == 3)) goto L_C12C6B2;
    return FUN_0c03f346(v0_0, v0_2, a6, a7);
    L_C12C6B2:;
    *(unsigned short *)((v0_0 + 0x1E)) = ((*(short *)((v0_0 + 0x1E))) + 0x12);
    v0_1 = (((struct oC4_int *)(v0_0))->v);
    (((struct o7C_uint *)(v0_1))->v) = (((((struct o7C_int *)(v0_1))->v)) + (*(short *)((v0_0 + 0x1E))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_0 + 0x28)) = *(struct mv3 *)(((*(int *)((v0_0 + 0x10))) + 0x28)); }
    w0_1 = (((struct o48_float *)(v0_0))->v);
    (((struct o48_float *)(v0_0))->v) = (w0_1 + w0_0);
    (((struct o44_float *)(v0_0))->v) = (w0_1 + w0_0);
    (((struct o40_float *)(v0_0))->v) = (w0_1 + w0_0);
    w0_1 = (((struct oBC_float *)(v0_0))->v);
    (((struct oBC_float *)(v0_0))->v) = (w0_1 - w0_0);
    (((struct oB8_float *)(v0_0))->v) = (w0_1 - w0_0);
    (((struct oB4_float *)(v0_0))->v) = (w0_1 - w0_0);
    v0_2 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_2 - 1);
    v0_1 = ((short)(v0_2 - 1));
    if (((short)(v0_2 - 1) != 0)) goto L_C12C712;
    L_C12C702:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    v0_1 = (0x14);
    L_C12C712:;
    return v0_1;
    L_C12C65C:;
    *(unsigned short *)((v0_0 + 0x1E)) = ((*(short *)((v0_0 + 0x1E))) + 0x12);
    v0_1 = (((struct oC4_int *)(v0_0))->v);
    (((struct o7C_uint *)(v0_1))->v) = (((((struct o7C_int *)(v0_1))->v)) + (*(short *)((v0_0 + 0x1E))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_0 + 0x28)) = *(struct mv3 *)(((*(int *)((v0_0 + 0x10))) + 0x28)); }
    v0_1 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_1 - 1);
    if (((short)(v0_1 - 1) == 0)) goto L_C12C696;
    v0_3 = *(signed char *)((0x3715 + (*(int *)((v0_0 + 0x10)))));
    v0_1 = (v0_3);
    if ((v0_3 == 26)) goto L_C12C712;
    L_C12C696:;
    (((struct oAC_ushort *)(v0_0))->v) = 0x21F;
    (((struct oBC_float *)(v0_0))->v) = 1.0f;
    (((struct oB8_float *)(v0_0))->v) = 1.0f;
    (((struct oB4_float *)(v0_0))->v) = 1.0f;
    v0_1 = (v0_2);
    L_C12C6AE:;
    *(unsigned short *)((v0_0 + 0x1C)) = v0_1;
    goto L_C12C702;
    L_C12C5F8:;
    *(unsigned short *)((v0_0 + 0x1E)) = ((*(short *)((v0_0 + 0x1E))) + 0x12);
    v0_1 = (((struct oC4_int *)(v0_0))->v);
    (((struct o7C_uint *)(v0_1))->v) = (((((struct o7C_int *)(v0_1))->v)) + (*(short *)((v0_0 + 0x1E))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((v0_0 + 0x28)) = *(struct mv3 *)(((*(int *)((v0_0 + 0x10))) + 0x28)); }
    w0_1 = (((struct o48_float *)(v0_0))->v);
    (((struct o48_float *)(v0_0))->v) = (w0_1 + w0_0);
    (((struct o44_float *)(v0_0))->v) = (w0_1 + w0_0);
    (((struct o40_float *)(v0_0))->v) = (w0_1 + w0_0);
    v0_2 = *(short *)((v0_0 + 0x1C));
    *(unsigned short *)((v0_0 + 0x1C)) = (v0_2 - 1);
    v0_1 = ((short)(v0_2 - 1));
    if (((short)(v0_2 - 1) != 0)) goto L_C12C712;
    v0_1 = (0x64);
    goto L_C12C6AE;
    L_C12C5E6:;
    *(unsigned short *)((v0_0 + 0x1E)) = 0x0;
    *(unsigned short *)((v0_0 + 0x1C)) = v0_2;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    goto L_C12C5F8;
}
