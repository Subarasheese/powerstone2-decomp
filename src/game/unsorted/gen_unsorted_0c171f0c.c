/* game/unsorted: functions 0C171F0C-0C172014, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o18_float { char p[0x18]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oD4_int { char p[0xD4]; int v; };
struct oE4_int { char p[0xE4]; int v; };
struct oF4_int { char p[0xF4]; int v; };
int FUN_0c171f0c(int a4);

int FUN_0c171f0c(int a4)
{

    register int R0;
    register int R2;
    register int R3;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    v0_0 = a4;
    v0_1 = (*(int *)(((((short)(signed char)v0_0 * (short)0x58) + 0xC475DC8) + 0x38))) == 0;
    v0_0 = ((((short)(signed char)v0_0 * (short)0x58) + 0xC475DC8));
    if (v0_1) goto L_C172010;
    if (((*(signed char *)((v0_0 + 0xB))) == 0)) goto L_C171FB8;
    v0_1 = (0x3938);
    v0_2 = (0xC532498);
    if (((*(signed char *)((0xA8 + (((short)(*(signed char *)((v0_0 + 0xC))) * (short)0x3938) + 0xC532498)))) == 0)) goto L_C171FC2;
    v0_3 = *(signed char *)((0xC2A5BE4 + (*(signed char *)((v0_0 + 0xB)))));
    R0 = (v0_3);
    v0_4 = (0xC2A5BE4);
    if ((v0_3 != 4)) goto L_C171F5A;
    (((struct oA4_uint *)((*(int *)((v0_0 + 0x38)))))->v) = (((((struct oD4_int *)((v0_2 + ((short)(*(signed char *)((v0_0 + 0xC))) * (short)v0_1))))->v)) + 0x28);
    L_C171FC2:;
    (((struct o28_float *)((*(int *)((v0_0 + 0x38)))))->v) = ((((struct o20_float *)(v0_0))->v));
    (((struct o2C_float *)((*(int *)((v0_0 + 0x38)))))->v) = ((((struct o24_float *)(v0_0))->v));
    (((struct o30_float *)((*(int *)((v0_0 + 0x38)))))->v) = ((((struct o28_float *)(v0_0))->v));
    *(unsigned int *)(((*(int *)((v0_0 + 0x38))) + 0x34)) = (*(int *)((v0_0 + 0x2C)));
    *(unsigned int *)(((*(int *)((v0_0 + 0x38))) + 0x38)) = (*(int *)((v0_0 + 0x30)));
    *(unsigned int *)(((*(int *)((v0_0 + 0x38))) + 0x3C)) = (*(int *)((v0_0 + 0x34)));
    (((struct o40_float *)((*(int *)((v0_0 + 0x38)))))->v) = ((((struct o18_float *)(v0_0))->v));
    (((struct o44_float *)((*(int *)((v0_0 + 0x38)))))->v) = ((((struct o18_float *)(v0_0))->v));
    (((struct o48_float *)((*(int *)((v0_0 + 0x38)))))->v) = ((((struct o18_float *)(v0_0))->v));
    R0 = (0x48);
    L_C172010:;
    return R0;
    L_C171F5A:;
    if ((R0 != 8)) goto L_C171F76;
    (((struct oA4_uint *)((*(int *)((v0_0 + 0x38)))))->v) = (((((struct oE4_int *)((v0_2 + ((short)(*(signed char *)((v0_0 + 0xC))) * (short)v0_1))))->v)) + 0x28);
    goto L_C171FC2;
    L_C171F76:;
    if (((*(signed char *)((v0_4 + (*(signed char *)((v0_0 + 0xB)))))) != 12)) goto L_C171F96;
    (((struct oA4_uint *)((*(int *)((v0_0 + 0x38)))))->v) = (((((struct oF4_int *)((v0_2 + ((short)(*(signed char *)((v0_0 + 0xC))) * (short)v0_1))))->v)) + 0x28);
    goto L_C171FC2;
    L_C171F96:;
    (((struct oA4_uint *)((*(int *)((v0_0 + 0x38)))))->v) = ((*(int *)((((*(signed char *)((v0_4 + (*(signed char *)((v0_0 + 0xB)))))) << 2) + ((((short)(*(signed char *)((v0_0 + 0xC))) * (short)v0_1) + v0_2) + 0xC4)))) + 0x28);
    goto L_C171FC2;
    L_C171FB8:;
    (((struct oA4_uint *)((*(int *)((v0_0 + 0x38)))))->v) = 0x0;
    goto L_C171FC2;
}
