/* game/unsorted: functions 0C15B4C0-0C15B594, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o17_uchar { char p[0x17]; unsigned char v; };
struct o24_short { char p[0x24]; short v; };
struct o41C_int { char p[0x41C]; int v; };
struct o41C_uint { char p[0x41C]; unsigned int v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c158f5a(int, int, int, int);
int FUN_0c15a104(int, int, int, int, int, int, int, int);
int FUN_0c15b4c0(int a4, int a5, int a6, int a7);
int FUN_0c15b4fa(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12);
int FUN_0c15b54a(int a4, int a5, int a6, int a7);

int FUN_0c15b4c0(int a4, int a5, int a6, int a7)
{
    register int t4;

    if ((unsigned short)((((struct o24_short *)((*(int *)((a4 + 0x10)))))->v)) != ((((struct o41C_int *)(a4))->v))) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    t4 = *(signed char *)((a4 + 0x17));
    if (t4 != 0) {
        if (t4 != 1) {
            return t4;
        }
        return FUN_0c158f5a(a4, a5, a6, a7);
    }
    (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
    return 0x17;
}

int FUN_0c15b4fa(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
    register int t0;
    register int t2;

    t0 = FUN_0c15a104(a4, a5, a7, (((a12 << 2) << 2) + 0xC2036CC), ((short)(a8 >> 0)), ((signed char)(a9 >> 0)), a10, a11);
    t2 = t0;
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x4)) = 0xC15B54A;
        *(unsigned int *)((t0 + 0x10)) = a6;
        (((struct o41C_uint *)(t0))->v) = (unsigned short)((((struct o24_short *)(a6))->v));
        t2 = 0x41C;
    }
    return t2;
}

int FUN_0c15b54a(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t2 = *(int *)((a4 + 0x10));
    if (((unsigned short)((((struct o24_short *)(t2))->v)) == ((((struct o41C_int *)(a4))->v))) && ((t0 = *(signed char *)((t2 + 0x41D)), t0 == 5) || (t1 = *(signed char *)((t2 + 0x41D)), t1 == 7))) {
        t0 = *(signed char *)((a4 + 0x17));
        if (t0 != 0) {
            if (t0 != 1) {
                return t0;
            }
            return FUN_0c158f5a(a4, t2, a6, a7);
        }
        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
        return 0x17;
    }
    return FUN_0c03f346(a4, t2, a6, a7);
}
