/* game/menu/option: functions 0C018E44-0C01A00A, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
int thunk_FUN_0c03f346(int, int, int, int);
int FUN_0c0197bc(int a4, int a5, int a6, int a7);

int FUN_0c0197bc(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            t0 = *(signed char *)0xC30503C;
            if (t0 == 12) {
                return thunk_FUN_0c03f346(a4, a5, a6, a7);
            }
            return t0;
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x0;
        (((struct o28_float *)(a4))->v) = 0.0f;
        (((struct o2C_float *)(a4))->v) = 0.0f;
        (((struct o30_float *)(a4))->v) = (*(float *)0xC019864);
        *(unsigned short *)((a4 + 0x1C)) = 0x20;
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    if ((short)(t0 - 1) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        t1 = *(signed char *)0xC30503C;
        if (t1 == 12) {
            return thunk_FUN_0c03f346(a4, a5, a6, a7);
        }
        return t1;
    }
    return (short)(t0 - 1);
}
