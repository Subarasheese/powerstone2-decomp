/* game/unsorted: functions 0C16DD24-0C16DE54, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o24_float { char p[0x24]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAA_uchar { char p[0xAA]; unsigned char v; };
struct oAB_uchar { char p[0xAB]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c03fb78(int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c07e3ae(int, int);
int FUN_0c18778c(int);
int FUN_0c187798(void);
int FUN_0c16dd24(int a4, int a5);

int FUN_0c16dd24(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    t1 = FUN_0c037320(0x51, (*(int *)0xC4B40D8));
    t2 = FUN_0c03f444(0x2, 0x0, t1);
    t3 = t2;
    if (t2 != 0) {
        FUN_0c03733c(t2, 0x51, (*(int *)0xC4B40D8));
        FUN_0c03fb78(t2, 0x1);
        *(unsigned char *)((t2 + 0x1)) = (*(signed char *)((a4 + 0x1)));
        *(unsigned int *)((t2 + 0x4)) = 0xC16DBD4;
        *(unsigned char *)((t2 + 0x2)) = a5;
        FUN_0c187798();
        FUN_0c187798();
        (((struct oA8_uchar *)(t2))->v) = 0x1;
        (((struct oAC_ushort *)(t2))->v) = 0x21F;
        (((struct oA9_uchar *)(t2))->v) = 0x21;
        *(unsigned int *)((t2 + 0x10)) = a4;
        *(volatile signed char *)((a4 + 0x3719));
        FUN_0c18778c(0x1);
        (((struct oAA_uchar *)(t2))->v) = t0;
        if ((*(signed char *)((t2 + 0x2))) == 0) {
            (((struct o48_float *)(t2))->v) = 1.0f;
            (((struct o44_float *)(t2))->v) = 1.0f;
            (((struct o40_float *)(t2))->v) = 1.0f;
            t0 = 0x4;
        } else {
            (((struct o48_float *)(t2))->v) = 0.5f;
            (((struct o44_float *)(t2))->v) = 0.5f;
            (((struct o40_float *)(t2))->v) = 0.5f;
            t0 = 0x2;
        }
        (((struct oAB_uchar *)(t2))->v) = t0;
        FUN_0c064d24(t2, 0x3, 0x3B, 0x0, 0x40, 0x0, 0x0, 0xF0);
        if ((int)t1 > 0) {
            t0 = 0x0;
            t4 = 0x0;
            for (;;) {
                t4 = (t4 + 0x1);
                t5 = *(int *)((((0xC4 + t2) + t0) + 0x0));
                *(unsigned short *)((t5 + 0x6)) = ((*(short *)((t5 + 0x6))) | 0x1000);
                (((struct o24_float *)((*(int *)((((0xC4 + t2) + t0) + 0x0)))))->v) = ((((struct o40_float *)(t2))->v));
                t0 = (t0 + 0x4);
                if ((int)t4 >= (int)t1) {
                    break;
                }
            }
        }
        FUN_0c07e3ae(t2, 0x78);
        (((struct o41C_uchar *)(t2))->v) = (*(signed char *)0xC54223C);
        *(unsigned short *)(((0x41C + t2) + 0x2)) = 0xB4;
        t3 = 0xB4;
    }
    return t3;
}
