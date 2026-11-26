/* game/unsorted: functions 0C126618-0C1267CA, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o4_float { char p[0x4]; float v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o74_float { char p[0x74]; float v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o90_float { char p[0x90]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c03744a(int, int, int, int);
extern int FUN_0c03f346();
int FUN_0c03f444(int, int, int);
int nlAddVector3op(int, int, int);
int FUN_0c187798(void);
int FUN_0c126618(int a4);
int FUN_0c126708(int a4, int a5, int a6, int a7);


int FUN_0c126708(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    if ((*(signed char *)((0x3715 + (*(int *)((a4 + 0x10)))))) != 20) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    t0 = (((struct oC8_int *)(a4))->v);
    nlAddVector3op((t0 + 0x6C), (t0 + 0x6C), (0x90 + t0));
    (((struct o78_uint *)(t0))->v) = (((((struct o78_int *)(t0))->v)) + 0x2000);
    (((struct o94_float *)(t0))->v) = (((((struct o94_float *)(t0))->v)) - 1.0f);
    t0 = *(signed char *)((a4 + 0x1));
    t1 = ((short)t0 * (short)0x3938);
    if ((*(signed char *)((0xC532540 + ((short)t0 * (short)0x3938)))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t1 = 0x14;
    }
    return t1;
}
