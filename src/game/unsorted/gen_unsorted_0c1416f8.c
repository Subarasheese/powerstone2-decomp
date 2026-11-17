/* game/unsorted: functions 0C1416F8-0C14188A, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03f346(int);
int FUN_0c03f444(int, int, int);
int thunk_FUN_0c058310(int, int);
int FUN_0c1416f8(int a4, int a5);
int FUN_0c1417aa(int a4);

int FUN_0c1416f8(int a4, int a5)
{
    register int t0;
    register int t1;

    t0 = FUN_0c037320(0x1, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
    t1 = FUN_0c03f444(0x5, 0x0, t0);
    if (t1 != 0) {
        FUN_0c03733c(t1, 0x1, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
        (((struct oAC_ushort *)(t1))->v) = 0x421;
        (((struct oA9_uchar *)(t1))->v) = (*(signed char *)((a4 + 0xA9)));
        *(unsigned short *)((((((struct oC4_int *)(t1))->v)) + 0x6)) = 0x1F;
        t0 = (((struct oC4_int *)(t1))->v);
        (((struct o8C_float *)(t0))->v) = 1.0f;
        (((struct o88_float *)(t0))->v) = 1.0f;
        (((struct o84_float *)(t0))->v) = 1.0f;
        (((struct oBC_float *)(t1))->v) = 1.0f;
        (((struct oB8_float *)(t1))->v) = 1.0f;
        (((struct oB4_float *)(t1))->v) = 1.0f;
        *(unsigned int *)((t1 + 0x4)) = 0xC1417AA;
        *(unsigned char *)((t1 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned char *)((t1 + 0x2)) = a5;
        return thunk_FUN_0c058310(((*(int *)(((((*(int *)(((a5 << 2) + 0xC2022F8))) << 2) + (0xC53255C + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938))) + 0x0))) + 0x28), (t1 + 0x28));
    }
    return t1;
}

int FUN_0c1417aa(int a4)
{
    register int t0;
    register float u0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
        (((struct oA8_uchar *)(a4))->v) = 0x1;
    }
    thunk_FUN_0c058310(((*(int *)(((((*(int *)((((*(signed char *)((a4 + 0x2))) << 2) + 0xC2022F8))) << 2) + (0xC53255C + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938))) + 0x0))) + 0x28), (a4 + 0x28));
    t0 = (((struct oC4_int *)(a4))->v);
    (((struct o80_uint *)(t0))->v) = (((((struct o80_int *)(t0))->v)) + 0x444);
    t0 = (((struct oC4_int *)(a4))->v);
    (((struct o84_float *)(t0))->v) = (((((struct o84_float *)(t0))->v)) + 0.100000001f);
    t0 = (((struct oC4_int *)(a4))->v);
    u0 = (((struct o84_float *)(t0))->v);
    (((struct o88_float *)(t0))->v) = u0;
    (((struct o8C_float *)(t0))->v) = u0;
    (((struct oB4_float *)(a4))->v) = (((((struct oB4_float *)(a4))->v)) - 0.100000001f);
    u0 = (((struct oB4_float *)(a4))->v);
    (((struct oBC_float *)(a4))->v) = u0;
    (((struct oB8_float *)(a4))->v) = u0;
    if (!(((((struct oB0_float *)(a4))->v)) > 0.0f)) {
        return FUN_0c03f346(a4);
    }
    return 0xB0;
}
