/* game/unsorted: functions 0C1297BC-0C129B94, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct o129872_part { char p[0x6C]; float x6C, y70, z74; int ang78, ang7C, n80; float s84, s88, s8C; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
float math_cos_angle16(int);
int nlRand(void);
float math_sin_angle16(int);
int FUN_0c1297bc(int a4, int a5);
int FUN_0c129872(int a4, int a5, int a6, int a7, float f4);

int FUN_0c1297bc(int a4, int a5)
{
    int stk[1];
    register int t0;
    register int t10;
    register int t5;
    register int t8;

    *(unsigned char *)(((int)stk + 0)) = a5;
    t0 = FUN_0c03f444(0x5, 0x0, 0xA);
    t10 = t0;
    if (t0 != 0) {
        *(unsigned int *)((t0 + 0x4)) = 0xC129872;
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x10)) = a4;
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x21;
        (((struct o28_float *)(t0))->v) = ((((struct o28_float *)(a4))->v));
        (((struct o2C_float *)(t0))->v) = ((((struct o2C_float *)(a4))->v));
        (((struct o30_float *)(t0))->v) = ((((struct o30_float *)(a4))->v));
        (((struct o54_float *)(t0))->v) = 0.0f;
        (((struct o50_float *)(t0))->v) = 0.0f;
        (((struct o4C_float *)(t0))->v) = 0.0f;
        *(unsigned int *)((t0 + 0x3C)) = 0x0;
        *(unsigned int *)((t0 + 0x38)) = 0x0;
        *(unsigned int *)((t0 + 0x34)) = 0x0;
        (((struct o22_ushort *)(t0))->v) = (unsigned char)(*(signed char *)(((int)stk + 0)));
        t5 = 0x0;
        for (;;) {
            t8 = *(int *)((((0xC4 + t0) + t5) + 0x0));
            FUN_0c03744a(t8, 0x0, 0x2, (*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC))));
            *(unsigned char *)((t8 + 0x0)) = 0x1;
            t5 = (t5 + 0x4);
            *(unsigned short *)((t8 + 0x6)) = 0x1F;
            if ((unsigned int)t5 >= (unsigned int)0x28) {
                break;
            }
        }
        t10 = 0x1F;
    }
    return t10;
}

int FUN_0c129872(int a4, int a5, int a6, int a7, float f4)
{
    char *obj = (char *)a4;
    signed char *count = (signed char *)(obj + 0x41C);
    struct o129872_part *part;
    int i;
    float scale;

    switch (*(signed char *)(obj + 0x14)) {
    case 0:
        for (i = 0; i < 10; i++) {
            part = *(struct o129872_part **)(obj + 0xC4 + i * 4);
            part->ang78 = (int)((float)(nlRand() % 360) * 655360.0f / 360.0f);
            part->ang7C = (int)((float)(nlRand() % 360) * 655360.0f / 360.0f);
            part->n80 = 0;
            part->s84 = 0.3f;
            part->s88 = 0.3f;
            part->s8C = 0.3f;
            count[i] = *(signed char *)(obj + 0x22) * 10 + i + 20;
        }
        *(short *)(obj + 0x1C) = *(short *)(obj + 0x22) * 10 + 50;
        *(short *)(obj + 0x20) = 0;
        (*(signed char *)(obj + 0x14))++;
    case 1:
        (((struct o28_float *)(obj))->v) = (((struct o28_float *)(*(int *)(obj + 0x10)))->v);
        (((struct o2C_float *)(obj))->v) = (((struct o2C_float *)(*(int *)(obj + 0x10)))->v);
        (((struct o30_float *)(obj))->v) = (((struct o30_float *)(*(int *)(obj + 0x10)))->v);
        if (*(signed char *)(*(int *)(*(int *)(obj + 0x10) + 0x10) + 0x3715) != 26) {
            *(short *)(obj + 0x20) = 1;
        }
        if (*(signed char *)(*(int *)(*(int *)(obj + 0x10) + 0x10) + 0x17) > 2) {
            *(short *)(obj + 0x20) = 1;
        }
        if (--*(short *)(obj + 0x1C) == 0 && *(short *)(obj + 0x20) != 0) {
            (*(signed char *)(obj + 0x14))++;
            return 0x14;
        }
        if (*(short *)(obj + 0x1C) == 0) {
            *(short *)(obj + 0x1C) = 30;
        }
        for (i = 0; i < 10; i++) {
            part = *(struct o129872_part **)(obj + 0xC4 + i * 4);
            if (--count[i] == 0) {
                part->ang78 = (int)((float)(nlRand() % 360) * 655360.0f / 360.0f);
                part->ang7C = (int)((float)(nlRand() % 360) * 655360.0f / 360.0f);
                count[i] = 30;
            }
            part->s8C = (float)count[i] / 60.0f;
            part->x6C = -(((float)count[i] / 60.0f + (((struct o40_float *)(*(int *)(obj + 0x10)))->v))
                          * math_sin_angle16(-part->ang78 + 0x14000)
                          * math_cos_angle16(-part->ang7C + 0x14000)
                          * 1000.0f);
            scale = 1000.0f;
            part->y70 = scale * ((float)count[i] / 60.0f + (((struct o44_float *)(*(int *)(obj + 0x10)))->v))
                        * math_cos_angle16(-part->ang78 + 0x14000);
            part->z74 = -(((float)count[i] / 60.0f + (((struct o48_float *)(*(int *)(obj + 0x10)))->v))
                          * math_sin_angle16(-part->ang78 + 0x14000)
                          * math_sin_angle16(-part->ang7C + 0x14000)
                          * 1000.0f);
        }
        return 0x74;
    case 2:
    case 3:
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    return *(signed char *)(obj + 0x14);
}
