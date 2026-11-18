/* Straight-line functions with calls and guards (batch gen_k): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_short { short v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o0_ushort { unsigned short v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o14_int { char p[0x14]; int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_int { char p[0x1C]; int v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o44_int { char p[0x44]; int v; };
struct o44_uint { char p[0x44]; unsigned int v; };
struct o48_int { char p[0x48]; int v; };
struct o48_short { char p[0x48]; short v; };
struct o48_ushort { char p[0x48]; unsigned short v; };
struct o4A_ushort { char p[0x4A]; unsigned short v; };
struct o5_uchar { char p[0x5]; unsigned char v; };
struct o50_ushort { char p[0x50]; unsigned short v; };
struct o52_short { char p[0x52]; short v; };
struct o52_ushort { char p[0x52]; unsigned short v; };
struct o6_uchar { char p[0x6]; unsigned char v; };
struct o7_uchar { char p[0x7]; unsigned char v; };
struct o74_int { char p[0x74]; int v; };
struct o7C_int { char p[0x7C]; int v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uchar { char p[0x8]; unsigned char v; };
struct o9_uchar { char p[0x9]; unsigned char v; };
struct oB_uchar { char p[0xB]; unsigned char v; };
struct oB0_short { char p[0xB0]; short v; };
struct oB2_short { char p[0xB2]; short v; };
struct oC_uchar { char p[0xC]; unsigned char v; };
struct oD0_int { char p[0xD0]; int v; };
struct oDB_uchar { char p[0xDB]; unsigned char v; };
struct oE_uchar { char p[0xE]; unsigned char v; };
int FUN_0c103e50(int, int, int, int);
int FUN_0c1772e0(int, int);
int FUN_0c180d72(int);
int FUN_0c187a88(int, int, int);
extern int FUN_0c18d1fa();
int FUN_0c18d2c2(int, int, int, int);
int FUN_0c18dae8(int, int, int);
int FUN_0c18dcf2(int, int);
int FUN_0c18dd06(int, int);
int FUN_0c2be46c(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c2bf4d2(int, int, int);
int FUN_0c2c1ae8(int, int, int, int, int, int);
int FUN_0c2cef80(int, int);
int FUN_0c2d0e72(void);
int FUN_0c2d578e(void);
int FUN_0c2d58b2(int, int);
int FUN_0c2d63b6(void);
int FUN_0c2d63be(void);
int FUN_0c2d63c8(void);
int FUN_0c2d6424(void);
int FUN_0c2d6442(void);
int FUN_0c2d6458(void);
int FUN_0c2d6624(void);
int FUN_0c2d7612(int);
int FUN_0c2d7750(void);
int FUN_0c2d7778(int);
int FUN_0c2d779a(int);
int FUN_0c2d77bc(int);
int FUN_0c2d77de(int);
int FUN_0c2d7800(int);
int FUN_0c2d788c(void);
int FUN_0c2d7894(void);
int FUN_0c2e380e(void);
int FUN_0c2e38c2(void);
int FUN_0c2e3dca(void);
int FUN_0c2e4736(int, int, int, int, int, int);
int FUN_0c2e7790(void);
int FUN_0c2e83ae(void);
int FUN_0c2ec430(int);
int FUN_0c2ed220(int, int, int, int);
int FUN_0c2ed43a(int);
int FUN_0c2ed9a0(int, int, int, int, int, int);
int FUN_0c2edab8(void);
int FUN_0c2edb78(int);
int FUN_0c2edc7a(void);
int FUN_0c2edece(int);
extern int FUN_0c2ee4ba();
int FUN_0c2ee516(void);
int FUN_0c2f2074(int, int, int);
int FUN_0c2f2290(int);
int FUN_0c2f24d6(void);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int gdDecSubcode(int, int);
int gdFsGetDrvStatG(int, int, int, int);
#pragma inline_asm(iaOcbi)
static void iaOcbi(void *p)
{
    .DATA.W H'0493
}
int nlLoadTextureMem(int, int, int);
int nlSearchPalette(int, int);
int nlSetPaletteData(int, int, int);
int nlSpriteGetNextSpriteIndex(void);
int nlSpriteSetVtxContext(int, int);
int nl_texture_slot_alloc(void);
int nl_texture_slot_finish(int);
int nlsndG2Read(int);
int nlsndG2Write(int, int);
int thunk_FUN_0c2d3774(void);
int thunk_FUN_0c2d5f2e(int);
int vmsfb_sleep(void);
int vmsfs_fclose(int, int);
int vmsfs_fdelete(int, int, int, int, int, int, int, int);
int vmsfs_fdelete_ex(int, int, int);
int vmsfs_format(int, int, int, int, int);
int vmsfs_fread(int, int, int);
int vmsfs_frename(int, int, int);
int vmsfs_load_file(int, int, int, int);
int vmsfs_load_file_ex(int, int, int, int, int);
int vmsfs_read_disk_image(int, int, int, int);
int vmsfs_rewrite_exec_file(int, int, int, int, int);
int vmsfs_save_file(int, int, int, int, int, int);
int vmsfs_unmount(int);
int vmsfs_write_disk_image(int, int);
int vmsfs_xdefrag(int, int);
int FUN_0c19b6cc(int a4, int a5, int a6, int a7);
int FUN_0c2e73b4(int a4);
void FUN_0c2bdadc(int a4, int a5, int a6, int a7, int a8);
int FUN_0c2fa79a(int a4, int a5, int a6, int a7);
int gdFsGetStatG(int a4, int a5, int a6, int a7);
int FUN_0c18106a(int a4, int a5, int a6);
int FUN_0c17edc0(int a4, int a5, int a6, int a7);
int FUN_0c178c70(int a4, int a5, int a6, int a7, int a8, int a9);
int FUN_0c2e64ca(void);
int FUN_0c2ed71e(void);
void FUN_0c2ba8c8(int a4, int a5, int a6, int a7);

int FUN_0c19b6cc(int a4, int a5, int a6, int a7)
{
    int stk[12];

    register int R0;
    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    v0_3 = a4;
    v0_4 = a5;
    v0_0 = a6;
    v0_2 = a7;
    v0_0 = (0xC18DAE8);
    v0_0 = (0xC18DD06);
    v0_3 = (v0_3);
    v0_0 = (0x0);
    v0_1 = (v0_4);
    v0_5 = (0xC187A88);
    if (((-((((((*(signed char *)((v0_4 + 0xDB))) & 128) == 0)) ? 1 : 0) - 1)) == 1)) goto L_C19B6FE;
    if ((v0_3 == 0)) goto L_C19B8AE;
    if (((int)v0_3 > (int)(*(int *)((v0_1 + 0x8))))) goto L_C19B850;
    *(unsigned int *)((v0_1 + 0x8)) = ((*(int *)((v0_1 + 0x8))) - v0_3);
    v0_4 = *(int *)((v0_1 + 0xC));
    *(unsigned int *)((v0_1 + 0xC)) = (v0_4 + v0_3);
    v0_5 = (0xC8A97C4);
    if (((unsigned int)(v0_4 + v0_3) < (unsigned int)(unsigned short)(*(short *)0xC8A97C4))) goto L_C19B8AE;
    *(unsigned int *)((v0_1 + 0xC)) = ((*(int *)((v0_1 + 0xC))) - (unsigned short)(*(short *)((v0_5 + 0x0))));
    L_C19B8AE:;
    v0_4 = *(int *)((v0_1 + 0x18));
    v0_3 = (v0_4);
    if ((v0_4 == 0)) goto L_C19B970;
    if (((int)v0_3 > (int)((unsigned short)(*(short *)0xC8A97C4) - (*(int *)((v0_1 + 0x8)))))) goto L_C19B970;
    FUN_0c187a88((((int)stk + 0) + 0x28), v0_1, 0x8);
    FUN_0c18dd06((((int)stk + 0) + 0x28), (*(int *)((v0_1 + 0x10))));
    *(unsigned int *)(((int)stk + 0)) = v0_0;
    v0_3 = ((v0_1 + 0x1C));
    L_C19B95C:;
    if (((int)(*(int *)(((int)stk + 0))) < (int)(*(int *)((v0_1 + 0x14))))) goto L_C19B8DC;
    if (((int)(*(int *)((v0_1 + 0x18))) > 0)) goto L_C19B990;
    *(unsigned int *)((v0_1 + 0x18)) = v0_0;
    *(unsigned int *)((v0_1 + 0x14)) = v0_0;
    L_C19B976:;
    v0_0 = ((int (*)(int, int, int, int))(FUN_0c18d1fa))(((int)((int)(v0_1 - (*(int *)0xC8A73C0)) / (int)0x174)), ((((struct oD0_int *)(v0_1))->v)), 0x0, v0_2);
    L_C19B990:;
    return 0x0;
    L_C19B8DC:;
    if (((int)(*(short *)((v0_3 + 0x0))) <= 0)) goto L_C19B954;
    *(unsigned int *)((v0_1 + 0x8)) = ((*(int *)((v0_1 + 0x8))) + (*(short *)((v0_3 + 0x0))));
    v0_5 = *(short *)0xC8A97C4;
    v0_6 = *(int *)((v0_1 + 0x10));
    v0_4 = ((v0_5 - v0_6));
    if (((int)(*(short *)((v0_3 + 0x0))) <= (int)(unsigned short)(v0_5 - v0_6))) goto L_C19B92A;
    FUN_0c18dae8((((int)stk + 0) + 0x28), (v0_3 + 0x4), v0_4);
    *(unsigned int *)(((int)stk + 4)) = (unsigned short)v0_4;
    FUN_0c18dd06((v0_3 + 0x4), (unsigned short)v0_4);
    *(unsigned short *)((v0_3 + 0x0)) = ((*(short *)((v0_3 + 0x0))) - v0_4);
    *(unsigned int *)((v0_1 + 0x18)) = ((*(int *)((v0_1 + 0x18))) - (*(int *)(((int)stk + 4))));
    *(unsigned int *)((v0_1 + 0x10)) = v0_0;
    FUN_0c187a88((((int)stk + 0) + 0x28), v0_1, 0x8);
    L_C19B92A:;
    v0_4 = *(short *)((v0_3 + 0x0));
    FUN_0c18dae8((((int)stk + 0) + 0x28), (v0_3 + 0x4), v0_4);
    *(unsigned int *)((v0_1 + 0x10)) = ((*(int *)((v0_1 + 0x10))) + (short)v0_4);
    *(unsigned int *)(((int)stk + 4)) = (short)v0_4;
    FUN_0c18dd06((((int)stk + 0) + 0x28), (short)v0_4);
    *(unsigned int *)((v0_1 + 0x18)) = ((*(int *)((v0_1 + 0x18))) - (*(int *)(((int)stk + 4))));
    *(unsigned short *)((v0_3 + 0x0)) = v0_0;
    L_C19B954:;
    *(unsigned int *)(((int)stk + 0)) = ((*(int *)(((int)stk + 0))) + 0x1);
    v0_3 = ((v0_3 + 0xC));
    goto L_C19B95C;
    L_C19B970:;
    if (((*(int *)((v0_1 + 0x18))) != 0)) goto L_C19B990;
    goto L_C19B976;
    L_C19B850:;
    v0_4 = *(int *)((v0_1 + 0x8));
    *(unsigned int *)((v0_1 + 0x8)) = v0_0;
    *(unsigned int *)((v0_1 + 0xC)) = (*(int *)((v0_1 + 0x10)));
    *(unsigned int *)((v0_1 + 0x18)) = ((*(int *)((v0_1 + 0x18))) - (v0_3 - v0_4));
    *(unsigned int *)(((int)stk + 0)) = v0_0;
    v0_3 = ((v0_3 - v0_4));
    v0_4 = ((v0_1 + 0x1C));
    L_C19B8A2:;
    if (((int)(*(int *)(((int)stk + 0))) >= (int)(*(int *)((v0_1 + 0x14))))) goto L_C19B8AE;
    if (((int)v0_3 > 0)) goto L_C19B868;
    goto L_C19B8AE;
    L_C19B868:;
    v0_5 = *(short *)((v0_4 + 0x0));
    v0_6 = (v0_5);
    if (((int)v0_3 < (int)v0_5)) goto L_C19B88C;
    v0_5 = *(short *)((v0_4 + 0x0));
    *(unsigned short *)((v0_4 + 0x0)) = v0_0;
    v0_3 = ((v0_3 - v0_5));
    L_C19B89A:;
    *(unsigned int *)(((int)stk + 0)) = ((*(int *)(((int)stk + 0))) + 0x1);
    v0_4 = ((v0_4 + 0xC));
    goto L_C19B8A2;
    L_C19B88C:;
    *(unsigned short *)((v0_4 + 0x0)) = (v0_6 - v0_3);
    FUN_0c18dd06((v0_4 + 0x4), v0_3);
    v0_3 = (v0_0);
    goto L_C19B89A;
    L_C19B6FE:;
    *(unsigned char *)(((int)stk + 28)) = 0x1;
    *(unsigned char *)(((int)stk + 20)) = 0x1;
    *(unsigned char *)(((int)stk + 12)) = 0x1;
    v0_4 = (v0_3);
    if ((v0_3 != 0)) goto L_C19B716;
    goto L_C19B990;
    L_C19B716:;
    if (((*(int *)((v0_1 + 0x8))) != 0)) goto L_C19B720;
    goto L_C19B990;
    L_C19B720:;
    FUN_0c18dcf2((((int)stk + 0) + 0x8), (((int)stk + 0) + 0x20));
    FUN_0c187a88((((int)stk + 0) + 0x18), v0_1, 0x8);
    v0_2 = *(int *)((v0_1 + 0xC));
    v0_3 = (v0_2);
    if ((v0_2 == 0)) goto L_C19B7CE;
    FUN_0c18dd06((((int)stk + 0) + 0x18), ((v0_3 << 2) << 2));
    L_C19B7CE:;
    FUN_0c18dae8((((int)stk + 0) + 0x8), (((int)stk + 0) + 0x18), 0x10);
    if (((int)(*(short *)(((int)stk + 40))) > (int)v0_4)) goto L_C19B7E8;
    if (!(((*(int *)((v0_1 + 0x8))) != 0))) goto L_C19B7E8;
    *(unsigned int *)((v0_1 + 0x8)) = ((*(int *)((v0_1 + 0x8))) - 1);
    v0_2 = *(short *)(((int)stk + 40));
    *(unsigned int *)((v0_1 + 0x18)) = ((*(int *)((v0_1 + 0x18))) - v0_2);
    v0_3 = (v0_2);
    v0_4 = ((v0_4 - v0_2));
    if (((unsigned int)(*(int *)((v0_1 + 0xC))) >= (unsigned int)0x8)) goto L_C19B780;
    *(unsigned int *)((v0_1 + 0xC)) = ((*(int *)((v0_1 + 0xC))) + 0x1);
    goto L_C19B782;
    L_C19B7E8:;
    if ((v0_4 != 0)) goto L_C19B7F0;
    goto L_C19B990;
    L_C19B7F0:;
    if (((*(int *)((v0_1 + 0x8))) != 0)) goto L_C19B7FA;
    goto L_C19B990;
    L_C19B7FA:;
    *(unsigned int *)((v0_1 + 0x18)) = ((*(int *)((v0_1 + 0x18))) - v0_4);
    *(unsigned short *)(((int)stk + 40)) = ((*(short *)(((int)stk + 40))) - v0_4);
    *(unsigned short *)(((int)stk + 42)) = ((*(short *)(((int)stk + 42))) + v0_4);
    FUN_0c18dae8((((int)stk + 0) + 0x18), (((int)stk + 0) + 0x8), 0x10);
    goto L_C19B990;
    L_C19B782:;
    if (((*(int *)((v0_1 + 0x8))) != 0)) goto L_C19B796;
    *(unsigned int *)((v0_1 + 0x10)) = v0_0;
    *(unsigned int *)((v0_1 + 0xC)) = v0_0;
    (((struct oDB_uchar *)(v0_1))->v) = ((*(signed char *)(((0xDB + v0_1) + 0x0))) & 0x7F);
    L_C19B796:;
    FUN_0c18d2c2(((int)((int)(v0_1 - (*(int *)0xC8A73C0)) / (int)0x174)), (*(int *)(((int)stk + 44))), 0x0, (((int)stk + 0) + 0x20));
    v0_2 = *(int *)((v0_1 + 0xC));
    FUN_0c187a88((((int)stk + 0) + 0x18), v0_1, 0x8);
    v0_3 = (v0_2);
    if ((v0_2 == 0)) goto L_C19B7CE;
    FUN_0c18dd06((((int)stk + 0) + 0x18), ((v0_3 << 2) << 2));
    goto L_C19B7CE;
    L_C19B780:;
    *(unsigned int *)((v0_1 + 0xC)) = v0_0;
    goto L_C19B782;
}

int FUN_0c2e73b4(int a4)
{
    int t0;
    int t1;
    register int t2;
    int t3;
    register int t4;
    int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t10;

    FUN_0c2d6458();
    (((struct o8_uchar *)0xC8D6630)->v) = 0x0;
    FUN_0c2d77de(0x1);
    FUN_0c2d7778(0x0);
    FUN_0c2d7800(0x1);
    FUN_0c2d63b6();
    t7 = a4;
    if ((((unsigned char)(*(signed char *)0xC8D6780) & 0x4) == 0) && (t0 = *(signed char *)0xC8D66E1, t0 == 0)) {
    } else {
        (((struct o0_uchar *)0xC8D66E1)->v) = 0x0;
        t7 = 0xFE;
    }
    t0 = 0x0;
    t8 = 0xC8D6778;
    for (;;) {
        if ((int)(unsigned char)t0 >= (int)0x21) {
            break;
        }
        *(unsigned char *)((t8 + 0x0)) = 0x0;
        t0 = (t0 + 0x1);
        t8 = (t8 + 0x1);
    }
    t8 = (unsigned char)t0;
    t0 = 0x0;
    t9 = 0xC8D6440;
    t10 = 0xC300F30;
    for (;;) {
        if ((int)(unsigned char)t0 >= (int)0x50) {
            break;
        }
        t8 = (*(signed char *)((t10 + 0x0)));
        t10 = (t10 + 0x1);
        t0 = (t0 + 0x1);
        *(unsigned char *)((t9 + 0x0)) = t8;
        t9 = (t9 + 0x1);
    }
    if ((int)(unsigned char)t7 < (int)0x4) {
        (((struct o0_uchar *)0xC8D677C)->v) = ((*(signed char *)0xC8D677C) | 0x20);
        (((struct o4_uchar *)0xC8D6524)->v) = t7;
    }
    FUN_0c2f2290(0xC8D6440);
    FUN_0c2d6424();
    FUN_0c2d6624();
    if (((unsigned short)((((struct oB0_short *)((*(int *)0xC8D66E8)))->v)) & 0x100) != 0) {
        FUN_0c2d63be();
    }
    FUN_0c2f24d6();
    (((struct o3_uchar *)0xC8D6524)->v) = ((*(signed char *)0xC8D6444) & 0x7F);
    (((struct o2_uchar *)0xC8D6524)->v) = (*(signed char *)0xC8D6443);
    (((struct o7_uchar *)0xC8D6524)->v) = (*(signed char *)0xC8D645B);
    (((struct o8_uchar *)0xC8D6524)->v) = (*(signed char *)0xC8D645F);
    if (((unsigned char)(*(signed char *)0xC8D6440) == 1) && (t1 = *(int *)0xC8D66E8, t2 = (((struct oB2_short *)(t1))->v), ((unsigned short)t2 & 1) != 0)) {
        (((struct o0_uchar *)0xC8D6440)->v) = ((*(signed char *)0xC8D6440) + 0x1);
    }
    if (((unsigned char)(*(signed char *)0xC8D6440) == 2) && (t3 = *(int *)0xC8D66E8, t4 = (((struct oB2_short *)(t3))->v), ((unsigned short)t4 & 0x2000) != 0)) {
        (((struct o0_uchar *)0xC8D6440)->v) = ((*(signed char *)0xC8D6440) + 0x1);
    }
    if ((((unsigned char)(*(signed char *)0xC8D6455) & 0x10) == 0) && (t5 = *(int *)0xC8D66E8, t6 = (((struct oB2_short *)(t5))->v), ((unsigned short)t6 & 0x10) != 0)) {
        (((struct o15_uchar *)0xC8D6440)->v) = ((*(signed char *)0xC8D6455) & 0xE7);
        (((struct o15_uchar *)0xC8D6440)->v) = ((*(signed char *)0xC8D6455) | 0x10);
    }
    if ((int)(unsigned char)t7 >= (int)0x4) {
        (((struct o0_uchar *)0xC8D6630)->v) = (*(signed char *)0xC8D6454);
        (((struct o1_uchar *)0xC8D6630)->v) = (*(signed char *)((0xC3021AD + ((int)((unsigned char)(*(signed char *)0xC8D6457) & 0x30) >> 4))));
    } else {
        FUN_0c2cef80((*(signed char *)0xC8D6630), (*(signed char *)0xC8D6631));
    }
    (((struct o0_uchar *)0xC8D64A0)->v) = (*(signed char *)0xC8D6630);
    (((struct o1_uchar *)0xC8D64A0)->v) = (*(signed char *)0xC8D6631);
    (((struct o3_uchar *)0xC8D64A0)->v) = 0x41;
    (((struct o4_uchar *)0xC8D64A0)->v) = 0x54;
    (((struct o5_uchar *)0xC8D64A0)->v) = (*(signed char *)0xC8D6443);
    (((struct o0_ushort *)0xC8D6524)->v) = 0x0;
    if ((unsigned char)t7 != 0xFD) {
        FUN_0c2d0e72();
        FUN_0c2d58b2(0xC8D65E4, 0xC8D65E0);
        thunk_FUN_0c2d5f2e(0x0);
    }
    FUN_0c2d58b2(0xC8D65E4, 0xC8D65E0);
    FUN_0c2e7790();
    FUN_0c2d63c8();
    t0 = FUN_0c2d7750();
    if ((signed char)t0 == 0) {
        (((struct oC_uchar *)0xC8D677C)->v) = ((*(signed char *)0xC8D6788) | 0x8);
    }
    t0 = 0x1;
    if (((unsigned char)(*(signed char *)0xC8D6455) & 32) == 0) {
        t0 = 0x0;
    }
    FUN_0c2d779a(t0);
    t0 = *(signed char *)0xC8D6455;
    if (((unsigned char)t0 & 2) != 0) {
        t1 = 0x0;
        if (((unsigned char)(*(signed char *)0xC8D6455) & 32) != 0) {
            t1 = 0x1;
        }
        t2 = t1;
    } else {
        t1 = 0x1;
        if (((unsigned char)t0 & 64) == 0) {
            t1 = 0x0;
        }
        t2 = t1;
    }
    FUN_0c2d77bc(t2);
    if (((unsigned char)(*(signed char *)0xC8D6471) & 64) != 0) {
        (((struct oE_uchar *)0xC8D6440)->v) = ((*(signed char *)0xC8D644E) | 0x4);
    }
    t0 = *(signed char *)0xC8D6443;
    *(unsigned char *)0xC8D6687 = t0;
    t1 = t0;
    if ((unsigned char)t7 == 0xFF) {
        t0 = *(signed char *)0xC8D645B;
        t2 = (unsigned char)t0;
        if (((unsigned char)t0 & 4) != 0) {
            t0 = *(signed char *)0xC8D6783;
            (((struct o7_uchar *)0xC8D677C)->v) = (t0 | 0x10);
            t2 = (t0 | 0x10);
        }
        t1 = t2;
    }
    return t1;
}

void FUN_0c2bdadc(int a4, int a5, int a6, int a7, int a8)
{
    int stk[12];

    register int R1;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_10;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register int v0_9;
    stk[3] = a8;
    v0_6 = a5;
    v0_7 = a6;
    v0_9 = a7;
    v0_4 = (0x0);
    v0_0 = (0xFFFFFF01);
    v0_1 = (v0_4);
    v0_2 = (0x0);
    v0_3 = ((((((v0_4 << 2) << 2) << 2) << 1) + 0xC8C21EC));
    v0_5 = (0xC8C21CC);
    v0_6 = (0xC8C21EC);
    v0_5 = (0xC2BE566);
    v0_4 = (((v0_4 << 2) + 0xC8C21CC));
    L_C2BDB6C:;
    v0_6 = *(int *)((v0_3 + 0x8));
    v0_5 = (v0_6);
    if (!(((unsigned int)v0_6 < (unsigned int)0x15))) goto L_C2BDD3A;
    switch (((v0_5 << 1))) { case 0: goto L_C2BDD3A; case 2: goto L_C2BDBCA; case 4: goto L_C2BDD3A; case 6: goto L_C2BDBD8; case 8: goto L_C2BDBF4; case 10: goto L_C2BDC06; case 12: goto L_C2BDC1A; case 14: goto L_C2BDC2E; case 16: goto L_C2BDC40; case 18: goto L_C2BDC6C; case 20: goto L_C2BDC56; case 22: goto L_C2BDC9C; case 24: goto L_C2BDCB2; case 26: goto L_C2BDCD2; case 28: goto L_C2BDCF2; case 30: goto L_C2BDC7C; case 32: goto L_C2BDC8C; case 34: goto L_C2BDD0C; case 36: goto L_C2BDBBE; case 38: goto L_C2BDD3A; case 40: goto L_C2BDD1E; }
    goto L_C2BDD1E;
    L_C2BDD3A:;
    vmsfb_sleep();
    goto L_C2BDB6C;
    L_C2BDD1E:;
    *(unsigned int *)((v0_3 + 0x10)) = (*(int *)((v0_3 + 0x14)));
    v0_5 = (*(int *)((v0_3 + 0x24)));
    *(int *)((int)stk + 8) = v0_5;
    v0_5 = ((vmsfs_rewrite_exec_file((*(int *)((v0_3 + 0x14))), (v0_3 + 0x2C), (*(int *)((v0_3 + 0x1C))), (*(int *)((v0_3 + 0x20))), v0_5)));
    L_C2BDD36:;
    v0_7 = (v0_5);
    if ((v0_7 != v0_0)) goto L_C2BDD4E;
    vmsfs_unmount((*(int *)((v0_3 + 0x10))));
    L_C2BDD4E:;
    *(unsigned int *)((v0_4 + 0x0)) = v0_7;
    v0_9 = (((struct o7C_int *)(v0_3))->v);
    v0_10 = *(int *)((v0_3 + 0x8));
    *(unsigned int *)((v0_3 + 0x0)) = v0_2;
    *(unsigned int *)((v0_3 + 0x4)) = v0_2;
    *(unsigned int *)((v0_3 + 0x8)) = v0_2;
    *(unsigned int *)((v0_3 + 0xC)) = v0_2;
    *(unsigned int *)((v0_3 + 0x10)) = v0_2;
    *(unsigned int *)((v0_3 + 0x14)) = v0_2;
    *(unsigned int *)((v0_3 + 0x18)) = v0_2;
    *(unsigned int *)((v0_3 + 0x1C)) = v0_2;
    *(unsigned int *)((v0_3 + 0x20)) = v0_2;
    *(unsigned int *)((v0_3 + 0x24)) = v0_2;
    *(unsigned int *)((v0_3 + 0x28)) = v0_2;
    v0_8 = (((struct o74_int *)(v0_3))->v);
    v0_5 = (0x74);
    v0_6 = (v0_8);
    v0_6 = (v0_10);
    v0_9 = (v0_9);
    if ((v0_8 != 0)) goto L_C2BDD78;
    goto L_C2BDB6C;
    L_C2BDD78:;
    v0_5 = ((int (*)(int, int, int, int))((*(int *)((v0_3 + v0_5)))))(v0_1, v0_6, v0_7, v0_9);
    goto L_C2BDB6C;
    L_C2BDD0C:;
    *(unsigned int *)((v0_3 + 0x10)) = (*(int *)((v0_3 + 0x14)));
    v0_5 = ((vmsfs_fdelete_ex((*(int *)((v0_3 + 0x14))), (*(int *)((v0_3 + 0x18))), (*(int *)((v0_3 + 0x1C))))));
    goto L_C2BDD36;
    L_C2BDCF2:;
    *(unsigned int *)((v0_3 + 0x10)) = (*(int *)((v0_3 + 0x14)));
    v0_5 = (*(int *)((v0_3 + 0x24)));
    *(int *)((int)stk + 8) = v0_5;
    v0_5 = ((vmsfs_load_file_ex((*(int *)((v0_3 + 0x14))), (v0_3 + 0x2C), (*(int *)((v0_3 + 0x1C))), (*(int *)((v0_3 + 0x20))), v0_5)));
    goto L_C2BDD36;
    L_C2BDCD2:;
    *(unsigned int *)((v0_3 + 0x10)) = (*(int *)((v0_3 + 0x14)));
    v0_5 = (*(int *)((v0_3 + 0x28)));
    *(int *)((int)stk + 8) = v0_5;
    *(int *)((int)stk + 4) = (v0_3 + 0x6C);
    v0_5 = ((FUN_0c2c1ae8((*(int *)((v0_3 + 0x14))), (v0_3 + 0x2C), (*(int *)((v0_3 + 0x1C))), (*(int *)((v0_3 + 0x20))), (v0_3 + 0x6C), v0_5)));
    goto L_C2BDD36;
    L_C2BDCB2:;
    *(unsigned int *)((v0_3 + 0x10)) = (*(int *)((v0_3 + 0x14)));
    v0_5 = (*(int *)((v0_3 + 0x28)));
    *(int *)((int)stk + 8) = v0_5;
    *(int *)((int)stk + 4) = (v0_3 + 0x6C);
    v0_5 = ((vmsfs_save_file((*(int *)((v0_3 + 0x14))), (v0_3 + 0x2C), (*(int *)((v0_3 + 0x1C))), (*(int *)((v0_3 + 0x20))), (v0_3 + 0x6C), v0_5)));
    goto L_C2BDD36;
    L_C2BDC9C:;
    *(unsigned int *)((v0_3 + 0x10)) = (*(int *)((v0_3 + 0x14)));
    v0_5 = ((vmsfs_load_file((*(int *)((v0_3 + 0x14))), (v0_3 + 0x2C), (*(int *)((v0_3 + 0x1C))), (*(int *)((v0_3 + 0x20))))));
    goto L_C2BDD36;
    L_C2BDC8C:;
    *(unsigned int *)((v0_3 + 0x10)) = (*(int *)((v0_3 + 0x14)));
    v0_5 = ((vmsfs_write_disk_image((*(int *)((v0_3 + 0x14))), (*(int *)((v0_3 + 0x18))))));
    goto L_C2BDD36;
    L_C2BDC7C:;
    *(unsigned int *)((v0_3 + 0x10)) = (*(int *)((v0_3 + 0x14)));
    v0_5 = ((vmsfs_read_disk_image((*(int *)((v0_3 + 0x14))), (*(int *)((v0_3 + 0x18))), v0_7, v0_9)));
    goto L_C2BDD36;
    L_C2BDC6C:;
    *(unsigned int *)((v0_3 + 0x10)) = (*(int *)((v0_3 + 0x14)));
    v0_5 = ((vmsfs_xdefrag((*(int *)((v0_3 + 0x14))), (*(int *)((v0_3 + 0x18))))));
    goto L_C2BDD36;
    L_C2BDC56:;
    *(unsigned int *)((v0_3 + 0x10)) = (*(int *)((v0_3 + 0x14)));
    v0_5 = ((FUN_0c103e50((*(int *)((v0_3 + 0x14))), (v0_3 + 0x2C), (*(int *)((v0_3 + 0x1C))), (*(int *)((v0_3 + 0x20))))));
    goto L_C2BDD36;
    L_C2BDC40:;
    *(unsigned int *)((v0_3 + 0x10)) = (*(int *)((v0_3 + 0x14)));
    v0_5 = ((vmsfs_frename((*(int *)((v0_3 + 0x14))), (v0_3 + 0x2C), (v0_3 + 0x3C))));
    goto L_C2BDD36;
    L_C2BDC2E:;
    *(unsigned int *)((v0_3 + 0x10)) = (*(int *)((v0_3 + 0x14)));
    v0_5 = ((vmsfs_fdelete((*(int *)((v0_3 + 0x14))), (v0_3 + 0x2C), v0_7, v0_9, *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4), *(int *)((int)stk + 12 + 8), *(int *)((int)stk + 12 + 12))));
    goto L_C2BDD36;
    L_C2BDC1A:;
    *(unsigned int *)((v0_3 + 0x10)) = (*(int *)(((*(int *)((v0_3 + 0x14))) + 0x28)));
    v0_5 = ((FUN_0c2bf4d2((*(int *)((v0_3 + 0x14))), (*(int *)((v0_3 + 0x18))), (*(int *)((v0_3 + 0x1C))))));
    goto L_C2BDD36;
    L_C2BDC06:;
    *(unsigned int *)((v0_3 + 0x10)) = (*(int *)(((*(int *)((v0_3 + 0x14))) + 0x28)));
    v0_5 = ((vmsfs_fread((*(int *)((v0_3 + 0x14))), (*(int *)((v0_3 + 0x18))), (*(int *)((v0_3 + 0x1C))))));
    goto L_C2BDD36;
    L_C2BDBF4:;
    *(unsigned int *)((v0_3 + 0x10)) = (*(int *)(((*(int *)((v0_3 + 0x14))) + 0x28)));
    v0_5 = ((vmsfs_fclose((*(int *)((v0_3 + 0x14))), (*(int *)((v0_3 + 0x18))))));
    goto L_C2BDD36;
    L_C2BDBD8:;
    *(unsigned int *)((v0_3 + 0x10)) = (*(int *)((v0_3 + 0x14)));
    v0_5 = (*(int *)((v0_3 + 0x24)));
    *(int *)((int)stk + 8) = v0_5;
    v0_5 = ((vmsfs_format((*(int *)((v0_3 + 0x14))), (v0_3 + 0x4C), (*(int *)((v0_3 + 0x1C))), (v0_3 + 0x6C), v0_5)));
    goto L_C2BDD36;
    L_C2BDBCA:;
    *(unsigned int *)((v0_3 + 0x10)) = (*(int *)((v0_3 + 0x14)));
    v0_5 = ((FUN_0c2be46c((*(int *)((v0_3 + 0x14))), v0_6, v0_7, v0_9, *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4), *(int *)((int)stk + 12 + 8), *(int *)((int)stk + 12 + 12), *(int *)((int)stk + 12 + 16), *(int *)((int)stk + 12 + 20), *(int *)((int)stk + 12 + 24), *(int *)((int)stk + 12 + 28))));
    goto L_C2BDD36;
    L_C2BDBBE:;
    *(unsigned int *)((v0_3 + 0x10)) = (*(int *)((v0_3 + 0x14)));
    v0_5 = ((((int (*)(int, int, int, int))(v0_5))((*(int *)((v0_3 + 0x14))), v0_6, v0_7, v0_9)));
    goto L_C2BDD36;
}

int FUN_0c2fa79a(int a4, int a5, int a6, int a7)
{
    int t3;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t11;
    register int t12;
    register int t13;
    register int t14;
    int t15;
    register int t31;
    register int t4;
    register int t5;
    register int t10;
    int t24;
    register int t91;
    register int t93;
    register int t95;
    register int t96;
    register int t97;
    register int t98;
    register int t62;
    register int t63;
    register int t64;
    int t72;
    register int t114;
    register int t116;
    register int t117;
    register int t118;
    register int t119;
    register int t141;
    register int t142;
    register int t144;
    register int t145;
    register int t146;
    register int t147;
    register int t195;
    register int t196;
    register int t198;
    register int t199;
    register int t200;
    register int t201;
    register int t164;
    register int t165;
    register int t167;
    register int t168;
    register int t169;
    register int t170;
    int t173;

    t12 = *(signed char *)0xC8E0309;
    t3 = t12;
    t6 = a4;
    t7 = a5;
    t8 = a6;
    t9 = a7;
    t11 = (*(signed char *)0xC8E0308);
    t13 = ((((struct o4_int *)0xC8E0308)->v));
    t14 = a5;
    t15 = a4;
    for (;;) {
        if ((unsigned char)t14 != 0) {
            t6 = 0xC8D7078;
            t3 = (unsigned char)t11;
            t8 = 0xC8D7080;
            t7 = 0xC8D67BC;
            t10 = 0x8;
            t9 = 0x1;
            t9 = (t9 & t15);
            switch (t3) {
            case 2:
                t5 = (unsigned char)t12;
                t9 = (*(signed char *)((t8 + 0x0)));
                t9 = (unsigned char)t9;
                if ((int)t5 > (int)(unsigned char)t14) {
                    t3 = (unsigned char)t14;
                    t4 = t15;
                    t9 = (t9 - (unsigned char)t14);
                    t3 = (-t3);
                    t4 = ((unsigned int)t4 << (int)t9);
                    t13 = ((unsigned int)t13 << (int)t3);
                    t12 = (t12 - t14);
                    t13 = (t13 | t4);
                    t14 = 0x0;
                } else {
                    t8 = (unsigned char)t12;
                    t4 = (-t8);
                    t9 = (t9 - t5);
                    t13 = ((unsigned int)t13 << (int)t4);
                    t3 = t15;
                    t8 = (-t8);
                    t4 = 0xC8E0311;
                    t15 = ((unsigned int)t15 << (int)t8);
                    t3 = ((unsigned int)t3 << (int)t9);
                    t8 = (*(signed char *)((t4 + 0x0)));
                    t13 = (t13 | t3);
                    t3 = (unsigned char)t8;
                    t13 = (unsigned char)t13;
                    t14 = (t14 - t12);
                    t8 = t3;
                    if ((t3 != 1) && (t24 = (t3 == 1), t3 = t8, t3 != 2)) {
                        if (t13 == 0) {
                            t5 = 0xC8D7077;
                            *(unsigned char *)((t5 + 0x0)) = ((*(signed char *)((t5 + 0x0))) + 0x1);
                            t5 = (*(int *)((t7 + 0x0)));
                            *(unsigned int *)((t6 + 0x0)) = t5;
                        } else {
                            t4 = 0x0;
                            (((struct oB_uchar *)0xC8D706C)->v) = t4;
                        }
                        t7 = 0xC8D7081;
                        t6 = 0xC8D7070;
                        t5 = (*(signed char *)((t7 + 0x0)));
                        if (t5 != 0) {
                            t31 = *(int *)((t6 + 0x0));
                            *(unsigned int *)((t6 + 0x0)) = (t31 + 0x1);
                            *(unsigned char *)((((t31 + 0x1) - 0x1) + 0x0)) = t13;
                            t5 = 0xC8D706C;
                            *(unsigned short *)((t5 + 0x0)) = ((*(short *)((t5 + 0x0))) + 0x1);
                        }
                        t5 = 0xC8E0311;
                        t3 = (*(signed char *)((t5 + 0x0)));
                        t3 = (unsigned char)t3;
                        if ((t3 != 22) && ((t3 != 23) && ((t3 != 24) && (t3 != 25)))) {
                            t9 = 0xC8E0312;
                            t5 = (*(signed char *)((t9 + 0x0)));
                            if ((t5 != 0) && ((t62 = *(signed char *)0xC8D7035, t4 = t62, t4 = (unsigned char)t4, t13 == t4) || (t63 = (t5 == 0), t5 = 0xC8D7034, t64 = *(signed char *)((t5 + 0x0)), t4 = t64, t4 = (unsigned char)t4, t13 == t4))) {
                                t11 = 0xC8D7035;
                                t8 = 0xC8D7060;
                                if (t13 == (unsigned char)(*(signed char *)((t11 + 0x0)))) {
                                    *(unsigned char *)((t8 + 0x0)) = 0x0;
                                } else {
                                    t4 = 0x1;
                                    *(unsigned char *)((t8 + 0x0)) = t4;
                                }
                                t3 = (*(signed char *)((t9 + 0x0)));
                                t3 = (unsigned char)t3;
                                if ((t3 != 4) && (t72 = *(signed char *)((t7 + 0x0)), t5 = t72, t5 != 0)) {
                                    *(unsigned int *)((t6 + 0x0)) = ((*(int *)((t6 + 0x0))) - 1);
                                    t5 = 0xC8D706C;
                                    t4 = (*(short *)((t5 + 0x0)));
                                    t4 = (t4 - 1);
                                    *(unsigned short *)((t5 + 0x0)) = t4;
                                }
                            }
                        }
                        t6 = 0xC8E0300;
                        t5 = ((((struct o0_short *)0xC8D706C)->v));
                        t4 = (*(short *)((t6 + 0x0)));
                        if ((unsigned int)t5 >= (unsigned int)t4) {
                            t5 = 0xC8E031C;
                            t4 = (*(int *)((t5 + 0x0)));
                            t3 = (((int (*)(int, int, int, int))(t4))(t6, t7, t8, t9));
                        } else {
                            t91 = t4;
                            t93 = t5;
                            t95 = t6;
                            t96 = t7;
                            t97 = t8;
                            t98 = t9;
                        }
                    } else {
                        t11 = 0xC2D7894;
                        t6 = t13;
                        t3 = (FUN_0c2d7894());
                    }
                    t4 = t91;
                    t11 = t10;
                    t5 = t93;
                    t6 = t95;
                    t7 = t96;
                    t8 = t97;
                    t9 = t98;
                }
                break;
            case 3:
                if (t9 != 0) {
                    t5 = (*(int *)((t6 + 0x0)));
                    *(volatile int *)((t7 + 0x0));
                    t4 = 0xC8D706C;
                    t5 = (*(short *)((t4 + 0x0)));
                    if (t5 != 0) {
                        t3 = 0xC8E031C;
                        t5 = (*(int *)((t3 + 0x0)));
                        t3 = (((int (*)(int, int, int, int))(t5))(t6, t7, t8, t9));
                    } else {
                        t114 = t5;
                        t116 = t6;
                        t117 = t7;
                        t118 = t8;
                        t119 = t9;
                    }
                    t4 = 0xC8D7077;
                    t5 = t114;
                    t6 = t116;
                    t7 = t117;
                    t8 = t118;
                    t9 = t119;
                    t11 = t10;
                    *(unsigned char *)((t4 + 0x0)) = 0x0;
                }
                t14 = (t14 - 1);
                t15 = ((unsigned int)t15 >> 1);
                break;
            case 8:
                t7 = 0xC8D7074;
                if (t9 == 0) {
                    t3 = (*(signed char *)0xC8D7077);
                    t3 = (unsigned char)t3;
                    if (t3 == 2) {
                        t6 = 0x3;
                        t11 = t6;
                        t141 = t4;
                        t142 = t5;
                        t144 = t6;
                        t145 = t7;
                        t146 = t8;
                        t147 = t9;
                    } else {
                        t6 = 0xC8D67C2;
                        t5 = 0x0;
                        t4 = t5;
                        t13 = t5;
                        *(unsigned short *)((t6 + 0x0)) = t5;
                        t6 = 0x2;
                        t12 = (*(signed char *)((t8 + 0x0)));
                        *(unsigned char *)((t7 + 0x0)) = t4;
                        t3 = 0xC8D706C;
                        t5 = (*(short *)((t3 + 0x0)));
                        t11 = t6;
                        if (t5 != 0) {
                            t141 = t4;
                            t142 = t5;
                            t144 = t6;
                            t145 = t7;
                            t146 = t8;
                            t147 = t9;
                        } else {
                            t10 = 0xC8E0318;
                            t5 = (*(int *)((t10 + 0x0)));
                            t3 = (((int (*)(int, int, int, int))(t5))(t6, t7, t8, t9));
                        }
                    }
                    t4 = t141;
                    t14 = (t14 - 1);
                    t5 = t142;
                    t6 = t144;
                    t7 = t145;
                    t8 = t146;
                    t9 = t147;
                    t15 = ((unsigned int)t15 >> 1);
                } else {
                    t6 = 0xFF;
                    t10 = (unsigned char)t15;
                    t5 = 0x0;
                    if (t10 == t6) {
                        t10 = 0x8;
                    } else {
                        t10 = 0x1;
                    }
                    (((struct oB_uchar *)0xC8D706C)->v) = t5;
                    t4 = (*(signed char *)((t7 + 0x0)));
                    t4 = (t4 + t10);
                    *(unsigned char *)((t7 + 0x0)) = t4;
                    t6 = 0xC8E0315;
                    t5 = (*(signed char *)((t7 + 0x0)));
                    t4 = (*(signed char *)((t6 + 0x0)));
                    if ((unsigned int)t5 >= (unsigned int)t4) {
                        t5 = 0xC8D7075;
                        t4 = (*(signed char *)((t5 + 0x0)));
                        if (t4 == 0) {
                            t3 = 0xC8E0328;
                            t4 = (*(int *)((t3 + 0x0)));
                            t3 = (((int (*)(int, int, int, int))(t4))(t6, t7, t8, t9));
                            t3 = (signed char)t3;
                            if (t3 != 0) {
                                t5 = 0x1;
                                (((struct o9_uchar *)0xC8D706C)->v) = t5;
                                t6 = 0xC8D7076;
                                *(unsigned char *)((t6 + 0x0)) = t5;
                                t165 = t5;
                                t167 = t6;
                            }
                        } else {
                            t164 = t4;
                            t165 = t5;
                            t167 = t6;
                            t168 = t7;
                            t169 = t8;
                            t170 = t9;
                        }
                        t4 = t164;
                        t5 = t165;
                        t6 = t167;
                        t7 = t168;
                        t8 = t169;
                        t9 = t170;
                        t6 = (*(signed char *)0xC8E0311);
                        t3 = (unsigned char)t6;
                        t6 = t3;
                        if ((t3 != 1) && (t173 = (t3 == 1), t3 = t6, t3 != 2)) {
                            t5 = 0xC8D706C;
                            if ((*(short *)((t5 + 0x0))) != 0) {
                                t4 = 0xC8E031C;
                                t3 = (((int (*)(int, int, int, int))((*(int *)((t4 + 0x0)))))(t6, t7, t8, t9));
                            } else {
                                t195 = t4;
                                t196 = t5;
                                t198 = t6;
                                t199 = t7;
                                t200 = t8;
                                t201 = t9;
                            }
                        } else {
                            t3 = (FUN_0c2d788c());
                        }
                    } else {
                        t195 = t4;
                        t196 = t5;
                        t198 = t6;
                        t199 = t7;
                        t200 = t8;
                        t201 = t9;
                    }
                    t3 = (unsigned char)t10;
                    t4 = t195;
                    t5 = t196;
                    t6 = t198;
                    t7 = t199;
                    t8 = t200;
                    t9 = t201;
                    t3 = (-t3);
                    t15 = ((unsigned int)t15 << (int)t3);
                    t14 = (t14 - t10);
                }
                break;
            }
            continue;
        }
        break;
    }
    (((struct o0_uchar *)0xC8E0308)->v) = t11;
    (((struct o1_uchar *)0xC8E0308)->v) = t12;
    (((struct o4_uint *)0xC8E0308)->v) = t13;
    return t12;
}

int gdFsGetStatG(int a4, int a5, int a6, int a7)
{
    int stk[10];

    register int R1;
    register int R2;
    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_10;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    register int v0_8;
    register int v0_9;
    v0_7 = a5;
    v0_4 = a6;
    v0_5 = a7;
    *(unsigned int *)(((*(int *)0xC3036E4) + 0x20)) = 0x1;
    v0_2 = *(int *)(((*(int *)0xC3036E4) + 0x1C));
    v0_0 = (0x0);
    v0_1 = (0xC3036E4);
    v0_3 = (v0_2);
    if ((v0_2 != 0)) goto L_C2AEEF0;
    v0_6 = (0x0);
    L_C2AEEF2:;
    v0_9 = ((((int)stk + 0) + 0x1C));
    v0_2 = ((((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)(((*(int *)((v0_1 + 0x0))) + 0xC))) + 0x10)))))(v0_6, (((int)stk + 0) + 0x1C), v0_4, v0_5, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24))));
    if (!((v0_3 != 0))) goto L_C2AF138;
    v0_10 = (v0_2);
    v0_8 = (0x2);
    if ((v0_2 == 0)) goto L_C2AEF42;
    if ((v0_10 == 1)) goto L_C2AEF42;
    if ((v0_10 != 65)) goto L_C2AEF1E;
    v0_4 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)(((*(int *)(((*(int *)((v0_1 + 0x0))) + 0xC))) + 0x24)))))((*(int *)((v0_3 + 0x3C))), ((int)stk + 0), v0_4, v0_5, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
    v0_6 = (v0_4);
    if ((v0_4 != 0)) goto L_C2AF064;
    if (((int)(*(int *)(((int)stk + 0))) <= 0)) goto L_C2AF05A;
    (((struct o4A_ushort *)(v0_3))->v) = v0_0;
    goto L_C2AF05E;
    L_C2AF138:;
    *(unsigned int *)(((*(int *)((v0_1 + 0x0))) + 0x20)) = v0_0;
    return v0_2;
    L_C2AF05E:;
    *(unsigned int *)((v0_3 + 0x18)) = (*(int *)((v0_3 + 0x20)));
    goto L_C2AF138;
    L_C2AF05A:;
    (((struct o4A_ushort *)(v0_3))->v) = v0_8;
    goto L_C2AF05E;
    L_C2AF064:;
    if ((v0_6 != 1)) goto L_C2AF138;
    *(unsigned int *)((v0_3 + 0x18)) = (*(int *)(((int)stk + 0)));
    goto L_C2AF138;
    L_C2AEF1E:;
    if ((v0_10 != 4)) goto L_C2AEF26;
    (((struct o40_uint *)(v0_3))->v) = (*(int *)((v0_9 + 0x8)));
    if ((((((struct o48_short *)(v0_3))->v)) != 1)) goto L_C2AF138;
    *(unsigned int *)((v0_3 + 0x18)) = (*(int *)((v0_9 + 0x0)));
    goto L_C2AF138;
    L_C2AEF26:;
    if ((v0_10 != 67)) goto L_C2AEF2E;
    goto L_C2AF138;
    L_C2AEF2E:;
    if (!((v0_10 != 5))) goto L_C2AF084;
    if ((v0_10 != 64)) goto L_C2AEF3E;
    goto L_C2AF084;
    L_C2AF084:;
    (((struct o50_ushort *)(v0_3))->v) = v0_2;
    (((struct o52_ushort *)(v0_3))->v) = (*(int *)((v0_9 + 0x0)));
    (((struct o44_uint *)(v0_3))->v) = (*(int *)((v0_9 + 0x4)));
    *(unsigned int *)((v0_3 + 0x3C)) = v0_0;
    *(unsigned int *)(((*(int *)((v0_1 + 0x0))) + 0x1C)) = v0_0;
    if ((((((struct o52_short *)(v0_3))->v)) != -29)) goto L_C2AF0EC;
    if ((((((struct o44_int *)(v0_3))->v)) != 58)) goto L_C2AF0DC;
    v0_7 = gdFsGetDrvStatG(v0_6, v0_7, v0_4, v0_5);
    v0_6 = (v0_7);
    if ((v0_7 == 6)) goto L_C2AF0B8;
    if ((v0_6 != 0)) goto L_C2AF0EC;
    L_C2AF0B8:;
    (((struct o52_ushort *)(v0_3))->v) = 0xFFFFFFE9;
    L_C2AF0EC:;
    v0_7 = (((struct o52_short *)(v0_3))->v);
    v0_6 = (v0_7);
    if ((v0_7 == -23)) goto L_C2AF0FC;
    if ((v0_6 != -33)) goto L_C2AF102;
    L_C2AF0FC:;
    *(unsigned int *)(((*(int *)((v0_1 + 0x0))) + 0x34)) = 0x1;
    L_C2AF102:;
    if (((*(int *)(((*(int *)((v0_1 + 0x0))) + 0x24))) == 0)) goto L_C2AF118;
    v0_6 = *(int *)((v0_1 + 0x0));
    v0_6 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)((v0_6 + 0x24)))))((*(int *)((v0_6 + 0x28))), ((((struct o52_short *)(v0_3))->v)), v0_4, v0_5, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
    L_C2AF118:;
    if (((*(int *)((v0_3 + 0x34))) == 0)) goto L_C2AF138;
    v0_3 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)((v0_3 + 0x34)))))((*(int *)((v0_3 + 0x38))), ((((struct o52_short *)(v0_3))->v)), v0_4, v0_5, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
    goto L_C2AF138;
    L_C2AF0DC:;
    if ((((((struct o44_int *)(v0_3))->v)) != 0x104)) goto L_C2AF0EC;
    (((struct o52_ushort *)(v0_3))->v) = 0xFFFFFFDB;
    goto L_C2AF0EC;
    L_C2AEF3E:;
    (((struct o50_ushort *)(v0_3))->v) = (unsigned char)v0_2;
    *(unsigned int *)((v0_3 + 0x3C)) = v0_0;
    *(unsigned int *)(((*(int *)((v0_1 + 0x0))) + 0x1C)) = v0_0;
    goto L_C2AF138;
    L_C2AEF42:;
    v0_6 = (((struct o48_short *)(v0_3))->v);
    *(unsigned int *)(((*(int *)((v0_1 + 0x0))) + 0x1C)) = v0_0;
    (((struct o50_ushort *)(v0_3))->v) = v0_2;
    *(unsigned int *)((v0_3 + 0x3C)) = v0_0;
    (((struct o48_ushort *)(v0_3))->v) = v0_0;
    v0_6 = (v0_6);
    if ((v0_2 == 1)) goto L_C2AEF5E;
    goto L_C2AF138;
    L_C2AEF5E:;
    v0_10 = (v0_6);
    if ((v0_6 != 1)) goto L_C2AEF88;
    *(unsigned int *)((v0_3 + 0x18)) = (*(int *)((v0_9 + 0x0)));
    *(unsigned int *)((v0_3 + 0x14)) = ((*(int *)((v0_3 + 0x14))) + (*(int *)((v0_3 + 0x1C))));
    (((struct o4A_ushort *)(v0_3))->v) = v0_8;
    if (((*(int *)((v0_3 + 0x24))) != 0)) goto L_C2AEF7E;
    goto L_C2AF138;
    L_C2AEF7E:;
    v0_3 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))((*(int *)((v0_3 + 0x24)))))((*(int *)((v0_3 + 0x28))), v0_7, v0_4, v0_5, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
    goto L_C2AF138;
    L_C2AEF88:;
    if ((v0_10 == 3)) goto L_C2AEF9E;
    v0_10 = (v0_6);
    if ((v0_6 != 4)) goto L_C2AEFA4;
    *(unsigned int *)((v0_3 + 0x18)) = (*(int *)((v0_3 + 0x20)));
    *(unsigned int *)((v0_3 + 0x14)) = ((*(int *)((v0_3 + 0x14))) + (*(int *)((v0_3 + 0x1C))));
    L_C2AEF9E:;
    (((struct o4A_ushort *)(v0_3))->v) = v0_8;
    goto L_C2AF138;
    L_C2AEFA4:;
    if ((v0_10 != 7)) goto L_C2AEFF0;
    v0_6 = (gdDecSubcode(((*(int *)((v0_1 + 0x0))) + 0x40), (((int)stk + 0) + 0x4))) == 0;
    if (v0_6) goto L_C2AEFCC;
    (((struct o50_ushort *)(v0_3))->v) = 0x5;
    (((struct o52_ushort *)(v0_3))->v) = 0xFFFFFFED;
    (((struct o44_uint *)(v0_3))->v) = v0_0;
    goto L_C2AF0EC;
    L_C2AEFCC:;
    *(unsigned int *)(((*(int *)((v0_3 + 0x8))) + 0x0)) = (*(int *)(((int)stk + 4)));
    *(unsigned int *)(((*(int *)((v0_3 + 0x8))) + 0x4)) = (*(int *)(((int)stk + 8)));
    *(unsigned int *)(((*(int *)((v0_3 + 0x8))) + 0x8)) = (*(int *)(((int)stk + 12)));
    *(unsigned int *)(((*(int *)((v0_3 + 0x8))) + 0xC)) = (*(int *)(((int)stk + 16)));
    *(unsigned int *)(((*(int *)((v0_3 + 0x8))) + 0x10)) = ((*(int *)(((int)stk + 20))) & 0xFFFFFF);
    goto L_C2AF138;
    L_C2AEFF0:;
    if ((v0_6 == 8)) goto L_C2AEFFA;
    goto L_C2AF138;
    L_C2AEFFA:;
    v0_7 = ((int (*)(int, int, int, int, int, int, int, int, int, int, int))(((((struct o48_int *)((*(int *)(((*(int *)((v0_1 + 0x0))) + 0xC)))))->v))))(0xC8B967C, 0xC8B9680, (*(int *)((v0_3 + 0x4))), 0xC8B9684, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24));
    v0_6 = (v0_7);
    if ((v0_7 == 0)) goto L_C2AF026;
    *(unsigned int *)((v0_3 + 0x3C)) = v0_6;
    (((struct o50_ushort *)(v0_3))->v) = 0x4;
    (((struct o48_ushort *)(v0_3))->v) = 0x6;
    *(unsigned int *)(((*(int *)((v0_1 + 0x0))) + 0x1C)) = v0_3;
    goto L_C2AF138;
    L_C2AF026:;
    (((struct o50_ushort *)(v0_3))->v) = 0x5;
    (((struct o52_ushort *)(v0_3))->v) = 0xFFFFFFE4;
    (((struct o44_uint *)(v0_3))->v) = v0_0;
    *(unsigned int *)(((*(int *)((v0_3 + 0x4))) + 0x0)) = v0_0;
    goto L_C2AF0EC;
    L_C2AEEF0:;
    v0_6 = ((*(int *)((v0_3 + 0x3C))));
    goto L_C2AEEF2;
}

int FUN_0c18106a(int a4, int a5, int a6)
{
    int stk[7];
    int t32;

    register int R1;
    int R4;
    register int R11;
    register int R13;
    register float F10;
    register float F13;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    R4 = a4;
    v0_5 = a5;
    v0_4 = a6;
    *(unsigned short *)(((int)stk + 4)) = R4;
    *(unsigned short *)(((int)stk + 0)) = v0_5;
    if (((short)v0_4 == 0)) goto L_C18108E;
    v0_0 = (0xFFFFFFFE);
    L_C1812D8:;
    return v0_0;
    L_C18108E:;
    v0_2 = *(short *)(((int)stk + 0));
    v0_3 = *(short *)(((int)stk + 4));
    v0_1 = (((v0_2 << 1) + v0_3));
    v0_0 = (0x8);
    if (((int)(short)((v0_2 << 1) + v0_3) <= (int)0x8)) goto L_C1810A2;
    v0_0 = (0xFFFFFFFF);
    goto L_C1812D8;
    L_C1810A2:;
    v0_2 = (0xC86CC40);
    v0_3 = (0x0);
    R4 = (0x0);
    L_C1810A8:;
    if (((*(signed char *)((v0_2 + (unsigned char)((((R4 << 1) + R4) << 2) << 1)))) != 1)) goto L_C1810F0;
    v0_0 = (0xFFFFFFFD);
    goto L_C1812D8;
    L_C1810F0:;
    v0_4 = (int)(short)(R4 + 0x1) < (int)v0_0;
    R4 = ((R4 + 0x1));
    if (v0_4) goto L_C1810A8;
    v0_4 = *(short *)(((int)stk + 4));
    *(unsigned int *)(((int)stk + 8)) = v0_4;
    nlsndG2Write(v0_4, 0xA08000A0);
    v0_4 = *(short *)(((int)stk + 0));
    *(unsigned int *)(((int)stk + 24)) = v0_4;
    nlsndG2Write(v0_4, 0xA08000A4);
    R4 = (0xC86CC0C);
    v0_4 = ((nlsndG2Read(0xA080008C)));
    if (((short)v0_1 == 0)) goto L_C18119C;
    v0_1 = (int)((unsigned int)(v0_4 - ((((short)v0_1 << 2) << 2) << 2)) / (unsigned int)(short)v0_1);
    *(unsigned int *)((R4 + 0x0)) = (v0_1 & 0x7FFFFFE0);
    v0_5 = (0x4000);
    if (((int)(v0_1 & 0x7FFFFFE0) <= (int)0x4000)) goto L_C181140;
    *(unsigned int *)((R4 + 0x0)) = v0_5;
    L_C181140:;
    *(unsigned int *)(((int)stk + 4)) = ((*(int *)((R4 + 0x0))) + 0x40);
    t32 = nlsndG2Read(((((struct o0_int *)0xC86CC00)->v)));
    R4 = (t32);
    if (((0x1F & t32) == 0)) goto L_C18115E;
    R4 = (((0xFFFFFFE0 & R4) + 0x20));
    L_C18115E:;
    R11 = (0xA0800100);
    R13 = (((((((struct o4_int *)0xC86CC00)->v)) - (*(int *)(((int)stk + 4)))) - R4));
    L_C1811A0:;
    nlsndG2Write((*(int *)(((int)stk + 4))), 0xA08000A8);
    v0_1 = (v0_3);
    v0_4 = (0xA0800000);
    if (((int)(*(int *)(((int)stk + 8))) <= 0)) goto L_C181210;
    L_C1811B2:;
    *(unsigned int *)(((int)stk + 0)) = ((unsigned char)((((v0_1 << 1) + v0_1) << 2) << 1) + v0_2);
    *(unsigned char *)((((unsigned char)((((v0_1 << 1) + v0_1) << 2) << 1) + v0_2) + 0x1)) = v0_3;
    *(unsigned char *)((((unsigned char)((((v0_1 << 1) + v0_1) << 2) << 1) + v0_2) + 0x0)) = v0_3;
    v0_6 = ((R13 + v0_4));
    v0_5 = ((R11 + 0xC));
    *(unsigned int *)(((*(int *)(((int)stk + 0))) + 0x4)) = v0_6;
    nlsndG2Write(R13, v0_5);
    v0_6 = ((*(int *)(((int)stk + 4))));
    v0_7 = ((*(int *)(((int)stk + 0))));
    v0_5 = (R11);
    *(unsigned int *)((v0_7 + 0x8)) = 0x0;
    nlsndG2Write(0x0, (v0_5 + 0x10));
    *(unsigned int *)(((*(int *)(((int)stk + 0))) + 0x10)) = (R11 + 0x14);
    *(unsigned int *)(((*(int *)(((int)stk + 0))) + 0x14)) = (R11 + 0x4);
    v0_5 = (int)(short)(v0_1 + 0x1) < (int)(*(int *)(((int)stk + 8)));
    R11 = ((R11 + 0x60));
    R13 = ((R13 - v0_6));
    v0_1 = ((v0_1 + 0x1));
    if (v0_5) goto L_C1811B2;
    L_C181210:;
    *(unsigned int *)(((int)stk + 16)) = (R11 + 0x4);
    *(unsigned int *)(((int)stk + 20)) = (R11 + 0x14);
    *(unsigned int *)(((int)stk + 12)) = (R11 + 0xC);
    v0_5 = *(int *)(((int)stk + 8));
    v0_6 = *(int *)(((int)stk + 24));
    *(unsigned int *)(((int)stk + 8)) = (v0_5 + v0_6);
    if (((int)(short)v0_1 >= (int)(v0_5 + v0_6))) goto L_C1812A0;
    L_C181230:;
    *(unsigned int *)(((int)stk + 0)) = ((unsigned char)((((v0_1 << 1) + v0_1) << 2) << 1) + v0_2);
    *(unsigned char *)((((unsigned char)((((v0_1 << 1) + v0_1) << 2) << 1) + v0_2) + 0x1)) = v0_3;
    *(unsigned char *)((((unsigned char)((((v0_1 << 1) + v0_1) << 2) << 1) + v0_2) + 0x0)) = v0_3;
    *(unsigned int *)(((*(int *)(((int)stk + 0))) + 0x8)) = (R13 + v0_4);
    nlsndG2Write(R13, (R11 + 0x10));
    v0_5 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((*(int *)(((int)stk + 0))) + 0x4)) = ((R13 - v0_5) + v0_4);
    nlsndG2Write((R13 - v0_5), (*(int *)(((int)stk + 12))));
    v0_6 = *(int *)(((int)stk + 4));
    *(unsigned int *)(((*(int *)(((int)stk + 0))) + 0x10)) = (*(int *)(((int)stk + 20)));
    *(unsigned int *)(((*(int *)(((int)stk + 0))) + 0x14)) = (*(int *)(((int)stk + 16)));
    *(unsigned int *)(((int)stk + 16)) = ((*(int *)(((int)stk + 16))) + 0x60);
    *(unsigned int *)(((int)stk + 20)) = ((*(int *)(((int)stk + 20))) + 0x60);
    *(unsigned int *)(((int)stk + 12)) = ((*(int *)(((int)stk + 12))) + 0x60);
    v0_7 = (int)(short)(v0_1 + 0x1) < (int)(*(int *)(((int)stk + 8)));
    R11 = ((R11 + 0x60));
    R13 = (((R13 - v0_5) - v0_6));
    v0_1 = ((v0_1 + 0x1));
    if (v0_7) goto L_C181230;
    L_C1812A0:;
    R4 = (0xFFFFFFFF);
    if (((int)(short)v0_1 >= (int)v0_0)) goto L_C1812D0;
    L_C1812A8:;
    *(unsigned char *)((((unsigned char)((((v0_1 << 1) + v0_1) << 2) << 1) + v0_2) + 0x0)) = R4;
    *(unsigned char *)((((unsigned char)((((v0_1 << 1) + v0_1) << 2) << 1) + v0_2) + 0x1)) = v0_3;
    *(unsigned int *)(((((unsigned char)((((v0_1 << 1) + v0_1) << 2) << 1) + v0_2) + 0x4) + 0x4)) = R4;
    v0_4 = (int)(short)(v0_1 + 0x1) < (int)v0_0;
    *(unsigned int *)(((((unsigned char)((((v0_1 << 1) + v0_1) << 2) << 1) + v0_2) + 0x4) + 0x0)) = R4;
    v0_1 = ((v0_1 + 0x1));
    if (v0_4) goto L_C1812A8;
    L_C1812D0:;
    FUN_0c180d72(0xA1);
    v0_0 = (0x0);
    goto L_C1812D8;
    L_C18119C:;
    *(unsigned int *)(((int)stk + 4)) = v0_3;
    *(unsigned int *)((R4 + 0x0)) = v0_3;
    goto L_C1811A0;
}

int FUN_0c17edc0(int a4, int a5, int a6, int a7)
{
    int stk[2];

    register int R1;
    register int R2;
    register int R3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    register int v0_7;
    v0_2 = a4;
    v0_3 = a5;
    v0_5 = a6;
    v0_1 = a7;
    *(unsigned int *)(((int)stk + 4)) = v0_3;
    v0_3 = ((((v0_5 << 2) << 2) + v0_2));
    v0_0 = (0x0);
    v0_4 = (v0_5);
    if ((v0_1 != 1)) goto L_C17EDEA;
    v0_5 = ((*(int *)((v0_3 + 0xC))));
    L_C17EDEA:;
    v0_7 = *(int *)0xC8A6C9C;
    v0_6 = ((v0_5 + v0_7));
    v0_1 = ((((v0_5 + v0_7) << 2) << 1));
    v0_2 = (0xC83CD40);
    if (((*(int *)((((*(int *)0xC83CD40) + (((v0_5 + v0_7) << 2) << 1)) + 0x0))) != 0)) goto L_C17EE16;
    v0_5 = *(int *)((v0_2 + 0x0));
    *(int *)((int)stk + 0) = (0x4 + (v0_5 + v0_1));
    *(unsigned int *)(((0x4 + (v0_5 + v0_1)) + 0x0)) = (nl_texture_slot_alloc());
    L_C17EE16:;
    v0_5 = *(int *)((v0_2 + 0x0));
    *(unsigned int *)(((v0_5 + v0_1) + 0x0)) = ((*(int *)(((v0_5 + v0_1) + 0x0))) + 0x1);
    v0_7 = (((struct o4_int *)0xC86CBC8)->v);
    v0_1 = *(int *)((((*(int *)((v0_2 + 0x0))) + v0_1) + 0x4));
    v0_5 = (((v0_1 * 0x3C) + (*(int *)0xC8A64D8)));
    v0_1 = (v0_1);
    v0_2 = (((v0_6 << 1) + v0_7));
    if (((*(short *)((((v0_6 << 1) + v0_7) + 0x0))) != -1)) goto L_C17EE70;
    v0_7 = nlSpriteGetNextSpriteIndex();
    v0_2 = (v0_7);
    if ((v0_7 == -1)) goto L_C17EE60;
    *(unsigned short *)(((v0_6 << 1) + ((((struct o4_int *)0xC86CBC8)->v)))) = v0_2;
    L_C17EE72:;
    if (((*(int *)((v0_5 + 0x2C))) != 0)) goto L_C17EE8C;
    v0_3 = nlLoadTextureMem(v0_3, v0_1, (*(int *)((v0_3 + 0x8))));
    nl_texture_slot_finish(v0_1);
    *(unsigned int *)((v0_5 + 0x38)) = v0_1;
    v0_0 = ((v0_0 | v0_3));
    L_C17EE8C:;
    *(unsigned int *)((v0_5 + 0x2C)) = ((*(int *)((v0_5 + 0x2C))) + 0x1);
    nlSpriteSetVtxContext(((((v0_2 << 2) << 2) << 1) + ((((struct o14_int *)0xC86CBC8)->v))), v0_1);
    if (!(((*(int *)(((int)stk + 4))) != 0))) goto L_C17F01C;
    v0_1 = (((struct o14_int *)0xC86CBC8)->v);
    v0_4 = *(int *)(((v0_4 << 2) + (*(int *)(((int)stk + 4)))));
    v0_3 = *(int *)((((((v0_2 << 2) << 2) << 1) + v0_1) + 0xC));
    *(unsigned short *)((((((v0_2 << 2) << 2) << 1) + v0_1) + 0x16)) = 0xFFFF;
    v0_5 = (v0_4);
    v0_1 = (((((v0_2 << 2) << 2) << 1) + v0_1));
    v0_2 = ((0x7 & ((unsigned int)v0_3 >> 27)));
    if (((*(int *)0xC2A6078) == 0)) goto L_C17EEDE;
    if ((v0_2 == 5)) goto L_C17F00C;
    if ((v0_2 != 6)) goto L_C17F01C;
    goto L_C17F00C;
    L_C17F01C:;
    v0_0 = (v0_0);
    L_C17F01E:;
    return v0_0;
    L_C17F00C:;
    *(unsigned int *)((v0_1 + 0xC)) = (((*(int *)((v0_1 + 0xC))) & 0xF81FFFFF) | (v0_5 << 21));
    goto L_C17F01C;
    L_C17EEDE:;
    v0_3 = (0xC868B7C);
    if (((*(int *)0xC868B7C) != 0)) goto L_C17EEEA;
    goto L_C17F01C;
    L_C17EEEA:;
    if ((v0_2 == 5)) goto L_C17EEFA;
    if ((v0_2 == 6)) goto L_C17EEFA;
    goto L_C17F01C;
    L_C17EEFA:;
    if (((int)v0_5 < (int)((((struct o0_short *)0xC8B85C4)->v)))) goto L_C17EF06;
    goto L_C17F01C;
    L_C17EF06:;
    *(unsigned short *)((v0_1 + 0x16)) = v0_5;
    v0_4 = (((struct o14_int *)0xC8B85C4)->v);
    v0_3 = (((((v0_5 << 1) + v0_5) << 2) + (*(int *)((v0_3 + 0x0)))));
    v0_2 = ((v0_4 + ((v0_5 << 2) << 1)));
    if (((*(short *)(((v0_4 + ((v0_5 << 2) << 1)) + 0x4))) == 0)) goto L_C17EF90;
    *(unsigned short *)((v0_2 + 0x4)) = ((*(short *)((v0_2 + 0x4))) + 0x1);
    v0_5 = ((*(short *)((v0_2 + 0x0))));
    L_C17EFE2:;
    *(unsigned int *)((v0_1 + 0xC)) = (((*(int *)((v0_1 + 0xC))) & 0xF81FFFFF) | (v0_5 << 21));
    goto L_C17F01C;
    L_C17EF90:;
    *(unsigned char *)((v0_2 + 0x2)) = (*(signed char *)((v0_3 + 0x2)));
    *(unsigned char *)((v0_2 + 0x3)) = ((int)((*(int *)((v0_3 + 0x8))) + 0xF) >> 4);
    *(unsigned short *)((v0_2 + 0x4)) = 0x1;
    *(unsigned short *)((v0_2 + 0x6)) = v0_5;
    v0_5 = *(int *)((v0_3 + 0x8));
    v0_4 = nlSearchPalette((*(short *)((v0_3 + 0x2))), v0_5);
    v0_6 = (v0_5);
    v0_5 = (v0_4);
    if (((int)v0_4 < 0)) goto L_C17EFE0;
    *(unsigned short *)((v0_2 + 0x0)) = v0_5;
    FUN_0c1772e0(v0_5, v0_6);
    nlSetPaletteData(((v0_5 << 2) << 2), (*(int *)((v0_3 + 0x4))), v0_6);
    goto L_C17EFE2;
    L_C17EFE0:;
    v0_5 = (0x0);
    goto L_C17EFE2;
    L_C17EE60:;
    (((struct o0_uint *)0xC86CBC8)->v) = 0x3;
    v0_0 = (0x2);
    goto L_C17F01E;
    L_C17EE70:;
    v0_2 = ((*(short *)((v0_2 + 0x0))));
    goto L_C17EE72;
}

int FUN_0c178c70(int a4, int a5, int a6, int a7, int a8, int a9)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    t0 = (((((a5 + a6) + a7) + a8) + a9) + ((((a5 + a6) + a7) + a8) + a9));
    if ((*(int *)0xC83CF8C) == 3) {
    } else {
        t1 = (((a6 + a7) + a8) + a9);
        if ((*(int *)(((0xC83CDC4 + (a4 * 0x38)) + 0xC))) == 0) {
        } else {
            t2 = *(int *)(((0xC83CDC4 + (a4 * 0x38)) + 0xC));
            t1 = (((a5 + a6) + a8) + a9);
            if (t2 == 2) {
            } else {
                if (t2 == 4) {
                    t2 = (((a5 + a6) + a7) + a8);
                }
                t1 = t2;
            }
        }
        t0 = t1;
    }
    *(unsigned int *)(((0xC83CDC4 + (a4 * 0x38)) + 0x8)) = (t0 << 2);
    if (a4 == 0) {
        *(unsigned int *)(((0xC83CDC4 + (a4 * 0x38)) + 0x4)) = (*(int *)0xC83CDB8);
    } else {
        *(unsigned int *)(((0xC83CDC4 + (a4 * 0x38)) + 0x4)) = ((*(int *)(((((a4 - 1) * 0x38) + 0xC83CDC4) + 0x4))) + (*(int *)(((((a4 - 1) * 0x38) + 0xC83CDC4) + 0x8))));
    }
    u0 = *(float *)0xC178F78;
    if ((*(int *)0xC83CF8C) == 3) {
        t1 = (int)((unsigned int)((int)((unsigned int)t0 + (unsigned int)0x0)) + ((((int)0x0 > (int)t0)) ? 1u : 0u));
        (((struct o10_float *)((0xC83CDC4 + (a4 * 0x38))))->v) = (((float)a5 * u0) / (float)(t1 >> 1));
        (((struct o14_float *)((0xC83CDC4 + (a4 * 0x38))))->v) = (((float)a6 * u0) / (float)(t1 >> 1));
        (((struct o18_float *)((0xC83CDC4 + (a4 * 0x38))))->v) = (((float)a7 * u0) / (float)(t1 >> 1));
        (((struct o1C_float *)((0xC83CDC4 + (a4 * 0x38))))->v) = (((float)a8 * u0) / (float)(t1 >> 1));
        (((struct o20_float *)((0xC83CDC4 + (a4 * 0x38))))->v) = (((float)a9 * u0) / (float)(t1 >> 1));
    } else {
        if ((*(int *)(((0xC83CDC4 + (a4 * 0x38)) + 0xC))) == 0) {
            (((struct o10_float *)((0xC83CDC4 + (a4 * 0x38))))->v) = 0.0f;
            (((struct o14_float *)((0xC83CDC4 + (a4 * 0x38))))->v) = (((float)a6 * u0) / (float)t0);
            (((struct o18_float *)((0xC83CDC4 + (a4 * 0x38))))->v) = (((float)a7 * u0) / (float)t0);
            (((struct o1C_float *)((0xC83CDC4 + (a4 * 0x38))))->v) = (((float)a8 * u0) / (float)t0);
            (((struct o20_float *)((0xC83CDC4 + (a4 * 0x38))))->v) = (((float)a9 * u0) / (float)t0);
        } else {
            t1 = *(int *)(((0xC83CDC4 + (a4 * 0x38)) + 0xC));
            if (t1 == 2) {
                (((struct o10_float *)((0xC83CDC4 + (a4 * 0x38))))->v) = (((float)a5 * u0) / (float)t0);
                (((struct o14_float *)((0xC83CDC4 + (a4 * 0x38))))->v) = (((float)a6 * u0) / (float)t0);
                (((struct o18_float *)((0xC83CDC4 + (a4 * 0x38))))->v) = 0.0f;
                (((struct o1C_float *)((0xC83CDC4 + (a4 * 0x38))))->v) = (((float)a8 * u0) / (float)t0);
                (((struct o20_float *)((0xC83CDC4 + (a4 * 0x38))))->v) = (((float)a9 * u0) / (float)t0);
            } else {
                if (t1 == 4) {
                    (((struct o10_float *)((0xC83CDC4 + (a4 * 0x38))))->v) = (((float)a5 * u0) / (float)t0);
                    (((struct o14_float *)((0xC83CDC4 + (a4 * 0x38))))->v) = (((float)a6 * u0) / (float)t0);
                    (((struct o18_float *)((0xC83CDC4 + (a4 * 0x38))))->v) = (((float)a7 * u0) / (float)t0);
                    (((struct o1C_float *)((0xC83CDC4 + (a4 * 0x38))))->v) = (((float)a8 * u0) / (float)t0);
                    (((struct o20_float *)((0xC83CDC4 + (a4 * 0x38))))->v) = 0.0f;
                }
            }
        }
    }
    return t0;
}

int FUN_0c2e64ca(void)
{
    int stk[7];
    register int t10;
    register int t12;
    register int t23;
    register int t25;
    register int t34;
    register int t53;
    register int t54;
    register int t56;
    register int t58;
    register int t63;
    register int t76;
    register int t79;
    register int t81;
    register int t83;
    register int t88;
    register int t98;
    register int t101;
    register int t103;
    register int t105;
    register int t110;
    register int t32;
    register int t48;
    register int t49;
    register int t50;
    register int t51;

    (((struct o8_uchar *)0xC8D6490)->v) = 0x6;
    if (((unsigned char)(*(signed char *)0xC8D6779) & 64) != 0) {
        t10 = FUN_0c2ec430(((((struct o0_int *)0xC8D6490)->v)));
        t12 = (signed char)t10;
        if ((signed char)t10 == 0) {
        } else {
            t12 = FUN_0c2d578e();
            (((struct o0_uchar *)0xC8D660C)->v) = 0x8;
        }
        return t12;
    }
    if (((unsigned char)(*(signed char *)0xC8D677D) & 16) != 0) {
        t23 = FUN_0c2d7612(0x0);
        if ((signed char)t23 == 0) {
            t25 = FUN_0c2ec430(((((struct o0_int *)0xC8D6490)->v)));
            t32 = (signed char)t25;
            if ((signed char)t25 == 0) {
            } else {
                t32 = FUN_0c2e4736((*(signed char *)0xC8D6434), 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4));
                (((struct o8_uchar *)0xC8D6490)->v) = 0x1;
            }
        } else {
            t32 = FUN_0c2e4736((*(signed char *)0xC8D6434), 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4));
            (((struct o8_uchar *)0xC8D6490)->v) = 0x1;
        }
        return t32;
    }
    t34 = *(signed char *)0xC8D677F;
    if (((unsigned char)t34 & 0x1) == 0) {
        return (unsigned char)t34;
    }
    if (((unsigned char)(*(signed char *)0xC8D6783) & 0x2) != 0) {
        if ((((unsigned char)(*(signed char *)0xC8D677F) & 0x8) != 0) && ((t48 = *(signed char *)0xC8D677C, ((unsigned char)t48 & 16) == 0) && ((t49 = *(signed char *)0xC8D6783, ((unsigned char)t49 & 16) == 0) && ((t50 = *(signed char *)0xC8D644E, ((unsigned char)t50 & 128) != 0) || (t51 = *(signed char *)0xC8D645F, ((unsigned char)t51 & 0x8) == 0))))) {
            (((struct o6_uchar *)0xC8D677D)->v) = ((*(signed char *)0xC8D6783) & 0xFD);
            t53 = *(signed char *)0xC8D677D;
            (((struct o0_uchar *)0xC8D677D)->v) = (t53 & 0xFE);
            (((struct o8_uchar *)0xC8D6490)->v) = 0x1;
            return (t53 & 0xFE);
        }
        t54 = FUN_0c2d6442();
        if ((signed char)t54 == 0) {
            (((struct o6_uchar *)0xC8D677D)->v) = ((*(signed char *)0xC8D6783) & 0xFD);
            t56 = *(signed char *)0xC8D677D;
            (((struct o0_uchar *)0xC8D677D)->v) = (t56 & 0xFE);
            (((struct o8_uchar *)0xC8D6490)->v) = 0x1;
            return (t56 & 0xFE);
        }
        t58 = FUN_0c2ec430(((((struct o8_int *)0xC8D660C)->v)));
        if ((signed char)t58 == 0) {
            return (signed char)t58;
        }
        if ((*(signed char *)0xC8D6441) != 0) {
            return (signed char)t58;
        }
        (((struct o6_uchar *)0xC8D677D)->v) = ((*(signed char *)0xC8D6783) & 0xFD);
        if (((unsigned char)(*(signed char *)0xC8D677D) & 0x1) == 0) {
            t63 = 0x0;
            for (;;) {
                if ((unsigned char)t63 != 65) {
                    if ((unsigned char)t63 == 68) {
                        break;
                    }
                    t63 = (*(int *)0xC304178);
                    t63 = (t63 - 1);
                    *(unsigned int *)0xC304178 = t63;
                    t63 = (*(signed char *)((t63 + 0x0)));
                    continue;
                }
                (((struct o8_uchar *)0xC8D6490)->v) = 0x0;
                return (unsigned char)t63;
            }
            (((struct o8_uchar *)0xC8D6490)->v) = 0x0;
            return (unsigned char)t63;
        }
        if (((unsigned char)(*(signed char *)0xC8D677D) & 0x1) != 0) {
            if (((unsigned char)(*(signed char *)0xC8D677D) & 0x2) != 0) {
                t76 = thunk_FUN_0c2d3774();
                if ((signed char)t76 != 0) {
                    return (signed char)t76;
                }
                return FUN_0c2e380e();
            }
            if (((unsigned char)(*(signed char *)0xC8D677D) & 4) != 0) {
                return FUN_0c2e3dca();
            }
            t79 = *(signed char *)0xC8D677D;
            if (((unsigned char)t79 & 0x8) != 0) {
                return FUN_0c2e38c2();
            }
            return (unsigned char)t79;
        }
        if (((unsigned char)(*(signed char *)0xC8D6788) & 0x1) != 0) {
            t81 = *(signed char *)0xC8D6788;
            (((struct oB_uchar *)0xC8D677D)->v) = (t81 & 0xFE);
            (((struct o8_uchar *)0xC8D6490)->v) = 0x0;
            return (t81 & 0xFE);
        }
        t83 = FUN_0c2ec430(((((struct o1C_int *)0xC8D660C)->v)));
        if ((signed char)t83 != 0) {
            if ((int)(unsigned short)(*(short *)0xC8D6524) > (int)0x80) {
                (((struct o8_uchar *)0xC8D6490)->v) = 0x2;
                return (signed char)t83;
            }
            *(unsigned int *)0xC304178 = 0xC8D64A3;
            (((struct o2_uchar *)0xC8D677D)->v) = ((*(signed char *)0xC8D677F) & 0xF7);
            t88 = *(signed char *)(((*(int *)0xC304178) + 0x1));
            if (((unsigned char)t88 != 84) && ((unsigned char)t88 != 47)) {
                (((struct o8_uchar *)0xC8D6490)->v) = 0x4;
                return (unsigned char)t88;
            }
            *(unsigned int *)0xC304178 = (((*(int *)0xC304178) + 0x1) + 0x1);
            (((struct o8_uchar *)0xC8D6490)->v) = 0x0;
            return FUN_0c2e83ae();
        }
        return (signed char)t83;
    }
    if (((unsigned char)(*(signed char *)0xC8D677D) & 0x1) != 0) {
        if (((unsigned char)(*(signed char *)0xC8D677D) & 0x2) != 0) {
            t98 = thunk_FUN_0c2d3774();
            if ((signed char)t98 != 0) {
                return (signed char)t98;
            }
            return FUN_0c2e380e();
        }
        if (((unsigned char)(*(signed char *)0xC8D677D) & 4) != 0) {
            return FUN_0c2e3dca();
        }
        t101 = *(signed char *)0xC8D677D;
        if (((unsigned char)t101 & 0x8) != 0) {
            return FUN_0c2e38c2();
        }
        return (unsigned char)t101;
    }
    if (((unsigned char)(*(signed char *)0xC8D6788) & 0x1) != 0) {
        t103 = *(signed char *)0xC8D6788;
        (((struct oB_uchar *)0xC8D677D)->v) = (t103 & 0xFE);
        (((struct o8_uchar *)0xC8D6490)->v) = 0x0;
        return (t103 & 0xFE);
    }
    t105 = FUN_0c2ec430(((((struct o1C_int *)0xC8D660C)->v)));
    if ((signed char)t105 != 0) {
        if ((int)(unsigned short)(*(short *)0xC8D6524) > (int)0x80) {
            (((struct o8_uchar *)0xC8D6490)->v) = 0x2;
            return (signed char)t105;
        }
        *(unsigned int *)0xC304178 = 0xC8D64A3;
        (((struct o2_uchar *)0xC8D677D)->v) = ((*(signed char *)0xC8D677F) & 0xF7);
        t110 = *(signed char *)(((*(int *)0xC304178) + 0x1));
        if (((unsigned char)t110 != 84) && ((unsigned char)t110 != 47)) {
            (((struct o8_uchar *)0xC8D6490)->v) = 0x4;
            return (unsigned char)t110;
        }
        *(unsigned int *)0xC304178 = (((*(int *)0xC304178) + 0x1) + 0x1);
        (((struct o8_uchar *)0xC8D6490)->v) = 0x0;
        return FUN_0c2e83ae();
    }
    return (signed char)t105;
}

int FUN_0c2ed71e(void)
{
    int stk[9];
    register int t1;
    register int t3;
    register int t4;
    register int t17;
    register int t30;
    register int t33;
    register int t34;
    register int t46;
    register int t47;
    register int t48;
    register int t50;
    register int t51;
    int t52;
    register int t53;
    register int t54;
    register int t55;
    register int t57;
    register int t60;
    register int t71;
    register int t72;
    register int t74;
    register int t75;
    int t76;
    register int t77;
    register int t78;
    register int t79;
    register int t81;
    register int t84;
    register int t85;
    register int t86;
    register int t97;
    register int t102;
    register int t109;
    register int t110;
    register int t120;
    register int t125;
    register int t132;
    register int t133;
    register int t143;
    register int t155;
    register int t156;
    register int t163;

    t1 = *(signed char *)(((*(int *)0xC8D7110) + 0x0));
    if (t1 == 83) {
        *(unsigned int *)0xC8D7110 = ((*(int *)0xC8D7110) + 0x1);
        t3 = *(int *)0xC8D7110;
        *(unsigned int *)0xC8D7110 = (t3 + 0x1);
        t4 = *(signed char *)((((t3 + 0x1) - 1) + 0x0));
        if (t4 != 61) {
            if (t4 != 63) {
                return t4;
            }
            if (((unsigned char)(*(signed char *)0xC8D644E) & 0x8) != 0) {
                FUN_0c2ee516();
            }
            t17 = ((int (*)(int))(FUN_0c2ee4ba))(0xC302820);
            FUN_0c2edab8();
            return FUN_0c2ee516();
        }
        if ((*(signed char *)(((*(int *)0xC8D7110) + 0x0))) == 63) {
            *(unsigned int *)0xC8D7110 = ((*(int *)0xC8D7110) + 0x1);
            if (((unsigned char)(*(signed char *)0xC8D644E) & 0x8) != 0) {
                FUN_0c2ee516();
            }
            t30 = ((int (*)(int))(FUN_0c2ee4ba))(0xC302820);
            FUN_0c2ed9a0(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 32), *(int *)((int)stk + 32 + 4));
            return FUN_0c2ee516();
        }
        return FUN_0c2edc7a();
    }
    if (t1 == 65) {
        *(unsigned int *)0xC8D7110 = ((*(int *)0xC8D7110) + 0x1);
        t33 = *(int *)0xC8D7110;
        *(unsigned int *)0xC8D7110 = (t33 + 0x1);
        t34 = *(signed char *)((((t33 + 0x1) - 1) + 0x0));
        if (t34 != 61) {
            if (t34 != 63) {
                return t34;
            }
            if (((unsigned char)(*(signed char *)0xC8D644E) & 0x8) != 0) {
                FUN_0c2ee516();
            }
            t46 = *(signed char *)0xC8D647D;
            t47 = *(signed char *)0xC8D647C;
            *(int *)((int)stk + 32) = 0xC8D6440;
            *(unsigned int *)(((int)stk + 20)) = (((unsigned char)t46 << 8) | (unsigned char)t47);
            t48 = ((int (*)(int))(FUN_0c2ee4ba))(0xC30280C);
            t50 = FUN_0c2ed43a((*(int *)(((int)stk + 20))));
            t51 = *(int *)(((int)stk + 20));
            t52 = *(int *)0xC8D65E4;
            t53 = ((int (*)(int))(FUN_0c2ee4ba))(0xC302814);
            t54 = (((t51 - t50) & t52) & 0xFFFFFFFE);
            for (;;) {
                t55 = FUN_0c2edb78(t54);
                if ((signed char)t55 == 0) {
                    break;
                }
                t54 = (t54 - (FUN_0c2ed43a(t54)));
                if (t54 != 0) {
                    t57 = ((int (*)(int))(FUN_0c2ee4ba))(0xC302818);
                }
            }
            t60 = ((int (*)(int, int, int, int, int))(FUN_0c2ee4ba))(0xC30281C, 0x0, 0x0, 0x0, 0xC8D6440);
            return FUN_0c2ee516();
        }
        if ((*(signed char *)(((*(int *)0xC8D7110) + 0x0))) == 63) {
            *(unsigned int *)0xC8D7110 = ((*(int *)0xC8D7110) + 0x1);
            if (((unsigned char)(*(signed char *)0xC8D644E) & 0x8) != 0) {
                FUN_0c2ee516();
            }
            t71 = *(short *)0xC8D65E4;
            *(int *)((int)stk + 32) = 0xC8D6440;
            *(unsigned int *)(((int)stk + 20)) = (unsigned short)t71;
            t72 = ((int (*)(int))(FUN_0c2ee4ba))(0xC30280C);
            t74 = FUN_0c2ed43a((*(int *)(((int)stk + 20))));
            t75 = *(int *)(((int)stk + 20));
            t76 = *(int *)0xC8D65E4;
            t77 = ((int (*)(int))(FUN_0c2ee4ba))(0xC302814);
            t78 = (((t75 - t74) & t76) & 0xFFFFFFFE);
            for (;;) {
                t79 = FUN_0c2edb78(t78);
                if ((signed char)t79 == 0) {
                    break;
                }
                t78 = (t78 - (FUN_0c2ed43a(t78)));
                if (t78 != 0) {
                    t81 = ((int (*)(int))(FUN_0c2ee4ba))(0xC302818);
                }
            }
            t84 = ((int (*)(int, int, int, int, int))(FUN_0c2ee4ba))(0xC30281C, 0x0, 0x0, 0x0, 0xC8D6440);
            return FUN_0c2ee516();
        }
        *(int *)((int)stk + 32) = 0xC8D6440;
        *(unsigned int *)(((int)stk + 4)) = 0x0;
        for (;;) {
            t85 = FUN_0c2f2074(0xC8D711C, 0xC8D7110, 0x8);
            if ((unsigned char)t85 == 0) {
                t86 = FUN_0c2edece(0xC8D711C);
                if (t86 == 0) {
                    break;
                }
                *(unsigned int *)(((int)stk + 4)) = ((*(int *)(((int)stk + 4))) | t86);
                if ((unsigned char)t85 == 2) {
                    *(unsigned int *)(((int)stk + 8)) = (*(int *)(((int)stk + 4)));
                    *(int *)((int)stk + 0) = ((*(signed char *)0xC8D6481));
                    FUN_0c2ed220((((int)stk + 0) + 0x4), (*(signed char *)0xC8D647E), (*(signed char *)0xC8D647F), (*(signed char *)0xC8D6480));
                    t97 = FUN_0c2ed43a((((unsigned char)(*(signed char *)0xC8D647D) << 8) | (unsigned char)(*(signed char *)0xC8D647C)));
                    if ((unsigned int)(*(int *)(((int)stk + 4))) < (unsigned int)t97) {
                        t102 = *(int *)(((int)stk + 4));
                        if ((*(int *)(((int)stk + 8))) != t102) {
                            *(unsigned char *)0xC8D7099 = 0x3;
                            return t102;
                        }
                        (((struct o0_uchar *)0xC8D647C)->v) = ((FUN_0c2ed43a((((unsigned char)(*(signed char *)0xC8D647D) << 8) | (unsigned char)(*(signed char *)0xC8D647C)))) | (*(int *)(((int)stk + 4))));
                        t109 = FUN_0c2ed43a((((unsigned char)(*(signed char *)0xC8D647D) << 8) | (unsigned char)(*(signed char *)0xC8D647C)));
                        t110 = *(int *)(((int)stk + 4));
                        (((struct o1_uchar *)0xC8D647C)->v) = ((unsigned int)((t109 | t110) & 0xFF00) >> 8);
                        return ((unsigned int)((t109 | t110) & 0xFF00) >> 8);
                    }
                    *(unsigned char *)0xC8D7099 = 0x3;
                    return t97;
                }
                continue;
            }
            if ((unsigned char)t85 == 2) {
                *(unsigned int *)(((int)stk + 8)) = (*(int *)(((int)stk + 4)));
                *(int *)((int)stk + 0) = ((*(signed char *)0xC8D6481));
                FUN_0c2ed220((((int)stk + 0) + 0x4), (*(signed char *)0xC8D647E), (*(signed char *)0xC8D647F), (*(signed char *)0xC8D6480));
                t120 = FUN_0c2ed43a((((unsigned char)(*(signed char *)0xC8D647D) << 8) | (unsigned char)(*(signed char *)0xC8D647C)));
                if ((unsigned int)(*(int *)(((int)stk + 4))) < (unsigned int)t120) {
                    t125 = *(int *)(((int)stk + 4));
                    if ((*(int *)(((int)stk + 8))) != t125) {
                        *(unsigned char *)0xC8D7099 = 0x3;
                        return t125;
                    }
                    (((struct o0_uchar *)0xC8D647C)->v) = ((FUN_0c2ed43a((((unsigned char)(*(signed char *)0xC8D647D) << 8) | (unsigned char)(*(signed char *)0xC8D647C)))) | (*(int *)(((int)stk + 4))));
                    t132 = FUN_0c2ed43a((((unsigned char)(*(signed char *)0xC8D647D) << 8) | (unsigned char)(*(signed char *)0xC8D647C)));
                    t133 = *(int *)(((int)stk + 4));
                    (((struct o1_uchar *)0xC8D647C)->v) = ((unsigned int)((t132 | t133) & 0xFF00) >> 8);
                    return ((unsigned int)((t132 | t133) & 0xFF00) >> 8);
                }
                *(unsigned char *)0xC8D7099 = 0x3;
                return t120;
            }
        }
        *(unsigned char *)0xC8D7099 = 0x3;
        *(unsigned int *)(((int)stk + 8)) = (*(int *)(((int)stk + 4)));
        *(int *)((int)stk + 0) = ((*(signed char *)0xC8D6481));
        FUN_0c2ed220((((int)stk + 0) + 0x4), (*(signed char *)0xC8D647E), (*(signed char *)0xC8D647F), (*(signed char *)0xC8D6480));
        t143 = FUN_0c2ed43a((((unsigned char)(*(signed char *)0xC8D647D) << 8) | (unsigned char)(*(signed char *)0xC8D647C)));
        if ((unsigned int)(*(int *)(((int)stk + 4))) < (unsigned int)t143) {
            t163 = *(int *)(((int)stk + 4));
            if ((*(int *)(((int)stk + 8))) != t163) {
                *(unsigned char *)0xC8D7099 = 0x3;
            } else {
                (((struct o0_uchar *)0xC8D647C)->v) = ((FUN_0c2ed43a((((unsigned char)(*(signed char *)0xC8D647D) << 8) | (unsigned char)(*(signed char *)0xC8D647C)))) | (*(int *)(((int)stk + 4))));
                t155 = FUN_0c2ed43a((((unsigned char)(*(signed char *)0xC8D647D) << 8) | (unsigned char)(*(signed char *)0xC8D647C)));
                t156 = *(int *)(((int)stk + 4));
                (((struct o1_uchar *)0xC8D647C)->v) = ((unsigned int)((t155 | t156) & 0xFF00) >> 8);
                t163 = ((unsigned int)((t155 | t156) & 0xFF00) >> 8);
            }
        } else {
            *(unsigned char *)0xC8D7099 = 0x3;
            t163 = t143;
        }
        return t163;
    }
    *(unsigned char *)0xC8D7099 = 0x3;
    return t1;
}

void FUN_0c2ba8c8(int a4, int a5, int a6, int a7)
{
    int stk[2];
    register int t2;
    register int t3;

    if (a5 == 0) {
        return;
    }
    if ((unsigned int)a5 >= (unsigned int)0x30000) {
        *(unsigned short *)(((int)stk + 0)) = (_builtin_get_imask());
        _builtin_set_imask(0xF);
        ((int (*)(int, int, int, int))(0xAC2BA95C))(a4, a5, a6, a7);
    return;
    }
    t2 = (0x9FFFFFE0 & a4);
    t3 = ((unsigned int)((unsigned int)((unsigned int)(((0x1F & a4) + a5) + 0x1F) >> 2) >> 2) >> 1);
    for (;;) {
        iaOcbi((void *)t2);
        t3 = (t3 - 0x1);
        t2 = (t2 + 0x20);
        if (t3 == 0) {
            break;
        }
    }
}
