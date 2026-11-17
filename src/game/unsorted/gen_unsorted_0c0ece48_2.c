/* game/unsorted: functions 0C0ECE48-0C0ED5B4, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o128_ushort { char p[0x128]; unsigned short v; };
struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o2C_float { char p[0x2C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c042fe0(void);
int FUN_0c05261c(int);
int FUN_0c059c7a(int, int);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c07c19c(int);
int FUN_0c07e420(int, int);
int FUN_0c0ece48(int);
int FUN_0c0ece6e(int);
int FUN_0c0ece8e(int);
int FUN_0c0ecec4(int);
int FUN_0c0ecf3c(int);
int FUN_0c0ed05c(int);
int FUN_0c0ed126(int);
int FUN_0c0ed16c(int);
int FUN_0c0ed1d2(int);
int FUN_0c0ed222(int);
int FUN_0c0ed268(int);
int FUN_0c0ed2b8(int);
int FUN_0c15009e(int, float, float, float, float, float);
int math_vec3_accumulate(int, int);
int FUN_0c187798(int, int, int);
int FUN_0c0ed33c(int a4, int a5, int a6, int a7);

int FUN_0c0ed33c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    if ((int)(*(signed char *)0xC54098D) >= (int)0xE) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        if ((int)(*(signed char *)((a4 + 0x1B))) >= 0) {
            (((struct oA4_uint *)(a4))->v) = ((*(int *)(((((*(signed char *)((a4 + 0x1B))) << 2) + 0xC540D94) + 0x0))) + 0x64);
        }
        FUN_0c187798(0xC540978, a5, a6);
        *(unsigned int *)((a4 + 0x38)) = 0x1555;
        FUN_0c07e420(a4, 0x4);
        (((struct o128_ushort *)(a4))->v) = 0x40;
        t0 = (((struct oC4_int *)(a4))->v);
        *(unsigned short *)((t0 + 0x6)) = ((*(short *)((t0 + 0x6))) | 0x1F);
    }
    FUN_0c0ed2b8(a4);
    t0 = *(signed char *)((a4 + 0x15));
    switch (t0) {
    case 0:
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0x1A4;
        if ((*(short *)((a4 + 0x1C))) != 0) {
            *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
        }
        if ((int)(*(short *)((a4 + 0x1C))) > 0) {
        } else {
            if ((int)(*(signed char *)0xC54098D) > (int)0xE) {
            } else {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                (((struct o5C_float *)(a4))->v) = -10.0f;
            }
        }
        break;
    case 1:
        if ((*(short *)((a4 + 0x1C))) != 0) {
            *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) - 1);
        }
        if ((int)(*(short *)((a4 + 0x1C))) > 0) {
        } else {
            if ((int)(*(signed char *)0xC54098D) > (int)0xE) {
            } else {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                (((struct o5C_float *)(a4))->v) = -10.0f;
            }
        }
        break;
    case 2:
        math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
        math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
        if (!(((((struct o2C_float *)(a4))->v)) > 8400.0f)) {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            (((struct o2C_float *)(a4))->v) = 8400.0f;
            FUN_0c15009e((a4 + 0x28), 1.0f, 1.0f, 1.0f, 30.0f, 20.0f);
            FUN_0c05261c((*(int *)0xC241C40));
            thunk_FUN_0c05abb2(0x50, (a4 + 0x28));
            *(unsigned short *)((a4 + 0x1C)) = 0x14;
            FUN_0c07c19c(0x11);
        }
        break;
    case 3:
        t1 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
        if ((int)(short)(t1 - 1) <= 0) {
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            (((struct o12C_ushort *)(a4))->v) = 0xFFFFFFFF;
            t1 = FUN_0c042fe0();
            if (t1 != 0) {
                FUN_0c059c7a(0xE, 0x0);
            }
            *(unsigned short *)((a4 + 0x1E)) = 0x0;
            (((struct o50_float *)(a4))->v) = ((((struct o2C_float *)(a4))->v));
            *(unsigned short *)(((0x41C + a4) + 0x6)) = 0x0;
            *(unsigned short *)(((0x41C + a4) + 0x8)) = 0x0;
            *(unsigned short *)(((0x41C + a4) + 0xA)) = 0x0;
        }
        break;
    case 4:
        FUN_0c0ecf3c(a4);
        FUN_0c0ece48(a4);
        break;
    case 5:
        FUN_0c0ed126(a4);
        break;
    case 6:
        FUN_0c0ed16c(a4);
        break;
    case 7:
        FUN_0c0ed1d2(a4);
        break;
    case 8:
        FUN_0c0ed222(a4);
        break;
    case 9:
        FUN_0c0ed268(a4);
        break;
    case 99:
        FUN_0c0ecec4(a4);
        break;
    case 10:
        FUN_0c0ed05c(a4);
        break;
    default:
        FUN_0c0ecf3c(a4);
        FUN_0c0ece48(a4);
        break;
    }
    FUN_0c0ece6e(a4);
    return FUN_0c0ece8e(a4);
}
