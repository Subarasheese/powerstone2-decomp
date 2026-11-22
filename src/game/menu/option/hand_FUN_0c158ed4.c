/* Hand-written from the generated C: the third argument of both tail calls is what r6 holds there, which the generated C had
   wrong. r6 is the state byte at +0x14, then (once that is not 2) the byte at +0x3715, set in the delay slot of a bt/s, which runs
   whether or not the branch is taken; and before FUN_0c158f5a it is 8 whenever the two bytes compared at +0x20 differ, not only
   when the counter at +0x1E is above 8. */

int FUN_0c03f346(int, int, int, int);
int FUN_0c158f5a(int, int, int, int);
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o118_int { char p[0x118]; int v; };

int FUN_0c158ed4(int a4, int a5, int a6, int a7)
{
    register int t3;
    register int base;
    register int r6;
    int t2;

    t3 = *(signed char *)((a4 + 0x1));
    base = (((short)t3 * (short)0x3938) + 0xC532498);
    r6 = *(signed char *)((base + 0x14));
    if ((r6 != 0) && (r6 != 2)) {
        return FUN_0c03f346(a4, base, r6, a7);
    }
    if (*(signed char *)((base + 0x14)) != 2) {
        r6 = *(signed char *)((base + 0x3715));
        if ((r6 != 7) && (r6 != 26) && (r6 != 12) && (r6 != 19) && (r6 != 20)) {
            return FUN_0c03f346(a4, base, r6, a7);
        }
    }
    if ((((struct o20_short *)(a4))->v) != (unsigned char)(*(signed char *)(((((struct o118_int *)base)->v) + 0x82)))) {
        r6 = 0x8;
        t2 = *(short *)((a4 + 0x1E));
        if ((int)t2 > (int)0x8) {
            *(unsigned short *)((a4 + 0x1E)) = 0x8;
            (((struct o20_ushort *)(a4))->v) = (unsigned char)(*(signed char *)(((((struct o118_int *)base)->v) + 0x82)));
        }
    }
    return FUN_0c158f5a(a4, base, r6, a7);
}
