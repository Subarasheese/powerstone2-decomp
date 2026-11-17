/* game/unsorted: functions 0C02AE40-0C02AF76, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o1004_int { char p[0x1004]; int v; };
struct o1004_uint { char p[0x1004]; unsigned int v; };
struct o1008_int { char p[0x1008]; int v; };
struct o1008_uint { char p[0x1008]; unsigned int v; };
struct o100C_uint { char p[0x100C]; unsigned int v; };
struct o1010_uint { char p[0x1010]; unsigned int v; };
struct o1014_uint { char p[0x1014]; unsigned int v; };
struct o1018_float { char p[0x1018]; float v; };
struct o101C_float { char p[0x101C]; float v; };
struct o1020_float { char p[0x1020]; float v; };
struct o1024_uchar { char p[0x1024]; unsigned char v; };
struct o1025_uchar { char p[0x1025]; unsigned char v; };
int FUN_0c176b90(int);
int FUN_0c17f040(void);
int FUN_0c17f380(void);
int memset(int, int, int);
int FUN_0c02ae40(int a4, float f4);
int FUN_0c02af32(void);

int FUN_0c02ae40(int a4, float f4)
{
    register int t0;

    if ((*(int *)0xC20E8A8) == 0) {
        *(unsigned int *)0xC20E8A8 = 0x1;
        *(unsigned int *)0xC30B70C = 0xC4B10CC;
        *(unsigned int *)0xC4B20CC = a4;
        (((struct o1004_uint *)((*(int *)0xC30B70C)))->v) = (*(int *)(((a4 << 2) + 0xC20E7C4)));
        (((struct o1008_uint *)((*(int *)0xC30B70C)))->v) = (*(int *)(((a4 << 2) + 0xC20E7D4)));
        t0 = *(int *)0xC30B70C;
        (((struct o100C_uint *)(t0))->v) = ((((((struct o1004_int *)(t0))->v)) * ((((struct o1008_int *)(t0))->v))) + 0x10);
        (((struct o1010_uint *)((*(int *)0xC30B70C)))->v) = (*(int *)0xC4B4120);
        *(unsigned int *)0xC20E7EC = (*(int *)0xC30B70C);
        memset((*(int *)0xC30B70C), 0x0, 0x800);
        t0 = 0x3E8;
        for (;;) {
            FUN_0c176b90(t0);
            FUN_0c17f040();
            t0 = (t0 + 0x1);
            if ((int)t0 >= (int)0x5E8) {
                break;
            }
        }
        memset(((*(int *)0xC30B70C) + 0x800), 0x0, 0x400);
        memset(((*(int *)0xC30B70C) + 0xC00), 0x0, 0x200);
        memset(0xC30B710, 0x0, 0x3800);
        *(unsigned int *)0xC30EF10 = 0x0;
        (((struct o1014_uint *)((*(int *)0xC30B70C)))->v) = 0x0;
        (((struct o1018_float *)((*(int *)0xC30B70C)))->v) = 1.0f;
        (((struct o101C_float *)((*(int *)0xC30B70C)))->v) = 1.0f;
        (((struct o1020_float *)((*(int *)0xC30B70C)))->v) = 1.0f;
        (((struct o1024_uchar *)((*(int *)0xC30B70C)))->v) = 0x0;
        (((struct o1025_uchar *)((*(int *)0xC30B70C)))->v) = 0x0;
        t0 = 0x1025;
    }
    return t0;
}

int FUN_0c02af32(void)
{
    register int t0;
    register int t1;

    if ((*(int *)0xC20E8A8) != 0) {
        t0 = 0x3E8;
        for (;;) {
            FUN_0c176b90(t0);
            t1 = FUN_0c17f380();
            t0 = (t0 + 0x1);
            if ((int)t0 >= (int)0x5E8) {
                break;
            }
        }
        *(unsigned int *)0xC20E8A8 = 0x0;
        t0 = t1;
    }
    return t0;
}
