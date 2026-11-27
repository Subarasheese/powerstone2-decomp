/* game/unsorted: functions 0C1446D8-0C1448EE, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

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
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03f444(int, int, int);
int math_mat_transform_vector(int, int);
int math_mat_get_translate(int, int);
int FUN_0c064d5a(int, int);
int FUN_0c0b21ac(int, int);
int FUN_0c0b21d8(void);
int FUN_0c0b2264(int, int, float);
float math_signed_sqrt(float);
int math_atan2_angle16(float, float);
int FUN_0c1446d8(int a4, int a5);
int FUN_0c144710(int a4);
int FUN_0c1447ac(int a4);
int FUN_0c14484a(int a4);

int FUN_0c1446d8(int a4, int a5)
{
    register int t1;
    register float u3;
    register int t4;
    register int t5;

    t1 = *(int *)((0xC53255C + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938)));
    if (a5 != 0) {
        *(unsigned short *)((t1 + 0x6)) = ((*(short *)((t1 + 0x6))) | 0x200);
        (((struct o18_float *)(t1))->v) = 1.0f;
        u3 = *(float *)0xC144798;
        (((struct o20_float *)(t1))->v) = u3;
        (((struct o1C_float *)(t1))->v) = u3;
        t5 = 0x1C;
    } else {
        t4 = *(short *)((t1 + 0x6));
        *(unsigned short *)((t1 + 0x6)) = (t4 & 0xFDFF);
        t5 = (t4 & 0xFDFF);
    }
    return t5;
}

int FUN_0c144710(int a4)
{
    register int t1;

    if ((*(signed char *)((a4 + 0x132))) != 0) {
        (((struct o132_uchar *)(a4))->v) = 0x0;
        t1 = FUN_0c0b21d8();
        if (t1 != 0) {
            (((struct o130_uchar *)(a4))->v) = 0x0;
        } else {
            (((struct o130_uchar *)(a4))->v) = 0xA;
        }
        FUN_0c0b2264(a4, 0x3, (((((struct o41C_float *)(a4))->v)) - ((((struct o160_float *)(a4))->v))));
        FUN_0c0b21ac(a4, 0x3);
        (((struct o41C_float *)(a4))->v) = ((((struct o160_float *)(a4))->v));
    }
    if ((int)(*(signed char *)((a4 + 0x130))) > 0) {
        FUN_0c1446d8(a4, 0x1);
        (((struct o130_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x130))) - 1);
        return 0x130;
    }
    return FUN_0c1446d8(a4, 0x0);
}

int FUN_0c1447ac(int a4)
{
    register int t0;
    register int t11;

    t0 = FUN_0c03f444(0x2, 0x0, 0x0);
    t11 = t0;
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x4)) = 0xC14484A;
        *(unsigned char *)((t0 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x0;
        *(unsigned int *)((t0 + 0x10)) = a4;
        (((struct o48_float *)(t0))->v) = 1.0f;
        (((struct o44_float *)(t0))->v) = 1.0f;
        (((struct o40_float *)(t0))->v) = 1.0f;
        FUN_0c064d5a(t0, 0xC20289C);
        (((struct o128_ushort *)(t0))->v) = ((int)0x1 << (int)(*(signed char *)((t0 + 0x1))));
        (((struct o12A_ushort *)(t0))->v) = ((~((int)0x1 << (int)(*(signed char *)((t0 + 0x1))))) & ((((struct o12A_short *)(t0))->v)));
        *(unsigned short *)((((0x12A + t0) + 0x2) + 0x0)) = ((~((int)0x1 << (int)(*(signed char *)((t0 + 0x1))))) & (*(short *)((((0x12A + t0) + 0x2) + 0x0))));
        (((struct o12E_ushort *)(t0))->v) = (~((int)0x1 << (int)(*(signed char *)((t0 + 0x1)))));
        FUN_0c0b21ac(t0, 0x3);
        (((struct o41C_float *)(t0))->v) = ((((struct o160_float *)(t0))->v));
        t11 = 0x160;
    }
    return t11;
}

