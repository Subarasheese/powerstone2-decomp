/* Straight-line functions with calls and guards (batch gen_nc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o10_float { char p[0x10]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o30_float { char p[0x30]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC_float { char p[0xC]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oD0_int { char p[0xD0]; int v; };
struct oD4_int { char p[0xD4]; int v; };
struct oD8_int { char p[0xD8]; int v; };
struct oDC_int { char p[0xDC]; int v; };
struct oEC_int { char p[0xEC]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c05f22c(int);
int FUN_0c05f254(int);
int FUN_0c0fa5dc(void);
int FUN_0c1171f0(int);
int nlAddVector3op(int, int, int);
int FUN_0c0fa600(int a4);
struct o6_short { char p[0x6]; short v; };
struct o6_ushort { char p[0x6]; unsigned short v; };


int FUN_0c0fa600(int a4)
{
    int t0;
    int t1;

    t0 = *(signed char *)(a4 + 0x14);
    if (t0 != 0) {
        if (t0 == 1) {
        } else {
            
            return t0;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)(a4 + 0x14)) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0x1F;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        (((struct o30_float *)(a4))->v) = (1.0f + 1.0f);
        FUN_0c1171f0(a4);
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x0, 0x60, ((((struct o0_int *)0xC4B4118)->v)));
        FUN_0c03744a(((((struct oEC_int *)(a4))->v)), 0x0, 0x0, ((((struct o4_int *)0xC4B4118)->v)));
        FUN_0c03744a(((((struct oC8_int *)(a4))->v)), 0x0, 0x61, ((((struct o0_int *)0xC4B4118)->v)));
        t0 = (((struct oC8_int *)(a4))->v);
        (((struct o6_ushort *)(t0))->v) = (((((struct o6_short *)(t0))->v)) | 0x600);
        { struct mv4 { int w[4]; }; *(struct mv4 *)(t0 + 0x14) = *(struct mv4 *)(0xC28E60C); }
        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x90 + t0)) = *(struct mv3 *)(t0 + 0x6C); }
        nlAddVector3op((t0 + 0x6C), (0x90 + t0), 0xC28E61C);
        FUN_0c03744a(((((struct oCC_int *)(a4))->v)), 0x0, 0x62, ((((struct o0_int *)0xC4B4118)->v)));
        t0 = (((struct oCC_int *)(a4))->v);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x90 + t0)) = *(struct mv3 *)(t0 + 0x6C); }
        nlAddVector3op((t0 + 0x6C), (0x90 + t0), 0xC28E628);
        FUN_0c03744a(((((struct oD0_int *)(a4))->v)), 0x0, 0x63, ((((struct o0_int *)0xC4B4118)->v)));
        t0 = (((struct oD0_int *)(a4))->v);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x90 + t0)) = *(struct mv3 *)(t0 + 0x6C); }
        nlAddVector3op((t0 + 0x6C), (0x90 + t0), 0xC28E61C);
        FUN_0c03744a(((((struct oD4_int *)(a4))->v)), 0x0, 0x64, ((((struct o0_int *)0xC4B4118)->v)));
        t0 = (((struct oD4_int *)(a4))->v);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x90 + t0)) = *(struct mv3 *)(t0 + 0x6C); }
        nlAddVector3op((t0 + 0x6C), (0x90 + t0), 0xC28E61C);
        FUN_0c03744a(((((struct oD8_int *)(a4))->v)), 0x0, 0x65, ((((struct o0_int *)0xC4B4118)->v)));
        t0 = (((struct oD8_int *)(a4))->v);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x90 + t0)) = *(struct mv3 *)(t0 + 0x6C); }
        nlAddVector3op((t0 + 0x6C), (0x90 + t0), 0xC28E61C);
        FUN_0c03744a(((((struct oDC_int *)(a4))->v)), 0x0, 0x66, ((((struct o0_int *)0xC4B4118)->v)));
        t0 = (((struct oDC_int *)(a4))->v);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x90 + t0)) = *(struct mv3 *)(t0 + 0x6C); }
        nlAddVector3op((t0 + 0x6C), (0x90 + t0), 0xC28E61C);
    }
    t0 = FUN_0c05f254(0x100);
    if (t0 != 0) {
        t0 = FUN_0c05f254(0x2000);
        if (t0 != 0) {
            (((struct o10_float *)0xC28E61C)->v) = (((((struct o10_float *)0xC28E61C)->v)) + 1.0f);
        }
        t0 = FUN_0c05f254(0x1000);
        if (t0 != 0) {
            (((struct o10_float *)0xC28E61C)->v) = (((((struct o10_float *)0xC28E61C)->v)) - 1.0f);
        }
        t0 = FUN_0c05f254(0x800);
        if (t0 != 0) {
            (((struct oC_float *)0xC28E61C)->v) = (((((struct oC_float *)0xC28E61C)->v)) - 1.0f);
        }
        t0 = FUN_0c05f254(0x400);
        if (t0 != 0) {
            (((struct oC_float *)0xC28E61C)->v) = (((((struct oC_float *)0xC28E61C)->v)) + 1.0f);
        }
    } else {
        t0 = FUN_0c05f254(0x2000);
        if (t0 != 0) {
            (((struct o4_float *)0xC28E61C)->v) = (((((struct o4_float *)0xC28E61C)->v)) + 1.0f);
        }
        t0 = FUN_0c05f254(0x1000);
        if (t0 != 0) {
            (((struct o4_float *)0xC28E61C)->v) = (((((struct o4_float *)0xC28E61C)->v)) - 1.0f);
        }
        t0 = FUN_0c05f254(0x800);
        if (t0 != 0) {
            (((struct o0_float *)0xC28E61C)->v) = (((((struct o0_float *)0xC28E61C)->v)) - 1.0f);
        }
        t0 = FUN_0c05f254(0x400);
        if (t0 != 0) {
            (((struct o0_float *)0xC28E61C)->v) = (((((struct o0_float *)0xC28E61C)->v)) + 1.0f);
        }
    }
    t0 = 0x0;
    for (;;) {
        t1 = *(int *)((((0xC4 + a4) + t0) + 0xC));
        nlAddVector3op((t1 + 0x6C), (0x90 + t1), 0xC28E61C);
        t0 = (t0 + 0x4);
        if ((unsigned int)t0 >= (unsigned int)0x10) {
            break;
        }
    }
    t0 = (((struct oC8_int *)(a4))->v);
    nlAddVector3op((t0 + 0x6C), (0x90 + t0), 0xC28E61C);
    t0 = (((struct oCC_int *)(a4))->v);
    nlAddVector3op((t0 + 0x6C), (0x90 + t0), 0xC28E628);
    t0 = FUN_0c05f22c(0x8000);
    if (t0 != 0) {
        return FUN_0c0fa5dc();
    }
    return t0;
}
