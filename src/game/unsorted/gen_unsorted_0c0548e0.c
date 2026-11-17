/* game/unsorted: functions 0C0548E0-0C0549B0, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o268_int { char p[0x268]; int v; };
struct o268_uint { char p[0x268]; unsigned int v; };
int FUN_0c0522be(int);
int FUN_0c054a62(int, int, int);
int FUN_0c056b68(int, int, int, int);
int FUN_0c0548e0(int a4);
int FUN_0c05490a(int a4, int a5, int a6, int a7);

int FUN_0c0548e0(int a4)
{
    register int t1;

    FUN_0c0522be(0xC241638);
    t1 = 0xC5410FC;
    for (;;) {
        *(unsigned char *)((t1 + 0x1)) = a4;
        t1 = (t1 + 0x2F8);
        if ((unsigned int)t1 >= (unsigned int)0xC541CDC) {
            break;
        }
    }
    return a4;
}

int FUN_0c05490a(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    *(unsigned char *)((a4 + 0x1)) = ((*(signed char *)((a4 + 0x1))) & 0x3);
    t1 = *(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC5324D0));
    if ((*(signed char *)((a4 + 0xA))) == 0) {
        *(unsigned char *)((a4 + 0xA)) = ((*(signed char *)((a4 + 0xA))) + 0x1);
        t2 = *(signed char *)((a4 + 0x1));
        t3 = (((((t2 << 2) << 2) << 2) << 1) + 0xC1B9434);
        t4 = (0x248 + a4);
        for (;;) { t0 = *(int *)t3; t3 = (t3 + 4); if ((unsigned int)(((((((t2 << 2) << 2) << 2) << 1) + 0xC1B9434) + 128)) < (unsigned int)t3) break; *(unsigned int *)t4 = t0; t4 = (t4 + 4); }
        (((struct o268_uint *)(a4))->v) = (0xFFFFEAAB + t1);
        (((struct o268_uint *)(a4))->v) = t1;
        return FUN_0c054a62(a4, (0x248 + a4), a6);
    }
    t0 = (t1 + 0x1555);
    if ((int)((t1 + 0x1555) - ((((struct o268_int *)(a4))->v))) > (int)0x8000) {
        t0 = ((t1 + 0x1555) - 0x10000);
    }
    t1 = t0;
    if ((int)(t0 - ((((struct o268_int *)(a4))->v))) < (int)0xFFFF8000) {
        t1 = (t0 + 0x10000);
    }
    *(unsigned int *)((((0x264 + a4) + 0x4) + 0x0)) = ((*(int *)((((0x264 + a4) + 0x4) + 0x0))) + ((int)((int)(t1 - (*(int *)((((0x264 + a4) + 0x4) + 0x0)))) / (int)0x12C)));
    (((struct o268_uint *)(a4))->v) = (((((struct o268_int *)(a4))->v)) & 0xFFFF);
    return FUN_0c056b68(a4, ((0x264 + a4) + 0x4), a6, a7);
}
