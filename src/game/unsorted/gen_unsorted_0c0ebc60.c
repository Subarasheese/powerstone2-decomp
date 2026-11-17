/* game/unsorted: functions 0C0EBC60-0C0EBDA4, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o2C_float { char p[0x2C]; float v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o41D_uchar { char p[0x41D]; unsigned char v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oCC_int { char p[0xCC]; int v; };
int FUN_0c03f346(int);
int FUN_0c0c212c(int);
int FUN_0c18778c(void);
int FUN_0c187798(void);
int FUN_0c0ebc60(int a4, int a5, int a6, int a7);

int FUN_0c0ebc60(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        t0 = *(signed char *)0xC54098D;
        if (((int)t0 >= (int)0xD) && ((int)t0 <= (int)0xE)) {
            return ((int (*)(int, int, int, int))(FUN_0c03f346))(a4, a5, a6, a7);
        }
        if ((*(signed char *)((a4 + 0x2))) == 2) {
            *(volatile int *)((a4 + 0x10));
            t1 = ((int (*)(int, int, int))(FUN_0c187798))(t0, a5, a6);
            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 200.0f);
        }
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0x1;
        if ((int)(*(signed char *)((a4 + 0x1B))) >= 0) {
            *(unsigned int *)((a4 + 0x10)) = (*(int *)((((*(signed char *)((a4 + 0x1B))) << 2) + 0xC540D94)));
        }
        *(volatile signed char *)((a4 + 0x2));
        t0 = ((int (*)(int, int, int))(FUN_0c187798))(0x1, a5, a6);
        *(unsigned char *)((a4 + 0x3)) = (*(signed char *)((a4 + 0x2)));
        (((struct o41C_uchar *)(a4))->v) = 0xCA;
        (((struct o41D_uchar *)(a4))->v) = 0x2;
        FUN_0c0c212c(a4);
        t0 = (((struct oCC_int *)(a4))->v);
        *(unsigned short *)((t0 + 0x6)) = ((*(short *)((t0 + 0x6))) | 0x210);
        *(volatile int *)((a4 + 0xCC));
        FUN_0c18778c();
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t0 = *(signed char *)0xC54098D;
        if (((int)t0 >= (int)0xD) && ((int)t0 <= (int)0xE)) {
            return ((int (*)(int))(FUN_0c03f346))(a4);
        }
        if ((*(signed char *)((a4 + 0x2))) == 2) {
            *(volatile int *)((a4 + 0x10));
            t1 = ((int (*)(int))(FUN_0c187798))(t0);
            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + 200.0f);
        }
    }
    t0 = *(signed char *)((a4 + 0x41D));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if ((t0 != 3) && (t0 != 5)) {
                    if (t0 != 7) {
                        if ((t0 != 4) && ((t0 != 6) && ((t0 != 9) && ((t0 != 10) && (t0 != 11))))) {
                            return t0;
                        }
                        return ((int (*)(int))(FUN_0c03f346))(a4);
                    }
                    return t0;
                }
                return ((int (*)(int, int, int, int))(0xC0EB9A2))(a4, a5, a6, a7);
            }
            return ((int (*)(int, int, int, int))(0xC0EB8CA))(a4, a5, a6, a7);
        }
        return ((int (*)(int, int, int, int))(0xC0EB758))(a4, a5, a6, a7);
    }
    return ((int (*)(int, int, int, int))(0xC0EB734))(a4, a5, a6, a7);
}
