/* game/unsorted: functions 0C131258-0C131394, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o7C_int { char p[0x7C]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8C_float { char p[0x8C]; float v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c187798(int, int, int);
int FUN_0c131258(int a4, int a5, int a6, int a7);

int FUN_0c131258(int a4, int a5, int a6, int a7)
{
    register int t19;
    register int t14;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        if ((*(signed char *)((0x3715 + (*(int *)((a4 + 0x10)))))) == 7) {
            if (!(((((struct o8C_float *)((*(int *)((0xC5325B0 + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938))))))->v)) > (*(float *)0xC1313AC))) {
                if ((unsigned short)(*(short *)((0xC535CB0 + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938)))) != 0x11B) {
                    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                    return FUN_0c03f346(a4, a5, a6, a7);
                }
                *(volatile int *)((a4 + 0x10));
                FUN_0c187798(a4, a5, a6);
                *(unsigned int *)((t14 + 0x34)) = ((*(int *)(((*(int *)((t14 + 0x10))) + 0x34))) + 0xE38);
                *(unsigned int *)((t14 + 0x38)) = (*(int *)(((*(int *)((t14 + 0x10))) + 0x38)));
                t19 = (((struct oC4_int *)(t14))->v);
                (((struct o7C_uint *)(t19))->v) = (((((struct o7C_int *)(t19))->v)) + 0xAAA);
                return 0x7C;
            }
        }
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    return FUN_0c03f346(a4, a5, a6, a7);
}
