/* game/unsorted: functions 0C157790-0C15791E, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
int math_atan2_angle16(float, float);
int FUN_0c18778c(void);
int FUN_0c187798(int, int, int);
int FUN_0c157790(int a4, int a5, int a6, int a7);

int FUN_0c157790(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t24;
    register int t38;
    register int t43;
    register int t44;
    register int t49;
    register int t52;
    register int t55;
    register int t56;
    register int t46;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            t56 = (FUN_0c03f346(a4, a5, a6, a7));
        } else {
            if ((int)(*(short *)((a4 + 0x1C))) <= (int)0x14) {
                FUN_0c0588bc((a4 + 0x40), 0xC2A2810, 0xC2A2804, (*(short *)((a4 + 0x1C))), 0x14, 0x0);
                if ((int)(*(short *)((a4 + 0x1C))) <= (int)0x14) {
                    FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC2A2828, 0xC2A281C, (*(short *)((a4 + 0x1C))), 0x14, 0x0);
                }
            }
            if ((int)(*(short *)((a4 + 0x1C))) <= (int)0x4) {
                FUN_0c058a6e((((((struct oC4_int *)(a4))->v)) + 0x14), 0xC2A27F4, 0xC2A27E4, (*(short *)((a4 + 0x1C))), 0x4, 0x0);
            }
            t24 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t24 + 0x1);
            t56 = (short)(t24 + 0x1);
            if ((int)(short)(t24 + 0x1) > (int)0x14) {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                t56 = 0x14;
            }
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(volatile int *)((a4 + 0xC4));
        t38 = ((int (*)(int, int, int))(FUN_0c187798))(a4, a5, a6);
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x2, 0x14, (*(int *)0xC4B40CC));
        *(volatile int *)((a4 + 0xC4));
        t43 = ((int (*)(void))(FUN_0c187798))();
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0x3F;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        t44 = ((int (*)(int))(FUN_0c187798))(0x1);
        *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = t46;
        *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x21F;
        *(volatile int *)((a4 + 0xC4));
        t49 = ((int (*)(int))(FUN_0c187798))(t46);
        *(volatile int *)((a4 + 0xC4));
        FUN_0c18778c();
        t52 = (((struct oC4_int *)(a4))->v);
        t55 = math_atan2_angle16(((((struct o70_float *)(t52))->v)), ((((struct o6C_float *)(t52))->v)));
        (((struct o80_uint *)(t52))->v) = ((t55 - 16384) & 0xFFFF);
        t56 = ((t55 - 16384) & 0xFFFF);
    }
    return t56;
}
