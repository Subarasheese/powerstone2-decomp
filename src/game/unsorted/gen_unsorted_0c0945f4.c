/* game/unsorted: functions 0C0945F4-0C094758, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
int FUN_0c037bf6(int);
int FUN_0c059e60(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c128954(int);
int FUN_0c128b5c(int);
int FUN_0c128da4(int);
int FUN_0c128f64(int);
int FUN_0c0945f4(int a4);
int FUN_0c094626(int a4);
int FUN_0c09468e(int a4);

int FUN_0c0945f4(int a4)
{
    register int t1;
    register int t4;

    FUN_0c037bf6(a4);
    t1 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
    t4 = (short)(t1 - 1);
    if ((short)(t1 - 1) == 0) {
        (((struct o50_float *)(a4))->v) = 0.0f;
        (((struct o5C_float *)(a4))->v) = (*(float *)0xC094760);
        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
        t4 = 0x17;
    }
    return t4;
}

int FUN_0c094626(int a4)
{
    register int t0;
    register int t1;

    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
    (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
    FUN_0c037bf6(a4);
    t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
    t1 = t0;
    if (t0 != 0) {
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x1, 0x25, (t0), 0x1, 0x25);
        *(unsigned short *)((a4 + 0x1C)) = 0x2;
        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
        t1 = 0x17;
    }
    return t1;
}

int FUN_0c09468e(int a4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    if ((short)(t0 - 1) == 0) {
        FUN_0c128954(a4);
        FUN_0c128b5c(a4);
        FUN_0c128da4(a4);
        FUN_0c128f64(a4);
    }
    t0 = FUN_0c037bf6(a4);
    t1 = (unsigned char)t0;
    if ((unsigned char)t0 != 0) {
        (((struct o58_float *)(a4))->v) = ((((struct o28_float *)(a4))->v));
        (((struct o5C_float *)(a4))->v) = ((((struct o2C_float *)(a4))->v));
        (((struct o60_float *)(a4))->v) = ((((struct o30_float *)(a4))->v));
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x1, 0x23, (t0), 0x1, 0x23);
        t0 = *(int *)(((0x118 + a4) + 0x4));
        t2 = (((struct o118_int *)(a4))->v);
        (((struct oA0_float *)(t0))->v) = 1.0f;
        (((struct o9C_float *)(t0))->v) = 1.0f;
        (((struct oA0_float *)(t2))->v) = 1.0f;
        (((struct o9C_float *)(t2))->v) = 1.0f;
        t0 = *(int *)(((0x118 + a4) + 0x4));
        t2 = (((struct o118_int *)(a4))->v);
        (((struct o98_float *)(t0))->v) = 1.0f;
        (((struct o98_float *)(t2))->v) = 1.0f;
        (((struct o94_float *)(t0))->v) = 1.0f;
        (((struct o94_float *)(t2))->v) = 1.0f;
        FUN_0c059e60(a4, 0x0);
        FUN_0c059e60(a4, 0x24);
        (((struct o50_float *)(a4))->v) = 9.0f;
        *(unsigned short *)((a4 + 0x1C)) = 0x64;
        *(unsigned short *)((a4 + 0x1E)) = 0x1;
        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
        t1 = 0x17;
    }
    return t1;
}
