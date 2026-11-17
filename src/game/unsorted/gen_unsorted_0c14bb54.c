/* game/unsorted: functions 0C14BB54-0C14BD56, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o10C_int { char p[0x10C]; int v; };
struct o128_ushort { char p[0x128]; unsigned short v; };
struct o12A_short { char p[0x12A]; short v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o130_uchar { char p[0x130]; unsigned char v; };
struct o132_uchar { char p[0x132]; unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o26_uchar { char p[0x26]; unsigned char v; };
struct o40_float { char p[0x40]; float v; };
struct o41C_float { char p[0x41C]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oD4_int { char p[0xD4]; int v; };
int FUN_0c03f444(int, int, int);
int FUN_0c064d5a(int, int);
int FUN_0c0b4b4e(int, int);
float FUN_0c0b4b7a(int, int, float);
int FUN_0c14bb54(int a4, int a5);
int FUN_0c14bb80(int a4, int a5);
int FUN_0c14bbce(int a4);
int FUN_0c14bc74(int a4);
int FUN_0c14bd18(int a4);

int FUN_0c14bb54(int a4, int a5)
{
    register float u1;
    register int t2;
    register int t3;

    if (a5 != 0) {
        *(unsigned short *)((a4 + 0x6)) = ((*(short *)((a4 + 0x6))) | 0x200);
        (((struct o18_float *)(a4))->v) = 1.0f;
        u1 = *(float *)0xC14BC60;
        (((struct o20_float *)(a4))->v) = u1;
        (((struct o1C_float *)(a4))->v) = u1;
        t3 = 0x1C;
    } else {
        t2 = *(short *)((a4 + 0x6));
        *(unsigned short *)((a4 + 0x6)) = (t2 & 0xFDFF);
        t3 = (t2 & 0xFDFF);
    }
    return t3;
}

int FUN_0c14bb80(int a4, int a5)
{
    FUN_0c14bb54(((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532498) + 0x2628), a5);
    FUN_0c14bb54((((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532498) + 0x2628) + 0x90), a5);
    return FUN_0c14bb54(((((struct o10C_int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532498)))->v)), a5);
}

int FUN_0c14bbce(int a4)
{
    register float t3;

    if ((*(signed char *)((a4 + 0x132))) != 0) {
        (((struct o132_uchar *)(a4))->v) = 0x0;
        t3 = FUN_0c0b4b7a(a4, 0x1, (((((struct o41C_float *)(a4))->v)) - ((((struct o160_float *)(a4))->v))));
        FUN_0c0b4b4e(a4, 0x1);
        (((struct o41C_float *)(a4))->v) = ((((struct o160_float *)(a4))->v));
        if (t3 > 0.0f) {
            (((struct o130_uchar *)(a4))->v) = 0xA;
        } else {
            (((struct o130_uchar *)(a4))->v) = 0x0;
        }
    }
    if ((int)(*(signed char *)((a4 + 0x130))) > 0) {
        FUN_0c14bb80(a4, 0x1);
        (((struct o130_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x130))) - 1);
        return 0x130;
    }
    return FUN_0c14bb80(a4, 0x0);
}

int FUN_0c14bc74(int a4)
{
    register int t0;
    register int t11;

    t0 = FUN_0c03f444(0x2, 0x0, 0x0);
    t11 = t0;
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x4)) = 0xC14BD18;
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x0;
        *(unsigned int *)((t0 + 0x10)) = a4;
        (((struct o48_float *)(t0))->v) = 1.0f;
        (((struct o44_float *)(t0))->v) = 1.0f;
        (((struct o40_float *)(t0))->v) = 1.0f;
        FUN_0c064d5a(t0, 0xC202BE8);
        (((struct o128_ushort *)(t0))->v) = ((int)0x1 << (int)(*(signed char *)((t0 + 0x1))));
        (((struct o12A_ushort *)(t0))->v) = ((~((int)0x1 << (int)(*(signed char *)((t0 + 0x1))))) & ((((struct o12A_short *)(t0))->v)));
        *(unsigned short *)((((0x12A + t0) + 0x2) + 0x0)) = ((~((int)0x1 << (int)(*(signed char *)((t0 + 0x1))))) & (*(short *)((((0x12A + t0) + 0x2) + 0x0))));
        (((struct o12E_ushort *)(t0))->v) = (~((int)0x1 << (int)(*(signed char *)((t0 + 0x1)))));
        FUN_0c0b4b4e(t0, 0x1);
        (((struct o41C_float *)(t0))->v) = ((((struct o160_float *)(t0))->v));
        t11 = 0x160;
    }
    return t11;
}

int FUN_0c14bd18(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c14bbce(a4);
    }
    if ((*(signed char *)(((*(int *)((a4 + 0x10))) + 0x3714))) != 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o26_uchar *)(a4))->v) = 0x1;
        (((struct oA4_uint *)(a4))->v) = (((((struct oD4_int *)((*(int *)((a4 + 0x10)))))->v)) + 0x28);
        return FUN_0c14bbce(a4);
    }
    return 0x3714;
}
