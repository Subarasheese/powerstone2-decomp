/* game/unsorted: functions 0C0BB244-0C0BB4AC, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
int FUN_0c179ac0(void);
int FUN_0c0bb244(void);
int FUN_0c0bb2a4(void);
float FUN_0c0bb2e0(int a4, int a5, float f4);
int FUN_0c0bb47e(void);

int FUN_0c0bb244(void)
{
    register int t1;
    register int t2;
    register int t3;
    register int t11;

    t1 = (int)((int)(FUN_0c179ac0()) % (int)0x64);
    t2 = *(signed char *)0xC5429AD;
    t3 = *(signed char *)0xC542236;
    t11 = 0x1;
    if ((int)(t1 + 0x1) <= (int)(unsigned char)(*(signed char *)((((((short)t2 * (short)0x6E) + 0xC1C6E70) + ((short)t3 * (short)0x16)) + 0x0)))) {
    } else {
        t11 = 0x3;
        if ((int)(t1 + 0x1) <= (int)((unsigned char)(*(signed char *)((((((short)t2 * (short)0x6E) + 0xC1C6E70) + ((short)t3 * (short)0x16)) + 0x0))) + (unsigned char)(*(signed char *)((((((short)t2 * (short)0x6E) + 0xC1C6E70) + ((short)t3 * (short)0x16)) + 0x1))))) {
            t11 = 0x2;
        }
    }
    return t11;
}

int FUN_0c0bb2a4(void)
{
    register int t1;

    t1 = (int)((int)(FUN_0c179ac0()) % (int)0x65);
    return ((((int)(unsigned char)(*(signed char *)((0x15 + ((((short)(*(signed char *)0xC5429AD) * (short)0x6E) + 0xC1C6E70) + ((short)(*(signed char *)0xC542236) * (short)0x16))))) > (int)t1)) ? 1 : 0);
}

float FUN_0c0bb2e0(int a4, int a5, float f4)
{
    int stk[1];
    register int t4;
    register float u6;
    register float u11;
    register float u32;
    register float u39;
    register int t40;
    register float u46;
    register float u64;
    register float u58;
    register int t51;
    register int t65;
    register float u88;
    register float u81;
    register int t74;
    register float u89;
    register float u90;
    register float u91;
    register float u92;
    register float u93;
    register float u94;
    register float u95;
    register float u24;

    *(unsigned char *)(((int)stk + 0)) = (*(signed char *)((a4 + 0x3720)));
    t4 = 0x0;
    if (((int)(signed char)a5 >= 0) && ((int)(signed char)a5 <= (int)0x3)) {
        t4 = (*(signed char *)(((((short)(signed char)a5 * (short)0x3938) + 0xC532498) + 0x3720)));
    }
    u6 = *(float *)((0xC25D7DC + ((*(signed char *)0xC5429AE) << 2)));
    u11 = 1.0f;
    if ((signed char)t4 != 0) {
        u11 = ((*(float *)((((unsigned char)(*(signed char *)0xC542242) << 2) + 0xC25D7EC))) * 1.0f);
    }
    u32 = 1.0f;
    if ((*(signed char *)(((int)stk + 0))) != 0) {
        *(unsigned int *)(((int)stk + 0)) = (signed char)a5;
        if (((int)(signed char)a5 >= 0) && (((int)(signed char)a5 <= (int)0x3) && ((signed char)t4 == 0))) {
            u24 = ((*(float *)((0xC25D86C + ((unsigned char)(*(signed char *)0xC542242) << 2)))) * 1.0f);
        } else {
            u24 = ((*(float *)((0xC25D86C + ((unsigned char)(*(signed char *)0xC542242) << 2)))) * 0.5f);
        }
        u32 = u24;
    }
    u39 = 1.0f;
    if (((int)(signed char)a5 >= 0) && ((int)(signed char)a5 <= (int)0x3)) {
        u39 = (*(float *)((((*(signed char *)(((((short)(signed char)a5 * (short)0x3938) + 0xC532498) + 0x374D))) << 2) + 0xC25D8EC)));
    }
    t40 = *(signed char *)((a4 + 0x1));
    u46 = 1.0f;
    if (((int)t40 >= 0) && ((int)t40 <= (int)0x3)) {
        u46 = (*(float *)((0xC25D8FC + ((*(signed char *)((a4 + 0x2))) << 2))));
    }
    u64 = 1.0f;
    if (((int)(signed char)a5 >= 0) && ((int)(signed char)a5 <= (int)0x3)) {
        u58 = 1.0f;
        if ((*(signed char *)(((((short)(signed char)a5 * (short)0x3938) + 0xC532498) + 0x371C))) != 0) {
            t51 = 0x4;
            if ((*(signed char *)0xC5429B4) != 2) {
                t51 = ((*(signed char *)0xC542A0C) << 2);
            }
            u58 = (*(float *)((0xC25D93C + t51)));
        }
        u64 = u58;
    }
    t65 = *(signed char *)((a4 + 0x1));
    u88 = 1.0f;
    if (((int)t65 >= 0) && ((int)t65 <= (int)0x3)) {
        u81 = 1.0f;
        if ((*(signed char *)((a4 + 0x371C))) != 0) {
            t74 = 0x4;
            if ((*(signed char *)0xC5429B4) != 2) {
                t74 = ((*(signed char *)0xC542A0B) << 2);
            }
            u81 = (*(float *)((0xC25D94C + t74)));
        }
        u88 = u81;
    }
    u89 = (f4 * u6);
    u90 = (u89 * u11);
    u91 = (u90 * u32);
    u92 = (u91 * u39);
    u93 = (u92 * u46);
    u94 = (u93 * u88);
    u95 = (u94 * u64);
    if (0.0f > (u94 * u64)) {
        u95 = 0.0f;
    }
    return u95;
}

int FUN_0c0bb47e(void)
{
    register int t0;

    t0 = *(signed char *)0xC5429AD;
    (((struct o0_uchar *)0xC542242)->v) = (*(signed char *)(((*(signed char *)0xC542236) + (((t0 << 1) + (t0 << 2)) + 0xC25D98C))));
    t0 = *(signed char *)0xC542242;
    (((struct o1_uchar *)0xC542242)->v) = ((t0 << 2) << 1);
    return ((t0 << 2) << 1);
}
