/* game/unsorted: functions 0C108028-0C108258, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4_float { char p[0x4]; float v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c118810(int, int);
int FUN_0c187798(int, int, int);
int FUN_0c108028(int a4, int a5, int a6, int a7);

int FUN_0c108028(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;
    register float u2;

    *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0x100);
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 99) {
            return t0;
        }
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    FUN_0c187798(a4, a5, a6);
    u0 = (((struct o0_float *)0xC108118)->v);
    u1 = (((struct o30_float *)(a4))->v);
    u2 = (((struct o4_float *)0xC108118)->v);
    (((struct o40_float *)(a4))->v) = (1.0f / (u2 / (u1 + u0)));
    (((struct o44_float *)(a4))->v) = (1.0f / (u2 / (u1 + u0)));
    (((struct o48_float *)(a4))->v) = (1.0f / (u2 / (u1 + u0)));
    FUN_0c118810(a4, (*(int *)((((*(int *)0xC474404) << 2) + 0xC474410))));
    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) / (u2 / (u1 + u0)));
    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) / (u2 / (u1 + u0)));
    (((struct o30_float *)(a4))->v) = ((-((((struct o30_float *)(a4))->v))) + ((((struct o14_float *)0xC108118)->v)));
    t0 = *(signed char *)((0x14 + (*(int *)((a4 + 0x10)))));
    t1 = t0;
    if (t0 == 80) {
        (((struct o14_uchar *)(a4))->v) = 0x63;
        t1 = 0x14;
    }
    return t1;
}
