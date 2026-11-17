/* game/unsorted: functions 0C080364-0C080C6A, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o3715_uchar { char p[0x3715]; unsigned char v; };
struct o372E_uchar { char p[0x372E]; unsigned char v; };
struct o3747_uchar { char p[0x3747]; unsigned char v; };
struct o37A4_float { char p[0x37A4]; float v; };
struct o3850_int { char p[0x3850]; int v; };
struct o3850_uint { char p[0x3850]; unsigned int v; };
int FUN_0c059df2(int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07e868(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c07eaf4(int, int);
int FUN_0c08076a(int);
int FUN_0c15f394(int, int);
int FUN_0c080878(int a4, int a5);

int FUN_0c080878(int a4, int a5)
{
    int stk[11];
    register int t2;
    register int t4;
    register int t20;
    int t21;

    (((struct o3715_uchar *)(a4))->v) = 0x1;
    (((struct o372E_uchar *)(a4))->v) = 0x0;
    (((struct o3747_uchar *)(a4))->v) = 0x4;
    (((struct o37A4_float *)(a4))->v) = 0.0f;
    t2 = (*(int *)((0xC5413E8 + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x2F8))));
    *(int *)((int)stk + 8) = t2;
    (((struct o3850_uint *)(a4))->v) = ((FUN_0c07eaf4(a4, a5)) + t2);
    (((struct o20_ushort *)(a4))->v) = 0x5;
    t4 = *(signed char *)((a4 + 0x371D));
    switch (t4) {
    case 3:
        if ((signed char)a5 == 0) {
            *(unsigned short *)((a4 + 0x1C)) = 0x8;
            *(unsigned short *)((a4 + 0x1E)) = 0x3;
            *(int *)((int)stk + 8) = 0x9C;
            *(int *)((int)stk + 4) = 0x3;
            *(int *)((int)stk + 0) = 0xFFFFFFFF;
            FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0x9C, 0xFFFFFFFF, 0x3, 0x9C);
        } else {
            *(unsigned short *)((a4 + 0x1C)) = 0x0;
            *(unsigned short *)((a4 + 0x1E)) = 0x0;
            *(int *)((int)stk + 8) = 0xA2;
            *(int *)((int)stk + 4) = 0x3;
            *(int *)((int)stk + 0) = 0xFFFFFFFF;
            FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0xA2, 0xFFFFFFFF, 0x3, 0xA2);
            *(unsigned int *)((a4 + 0x38)) = ((((struct o3850_int *)(a4))->v));
        }
        FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0x5B);
        (((struct o22_ushort *)(a4))->v) = 0x3C;
        break;
    case 5:
        if ((signed char)a5 == 0) {
            *(unsigned short *)((a4 + 0x1C)) = 0x8;
            *(unsigned short *)((a4 + 0x1E)) = 0x1;
            *(int *)((int)stk + 8) = 0xBE;
            *(int *)((int)stk + 4) = 0x3;
            *(int *)((int)stk + 0) = 0xFFFFFFFF;
            FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0xBE, 0xFFFFFFFF, 0x3, 0xBE);
        } else {
            *(unsigned short *)((a4 + 0x1C)) = 0x0;
            *(int *)((int)stk + 8) = 0xBF;
            *(int *)((int)stk + 4) = 0x3;
            *(int *)((int)stk + 0) = 0xFFFFFFFF;
            FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0xBF, 0xFFFFFFFF, 0x3, 0xBF);
            *(unsigned int *)((a4 + 0x38)) = ((((struct o3850_int *)(a4))->v));
        }
        FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0x64);
        (((struct o22_ushort *)(a4))->v) = 0x3C;
        break;
    case 6:
        if ((signed char)a5 == 0) {
            *(unsigned short *)((a4 + 0x1C)) = 0x8;
            *(unsigned short *)((a4 + 0x1E)) = 0x1;
            *(int *)((int)stk + 8) = 0xDA;
            *(int *)((int)stk + 4) = 0x3;
            *(int *)((int)stk + 0) = 0xFFFFFFFF;
            FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0xDA, 0xFFFFFFFF, 0x3, 0xDA);
        } else {
            *(unsigned short *)((a4 + 0x1C)) = 0x0;
            *(int *)((int)stk + 8) = 0xB1;
            *(int *)((int)stk + 4) = 0x3;
            *(int *)((int)stk + 0) = 0xFFFFFFFF;
            FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0xB1, 0xFFFFFFFF, 0x3, 0xB1);
            *(unsigned int *)((a4 + 0x38)) = ((((struct o3850_int *)(a4))->v));
        }
        (((struct o22_ushort *)(a4))->v) = 0x0;
        FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0x5C);
        break;
    default:
        if ((signed char)a5 == 0) {
            if ((*(signed char *)((0xC2738BD + ((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x3721))) * (unsigned short)0x34)))) != 12) {
                *(unsigned short *)((a4 + 0x1C)) = 0x8;
                (((struct o22_ushort *)(a4))->v) = 0x10;
                FUN_0c07e868(a4, 0x1, 0x0, 0x0, *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4), *(int *)((int)stk + 12 + 8), *(int *)((int)stk + 12 + 12), *(int *)((int)stk + 12 + 16), *(int *)((int)stk + 12 + 20), *(int *)((int)stk + 12 + 24), *(int *)((int)stk + 12 + 28));
            } else {
                *(unsigned short *)((a4 + 0x1C)) = 0x0;
                (((struct o22_ushort *)(a4))->v) = 0x8;
                FUN_0c07e868(a4, 0x2, 0x0, 0x0, *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4), *(int *)((int)stk + 12 + 8), *(int *)((int)stk + 12 + 12), *(int *)((int)stk + 12 + 16), *(int *)((int)stk + 12 + 20), *(int *)((int)stk + 12 + 24), *(int *)((int)stk + 12 + 28));
                *(unsigned int *)((a4 + 0x38)) = ((((struct o3850_int *)(a4))->v));
            }
        } else {
            *(unsigned short *)((a4 + 0x1C)) = 0x0;
            (((struct o22_ushort *)(a4))->v) = 0x8;
            FUN_0c07e868(a4, 0x2, 0x0, 0x0, *(int *)((int)stk + 12), *(int *)((int)stk + 12 + 4), *(int *)((int)stk + 12 + 8), *(int *)((int)stk + 12 + 12), *(int *)((int)stk + 12 + 16), *(int *)((int)stk + 12 + 20), *(int *)((int)stk + 12 + 24), *(int *)((int)stk + 12 + 28));
            *(unsigned int *)((a4 + 0x38)) = ((((struct o3850_int *)(a4))->v));
        }
        if (((*(signed char *)((a4 + 0x2))) == 11) && ((t20 = *(signed char *)((a4 + 0x371C)), t20 != 0) && (t21 = *(signed char *)((a4 + 0x3721)), t21 == 0))) {
            FUN_0c15f394(a4, 0xF);
            FUN_0c15f394(a4, 0x12);
        }
        break;
    }
    return FUN_0c08076a(a4);
}
