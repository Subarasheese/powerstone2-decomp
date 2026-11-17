/* game/effect: functions 0C14F04C-0C14F2E6, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c15f9b4(int, int, int, int);
int FUN_0c15fa0c(int, int, int, int, float);
int FUN_0c179ac0(void);
int FUN_0c187798(void);
int FUN_0c14f04c(int a4, int a5, int a6, int a7);
int FUN_0c14f0c2(int a4, int a5);
void FUN_0c14f178(int a4, int a5);
void FUN_0c14f238(int a4, int a5, int a6, int a7);

int FUN_0c14f04c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
        *(unsigned short *)((a4 + 0x1E)) = (FUN_0c037320(0x3, (*(int *)0xC4B40CC)));
    }
    FUN_0c03744a(((((struct oC4_int *)(a4))->v)), (*(short *)((a4 + 0x1C))), 0x3, (*(int *)0xC4B40CC));
    *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
    t0 = *(short *)((a4 + 0x1E));
    t1 = t0;
    if ((int)(*(short *)((a4 + 0x1C))) >= (int)t0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t1 = 0x14;
    }
    return t1;
}

int FUN_0c14f0c2(int a4, int a5)
{
    register int t0;
    register int t9;
    register int t5;
    register int t6;
    register float u8;

    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
    t9 = t0;
    if (t0 != 0) {
        FUN_0c03744a(((((struct oC4_int *)(t0))->v)), 0x0, 0x3, (*(int *)0xC4B40CC));
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC14F04C;
        *(unsigned char *)((t0 + 0x2)) = a4;
        (((struct oAC_ushort *)(t0))->v) = 0x38;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        FUN_0c187798();
        t5 = FUN_0c179ac0();
        t6 = ((~(((~t5) + 0x1) & 0x3F)) + 0x1);
        if ((int)t5 >= 0) {
            t6 = (t5 & 0x3F);
        }
        *(unsigned int *)((t0 + 0x3C)) = ((t6 << 8) << 2);
        u8 = *(float *)(((a4 << 2) + 0xC202D20));
        (((struct o48_float *)(t0))->v) = u8;
        (((struct o44_float *)(t0))->v) = u8;
        (((struct o40_float *)(t0))->v) = u8;
        t9 = 0x40;
    }
    return t9;
}

void FUN_0c14f178(int a4, int a5)
{
    if ((int)(signed char)a5 < (int)0xE) {
        if ((unsigned int)(signed char)a5 < (unsigned int)0xE) {
            switch (((signed char)a5 << 1)) {
                case 0:
                case 10:
                case 12:
                {
                    FUN_0c14f0c2(0x0, (a4 + 0x28));
    return;
                }
                case 2:
                case 14:
                {
                    FUN_0c14f0c2(0x1, (a4 + 0x28));
    return;
                }
                case 4:
                case 16:
                {
                    FUN_0c14f0c2(0x2, (a4 + 0x28));
    return;
                }
                case 6:
                case 8:
                {
                    FUN_0c14f0c2(0x3, (a4 + 0x28));
                    FUN_0c14f0c2(0x3, (a4 + 0x28));
    return;
                }
                case 18:
                {
                    FUN_0c15f9b4((*(signed char *)((a4 + 0x1))), (a4 + 0x28), (a4 + 0x34), 0x0);
                    return;
                }
                case 20:
                {
                    FUN_0c15f9b4((*(signed char *)((a4 + 0x1))), (a4 + 0x28), (a4 + 0x34), 0x1);
                    return;
                }
                case 22:
                {
                    FUN_0c15f9b4((*(signed char *)((a4 + 0x1))), (a4 + 0x28), (a4 + 0x34), 0x2);
                    return;
                }
                case 24:
                {
                    FUN_0c15fa0c((*(signed char *)((a4 + 0x1))), (a4 + 0x28), (a4 + 0x34), 0x2, (1.0f + 1.0f));
    return;
                }
                default:
                {
                    FUN_0c15f9b4((*(signed char *)((a4 + 0x1))), (a4 + 0x28), (a4 + 0x34), 0x3);
                    return;
                }
            }
        }
        return;
    }
}

void FUN_0c14f238(int a4, int a5, int a6, int a7)
{
    if ((int)(signed char)a7 < (int)0xE) {
        if ((unsigned int)(signed char)a7 < (unsigned int)0xE) {
            switch (((signed char)a7 << 1)) {
                case 0:
                case 10:
                case 12:
                {
                    FUN_0c14f0c2(0x0, a4);
    return;
                }
                case 2:
                case 14:
                {
                    FUN_0c14f0c2(0x1, a4);
    return;
                }
                case 4:
                case 16:
                {
                    FUN_0c14f0c2(0x2, a4);
    return;
                }
                case 6:
                case 8:
                {
                    FUN_0c14f0c2(0x3, a4);
    return;
                }
                case 18:
                {
                    FUN_0c15f9b4(a6, a4, a5, 0x0);
                    return;
                }
                case 20:
                {
                    FUN_0c15f9b4(a6, a4, a5, 0x1);
                    return;
                }
                case 22:
                {
                    FUN_0c15f9b4(a6, a4, a5, 0x2);
                    return;
                }
                case 24:
                {
                    FUN_0c15fa0c(a6, a4, a5, 0x2, (1.0f + 1.0f));
    return;
                }
                default:
                {
                    FUN_0c15f9b4(a6, a4, a5, 0x3);
                    return;
                }
            }
        }
        return;
    }
}
