/* Straight-line functions with calls and guards (batch gen_jz): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17C_float { char p[0x17C]; float v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o372D_uchar { char p[0x372D]; unsigned char v; };
struct o3747_uchar { char p[0x3747]; unsigned char v; };
struct o376C_int { char p[0x376C]; int v; };
struct o37A4_float { char p[0x37A4]; float v; };
struct o3818_short { char p[0x3818]; short v; };
int FUN_0c037ac4(int, int, int, int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c085eac(int, int);
int FUN_0c0c224c(int, int);
int FUN_0c086ad4(int a4);

int FUN_0c086ad4(int a4)
{
    int stk[6];
    register int t11;
    int t12;
    register int t13;
    int t14;

    if (((((struct o17C_float *)(a4))->v)) > 0.0f) {
        if ((*(signed char *)((a4 + 0x3716))) == 1) {
            t11 = *(signed char *)((a4 + 0x3753));
            if (((t11 == -1) && (t12 = (((struct o3818_short *)(a4))->v), (unsigned short)t12 == 0x219)) || ((t13 = *(signed char *)((a4 + 0x2)), t13 == 10) && ((t11 == -1) && (t14 = (((struct o3818_short *)(a4))->v), (unsigned short)t14 == 4)))) {
                *(int *)((int)stk + 8) = 0x99;
                FUN_0c037ac4(a4, 0x1, 0xFFFFFFFF, 0x3, 0x99);
                (((struct o3747_uchar *)(a4))->v) = 0x4;
                (((struct o37A4_float *)(a4))->v) = 0.0f;
                (((struct o372D_uchar *)(a4))->v) = 0x0;
                *(unsigned short *)((a4 + 0x1E)) = 0x0;
                (((struct o16_uchar *)(a4))->v) = 0x2;
            } else {
                *(int *)((int)stk + 8) = 0x5C;
                *(int *)((int)stk + 4) = 0x3;
                *(int *)((int)stk + 0) = 0xFFFFFFFF;
                FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0x5C, 0xFFFFFFFF, 0x3, 0x5C);
                FUN_0c0c224c(a4, ((((struct o376C_int *)(a4))->v)));
                FUN_0c085eac(a4, 0x3);
                *(unsigned short *)((a4 + 0x1E)) = 0x0;
                (((struct o16_uchar *)(a4))->v) = 0x0;
            }
        } else {
            *(int *)((int)stk + 8) = 0x5C;
            *(int *)((int)stk + 4) = 0x3;
            *(int *)((int)stk + 0) = 0xFFFFFFFF;
            FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0x5C, 0xFFFFFFFF, 0x3, 0x5C);
            FUN_0c0c224c(a4, ((((struct o376C_int *)(a4))->v)));
            FUN_0c085eac(a4, 0x3);
            *(unsigned short *)((a4 + 0x1E)) = 0x0;
            (((struct o16_uchar *)(a4))->v) = 0x0;
        }
    } else {
        *(int *)((int)stk + 8) = 0x5E;
        *(int *)((int)stk + 4) = 0x3;
        *(int *)((int)stk + 0) = 0xFFFFFFFF;
        FUN_0c07e79c(a4, 0xFFFFFFFF, 0x3, 0x5E, 0xFFFFFFFF, 0x3, 0x5E);
        FUN_0c0c224c(a4, ((((struct o376C_int *)(a4))->v)));
        FUN_0c085eac(a4, 0x3);
        *(unsigned short *)((a4 + 0x1E)) = 0x0;
        (((struct o16_uchar *)(a4))->v) = 0x1;
    }
    (((struct o20_ushort *)(a4))->v) = 0x0;
    (((struct o22_ushort *)(a4))->v) = 0x14;
    return 0x22;
}
