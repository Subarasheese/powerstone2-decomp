/* game/unsorted: functions 0C10446C-0C1044F8, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
int FUN_0c037498(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c10446c(void);

int FUN_0c10446c(void)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = FUN_0c03f444(0x5, 0x0, 0x3);
    t1 = t0;
    if (t0 != 0) {
        FUN_0c037498(((((struct oC4_int *)(t0))->v)), 0x0, 0x38, (*(int *)0xC4B410C));
        FUN_0c037498(((((struct oC8_int *)(t0))->v)), 0x0, 0x25, (*(int *)0xC4B410C));
        FUN_0c037498(((((struct oCC_int *)(t0))->v)), 0x0, 0x25, (*(int *)0xC4B410C));
        t2 = (((struct oC8_int *)(t0))->v);
        (((struct o6C_float *)(t2))->v) = (((((struct o6C_float *)(t2))->v)) + 240.0f);
        t2 = (((struct oCC_int *)(t0))->v);
        (((struct o6C_float *)(t2))->v) = (((((struct o6C_float *)(t2))->v)) - 240.0f);
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = 0x80;
        *(unsigned int *)((t0 + 0x4)) = 0xC1041F0;
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        (((struct o28_float *)(t0))->v) = 0.0f;
        (((struct o2C_float *)(t0))->v) = 0.0f;
        (((struct o30_float *)(t0))->v) = 15.0f;
        t1 = 0x30;
    }
    return t1;
}
