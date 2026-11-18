/* game/unsorted: functions 0C0D2124-0C0D27BA, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o10_float { char p[0x10]; float v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o1A_uchar { char p[0x1A]; unsigned char v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o24_short { char p[0x24]; short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oC_float { char p[0xC]; float v; };
struct oD0_int { char p[0xD0]; int v; };
struct oD4_int { char p[0xD4]; int v; };
int FUN_0c0c2d56(int, int, int);
int math_atan2_angle16(float, float);
int FUN_0c179ac0(void);
int FUN_0c17c130(int, int, int);
int FUN_0c187798(int, int, int);
int FUN_0c0d2124(float f4);
int FUN_0c0d21ac(int a4, int a5, int a6);
int FUN_0c0d2480(int a4, int a5);
int FUN_0c0d24d0(int a4, int a5, int a6, float f4);

int FUN_0c0d2124(float f4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;

    t2 = FUN_0c179ac0();
    t3 = ((~(((~t2) + 0x1) & 0x3FF)) + 0x1);
    if ((int)t2 >= 0) {
        t3 = (t2 & 0x3FF);
    }
    t2 = 0xC0D21A0;
    t4 = 0x0;
    t5 = t0;
    u2 = 1.0f;
    u3 = ((float)t3 + 1.0f);
    u4 = f4;
    for (;;) {
        if ((unsigned int)t4 >= (unsigned int)0x5) {
            break;
        }
        t2 = t4;
        t5 = 0xC1C7B58;
        t2 = (t2 << 2);
        u3 = (*(float *)((t5 + t2)));
        u2 = 0.0f;
        if ((u3 != u2) && (((int)t4 <= 0) || (u0 = *(float *)((t5 + t2)), t1 = (u3 == u2), u3 = u0, u1 = *(float *)(((((t4 - 1) << 2) + t5) + 0x0)), u2 = u1, u3 != u2))) {
            u4 = (*(float *)((t5 + t2)));
            t0 = (*(int *)((0xC1C7B44 + t2)));
            if (!(u4 > (((float)t3 + 1.0f) / 1024.0f))) {
                t4 = (t4 + 0x1);
                continue;
            }
            break;
        }
        t4 = (t4 + 0x1);
    }
    return t0;
}


int FUN_0c0d2480(int a4, int a5)
{
    register int t2;

    (((struct o16_uchar *)(a4))->v) = a5;
    *(unsigned short *)((a4 + 0x1E)) = 0x0;
    (((struct o20_ushort *)(a4))->v) = 0x0;
    if (a5 != 1) {
        t2 = a5;
        if (a5 != 0) {
        } else {
            (((struct o17_uchar *)(a4))->v) = 0x0;
            (((struct o18_uchar *)(a4))->v) = 0x0;
            t2 = 0x18;
        }
    } else {
        (((struct o17_uchar *)(a4))->v) = 0x2;
        (((struct o18_uchar *)(a4))->v) = 0x3;
        t2 = 0x18;
    }
    return t2;
}

int FUN_0c0d24d0(int a4, int a5, int a6, float f4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        t1 = t0;
        if (t0 != 1) {
        } else {
            t0 = (((struct oC8_int *)(a4))->v);
            t2 = *(signed char *)((a4 + 0x17));
            (((struct o80_uint *)(t0))->v) = (((((struct o80_int *)(t0))->v)) + (int)((float)((*(int *)((((((t2 << 1) + t2) << 2) + 0xC1C7AF0) + 0x4))) - ((((struct o80_int *)(t0))->v))) * ((((struct o8_float *)(((((t2 << 1) + t2) << 2) + 0xC1C7AF0)))->v))));
            (((struct o80_uint *)(((((struct oD0_int *)(a4))->v))))->v) = (-((((struct o80_int *)(t0))->v)));
            t0 = (((struct oCC_int *)(a4))->v);
            t2 = *(signed char *)((a4 + 0x18));
            (((struct o80_uint *)(t0))->v) = (((((struct o80_int *)(t0))->v)) + (int)((float)((*(int *)((((((t2 << 1) + t2) << 2) + 0xC1C7B14) + 0x4))) - ((((struct o80_int *)(t0))->v))) * ((((struct o8_float *)(((((t2 << 1) + t2) << 2) + 0xC1C7B14)))->v))));
            (((struct o80_uint *)(((((struct oD4_int *)(a4))->v))))->v) = (-((((struct o80_int *)(t0))->v)));
            t1 = 0x80;
        }
        t0 = t1;
    } else {
        t1 = (((struct oC8_int *)(a4))->v);
        t2 = *(signed char *)((a4 + 0x17));
        (((struct o80_uint *)(t1))->v) = (((((struct o80_int *)(t1))->v)) + (int)((float)((*(int *)((((((t2 << 1) + t2) << 2) + 0xC1C7AF0) + 0x4))) - ((((struct o80_int *)(t1))->v))) * ((((struct o8_float *)(((((t2 << 1) + t2) << 2) + 0xC1C7AF0)))->v))));
        (((struct o80_uint *)(((((struct oD0_int *)(a4))->v))))->v) = (-((((struct o80_int *)(t1))->v)));
        *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x1);
        if ((int)(*(short *)((a4 + 0x1E))) > (int)(*(int *)((((((t2 << 1) + t2) << 2) + 0xC1C7AF0) + 0x0)))) {
            *(unsigned short *)((a4 + 0x1E)) = 0x0;
            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
            if ((int)(*(signed char *)((a4 + 0x17))) >= (int)0x2) {
                (((struct o17_uchar *)(a4))->v) = 0x0;
            }
        }
        t1 = (((struct oCC_int *)(a4))->v);
        t2 = *(signed char *)((a4 + 0x18));
        (((struct o80_uint *)(t1))->v) = (((((struct o80_int *)(t1))->v)) + (int)((float)((*(int *)(((0xC1C7B14 + (((t2 << 1) + t2) << 2)) + 0x4))) - ((((struct o80_int *)(t1))->v))) * ((((struct o8_float *)((0xC1C7B14 + (((t2 << 1) + t2) << 2))))->v))));
        (((struct o80_uint *)(((((struct oD4_int *)(a4))->v))))->v) = (-((((struct o80_int *)(t1))->v)));
        (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + 0x1);
        t1 = 0x20;
        if ((int)((((struct o20_short *)(a4))->v)) > (int)(*(int *)(((0xC1C7B14 + (((t2 << 1) + t2) << 2)) + 0x0)))) {
            (((struct o20_ushort *)(a4))->v) = 0x0;
            (((struct o18_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x18))) + 0x1);
            if ((int)(*(signed char *)((a4 + 0x18))) >= (int)0x3) {
                (((struct o18_uchar *)(a4))->v) = 0x0;
            }
            t1 = 0x18;
        }
        t0 = t1;
    }
    return t0;
}
