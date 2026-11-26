/* Straight-line functions with calls and guards (batch gen_yn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o16_uchar { char p[0x16]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
int FUN_0c104cc8(int);
int FUN_0c1086d8(int);
int FUN_0c10b776(int);
int FUN_0c115120(int, int, int, int, float);
int FUN_0c117944(int, ...);
int FUN_0c117d54(void);
int FUN_0c117e76(void);
int FUN_0c11e28e(int);
int FUN_0c11eae8(int);
int FUN_0c10b9d6(int a4, int a5, int a6, int a7, float f4);

int FUN_0c10b9d6(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 == 1) {
            t1 = (((struct o20_short *)(a4))->v);
            (((struct o20_ushort *)(a4))->v) = (t1 + 0x1);
            t2 = 0x20;
            if ((int)(short)(t1 + 0x1) > (int)0xA) {
                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                t2 = 0x16;
            }
            return t2;
        }
        if (t0 == 2) {
            t1 = FUN_0c117d54();
            if ((int)t1 < 0) {
                (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
                return FUN_0c117e76();
            }
            return t1;
        }
        if (t0 == 3) {
            t1 = FUN_0c104cc8(0x3FCF);
            if (t1 != 0) {
                FUN_0c11e28e((*(short *)((a4 + 0x1E))));
                return FUN_0c10b776(a4);
            }
            return t1;
        }
        return t0;
    }
    if ((*(signed char *)0xC535BAD) == 1) {
        FUN_0c115120(0x5, a5, a6, a7, f4);
    }
    (((struct o20_ushort *)(a4))->v) = 0x0;
    t0 = *(short *)((a4 + 0x1E));
    if ((unsigned int)(t0 - 0xA0) < (unsigned int)0x16) {
        switch (((t0 - 0xA0) << 1)) {
            case 0:
            case 2:
            case 4:
            case 6:
            case 8:
            case 10:
            case 12:
            case 14:
            case 16:
            case 18:
            {
                t0 = *(int *)((((0xFFFFFF60 + (*(short *)((a4 + 0x1E)))) << 2) + 0xC2A08E0));
                *(unsigned int *)(((t0 << 2) + 0xC473D04)) = ((*(int *)(((t0 << 2) + 0xC473D04))) | 0x2000);
                FUN_0c117944(0x7A, ((*(int *)((((*(int *)((0xC2A08E0 + (((*(short *)((a4 + 0x1E))) - 160) << 2)))) << 2) + 0xC29DDD0)))));
            }
                break;
            case 20:
            {
                FUN_0c117944(0x7B);
            }
                break;
            case 22:
            {
                FUN_0c117944(0x7B);
            }
                break;
            case 24:
            {
                FUN_0c117944(0x7C);
            }
                break;
            case 26:
            case 28:
            case 30:
            case 32:
            case 34:
            {
                FUN_0c11eae8((*(short *)((a4 + 0x1E))));
                FUN_0c117944(0x7D);
            }
                break;
            case 36:
            {
                FUN_0c11eae8((*(short *)((a4 + 0x1E))));
                FUN_0c117944(0x7E);
            }
                break;
            case 38:
            {
                FUN_0c11eae8((*(short *)((a4 + 0x1E))));
                FUN_0c117944(0x80);
            }
                break;
            case 40:
            {
                FUN_0c11eae8((*(short *)((a4 + 0x1E))));
                FUN_0c117944(0x7F);
            }
                break;
            default:
            {
                FUN_0c11eae8((*(short *)((a4 + 0x1E))));
                FUN_0c117944(0x81);
            }
                break;
        }
    } else {
        FUN_0c117944(0x7B);
    }
    FUN_0c1086d8((*(int *)0xC47440C));
    (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    return 0x16;
}
