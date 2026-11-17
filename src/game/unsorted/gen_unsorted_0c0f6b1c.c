/* game/unsorted: functions 0C0F6B1C-0C0F6C7A, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAA_uchar { char p[0xAA]; unsigned char v; };
struct oAB_uchar { char p[0xAB]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oD0_int { char p[0xD0]; int v; };
struct oD4_int { char p[0xD4]; int v; };
struct oD8_int { char p[0xD8]; int v; };
int FUN_0c037498(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
extern int FUN_0c187798();
int FUN_0c0f6b1c(int a4, int a5, int a6);

int FUN_0c0f6b1c(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = FUN_0c03f444(0x2, 0x0, 0x6);
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x4)) = 0xC0F6454;
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        *(unsigned char *)((t0 + 0x2)) = a4;
        (((struct o48_float *)(t0))->v) = 1.0f;
        (((struct o44_float *)(t0))->v) = 1.0f;
        (((struct o40_float *)(t0))->v) = 1.0f;
        FUN_0c064d24(t0, 0x3, 0x1C, 0x1, 0x40, 0x0, 0x0, 0x10);
        t1 = 0x0;
        t2 = 0x0;
        for (;;) {
            t2 = (t2 + 0x1);
            *(unsigned short *)(((*(int *)((((0xC4 + t0) + t1) + 0x0))) + 0x6)) = 0x1F;
            *(unsigned char *)(((*(int *)((((0xC4 + t0) + t1) + 0x0))) + 0x0)) = 0x0;
            t3 = *(int *)((((0xC4 + t0) + t1) + 0x0));
            *(unsigned short *)((t3 + 0x6)) = ((*(short *)((t3 + 0x6))) | 0x200);
            t3 = *(int *)((((0xC4 + t0) + t1) + 0x0));
            (((struct o20_float *)(t3))->v) = 1.0f;
            (((struct o1C_float *)(t3))->v) = 1.0f;
            (((struct o18_float *)(t3))->v) = 1.0f;
            t1 = (t1 + 0x4);
            if ((int)t2 >= (int)0x6) {
                break;
            }
        }
        FUN_0c037498(((((struct oC4_int *)(t0))->v)), 0x0, 0x2C, (*(int *)0xC4B40CC));
        FUN_0c037498(((((struct oC8_int *)(t0))->v)), 0x1, 0x2C, (*(int *)0xC4B40CC));
        FUN_0c037498(((((struct oCC_int *)(t0))->v)), (a4 + 0xB), 0x2C, (*(int *)0xC4B40CC));
        FUN_0c037498(((((struct oD0_int *)(t0))->v)), 0x3, 0x2C, (*(int *)0xC4B40CC));
        FUN_0c037498(((((struct oD4_int *)(t0))->v)), (a4 + 0x4), 0x2C, (*(int *)0xC4B40CC));
        FUN_0c037498(((((struct oD8_int *)(t0))->v)), 0x2, 0x2C, (*(int *)0xC4B40CC));
        t1 = (((struct oD4_int *)(t0))->v);
        (((struct o8C_float *)(t1))->v) = 1.04999995f;
        (((struct o88_float *)(t1))->v) = 1.04999995f;
        (((struct o84_float *)(t1))->v) = 1.04999995f;
        (((struct oAA_uchar *)(t0))->v) = 0x1;
        (((struct oAB_uchar *)(t0))->v) = 0x4;
        FUN_0c187798(t1);
        (((struct o2C_float *)(t0))->v) = (((((struct o2C_float *)(t0))->v)) + 240.0f);
        *(unsigned int *)((t0 + 0x38)) = a5;
    }
    return t0;
}
