/* game/unsorted: functions 0C0D805C-0C0D8420, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o28_float { char p[0x28]; float v; };
struct o30_float { char p[0x30]; float v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03f444(int, int, int);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c187798(void);
int FUN_0c0d805c(int a4);

int FUN_0c0d805c(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;

    t0 = 0x0;
    for (;;) {
        t1 = FUN_0c037320(0x34, (*(int *)0xC4B410C));
        t2 = FUN_0c03f444(0x5, 0x0, t1);
        if (t2 != 0) {
            *(unsigned int *)((t2 + 0x4)) = 0xC0D827E;
            *(unsigned char *)((t2 + 0x1)) = 0xFFFFFFFF;
            *(unsigned char *)((t2 + 0x2)) = t0;
            FUN_0c03733c(t2, 0x34, (*(int *)0xC4B410C));
            (((struct oAC_ushort *)(t2))->v) = 0xF;
            (((struct oA9_uchar *)(t2))->v) = 0x21;
            FUN_0c187798();
            u0 = -500.0f;
            u0 = u0 + 90.0f * (float)t0;
            (((struct o28_float *)(t2))->v) = (((((struct o28_float *)(t2))->v)) + u0);
            *(unsigned int *)((t2 + 0x38)) = 0x0;
            *(unsigned int *)((t2 + 0x3C)) = 0x0;
            *(unsigned int *)((t2 + 0x34)) = 0x0;
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0xC) {
            break;
        }
    }
    t0 = 0xC;
    for (;;) {
        t1 = FUN_0c037320(0x35, (*(int *)0xC4B410C));
        t2 = FUN_0c03f444(0x5, 0x0, t1);
        if (t2 != 0) {
            *(unsigned int *)((t2 + 0x4)) = 0xC0D827E;
            *(unsigned char *)((t2 + 0x1)) = 0xFFFFFFFF;
            *(unsigned char *)((t2 + 0x2)) = t0;
            FUN_0c03733c(t2, 0x35, (*(int *)0xC4B410C));
            (((struct oAC_ushort *)(t2))->v) = 0xF;
            (((struct oA9_uchar *)(t2))->v) = 0x21;
            FUN_0c187798();
            if ((int)t0 < (int)0xF) {
                u0 = -300.0f;
                u0 = u0 + 300.0f * ((float)(t0 - 12));
                (((struct o28_float *)(t2))->v) = (((((struct o28_float *)(t2))->v)) + u0);
                u0 = (((((struct o30_float *)(t2))->v)) + 100.0f);
            } else {
                u1 = -300.0f;
                u1 = u1 + 300.0f * ((float)(t0 - 15));
                (((struct o28_float *)(t2))->v) = (((((struct o28_float *)(t2))->v)) + u1);
                u0 = (((((struct o30_float *)(t2))->v)) - 100.0f);
            }
            (((struct o30_float *)(t2))->v) = u0;
            *(unsigned int *)((t2 + 0x38)) = 0x0;
            *(unsigned int *)((t2 + 0x3C)) = 0x0;
            *(unsigned int *)((t2 + 0x34)) = 0x0;
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x12) {
            break;
        }
    }
    t0 = 0x12;
    for (;;) {
        t1 = FUN_0c037320(0x36, (*(int *)0xC4B410C));
        t2 = FUN_0c03f444(0x5, 0x0, t1);
        if (t2 != 0) {
            *(unsigned int *)((t2 + 0x4)) = 0xC0D827E;
            *(unsigned char *)((t2 + 0x1)) = 0xFFFFFFFF;
            *(unsigned char *)((t2 + 0x2)) = t0;
            FUN_0c03733c(t2, 0x36, (*(int *)0xC4B410C));
            (((struct oAC_ushort *)(t2))->v) = 0xF;
            (((struct oA9_uchar *)(t2))->v) = 0x21;
            FUN_0c187798();
            if ((int)t0 < (int)0x15) {
                u0 = -300.0f;
                u0 = u0 + 300.0f * ((float)(t0 - 18));
                (((struct o28_float *)(t2))->v) = (((((struct o28_float *)(t2))->v)) + u0);
                u0 = (((((struct o30_float *)(t2))->v)) + 100.0f);
            } else {
                u1 = -300.0f;
                u1 = u1 + 300.0f * ((float)(t0 - 21));
                (((struct o28_float *)(t2))->v) = (((((struct o28_float *)(t2))->v)) + u1);
                u0 = (((((struct o30_float *)(t2))->v)) - 100.0f);
            }
            (((struct o30_float *)(t2))->v) = u0;
            *(unsigned int *)((t2 + 0x38)) = 0x0;
            *(unsigned int *)((t2 + 0x3C)) = 0x0;
            *(unsigned int *)((t2 + 0x34)) = 0x0;
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x18) {
            break;
        }
    }
    return thunk_FUN_0c05abb2(0x40, 0x0);
}
