/* game/hit: functions 0C0E3CCC-0C0E46F4, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o130_uchar { char p[0x130]; unsigned char v; };
struct o132_uchar { char p[0x132]; unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o420_ushort { char p[0x420]; unsigned short v; };
struct o4_float { char p[0x4]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
int FUN_0c03f346(int, int, int, int);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c0c212c(int);
int FUN_0c0c2ab6(int, int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c0e3ccc(int a4);
int FUN_0c0e455e(int a4, int a5, int a6, int a7);

int FUN_0c0e3ccc(int a4)
{
    register int t25;

    if ((*(signed char *)((a4 + 0x132))) != 0) {
        (((struct o130_uchar *)(a4))->v) = 0xA;
        (((struct o132_uchar *)(a4))->v) = 0x0;
    }
    if ((*(signed char *)((a4 + 0x130))) != 0) {
        (((struct oBC_float *)(a4))->v) = 0.300000012f;
        (((struct oB8_float *)(a4))->v) = 0.300000012f;
        (((struct o130_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x130))) - 1);
    } else {
        (((struct oBC_float *)(a4))->v) = 1.0f;
        (((struct oB8_float *)(a4))->v) = 1.0f;
        (((struct oB4_float *)(a4))->v) = 1.0f;
    }
    t25 = 0x160;
    if (!(((((struct o160_float *)(a4))->v)) > 0.0f)) {
        if ((*(signed char *)((a4 + 0x3))) == 2) {
            (((struct o160_float *)(a4))->v) = ((((struct o0_float *)0xC286EA4)->v));
            (((struct o420_ushort *)(a4))->v) = 0x0;
            FUN_0c0c2d56(a4, 0x1, (*(signed char *)((a4 + 0x1))));
        } else {
            (((struct o160_float *)(a4))->v) = ((((struct o4_float *)0xC286EA4)->v));
            (((struct o420_ushort *)(a4))->v) = (*(short *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738D2)));
            FUN_0c0c2d56(a4, 0xA, (*(signed char *)((a4 + 0x1))));
            (((struct o8C_float *)(((((struct oC8_int *)(a4))->v))))->v) = 1.0f;
        }
        (((struct o8C_float *)(((((struct oCC_int *)(a4))->v))))->v) = 1.0f;
        t25 = 0x8C;
    }
    return t25;
}

