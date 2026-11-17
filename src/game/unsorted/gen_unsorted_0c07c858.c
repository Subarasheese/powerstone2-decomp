/* game/unsorted: functions 0C07C858-0C07C9C0, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o160_float { char p[0x160]; float v; };
struct o3757_uchar { char p[0x3757]; unsigned char v; };
struct o3768_int { char p[0x3768]; int v; };
struct o383E_ushort { char p[0x383E]; unsigned short v; };
struct o38E0_float { char p[0x38E0]; float v; };
struct o38E4_uchar { char p[0x38E4]; unsigned char v; };
struct o48_int { char p[0x48]; int v; };
int FUN_0c064f80(int);
int FUN_0c0c30a8(int, int, int);
int FUN_0c07c858(int a4);
int FUN_0c07c902(int a4);
int FUN_0c07c92c(int a4);

int FUN_0c07c858(int a4)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x446));
    *(unsigned char *)((((((short)(*(signed char *)((a4 + 0x371A))) * (short)0x2D0) + (0x2BC8 + a4)) + (((((t0 << 2) << 1) + t0) << 2) << 2)) + 0x0)) = 0x1;
    t0 = *(signed char *)((a4 + 0x447));
    *(unsigned char *)((((((short)(*(signed char *)((a4 + 0x371A))) * (short)0x2D0) + (0x3168 + a4)) + (((((t0 << 2) << 1) + t0) << 2) << 2)) + 0x0)) = 0x1;
    t0 = *(int *)(((0xC4 + a4) + 0x3C));
    *(unsigned char *)((((((struct o48_int *)((0xC4 + a4)))->v)) + 0x0)) = 0x1;
    *(unsigned char *)((t0 + 0x0)) = 0x1;
    if ((*(signed char *)((a4 + 0x371D))) == 6) {
        t0 = *(int *)(((0xC4 + a4) + 0x3C));
        *(unsigned char *)((((((struct o48_int *)((0xC4 + a4)))->v)) + 0x0)) = 0x0;
        *(unsigned char *)((t0 + 0x0)) = 0x0;
    }
    t0 = *(signed char *)((a4 + 0x3721));
    t1 = (unsigned char)t0;
    if (((unsigned char)t0 != 41) && ((unsigned char)t0 != 42)) {
    } else {
        t0 = *(signed char *)((a4 + 0x446));
        *(unsigned char *)((((((short)(*(signed char *)((a4 + 0x371A))) * (short)0x2D0) + (0x2BC8 + a4)) + (((((t0 << 2) << 1) + t0) << 2) << 2)) + 0x0)) = 0x0;
        t1 = 0x446;
    }
    return t1;
}

int FUN_0c07c902(int a4)
{
    register float u0;
    register float u1;

    (((struct o3757_uchar *)(a4))->v) = 0xFFFFFFA0;
    (((struct o383E_ushort *)(a4))->v) = 0x258;
    u0 = *(float *)0xC07C9AC;
    u1 = (((struct o160_float *)(a4))->v);
    (((struct o38E0_float *)(a4))->v) = (u1 + u0);
    if (0.0f > (u1 + u0)) {
        (((struct o38E0_float *)(a4))->v) = 0.0f;
    }
    (((struct o38E4_uchar *)(a4))->v) = 0x14;
    return 0x38E4;
}

int FUN_0c07c92c(int a4)
{
    register int t0;
    int t1;
    register int t2;

    if (((*(signed char *)((a4 + 0x3721))) == 0) && ((t0 = (((struct o3768_int *)(a4))->v), t0 != 0) && (t1 = (((struct o3768_int *)(a4))->v), t2 = *(signed char *)((t1 + 0x41C)), (unsigned char)t2 == 0xCB))) {
        if ((*(signed char *)((((((struct o3768_int *)(a4))->v)) + 0x422))) == ((int)0x1 << (int)(*(signed char *)((a4 + 0x1))))) {
            t0 = FUN_0c064f80(a4);
            if (t0 == 0) {
                t0 = FUN_0c0c30a8(((((struct o3768_int *)(a4))->v)), 0x5, a4);
                if (t0 != 0) {
                    return 0x1;
                }
                return 0x0;
            }
            return 0x0;
        }
        return 0x0;
    }
    return 0x0;
}
