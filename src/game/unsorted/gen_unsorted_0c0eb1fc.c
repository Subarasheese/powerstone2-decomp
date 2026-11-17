/* game/unsorted: functions 0C0EB1FC-0C0EB3DC, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c0659d6(int, int, int);
int FUN_0c0eb1fc(int a4, int a5, int a6, int a7);

int FUN_0c0eb1fc(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0x1;
        if ((int)(*(signed char *)((a4 + 0x1B))) >= 0) {
            (((struct oA4_uint *)(a4))->v) = ((*(int *)(((((*(signed char *)((a4 + 0x1B))) << 2) + 0xC540D94) + 0x0))) + 0x64);
            t0 = *(signed char *)((a4 + 0x1B));
            t1 = *(int *)((((t0 << 2) + 0xC540D94) + 0x0));
            *(unsigned int *)((a4 + 0x10)) = t1;
            t2 = t1;
            t1 = ((t0 << 2) + 0xC540D94);
        }
        (((struct oAC_ushort *)(a4))->v) = 0x39;
        t0 = t2;
        t2 = t1;
        t1 = 0x0;
        for (;;) {
            if ((int)t1 >= (int)((((struct oC0_int *)(a4))->v))) {
                break;
            }
            t2 = t1;
            t2 = (t2 << 2);
            t2 = (t2 + (0xC4 + a4));
            t0 = (*(int *)((t2 + 0x0)));
            t1 = (t1 + 0x1);
            *(unsigned char *)((t0 + 0x0)) = 0x0;
        }
    }
    t0 = *(signed char *)((a4 + 0x15));
    switch (t0) {
    case 0:
        if ((int)(*(signed char *)(((*(int *)((a4 + 0x10))) + 0x15))) > 0) {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x0;
            (((struct o20_ushort *)(a4))->v) = 0x0;
            *(unsigned short *)((a4 + 0x1E)) = 0x0;
        } else {
            t0 = FUN_0c0659d6((*(int *)((a4 + 0x10))), 0x0, 0x63);
            if (t0 != 0) {
                *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
            } else {
                *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x0;
            }
        }
        break;
    case 1:
        if ((int)(*(signed char *)(((*(int *)((a4 + 0x10))) + 0x15))) > (int)0x1) {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x0;
            (((struct o20_ushort *)(a4))->v) = 0x0;
            *(unsigned short *)((a4 + 0x1E)) = 0x0;
        } else {
            t0 = *(short *)((a4 + 0x1E));
            *(unsigned short *)((a4 + 0x1E)) = (t0 + 0x1);
            if ((int)(short)(t0 + 0x1) > (int)0x4) {
                *(unsigned short *)((a4 + 0x1E)) = 0x0;
                (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) ^ 0x1);
            }
            *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = (*(signed char *)((a4 + 0x20)));
        }
        break;
    case 2:
        if ((int)(*(signed char *)(((*(int *)((a4 + 0x10))) + 0x15))) > (int)0x2) {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            (((struct o20_ushort *)(a4))->v) = 0x0;
            *(unsigned short *)((a4 + 0x1E)) = 0x0;
        } else {
            t0 = *(short *)((a4 + 0x1E));
            *(unsigned short *)((a4 + 0x1E)) = (t0 + 0x1);
            if ((int)(short)(t0 + 0x1) > (int)0x4) {
                *(unsigned short *)((a4 + 0x1E)) = 0x0;
                (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) ^ 0x1);
            }
            *(unsigned char *)((((((struct oCC_int *)(a4))->v)) + 0x0)) = (*(signed char *)((a4 + 0x20)));
        }
        break;
    default:
        if (10.0f > ((((struct o44_float *)(a4))->v))) {
            (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) + 1.0f);
        }
        if (((((struct o40_float *)(a4))->v)) > 0.0f) {
            (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) - 0.100000001f);
        } else {
            *(unsigned char *)((((((struct oCC_int *)(a4))->v)) + 0x0)) = 0x0;
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        }
        break;
    }
    t0 = *(signed char *)0xC54098D;
    t1 = 0x15;
    if (((int)t0 >= (int)0x7) && ((int)t0 <= (int)0xE)) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t1 = 0x14;
    }
    return t1;
}
