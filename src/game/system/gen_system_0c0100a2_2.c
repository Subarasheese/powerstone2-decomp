/* game/system: functions 0C0100A2-0C011972, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_ushort { unsigned short v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o20_uchar { char p[0x20]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o2_ushort { char p[0x2]; unsigned short v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o4_short { char p[0x4]; short v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o6_short { char p[0x6]; short v; };
struct o6_ushort { char p[0x6]; unsigned short v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uchar { char p[0x8]; unsigned char v; };
struct o9_uchar { char p[0x9]; unsigned char v; };
int FUN_0c010448(void);
int FUN_0c0117a0(int);
int FUN_0c013b9c(int);
int FUN_0c018e74(int);
int FUN_0c018e9c(int, int);
int FUN_0c018f40(int, int, int, int);
int FUN_0c018fd2(int);
int FUN_0c019954(int);
int FUN_0c019a32(int);
int FUN_0c01c714(int, int, int);
int FUN_0c01cb7c(void);
int FUN_0c01cd2c(int);
int FUN_0c01ceac(void);
int FUN_0c01d094(void);
int FUN_0c01d262(void);
int FUN_0c01d26e(void);
int FUN_0c01d27a(void);
extern int FUN_0c01d294();
int FUN_0c01d6cc(void);
int FUN_0c01e9e4(void);
int FUN_0c02ae40(int);
int FUN_0c036de8(int);
extern int FUN_0c03add8();
int FUN_0c03afdc(int);
int FUN_0c03b25a(int);
int FUN_0c03c7ec(void);
int FUN_0c03ea04(int, int);
int FUN_0c046238(void);
int FUN_0c046266(int, int, int, int);
int FUN_0c0573c0(int, int, int);
int FUN_0c0573cc(int, int, int);
int FUN_0c05aab6(int, int);
int memset(int, int, int);
int strncpy(int, int, int);
extern int syCfgGetIndividualID();
int FUN_0c010460(int a4, int a5, int a6);
int FUN_0c01048c(void);
int FUN_0c0104ea(int a4, int a5, int a6, int a7);
int FUN_0c010af8(int a4, int a5, int a6, int a7);
int FUN_0c0116a0(int a4, int a5, int a6, int a7);

int FUN_0c010460(int a4, int a5, int a6)
{
    register int t4;

    FUN_0c036de8(0x1F);
    FUN_0c03ea04(0x3, 0x0);
    FUN_0c02ae40(0x2);
    FUN_0c01e9e4();
    (((struct o1_uchar *)0xC30EF65)->v) = 0x0;
    t4 = *(signed char *)0xC30EF65;
    (((struct o0_uchar *)0xC30EF65)->v) = (t4 + 0x1);
    return (t4 + 0x1);
}

int FUN_0c01048c(void)
{
    register int t0;

    t0 = *(signed char *)0xC30EF66;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            return (unsigned char)t0;
        }
    } else {
        memset(0xC30EF7C, 0x0, 0x20);
        (((struct o1_uchar *)0xC30EF65)->v) = ((*(signed char *)0xC30EF66) + 0x1);
        FUN_0c01e9e4();
    }
    t0 = FUN_0c019a32(0xC30EF7C);
    if ((short)t0 != 1) {
        if ((short)t0 != 2) {
            return (short)t0;
        }
        return FUN_0c010448();
    }
    (((struct o0_uchar *)0xC30EF65)->v) = ((*(signed char *)0xC30EF65) + 0x1);
    (((struct o1_uchar *)0xC30EF65)->v) = 0x0;
    (((struct o2_uchar *)0xC30EF65)->v) = 0x0;
    return 0x0;
}



