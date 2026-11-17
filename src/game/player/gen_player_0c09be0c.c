/* game/player: functions 0C09BE0C-0C09C020, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o118_int { char p[0x118]; int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c037bf6(int, int, int);
int FUN_0c07043c(int, float, float, float, float);
int FUN_0c07ce58(int, int, float);
int FUN_0c07d774(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c09be0c(int a4, int a5, int a6);

int FUN_0c09be0c(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = FUN_0c037bf6(a4, a5, a6);
    t1 = (unsigned char)t0;
    if ((unsigned char)t0 != 0) {
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x2, 0xC, (t0), 0x2, 0xC);
        t0 = *(int *)(((0x118 + a4) + 0x4));
        t2 = (((struct o118_int *)(a4))->v);
        (((struct oA0_float *)(t0))->v) = 1.0f;
        (((struct o9C_float *)(t0))->v) = 1.0f;
        (((struct oA0_float *)(t2))->v) = 1.0f;
        (((struct o9C_float *)(t2))->v) = 1.0f;
        t0 = *(int *)(((0x118 + a4) + 0x4));
        t2 = (((struct o118_int *)(a4))->v);
        (((struct o98_float *)(t0))->v) = 1.0f;
        (((struct o98_float *)(t2))->v) = 1.0f;
        (((struct o94_float *)(t0))->v) = 1.0f;
        (((struct o94_float *)(t2))->v) = 1.0f;
        *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + 0x8000);
        FUN_0c07ce58(a4, ((((short)(*(signed char *)((a4 + 0x2))) * (short)0x78) + 0xC25B194) + 0x18), 1.0f);
        *(unsigned int *)((a4 + 0x38)) = (FUN_0c07d774(a4));
        FUN_0c07043c(a4, ((((struct oC_float *)0xC09BF10)->v)), ((((struct o8_float *)0xC09BF10)->v)), ((((struct o4_float *)0xC09BF10)->v)), ((((struct o0_float *)0xC09BF10)->v)));
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t1 = 0x15;
    }
    return t1;
}
