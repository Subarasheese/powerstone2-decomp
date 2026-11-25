/* game/unsorted: functions 0C029FAC-0C02A600, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_short { short v; };
struct o14_int { char p[0x14]; int v; };
struct o14_short { char p[0x14]; short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2_short { char p[0x2]; short v; };
struct o4_float { char p[0x4]; float v; };
struct o4_short { char p[0x4]; short v; };
struct o8_int { char p[0x8]; int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
int FUN_0c012c34(int);
int FUN_0c0185b4(void);
int FUN_0c01c5ac(int, float, float);
int FUN_0c01c62a(int);
int FUN_0c01cb7c(void);
int FUN_0c01cc56(int, int);
int FUN_0c01cd2c(int);
int FUN_0c01e9e4(void);
int FUN_0c02b342(int, int);
int FUN_0c02b3ba(int, float, float, float);
int FUN_0c02b502(int);
int FUN_0c0573c0(int, int, int);
int FUN_0c187cac(int, int, int, int, int);
int strcpy(int, int);
int strlen(int);
int FUN_0c029fac(void);
int FUN_0c02a4b6(int a4);
int FUN_0c02a5b6(void);


int FUN_0c02a4b6(int a4)
{
    register int t0;
    int t1;
    register int t2;
    register int t3;
    register int t4;

    t2 = *(signed char *)((a4 + 0x14));
    if (t2 != 0) {
        if (t2 != 1) {
            if (t2 != 2) {
                t3 = t2;
                if (t2 != 3) {
                } else {
                    t2 = FUN_0c01c62a(a4);
                    t4 = (signed char)t2;
                    if ((signed char)t2 != 0) {
                        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                        t4 = 0x14;
                    }
                    t3 = t4;
                }
                t2 = t3;
            } else {
                FUN_0c012c34(a4);
                t3 = FUN_0c01cd2c(0x101);
                t4 = (short)t3;
                if (((short)t3 != 0) && ((t0 = *(signed char *)0xC30A51A, t0 == 0) && (t1 = *(signed char *)0xC30EFA2, t1 == 0))) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    (((struct o1B_uchar *)(a4))->v) = 0x0;
                    (((struct o22_ushort *)(a4))->v) = 0x0;
                    t4 = 0x22;
                }
                t2 = t4;
            }
            t0 = t2;
        } else {
            FUN_0c012c34(a4);
            t1 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
            t2 = (short)(t1 - 1);
            if ((short)(t1 - 1) == 0) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t2 = 0x14;
            }
            t0 = t2;
        }
        t1 = t0;
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o28_float *)(a4))->v) = 140.0f;
        (((struct o2C_float *)(a4))->v) = -190.0f;
        *(unsigned short *)((a4 + 0x1C)) = 0x16;
        t1 = 0x16;
    }
    return t1;
}

int FUN_0c02a5b6(void)
{
    *(unsigned char *)0xC30985A = ((*(signed char *)0xC30985A) + 0x1);
    FUN_0c01e9e4();
    FUN_0c01cc56(0x13, 0xC029FAC);
    FUN_0c01cc56(0x1A, 0xC02A4B6);
    FUN_0c01c5ac((*(signed char *)0xC309BE4), ((((struct o4_float *)0xC02A680)->v)), ((((struct o0_float *)0xC02A680)->v)));
    FUN_0c01cb7c();
    FUN_0c0573c0(0xFF000000, 0x0, 0x14);
    *(unsigned short *)0xC30EF6C = 0x14;
    return FUN_0c0185b4();
}
