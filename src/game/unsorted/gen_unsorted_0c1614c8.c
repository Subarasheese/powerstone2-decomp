/* game/unsorted: functions 0C1614C8-0C16155A, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o24_short { char p[0x24]; short v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c1614c8(int a4, int a5);

int FUN_0c1614c8(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = FUN_0c037320(0x66, (*(int *)0xC4B40D0));
    t1 = t0;
    if ((int)t0 >= 0) {
        t2 = FUN_0c03f444(0x5, 0x0, t0);
        t0 = t2;
        if (t2 != 0) {
            *(unsigned char *)((t2 + 0x1)) = (*(signed char *)((a4 + 0x1)));
            *(unsigned char *)((t2 + 0x2)) = a5;
            *(unsigned int *)((t2 + 0x4)) = 0xC1612A4;
            (((struct oA8_uchar *)(t2))->v) = 0x0;
            (((struct oAC_ushort *)(t2))->v) = 0xF;
            (((struct oA9_uchar *)(t2))->v) = 0x21;
            (((struct o48_float *)(t2))->v) = 1.0f;
            (((struct o44_float *)(t2))->v) = 1.0f;
            (((struct o40_float *)(t2))->v) = 1.0f;
            *(unsigned short *)((t2 + 0x1C)) = ((((struct o24_short *)(a4))->v));
            *(unsigned short *)((t2 + 0x1E)) = 0x0;
            *(unsigned int *)((t2 + 0x10)) = a4;
            t3 = (((struct oC4_int *)(t2))->v);
            FUN_0c03744a(t3, 0x0, 0x66, (*(int *)0xC4B40D0));
            *(unsigned char *)((t3 + 0x0)) = 0x1;
            *(unsigned short *)((t3 + 0x6)) = 0x30;
            (((struct o8C_float *)(t3))->v) = 3.0f;
            (((struct o88_float *)(t3))->v) = 3.0f;
            (((struct o84_float *)(t3))->v) = 3.0f;
            t0 = 0x84;
        }
        t1 = t0;
    }
    return t1;
}
