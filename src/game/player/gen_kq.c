/* Straight-line functions with calls and guards (batch gen_kq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o22_short { char p[0x22]; short v; };
struct o376C_uint { char p[0x376C]; unsigned int v; };
struct o44_float { char p[0x44]; float v; };
int FUN_0c07e328(int, int);
int FUN_0c0c213c(int);
int FUN_0c0c283a(int);
int FUN_0c0c2ab6(int, int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c0c6bbc(int a4);

int FUN_0c0c6bbc(int a4)
{
    register int t0;
    int t1;
    register int t2;
    register float u0;

    t0 = *(signed char *)((a4 + 0x1));
    t1 = FUN_0c0c283a(a4);
    if (t1 != 0) {
        return FUN_0c0c2d56(a4, 0x6, (*(signed char *)((a4 + 0x1))));
    }
    t1 = *(signed char *)((a4 + 0x15));
    t2 = 0;
    switch (t1) {
    case 0:
        if (((((struct o22_short *)((((short)t0 * (short)0x3938) + 0xC532498)))->v)) == 0) {
            (((struct o376C_uint *)((((short)t0 * (short)0x3938) + 0xC532498)))->v) = a4;
            return 0x376C;
        }
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t2 = 1;
        break;
    case 1:
        t2 = 1;
        break;
    case 2:
        break;
    default:
        (((struct o376C_uint *)((((short)t0 * (short)0x3938) + 0xC532498)))->v) = a4;
        return 0x376C;
    }
    if (t2) {
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
        FUN_0c0c2ab6(a4, (*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0x13))));
        if ((*(signed char *)((a4 + 0x41F))) == 0) {
            t1 = (*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0xE)));
        } else {
            t1 = (*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0xF)));
        }
        FUN_0c07e328(a4, t1);
        FUN_0c0c213c(a4);
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        (((struct o16_uchar *)(a4))->v) = 0x0;
    }
    t1 = *(signed char *)((a4 + 0x16));
    if (t1 != 0) {
        if (t1 != 1) {
            if ((*(signed char *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x3715))) != 8) {
                return FUN_0c0c2d56(a4, 0x5, (*(signed char *)((a4 + 0x1))));
            }
            (((struct o376C_uint *)((((short)t0 * (short)0x3938) + 0xC532498)))->v) = a4;
            return 0x376C;
        }
        (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) - 0.180000007f);
        u0 = *(float *)0xC0C6DDC;
        if (u0 > ((((struct o44_float *)(a4))->v))) {
            (((struct o44_float *)(a4))->v) = u0;
        } else {
            (((struct o376C_uint *)((((short)t0 * (short)0x3938) + 0xC532498)))->v) = a4;
            return 0x376C;
        }
    } else {
        u0 = (((struct o44_float *)(a4))->v);
        (((struct o44_float *)(a4))->v) = (u0 + 0.0599999987f);
        if ((u0 + 0.0599999987f) > 1.0f) {
            (((struct o44_float *)(a4))->v) = 1.0f;
        }
        t1 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t1 + 0x1);
        if ((int)(short)(t1 + 0x1) < (int)0xF) {
            t1 = *(short *)((a4 + 0x1C));
            if ((t1 != 7) && (t1 != 14)) {
            } else {
                if ((*(signed char *)((a4 + 0x41F))) == 0) {
                    t1 = (*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0xE)));
                } else {
                    t1 = (*(signed char *)(((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738B8) + 0xF)));
                }
                FUN_0c07e328(a4, t1);
            }
            (((struct o376C_uint *)((((short)t0 * (short)0x3938) + 0xC532498)))->v) = a4;
            return 0x376C;
        }
    }
    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    (((struct o376C_uint *)((((short)t0 * (short)0x3938) + 0xC532498)))->v) = a4;
    return 0x376C;
}
