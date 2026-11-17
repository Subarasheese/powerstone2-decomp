/* game/menu/select: functions 0C10CAEC-0C10E7C4, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o4_float { char p[0x4]; float v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int);
int FUN_0c05a080(int, int);
int FUN_0c10caec(int);
int FUN_0c1171f0(int);
int FUN_0c10d160(int a4);

int FUN_0c10d160(int a4)
{
    register int t0;
    register float u0;
    register float u1;

    if ((*(signed char *)((0x14 + (*(int *)((a4 + 0x10)))))) == 5) {
        (((struct o14_uchar *)(a4))->v) = 0x63;
    }
    t0 = FUN_0c10caec((*(int *)((a4 + 0x10))));
    if (t0 != 0) {
        *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
    } else {
        *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x0;
    }
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 99) {
                return t0;
            }
            return FUN_0c03f346(a4);
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0x1F;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        FUN_0c1171f0(a4);
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x4, 0x9, (*(int *)0xC4B410C));
        *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x0;
        *(unsigned short *)((a4 + 0x1C)) = (*(short *)(((*(int *)((a4 + 0x10))) + 0x1C)));
    }
    if ((*(short *)((a4 + 0x1C))) != (*(short *)(((*(int *)((a4 + 0x10))) + 0x1C)))) {
        FUN_0c05a080(0x17, 0x0);
    }
    *(unsigned short *)((a4 + 0x1C)) = (*(short *)(((*(int *)((a4 + 0x10))) + 0x1C)));
    u0 = (((struct o0_float *)0xC10D298)->v);
    u1 = (((float)(*(short *)(((*(int *)((a4 + 0x10))) + 0x1C))) * u0) / ((((struct o4_float *)0xC10D298)->v)));
    (((struct o80_uint *)(((((struct oC4_int *)(a4))->v))))->v) = ((int)((((u1 * ((((struct o8_float *)0xC10D298)->v))) / u0)) + ((((struct oC_float *)0xC10D298)->v))) & 0xFFFF);
    t0 = (((struct oC4_int *)(a4))->v);
    (((struct o80_uint *)(t0))->v) = (((((struct o80_int *)(t0))->v)) & 0xFFFF);
    return 0x80;
}
