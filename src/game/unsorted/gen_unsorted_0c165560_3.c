/* game/unsorted: functions 0C165560-0C16619E, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o80_int { char p[0x80]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oD0_int { char p[0xD0]; int v; };
struct oD4_int { char p[0xD4]; int v; };
struct oD8_int { char p[0xD8]; int v; };
int FUN_0c03744a(int, int, int, int);
extern int FUN_0c03f346();
int thunk_FUN_0c058310(int, int);
int FUN_0c059df2(int, int);
int nlRand(void);
int FUN_0c165b50(int a4);

int FUN_0c165b50(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x2))) * (short)0x3938) + 0xC53256C))) + 0x28), (a4 + 0x28));
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                t1 = (((struct oCC_int *)(a4))->v);
                (((struct o6C_float *)(t1))->v) = (((((struct o6C_float *)(t1))->v)) + 8.65999985f);
                (((struct o70_float *)(t1))->v) = (((((struct o70_float *)(t1))->v)) + 5.0f);
                t1 = (((struct oD0_int *)(a4))->v);
                (((struct o6C_float *)(t1))->v) = (((((struct o6C_float *)(t1))->v)) - 8.65999985f);
                (((struct o70_float *)(t1))->v) = (((((struct o70_float *)(t1))->v)) + 5.0f);
                t1 = (((struct oD4_int *)(a4))->v);
                (((struct o6C_float *)(t1))->v) = (((((struct o6C_float *)(t1))->v)) - 0.0f);
                (((struct o70_float *)(t1))->v) = (((((struct o70_float *)(t1))->v)) - 10.0f);
                t1 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
                t2 = (short)(t1 - 1);
                if ((short)(t1 - 1) == 0) {
                    t1 = (((struct oD8_int *)(a4))->v);
                    *(unsigned char *)((t1 + 0x0)) = 0x1;
                    (((struct o6C_float *)(t1))->v) = (((((struct o6C_float *)(t1))->v)) + 150.0f);
                    *(unsigned short *)((a4 + 0x1C)) = 0xA;
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t2 = 0x14;
                }
                return t2;
            }
            if (t0 == 3) {
                t1 = (((struct oD8_int *)(a4))->v);
                (((struct o6C_float *)(t1))->v) = (((((struct o6C_float *)(t1))->v)) - 10.0f);
                t1 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
                t2 = (short)(t1 - 1);
                if ((short)(t1 - 1) == 0) {
                    *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x0;
                    *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x0;
                    *(unsigned char *)((((((struct oCC_int *)(a4))->v)) + 0x0)) = 0x0;
                    *(unsigned char *)((((((struct oD0_int *)(a4))->v)) + 0x0)) = 0x0;
                    *(unsigned char *)((((((struct oD4_int *)(a4))->v)) + 0x0)) = 0x0;
                    FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0x6B);
                    *(unsigned short *)((a4 + 0x1C)) = 0xA;
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    t2 = 0x14;
                }
                return t2;
            }
            if ((*(int *)(((*(int *)((a4 + 0x10))) + 0x10))) == 0) {
                return FUN_0c03f346(a4);
            }
            return t0;
        }
        t0 = (((struct oC4_int *)(a4))->v);
        if ((int)(*(short *)((a4 + 0x1C))) > (int)0x1E) {
            u0 = (((((struct o6C_float *)(t0))->v)) + (1.0f + 1.0f));
        } else {
            u0 = (((((struct o6C_float *)(t0))->v)) - (1.0f + 1.0f));
        }
        (((struct o6C_float *)(t0))->v) = u0;
        (((struct o70_float *)(t0))->v) = (((((struct o70_float *)(t0))->v)) - 1.0f);
        t0 = (int)((int)(nlRand()) % (int)0x14);
        if (t0 == 0) {
            t0 = nlRand();
            t1 = ((~(((~t0) + 0x1) & 0x3)) + 0x1);
            if ((int)t0 >= 0) {
                t1 = (t0 & 0x3);
            }
            switch (t1) {
            case 0:
                *(unsigned short *)((a4 + 0x1E)) = 0xFFFFFBBC;
                break;
            case 1:
                *(unsigned short *)((a4 + 0x1E)) = 0xFFFFF99A;
                break;
            case 2:
                *(unsigned short *)((a4 + 0x1E)) = 0x444;
                break;
            case 3:
                *(unsigned short *)((a4 + 0x1E)) = 0x666;
                break;
            }
        }
        t0 = (((struct oC8_int *)(a4))->v);
        (((struct o80_uint *)(t0))->v) = (((((struct o80_int *)(t0))->v)) + (*(short *)((a4 + 0x1E))));
        if ((int)(*(short *)((a4 + 0x1C))) > (int)0x1E) {
            u0 = (((((struct o6C_float *)(t0))->v)) - (1.0f + 1.0f));
        } else {
            u0 = (((((struct o6C_float *)(t0))->v)) + (1.0f + 1.0f));
        }
        (((struct o6C_float *)(t0))->v) = u0;
        (((struct o70_float *)(t0))->v) = (((((struct o70_float *)(t0))->v)) + 1.0f);
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        t1 = (short)(t0 - 1);
        if ((short)(t0 - 1) != 0) {
        } else {
            t0 = (((struct oCC_int *)(a4))->v);
            *(unsigned char *)((t0 + 0x0)) = 0x1;
            (((struct o6C_float *)(t0))->v) = (((((struct o6C_float *)(t0))->v)) - 86.5999985f);
            (((struct o70_float *)(t0))->v) = (((((struct o70_float *)(t0))->v)) - 50.0f);
            t0 = (((struct oD0_int *)(a4))->v);
            *(unsigned char *)((t0 + 0x0)) = 0x1;
            (((struct o6C_float *)(t0))->v) = (((((struct o6C_float *)(t0))->v)) + 86.5999985f);
            (((struct o70_float *)(t0))->v) = (((((struct o70_float *)(t0))->v)) - 50.0f);
            t0 = (((struct oD4_int *)(a4))->v);
            *(unsigned char *)((t0 + 0x0)) = 0x1;
            (((struct o6C_float *)(t0))->v) = (((((struct o6C_float *)(t0))->v)) + 0.0f);
            (((struct o70_float *)(t0))->v) = (((((struct o70_float *)(t0))->v)) + 100.0f);
            *(unsigned short *)((a4 + 0x1C)) = 0xA;
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t1 = 0x14;
        }
        return t1;
    }
    *(unsigned int *)(((*(int *)((a4 + 0x10))) + 0x10)) = (((short)(*(signed char *)((a4 + 0x2))) * (short)0x3938) + 0xC532498);
    *(unsigned char *)((a4 + 0x1)) = (*(signed char *)(((*(int *)(((*(int *)((a4 + 0x10))) + 0x10))) + 0x1)));
    t0 = (((struct oC4_int *)(a4))->v);
    FUN_0c03744a(t0, 0x0, 0x38, (*(int *)0xC4B40CC));
    *(unsigned char *)((t0 + 0x0)) = 0x1;
    (((struct o70_float *)(t0))->v) = 60.0f;
    t0 = (((struct oC8_int *)(a4))->v);
    FUN_0c03744a(t0, 0x1, 0x38, (*(int *)0xC4B40CC));
    *(unsigned char *)((t0 + 0x0)) = 0x1;
    (((struct o70_float *)(t0))->v) = -60.0f;
    t0 = (((struct oCC_int *)(a4))->v);
    FUN_0c03744a(t0, 0x2, 0x38, (*(int *)0xC4B40CC));
    *(unsigned char *)((t0 + 0x0)) = 0x0;
    (((struct o80_uint *)(t0))->v) = 0x5555;
    t0 = (((struct oD0_int *)(a4))->v);
    FUN_0c03744a(t0, 0x2, 0x38, (*(int *)0xC4B40CC));
    *(unsigned char *)((t0 + 0x0)) = 0x0;
    (((struct o80_uint *)(t0))->v) = 0xAAAA;
    t0 = (((struct oD4_int *)(a4))->v);
    FUN_0c03744a(t0, 0x2, 0x38, (*(int *)0xC4B40CC));
    *(unsigned char *)((t0 + 0x0)) = 0x0;
    (((struct o80_uint *)(t0))->v) = 0x10000;
    t0 = (((struct oD8_int *)(a4))->v);
    FUN_0c03744a(t0, 0x3, 0x38, (*(int *)0xC4B40CC));
    *(unsigned char *)((t0 + 0x0)) = 0x0;
    (((struct oA8_uchar *)(a4))->v) = 0x1;
    FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0x6A);
    *(unsigned short *)((a4 + 0x1C)) = 0x3C;
    *(unsigned short *)((a4 + 0x1E)) = 0xFFFFF99A;
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    return 0x14;
}
