/* Straight-line functions with calls and guards (batch gen_x): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c080320(int, float);
int FUN_0c0c43c0(int, int);
int FUN_0c187798(void);
int FUN_0c14a104(int a4, int a5);
void FUN_0c0c224c(int a4, int a5);

int FUN_0c14a104(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t10;
    register int t7;

    t0 = 0x0;
    for (;;) {
        t1 = FUN_0c03f444(0x5, 0x0, 0x1);
        t10 = t1;
        if (t1 != 0) {
            *(unsigned char *)((t1 + 0x1)) = a4;
            *(unsigned int *)((t1 + 0x4)) = 0xC149FF6;
            (((struct oAC_ushort *)(t1))->v) = 0x1F;
            (((struct oA9_uchar *)(t1))->v) = 0x1;
            FUN_0c187798();
            *(unsigned int *)((t1 + 0x34)) = 0xFFFFC000;
            *(unsigned int *)((t1 + 0x3C)) = 0x0;
            *(unsigned int *)((t1 + 0x38)) = 0x0;
            FUN_0c03744a(((((struct oC4_int *)(t1))->v)), 0x0, 0xB, (*(int *)0xC4B40CC));
            *(unsigned char *)((((((struct oC4_int *)(t1))->v)) + 0x0)) = 0x1;
            t7 = (((struct oC4_int *)(t1))->v);
            *(unsigned short *)((t7 + 0x6)) = ((*(short *)((t7 + 0x6))) | 0x1400);
            *(unsigned short *)((t1 + 0x1C)) = (((t0 << 2) + t0) << 1);
            t10 = (((t0 << 2) + t0) << 1);
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x4) {
            break;
        }
    }
    return t10;
}

void FUN_0c0c224c(int a4, int a5)
{
    register int t0;
    register int t1;

    if (a5 != 0) {
        t0 = *(signed char *)((a4 + 0x2));
        t1 = t0;
        if (t0 == 8) {
            t1 = t0;
            if ((*(signed char *)((0xC535BB4 + ((short)(*(signed char *)((a5 + 0x1))) * (short)0x3938)))) != 0) {
                t1 = 0xC;
            }
        }
        t0 = FUN_0c0c43c0(a4, (unsigned char)(*(signed char *)((a5 + 0x41C))));
        if (t0 != 0) {
            t0 = (0xC25BD20 + ((((*(signed char *)((0xC27630E + ((unsigned short)(unsigned char)(*(signed char *)((a5 + 0x41C))) * (unsigned short)0x1C)))) << 2) << 2) << 2));
        } else {
            t0 = (0xC25BD20 + ((((*(signed char *)((0xC2738C1 + ((unsigned short)(unsigned char)(*(signed char *)((a5 + 0x41C))) * (unsigned short)0x34)))) << 2) << 2) << 2));
        }
        FUN_0c080320(a4, (*(float *)((((t1 << 2) + t0) + 0x0))));
    return;
    }
}
