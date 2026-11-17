/* game/demo: functions 0C053CCC-0C0548A2, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o20_float { char p[0x20]; float v; };
struct o260_float { char p[0x260]; float v; };
struct o268_int { char p[0x268]; int v; };
struct o268_uint { char p[0x268]; unsigned int v; };
int FUN_0c054a62(int, int, int);
int FUN_0c056b68(int, int);
int FUN_0c0547ee(int a4, int a5, int a6);

int FUN_0c0547ee(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register float u0;

    t1 = *(signed char *)0xC542237;
    t2 = *(signed char *)((a4 + 0x0));
    u0 = (((struct o20_float *)(((((short)t1 * (short)0x58) + 0xC25890C) + ((short)t2 * (short)0x2C))))->v);
    t3 = *(int *)((((((short)t1 * (short)0x58) + 0xC25890C) + ((short)t2 * (short)0x2C)) + 0x28));
    if ((*(signed char *)((a4 + 0xA))) == 0) {
        *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
        t1 = *(signed char *)((a4 + 0x0));
        t2 = (((((t1 << 2) << 2) << 2) << 1) + 0xC1B9334);
        t4 = (0x248 + a4);
        for (;;) { t0 = *(int *)t2; t2 = (t2 + 4); if ((unsigned int)(((((((t1 << 2) << 2) << 2) << 1) + 0xC1B9334) + 128)) < (unsigned int)t2) break; *(unsigned int *)t4 = t0; t4 = (t4 + 4); }
        (((struct o268_uint *)(a4))->v) = (0xFFFFEAAB + t3);
        (((struct o268_uint *)(a4))->v) = t3;
        (((struct o260_float *)(a4))->v) = u0;
        FUN_0c054a62(a4, (0x248 + a4), a6);
    }
    t0 = (0x1555 + t3);
    if ((int)((0x1555 + t3) - ((((struct o268_int *)(a4))->v))) > (int)0x8000) {
        t0 = ((0x1555 + t3) - 0x10000);
    }
    t1 = t0;
    if ((int)(t0 - ((((struct o268_int *)(a4))->v))) < (int)0xFFFF8000) {
        t1 = (t0 + 0x10000);
    }
    *(unsigned int *)((((0x264 + a4) + 0x4) + 0x0)) = ((*(int *)((((0x264 + a4) + 0x4) + 0x0))) + ((int)((int)(t1 - (*(int *)((((0x264 + a4) + 0x4) + 0x0)))) / (int)0x12C)));
    (((struct o268_uint *)(a4))->v) = (((((struct o268_int *)(a4))->v)) & 0xFFFF);
    return FUN_0c056b68(a4, ((0x264 + a4) + 0x4));
}
