/* game/player: functions 0C0CE60C-0C0CE760, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o15_uchar { char p[0x15]; unsigned char v; };
struct o2C_float { char p[0x2C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o5C_float { char p[0x5C]; float v; };
int FUN_0c059df2(int, int);
int FUN_0c0c2a80(int);
int FUN_0c0c2ab6(int, int);
int FUN_0c0c2ce4(int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c0c3ed4(int, int, int);
int FUN_0c0c4770(int, int, int);
int FUN_0c0c47a4(int, int, int);
int FUN_0c0c4b76(int, int, int);
int FUN_0c0c4bcc(int, int, int);
int FUN_0c0c4c1c(int, int, int);
int FUN_0c0c5024(int, int, int);
int FUN_0c0c52c4(int, int, int);
int FUN_0c0c8c08(int, int, int);
int FUN_0c0c8c36(int, int, int);
int FUN_0c16cd3c(int);
int FUN_0c0ce60c(int a4, int a5, int a6);
int FUN_0c0ce6ec(int a4, int a5, int a6);

int FUN_0c0ce60c(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    t0 = FUN_0c0c3ed4(a4, a5, a6);
    if (t0 == 0) {
        t1 = *(signed char *)((a4 + 0x15));
        if (t1 != 0) {
            if (t1 != 1) {
                if (t1 != 2) {
                    return t1;
                }
                FUN_0c16cd3c(a4);
                FUN_0c059df2((*(signed char *)((a4 + 0x1))), 0x60);
                return FUN_0c0c2d56(a4, 0xB, (*(signed char *)((a4 + 0x1))));
            }
            t1 = FUN_0c0c2ce4(a4);
            if (t1 != 0) {
                if (t1 == 2) {
                    return FUN_0c0c2d56(a4, 0x3, (*(signed char *)((a4 + 0x1))));
                }
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                return 0x15;
            }
            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
            (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
            return 0x50;
        }
        FUN_0c0c2ab6(a4, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((a4 + 0x41C))) * (unsigned short)0x34) + 0xC2738CA))));
        (((struct o50_float *)(a4))->v) = 0.0f;
        (((struct o5C_float *)(a4))->v) = -2.0f;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        return 0x15;
    }
    return t0;
}

int FUN_0c0ce6ec(int a4, int a5, int a6)
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
                return FUN_0c0c4b76(a4, a5, a6);
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
                return FUN_0c0c52c4(a4, a5, a6);
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
            case 20:
            {
                return FUN_0c0ce60c(a4, a5, a6);
            }
            default:
            {
                return FUN_0c0c2a80(a4);
            }
        }
    }
    return t0;
}
