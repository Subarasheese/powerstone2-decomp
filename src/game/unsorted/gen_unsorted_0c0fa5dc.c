/* game/unsorted: functions 0C0FA5DC-0C0FA908, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

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
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oC_float { char p[0xC]; float v; };
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
int FUN_0c17c130(int, int, int);
int FUN_0c18778c(void);
extern int FUN_0c187798();
int FUN_0c0fa600(int a4);

int FUN_0c0fa600(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 == 1) {
            t1 = FUN_0c05f254(0x100);
            if (t1 != 0) {
                t1 = FUN_0c05f254(0x2000);
                if (t1 != 0) {
                    (((struct o10_float *)0xC28E61C)->v) = (((((struct o10_float *)0xC28E61C)->v)) + 1.0f);
                }
                t1 = FUN_0c05f254(0x1000);
                if (t1 != 0) {
                    (((struct o10_float *)0xC28E61C)->v) = (((((struct o10_float *)0xC28E61C)->v)) - 1.0f);
                }
                t1 = FUN_0c05f254(0x800);
                if (t1 != 0) {
                    (((struct oC_float *)0xC28E61C)->v) = (((((struct oC_float *)0xC28E61C)->v)) - 1.0f);
                }
                t1 = FUN_0c05f254(0x400);
                if (t1 != 0) {
                    (((struct oC_float *)0xC28E61C)->v) = (((((struct oC_float *)0xC28E61C)->v)) + 1.0f);
                }
            } else {
                t1 = FUN_0c05f254(0x2000);
                if (t1 != 0) {
                    (((struct o4_float *)0xC28E61C)->v) = (((((struct o4_float *)0xC28E61C)->v)) + 1.0f);
                }
                t1 = FUN_0c05f254(0x1000);
                if (t1 != 0) {
                    (((struct o4_float *)0xC28E61C)->v) = (((((struct o4_float *)0xC28E61C)->v)) - 1.0f);
                }
                t1 = FUN_0c05f254(0x800);
                if (t1 != 0) {
                    (((struct o0_float *)0xC28E61C)->v) = (((((struct o0_float *)0xC28E61C)->v)) - 1.0f);
                }
                t1 = FUN_0c05f254(0x400);
                if (t1 != 0) {
                    (((struct o0_float *)0xC28E61C)->v) = (((((struct o0_float *)0xC28E61C)->v)) + 1.0f);
                }
            }
            t1 = 0x0;
            for (;;) {
                t2 = *(int *)((((0xC4 + a4) + t1) + 0xC));
                FUN_0c17c130((t2 + 0x6C), (0x90 + t2), 0xC28E61C);
                t1 = (t1 + 0x4);
                if ((unsigned int)t1 >= (unsigned int)0x10) {
                    break;
                }
            }
            t1 = (((struct oC8_int *)(a4))->v);
            FUN_0c17c130((t1 + 0x6C), (0x90 + t1), 0xC28E61C);
            t1 = (((struct oCC_int *)(a4))->v);
            FUN_0c17c130((t1 + 0x6C), (0x90 + t1), 0xC28E628);
            t1 = FUN_0c05f22c(0x8000);
            if (t1 != 0) {
                return FUN_0c0fa5dc();
            }
            return t1;
        }
        
        return t0;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    (((struct oAC_ushort *)(a4))->v) = 0x1F;
    (((struct oA9_uchar *)(a4))->v) = 0x21;
    (((struct o30_float *)(a4))->v) = (1.0f + 1.0f);
    FUN_0c1171f0(a4);
    FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x0, 0x60, ((((struct o0_int *)0xC4B4118)->v)));
    FUN_0c03744a(((((struct oEC_int *)(a4))->v)), 0x0, 0x0, ((((struct o4_int *)0xC4B4118)->v)));
    FUN_0c03744a(((((struct oC8_int *)(a4))->v)), 0x0, 0x61, ((((struct o0_int *)0xC4B4118)->v)));
    t0 = (((struct oC8_int *)(a4))->v);
    *(unsigned short *)((t0 + 0x6)) = ((*(short *)((t0 + 0x6))) | 0x600);
    FUN_0c18778c();
    FUN_0c187798();
    FUN_0c17c130((t0 + 0x6C), (0x90 + t0), 0xC28E61C);
    FUN_0c03744a(((((struct oCC_int *)(a4))->v)), 0x0, 0x62, ((((struct o0_int *)0xC4B4118)->v)));
    t0 = (((struct oCC_int *)(a4))->v);
    FUN_0c187798();
    FUN_0c17c130((t0 + 0x6C), (0x90 + t0), 0xC28E628);
    FUN_0c03744a(((((struct oD0_int *)(a4))->v)), 0x0, 0x63, ((((struct o0_int *)0xC4B4118)->v)));
    t0 = (((struct oD0_int *)(a4))->v);
    FUN_0c187798();
    FUN_0c17c130((t0 + 0x6C), (0x90 + t0), 0xC28E61C);
    FUN_0c03744a(((((struct oD4_int *)(a4))->v)), 0x0, 0x64, ((((struct o0_int *)0xC4B4118)->v)));
    t0 = (((struct oD4_int *)(a4))->v);
    FUN_0c187798();
    FUN_0c17c130((t0 + 0x6C), (0x90 + t0), 0xC28E61C);
    FUN_0c03744a(((((struct oD8_int *)(a4))->v)), 0x0, 0x65, ((((struct o0_int *)0xC4B4118)->v)));
    t0 = (((struct oD8_int *)(a4))->v);
    FUN_0c187798();
    FUN_0c17c130((t0 + 0x6C), (0x90 + t0), 0xC28E61C);
    FUN_0c03744a(((((struct oDC_int *)(a4))->v)), 0x0, 0x66, ((((struct o0_int *)0xC4B4118)->v)));
    t0 = (((struct oDC_int *)(a4))->v);
    FUN_0c187798();
    FUN_0c17c130((t0 + 0x6C), (0x90 + t0), 0xC28E61C);
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
        FUN_0c17c130((t1 + 0x6C), (0x90 + t1), 0xC28E61C);
        t0 = (t0 + 0x4);
        if ((unsigned int)t0 >= (unsigned int)0x10) {
            break;
        }
    }
    t0 = (((struct oC8_int *)(a4))->v);
    FUN_0c17c130((t0 + 0x6C), (0x90 + t0), 0xC28E61C);
    t0 = (((struct oCC_int *)(a4))->v);
    FUN_0c17c130((t0 + 0x6C), (0x90 + t0), 0xC28E628);
    t0 = FUN_0c05f22c(0x8000);
    if (t0 != 0) {
        return FUN_0c0fa5dc();
    }
    return t0;
}
