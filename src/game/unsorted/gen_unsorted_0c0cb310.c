/* game/unsorted: functions 0C0CB310-0C0CB414, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o17C_float { char p[0x17C]; float v; };
struct o24_short { char p[0x24]; short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o38E6_short { char p[0x38E6]; short v; };
struct o38E6_ushort { char p[0x38E6]; unsigned short v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o50_float { char p[0x50]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c064d5a(int, int);
int FUN_0c187798(void);
int FUN_0c0cb310(int a4, int a5, int a6, int a7);
int FUN_0c0cb38a(int a4);

int FUN_0c0cb310(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t14;
    register int t15;
    register int t16;
    register int t17;
    int t18;
    register int t19;

    t0 = *(signed char *)((a4 + 0x1));
    (((struct o28_float *)(a4))->v) = ((((struct o28_float *)((((short)t0 * (short)0x3938) + 0xC532498)))->v));
    (((struct o30_float *)(a4))->v) = ((((struct o30_float *)((((short)t0 * (short)0x3938) + 0xC532498)))->v));
    if (((((struct o17C_float *)(a4))->v)) > 0.0f) {
        (((struct o2C_float *)((((short)t0 * (short)0x3938) + 0xC532498)))->v) = ((((struct o2C_float *)(a4))->v));
        (((struct o50_float *)((((short)t0 * (short)0x3938) + 0xC532498)))->v) = 0.0f;
    }
    if (((((struct o17C_float *)(a4))->v)) == 0.0f) {
        (((struct o2C_float *)(a4))->v) = ((((struct o2C_float *)((((short)t0 * (short)0x3938) + 0xC532498)))->v));
    }
    if (((*(signed char *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x3714))) != 0) && ((t14 = *(signed char *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x3715)), t14 == 32) && (((t15 = *(signed char *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x3739)), t15 == 27) || ((t16 = *(signed char *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x3739)), t16 == 35) || (t17 = *(signed char *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x3739)), t17 == 36))) && (t18 = (((struct o38E6_short *)((((short)t0 * (short)0x3938) + 0xC532498)))->v), t19 = (((struct o24_short *)(a4))->v), t18 == t19)))) {
        return 0x24;
    }
    return FUN_0c03f346(a4, (((short)t0 * (short)0x3938) + 0xC532498), a6, a7);
}


