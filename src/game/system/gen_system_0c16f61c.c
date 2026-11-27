/* game/system: functions 0C16F61C-0C16F7E4, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o4_float { char p[0x4]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int nlObjPutLoadTexture(int, int);
int nlObjPutTrnsl(int, float);
extern int nlObjPutSetFadeColor();
int FUN_0c16f61c(void);
int FUN_0c16f626(void);
int FUN_0c16f656(int a4, int a5, int a6, int a7);
int FUN_0c16f7ba(void);

int FUN_0c16f61c(void)
{
    return nlObjPutLoadTexture(0xC203DD0, 0xC203EC8);
}

int FUN_0c16f626(void)
{
    register int t0;

    t0 = 0x0;
    for (;;) {
        if ((*(short *)(((((((t0 << 2) + t0) << 2) << 1) + 0xC5426C4) + 0x10))) != 0) {
            break;
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x4) {
            return 0x0;
        }
    }
    return ((int)0x1 << (int)t0);
}


int FUN_0c16f7ba(void)
{
    register int t0;
    register int t1;

    t0 = FUN_0c03f444(0x5, 0x0, 0x0);
    t1 = t0;
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC16F656;
        (((struct oAC_ushort *)(t0))->v) = 0x0;
        (((struct oA9_uchar *)(t0))->v) = 0x0;
        t1 = 0xA9;
    }
    return t1;
}
