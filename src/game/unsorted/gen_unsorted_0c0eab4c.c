/* game/unsorted: functions 0C0EAB4C-0C0EAC36, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o132_uchar { char p[0x132]; unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o4C_float { char p[0x4C]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03f346(int, int, int, int);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c0eab4c(int a4, int a5, int a6, int a7);

int FUN_0c0eab4c(int a4, int a5, int a6, int a7)
{

    register int R1;
    register int R2;
    register int R5;
    register float F2;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    v0_0 = a4;
    v0_3 = *(signed char *)((v0_0 + 0x14));
    v0_2 = (v0_3);
    v0_1 = (v0_0);
    v0_0 = (0x0);
    if ((v0_3 == 0)) goto L_C0EAB64;
    if ((v0_2 == 1)) goto L_C0EABA4;
    return FUN_0c03f346(v0_1, R5, a6, a7);
    L_C0EABA4:;
    if (((*(short *)((v0_1 + 0x1C))) == 0)) goto L_C0EABC6;
    *(unsigned short *)((v0_1 + 0x1C)) = ((*(short *)((v0_1 + 0x1C))) - 1);
    (((struct o6C_float *)(((((struct oC4_int *)(v0_1))->v))))->v) = (((((struct o4C_float *)(v0_1))->v)) + -24.0f);
    L_C0EABD2:;
    if (((*(short *)((v0_1 + 0x1C))) != 0)) goto L_C0EABDC;
    v0_2 = (0xFFFFFFEF);
    L_C0EABDE:;
    (((struct o12C_ushort *)(v0_1))->v) = v0_2;
    v0_2 = (0x132);
    if (((*(signed char *)((v0_1 + 0x132))) == 0)) goto L_C0EAC0C;
    v0_3 = *(short *)((v0_1 + 0x1C));
    v0_2 = (v0_3);
    if ((v0_3 != 0)) goto L_C0EAC0C;
    (((struct o132_uchar *)(v0_1))->v) = v0_0;
    *(unsigned short *)((v0_1 + 0x1C)) = 0x1E;
    (((struct o15_uchar *)(v0_1))->v) = ((*(signed char *)((v0_1 + 0x15))) ^ 0x1);
    v0_2 = ((thunk_FUN_0c05abb2(0x46, (v0_1 + 0x28))));
    L_C0EAC0C:;
    v0_3 = *(signed char *)0xC54098D;
    v0_0 = (v0_3);
    if (((int)v0_3 < (int)0x8)) goto L_C0EAC30;
    v0_2 = (0xE);
    if (((int)v0_0 > (int)0xE)) goto L_C0EAC30;
    (((struct o14_uchar *)(v0_1))->v) = ((*(signed char *)((v0_1 + 0x14))) + 0x1);
    v0_2 = (0x14);
    L_C0EAC30:;
    return v0_2;
    L_C0EABDC:;
    v0_2 = (0x0);
    goto L_C0EABDE;
    L_C0EABC6:;
    (((struct o6C_float *)(((((struct oC4_int *)(v0_1))->v))))->v) = ((((struct o4C_float *)(v0_1))->v));
    goto L_C0EABD2;
    L_C0EAB64:;
    (((struct o14_uchar *)(v0_1))->v) = ((*(signed char *)((v0_1 + 0x14))) + 0x1);
    (((struct oAC_ushort *)(v0_1))->v) = 0x1;
    (((struct oA8_uchar *)(v0_1))->v) = 0x1;
    v0_2 = (0x1B);
    if (((int)(*(signed char *)((v0_1 + 0x1B))) < 0)) goto L_C0EAB8E;
    (((struct oA4_uint *)(v0_1))->v) = ((*(int *)((((*(signed char *)((v0_1 + v0_2))) << 2) + 0xC540D94))) + 0x64);
    L_C0EAB8E:;
    *(unsigned short *)((v0_1 + 0x1C)) = v0_0;
    (((struct o4C_float *)(v0_1))->v) = ((((struct o6C_float *)(((((struct oC4_int *)(v0_1))->v))))->v));
    (((struct o12E_ushort *)(v0_1))->v) = v0_0;
    goto L_C0EABA4;
}
