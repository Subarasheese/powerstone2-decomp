/* game/unsorted: functions 0C172030-0C172140, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o11C_int { char p[0x11C]; int v; };
struct o3753_uchar { char p[0x3753]; unsigned char v; };
struct o3754_uchar { char p[0x3754]; unsigned char v; };
struct o3818_ushort { char p[0x3818]; unsigned short v; };
struct o381A_ushort { char p[0x381A]; unsigned short v; };
struct o445_uchar { char p[0x445]; unsigned char v; };
struct o446_uchar { char p[0x446]; unsigned char v; };
struct o447_uchar { char p[0x447]; unsigned char v; };
struct o44_int { char p[0x44]; int v; };
struct o45_uchar { char p[0x45]; unsigned char v; };
struct o48_int { char p[0x48]; int v; };
struct o48_uint { char p[0x48]; unsigned int v; };
struct o4C_float { char p[0x4C]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
int FUN_0c037ac4(int, int, int, int, int);
int FUN_0c0388e2(int, int, int, int);
int FUN_0c172030(int a4, int a5, int a6, int a7, int a8, int a9, int a10);

int FUN_0c172030(int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    FUN_0c037ac4((((short)(signed char)a4 * (short)0x3938) + 0xC532498), 0x0, (*(signed char *)(((((short)(signed char)a4 * (short)0x58) + 0xC475DC8) + 0x5))), (*(signed char *)(((((short)(signed char)a4 * (short)0x58) + 0xC475DC8) + 0x6))), (unsigned char)(*(signed char *)(((((short)(signed char)a4 * (short)0x58) + 0xC475DC8) + 0x7))));
    t0 = (((struct o118_int *)((((short)(signed char)a4 * (short)0x3938) + 0xC532498)))->v);
    (((struct o98_float *)(t0))->v) = 1.0f;
    (((struct o94_float *)(t0))->v) = 1.0f;
    (((struct oA0_float *)(t0))->v) = 1.0f;
    (((struct o9C_float *)(t0))->v) = 1.0f;
    FUN_0c037ac4((((short)(signed char)a4 * (short)0x3938) + 0xC532498), 0x1, (*(signed char *)(((((short)(signed char)a4 * (short)0x58) + 0xC475DC8) + 0x8))), (*(signed char *)(((((short)(signed char)a4 * (short)0x58) + 0xC475DC8) + 0x9))), (unsigned char)(*(signed char *)(((((short)(signed char)a4 * (short)0x58) + 0xC475DC8) + 0xA))));
    t0 = (((struct o11C_int *)((((short)(signed char)a4 * (short)0x3938) + 0xC532498)))->v);
    (((struct o98_float *)(t0))->v) = 1.0f;
    (((struct o94_float *)(t0))->v) = 1.0f;
    (((struct oA0_float *)(t0))->v) = 1.0f;
    (((struct o9C_float *)(t0))->v) = 1.0f;
    (((struct o45_uchar *)((((short)(signed char)a4 * (short)0x58) + 0xC475DC8)))->v) = 0x0;
    (((struct o48_uint *)((((short)(signed char)a4 * (short)0x58) + 0xC475DC8)))->v) = 0x0;
    (((struct o4C_float *)((((short)(signed char)a4 * (short)0x58) + 0xC475DC8)))->v) = 0.0f;
    (((struct o3753_uchar *)((((short)(signed char)a4 * (short)0x3938) + 0xC532498)))->v) = a5;
    (((struct o3818_ushort *)((((short)(signed char)a4 * (short)0x3938) + 0xC532498)))->v) = ((a6 << 8) | (unsigned char)a7);
    (((struct o3754_uchar *)((((short)(signed char)a4 * (short)0x3938) + 0xC532498)))->v) = a8;
    (((struct o381A_ushort *)((((short)(signed char)a4 * (short)0x3938) + 0xC532498)))->v) = ((a9 << 8) | (unsigned char)a10);
    t0 = (((struct o48_int *)((0xC4 + (((short)(signed char)a4 * (short)0x3938) + 0xC532498))))->v);
    t1 = *(int *)(((0xC4 + (((short)(signed char)a4 * (short)0x3938) + 0xC532498)) + 0x3C));
    t2 = *(int *)(((0xC4 + (((short)(signed char)a4 * (short)0x3938) + 0xC532498)) + 0x38));
    t3 = (((struct o44_int *)((0xC4 + (((short)(signed char)a4 * (short)0x3938) + 0xC532498))))->v);
    *(unsigned char *)((t3 + 0x0)) = 0x1;
    *(unsigned char *)((t2 + 0x0)) = 0x1;
    *(unsigned char *)((t0 + 0x0)) = 0x1;
    *(unsigned char *)((t1 + 0x0)) = 0x1;
    if ((*(signed char *)0xC475DC4) != 0) {
        (((struct o446_uchar *)((((short)(signed char)a4 * (short)0x3938) + 0xC532498)))->v) = 0x0;
        (((struct o447_uchar *)((((short)(signed char)a4 * (short)0x3938) + 0xC532498)))->v) = 0x0;
        (((struct o445_uchar *)((((short)(signed char)a4 * (short)0x3938) + 0xC532498)))->v) = 0x0;
        return FUN_0c0388e2((((short)(signed char)a4 * (short)0x3938) + 0xC532498), a5, a6, a7);
    }
    return t3;
}
