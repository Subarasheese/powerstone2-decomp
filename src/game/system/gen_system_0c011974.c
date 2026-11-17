/* game/system: functions 0C011974-0C011A7A, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
int FUN_0c02bad0(void);
int FUN_0c02bae6(void);
int FUN_0c036de8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c17a4c0(int, int);
int dbg_printf(int, ...);
int strcpy(int, int);
int FUN_0c011974(int a4);

int FUN_0c011974(int a4)
{
    int stk[16];
    register int t15;
    register int t21;
    register int t36;

    FUN_0c17a4c0(0x3, 0x9);
    *(int *)((int)stk + 28) = (unsigned char)(*(signed char *)((a4 + 0x3)));
    *(int *)((int)stk + 24) = 0xC1A5BC8;
    dbg_printf(0xC1A5BC8);
    FUN_0c17a4c0(0x3, 0xA);
    *(int *)((int)stk + 20) = ((*(signed char *)0xC30985A));
    *(int *)((int)stk + 16) = 0xC1A5BE8;
    dbg_printf(0xC1A5BE8);
    FUN_0c17a4c0(0x3, 0xB);
    *(int *)((int)stk + 12) = ((*(signed char *)0xC30985B));
    *(int *)((int)stk + 8) = 0xC1A5C08;
    dbg_printf(0xC1A5C08);
    FUN_0c17a4c0(0x3, 0xC);
    *(int *)((int)stk + 4) = ((*(signed char *)0xC305416));
    *(int *)((int)stk + 0) = 0xC1A5C28;
    dbg_printf(0xC1A5C28);
    t15 = *(signed char *)((a4 + 0x3));
    if ((unsigned char)t15 != 0) {
        
        t36 = (unsigned char)t15;
    } else {
        (((struct o0_uint *)0xC304414)->v) = 0x20;
        FUN_0c036de8(0x20, 0x0, 0x0, 0x0, *(int *)((int)stk + 32), *(int *)((int)stk + 32 + 4), *(int *)((int)stk + 32 + 8), *(int *)((int)stk + 32 + 12), *(int *)((int)stk + 32 + 16), *(int *)((int)stk + 32 + 20), *(int *)((int)stk + 32 + 24), *(int *)((int)stk + 32 + 28));
        *(unsigned char *)((a4 + 0x3)) = ((*(signed char *)((a4 + 0x3))) + 0x1);
        *(unsigned char *)0xC30985A = 0x0;
        FUN_0c02bad0();
        FUN_0c02bae6();
        (((struct o0_uchar *)0xC30A346)->v) = 0x2;
        (((struct o3_uchar *)0xC30A346)->v) = 0x6;
        (((struct o4_uint *)0xC304414)->v) = 0x0;
        t21 = 0xC30A346;
        for (;;) {
            if ((int)((((struct o4_int *)0xC304414)->v)) >= (int)((*(signed char *)0xC30A349) + 0x1)) {
                break;
            }
            t21 = ((((struct o4_int *)0xC304414)->v));
            t21 = (*(signed char *)((0xC20BA88 + t21)));
            *(unsigned char *)((((((((struct o4_int *)0xC304414)->v)) * 0x86) + 0xC309E0A) + 0x2)) = t21;
            t21 = ((((struct o4_int *)0xC304414)->v));
            t21 = (t21 << 1);
            t21 = (*(short *)((0xC20BA68 + t21)));
            *(unsigned short *)((((((((struct o4_int *)0xC304414)->v)) * 0x86) + 0xC309E0A) + 0x4)) = t21;
            t21 = 0xC20BA98;
            t21 = (strcpy((((((((struct o4_int *)0xC304414)->v)) * 0x86) + 0xC309E0A) + 0x6), (*(int *)(((((((struct o4_int *)0xC304414)->v)) << 2) + t21)))));
            (((struct o4_uint *)0xC304414)->v) = (((((struct o4_int *)0xC304414)->v)) + 0x1);
        }
        t36 = t21;
    }
    return t36;
}
