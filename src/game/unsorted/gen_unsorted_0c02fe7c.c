/* game/unsorted: functions 0C02FE7C-0C030366, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
float math_signed_sqrt(float);
int math_atan_angle16(float);
int FUN_0c02fe7c(void);
int FUN_0c030110(int a4, int a5, int a6);
int FUN_0c03023e(int a4, int a5);

int FUN_0c02fe7c(void)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = 0xC542764;
    t1 = 0x0;
    for (;;) {
        *(unsigned int *)((t0 + 0x0)) = 0x0;
        *(unsigned short *)((t0 + 0x10)) = 0x0;
        *(unsigned short *)((t0 + 0x12)) = 0x0;
        *(unsigned short *)((t0 + 0x14)) = 0x0;
        *(unsigned short *)((t0 + 0x16)) = 0x0;
        t2 = (t0 + 0x8);
        for (;;) {
            *(unsigned char *)((t2 + 0x0)) = 0x80;
            t2 = (t2 + 0x1);
            if ((unsigned int)t2 >= (unsigned int)(t0 + 0xC)) {
                break;
            }
        }
        t1 = (t1 + 0x1);
        t0 = (t0 + 0x28);
        if ((int)t1 >= (int)0x4) {
            break;
        }
    }
    return 0x0;
}

int FUN_0c030110(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    u0 = math_signed_sqrt((float)(((short)a5 * (short)a5) + ((short)a6 * (short)a6)));
    *(unsigned short *)((a4 + 0xE)) = (int)u0;
    if ((int)(unsigned short)(int)u0 <= (int)0xF) {
        *(unsigned short *)((a4 + 0xE)) = 0x0;
        t0 = 0x0;
    } else {
        u0 = (float)(short)a5;
        if ((float)(short)a5 == 0.0f) {
            u0 = 9.99999997e-07f;
        }
        *(unsigned short *)((a4 + 0xC)) = ((math_atan_angle16(((-(float)(short)a6) / u0))) & 0xFFFF);
        if (0.0f > u0) {
            *(unsigned short *)((a4 + 0xC)) = ((*(short *)((a4 + 0xC))) + 0x8000);
        }
        *(unsigned short *)((a4 + 0xC)) = ((*(short *)((a4 + 0xC))) + 0x4000);
        if ((*(short *)((a4 + 0xC))) == 0) {
            *(unsigned short *)((a4 + 0xC)) = 0x1;
        }
        t1 = (int)((int)((unsigned short)(*(short *)((a4 + 0xC))) + 0x1000) / (int)0x2000);
        t2 = 0x1000;
        if ((t1 & 0x7) != 0) {
            t2 = 0x1400;
            if ((t1 & 0x7) != 1) {
                t2 = 0x400;
                if ((t1 & 0x7) != 2) {
                    t2 = 0x2400;
                    if ((t1 & 0x7) != 3) {
                        t2 = 0x2000;
                        if ((t1 & 0x7) != 4) {
                            t2 = 0x2800;
                            if ((t1 & 0x7) != 5) {
                                t2 = 0x800;
                                if ((t1 & 0x7) != 6) {
                                    t2 = 0x1800;
                                    if ((t1 & 0x7) != 7) {
                                        t2 = 0x0;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) | t2);
        t1 = *(short *)((a4 + 0x10));
        *(unsigned short *)((a4 + 0x10)) = (t1 | t2);
        t0 = (t1 | t2);
    }
    return t0;
}

int FUN_0c03023e(int a4, int a5)
{
    int t0;
    int t1;
    int t2;
    int t3;
    int t4;
    int t5;
    int t6;
    int t7;
    int t8;
    int t9;
    int t10;
    int t11;

    if ((((*(int *)((a5 + 0x4))) & 0x10) != 0) && (t0 = *(int *)((a5 + 0x8)), (t0 & 0x10) != 0)) {
        *(unsigned short *)((a4 + 0x0)) = ((*(short *)((a4 + 0x0))) | 0x2000);
    }
    if ((((*(int *)((a5 + 0x4))) & 0x20) != 0) && (t1 = *(int *)((a5 + 0x8)), (t1 & 0x20) != 0)) {
        *(unsigned short *)((a4 + 0x0)) = ((*(short *)((a4 + 0x0))) | 0x1000);
    }
    if ((((*(int *)((a5 + 0x4))) & 0x40) != 0) && (t2 = *(int *)((a5 + 0x8)), (t2 & 0x40) != 0)) {
        *(unsigned short *)((a4 + 0x0)) = ((*(short *)((a4 + 0x0))) | 0x800);
    }
    if ((((*(int *)((a5 + 0x4))) & 0x80) != 0) && (t3 = *(int *)((a5 + 0x8)), (t3 & 0x80) != 0)) {
        *(unsigned short *)((a4 + 0x0)) = ((*(short *)((a4 + 0x0))) | 0x400);
    }
    if ((((*(int *)((a5 + 0x4))) & 0x400) != 0) && (t4 = *(int *)((a5 + 0x8)), (t4 & 0x400) != 0)) {
        *(unsigned short *)((a4 + 0x0)) = ((*(short *)((a4 + 0x0))) | 0x200);
    }
    t0 = *(int *)((a5 + 0x4));
    t1 = t0;
    if ((t0 & 4) != 0) {
        t0 = *(int *)((a5 + 0x8));
        if ((t0 & 4) != 0) {
            *(unsigned short *)((a4 + 0x0)) = ((*(short *)((a4 + 0x0))) | 0x100);
        }
        t1 = t0;
    }
    t0 = t1;
    if ((((*(int *)((a5 + 0x4))) & 0x200) != 0) && (t5 = *(int *)((a5 + 0x8)), (t5 & 0x200) != 0)) {
        t1 = *(short *)((a4 + 0x0));
        *(unsigned short *)((a4 + 0x0)) = (t1 | 0x80);
        t0 = (t1 | 0x80);
    }
    t1 = t0;
    if ((((*(int *)((a5 + 0x4))) & 0x2) != 0) && (t6 = *(int *)((a5 + 0x8)), (t6 & 0x2) != 0)) {
        t0 = *(short *)((a4 + 0x0));
        *(unsigned short *)((a4 + 0x0)) = (t0 | 0x40);
        t1 = (t0 | 0x40);
    }
    t0 = t1;
    if ((((*(int *)((a5 + 0x4))) & 0x20000) != 0) && (t7 = *(int *)((a5 + 0x8)), (t7 & 0x20000) != 0)) {
        t1 = *(short *)((a4 + 0x0));
        *(unsigned short *)((a4 + 0x0)) = (t1 | 0x8);
        t0 = (t1 | 0x8);
    }
    t1 = t0;
    if ((((*(int *)((a5 + 0x4))) & 0x10000) != 0) && (t8 = *(int *)((a5 + 0x8)), (t8 & 0x10000) != 0)) {
        t0 = *(short *)((a4 + 0x0));
        *(unsigned short *)((a4 + 0x0)) = (t0 | 0x4);
        t1 = (t0 | 0x4);
    }
    t0 = t1;
    if ((((*(int *)((a5 + 0x4))) & 0x100) != 0) && (t9 = *(int *)((a5 + 0x8)), (t9 & 0x100) != 0)) {
        t1 = *(short *)((a4 + 0x0));
        *(unsigned short *)((a4 + 0x0)) = (t1 | 0x2);
        t0 = (t1 | 0x2);
    }
    t1 = t0;
    if ((((*(int *)((a5 + 0x4))) & 0x1) != 0) && (t10 = *(int *)((a5 + 0x8)), (t10 & 0x1) != 0)) {
        t0 = *(short *)((a4 + 0x0));
        *(unsigned short *)((a4 + 0x0)) = (t0 | 0x1);
        t1 = (t0 | 0x1);
    }
    if ((((*(int *)((a5 + 0x4))) & 0x8) != 0) && (t11 = *(int *)((a5 + 0x8)), (t11 & 0x8) != 0)) {
        *(unsigned short *)((a4 + 0x0)) = ((*(short *)((a4 + 0x0))) | 0x8000);
    }
    return t1;
}
