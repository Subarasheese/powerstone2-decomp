/* game/unsorted: functions 0C0CE8F8-0C0CEC08, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o15_uchar { char p[0x15]; unsigned char v; };
struct o168_float { char p[0x168]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o423_uchar { char p[0x423]; unsigned char v; };
struct o424_uchar { char p[0x424]; unsigned char v; };
struct o426_ushort { char p[0x426]; unsigned short v; };
struct o44_float { char p[0x44]; float v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c059df2(int, int);
int FUN_0c0c2a80(int);
extern int FUN_0c0c2ab6();
int FUN_0c0c2d56(int, int, int);
int FUN_0c0c4770(int, int, int);
int FUN_0c0c47a4(int, int, int);
int FUN_0c0c4bcc(int, int, int);
int FUN_0c0c4c1c(int, int, int);
int FUN_0c0c5024(int, int, int);
int FUN_0c0c8c08(int, int, int);
int FUN_0c0c8c36(int, int, int);
int FUN_0c0cea46(int, int, int, int);
int FUN_0c0d0110(int, int);
int FUN_0c0ce8f8(int a4, int a5, int a6, int a7);
int FUN_0c0ceb94(int a4, int a5, int a6, int a7);

int FUN_0c0ce8f8(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 == 2) {
                u0 = (((struct o44_float *)(a4))->v);
                (((struct o44_float *)(a4))->v) = (u0 + 0.100000001f);
                if (!(1.0f > (u0 + 0.100000001f))) {
                    (((struct o44_float *)(a4))->v) = 1.0f;
                    return FUN_0c0c2d56(a4, 0x2, (*(signed char *)((a4 + 0x1))));
                }
                return 0x44;
            }
            return t0;
        }
        *(unsigned int *)((a4 + 0x38)) = (*(int *)0xC5413E8);
        (((struct o7C_uint *)(((((struct oC4_int *)(a4))->v))))->v) = 0x0;
        if ((unsigned int)((*(int *)0xC542260) & 0x7) > (unsigned int)0x4) {
            (((struct o80_uint *)(((((struct oC4_int *)(a4))->v))))->v) = 0x71C;
        } else {
            (((struct o80_uint *)(((((struct oC4_int *)(a4))->v))))->v) = 0xFFFFF8E4;
        }
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        t1 = (short)(t0 - 1);
        if ((int)(short)(t0 - 1) <= 0) {
            FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x1, 0x35, (*(int *)0xC4B40D8));
            (((struct o44_float *)(a4))->v) = 0.100000001f;
            (((struct o2C_float *)(a4))->v) = ((((struct o168_float *)(a4))->v));
            (((struct o41C_uchar *)(a4))->v) = 0xC8;
            (((struct o424_uchar *)(a4))->v) = 0x5;
            (((struct o426_ushort *)(a4))->v) = 0x708;
            t0 = ((int (*)(int, int))(FUN_0c0c2ab6))(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738CA))));
            FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0x71);
            if ((*(signed char *)((a4 + 0x423))) != -1) {
                FUN_0c0d0110(a4, (*(signed char *)((a4 + 0x423))));
            }
            (((struct o423_uchar *)(a4))->v) = 0xFFFFFFFF;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            t1 = 0x15;
        }
        return t1;
    }
    t0 = ((int (*)(int, int, int, int))(FUN_0c0c2ab6))(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738CA))), a6, a7);
    *(unsigned short *)((a4 + 0x1C)) = 0x1E;
    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    return 0x15;
}

int FUN_0c0ceb94(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x41D));
    if ((unsigned int)t0 < (unsigned int)0xC) {
        switch ((t0 << 1)) {
            case 0:
            {
                return FUN_0c0c4770(a4, a5, a6);
            }
            case 2:
            {
                return FUN_0c0c47a4(a4, a5, a6);
            }
            case 4:
            {
                return ((int (*)(int, int, int, int))(0xC0CE89C))(a4, a5, a6, a7);
            }
            case 6:
            {
                return FUN_0c0c4bcc(a4, a5, a6);
            }
            case 8:
            {
                return FUN_0c0c4c1c(a4, a5, a6);
            }
            case 10:
            {
                return FUN_0c0c5024(a4, a5, a6);
            }
            case 12:
            {
                return ((int (*)(int, int, int, int))(0xC0CEB12))(a4, a5, a6, a7);
            }
            case 14:
            {
                return FUN_0c0c8c08(a4, a5, a6);
            }
            case 16:
            {
                return FUN_0c0c8c36(a4, a5, a6);
            }
            case 18:
            {
                return FUN_0c0ce8f8(a4, a5, a6, a7);
            }
            case 20:
            {
                return FUN_0c0cea46(a4, a5, a6, a7);
            }
            default:
            {
                return FUN_0c0c2a80(a4);
            }
        }
    }
    return t0;
}
