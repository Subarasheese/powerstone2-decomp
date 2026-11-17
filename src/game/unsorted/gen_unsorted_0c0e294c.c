/* game/unsorted: functions 0C0E294C-0C0E2A4A, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o2C_float { char p[0x2C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03f444(int, int, int);
float math_cos_angle16(int);
int FUN_0c179ac0(void);
float math_sin_angle16(int);
int FUN_0c187798(void);
int FUN_0c0e294c(int a4);

int FUN_0c0e294c(int a4)
{
    register int t3;
    register int t4;
    register int t5;
    register int t8;
    register int t9;
    register int t19;
    register float u13;

    FUN_0c179ac0();
    t3 = 0xC1CB03C;
    t4 = (-(int)(((float)((int)((int)(FUN_0c179ac0()) % (int)0x1E)) * 65536.0f) / 360.0f));
    t5 = 0xC1CB03C;
    for (;;) {
        t8 = FUN_0c037320((*(int *)((t3 + 0x0))), (*(int *)0xC4B410C));
        t9 = FUN_0c03f444(0x5, 0x0, t8);
        t19 = t9;
        if (t9 != 0) {
            FUN_0c03733c(t9, (*(int *)((t5 + 0x0))), (*(int *)0xC4B410C));
            *(unsigned int *)((t9 + 0x4)) = 0xC0E2888;
            *(unsigned char *)((t9 + 0x1)) = 0xFFFFFFFF;
            (((struct oAC_ushort *)(t9))->v) = 0x1F;
            (((struct oA9_uchar *)(t9))->v) = 0x21;
            u13 = (((struct o4_float *)(t5))->v);
            (((struct o48_float *)(t9))->v) = u13;
            (((struct o44_float *)(t9))->v) = u13;
            (((struct o40_float *)(t9))->v) = u13;
            FUN_0c187798();
            (((struct o2C_float *)(t9))->v) = (((((struct o2C_float *)(t9))->v)) + ((((struct o8_float *)(t5))->v)));
            (((struct o4C_float *)(t9))->v) = ((math_cos_angle16(t4)) * 6.0f);
            (((struct o54_float *)(t9))->v) = ((math_sin_angle16(t4)) * 6.0f);
            (((struct o50_float *)(t9))->v) = 16.0f;
            *(unsigned int *)((t9 + 0x38)) = t4;
            t4 = (t4 + 0x71C);
            t19 = 0x50;
        }
        t3 = (t3 + 0xC);
        t5 = (t5 + 0xC);
        if ((unsigned int)t3 >= (unsigned int)0xC1CB084) {
            break;
        }
    }
    return t19;
}
