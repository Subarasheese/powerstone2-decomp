/* game/unsorted: functions 0C15D494-0C15D9E4, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
int FUN_0c03f346(int);
int FUN_0c064f80(int);
int FUN_0c15d61c(int, int, int);
int FUN_0c179ac0(void);
int FUN_0c15d83a(int a4);

int FUN_0c15d83a(int a4)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;

    t1 = *(signed char *)((a4 + 0x14));
    if (t1 != 0) {
        if (t1 != 1) {
            return t1;
        }
        (((struct oB4_float *)(a4))->v) = (((((struct oB4_float *)(a4))->v)) * 0.0799999982f);
        if ((*(float *)0xC15D9F8) > ((((struct oB4_float *)(a4))->v))) {
            t1 = 0x0;
            t2 = 0xC2A2B9C;
            for (;;) {
                t3 = *(int *)((t2 + 0x0));
                t2 = (t2 + 0x4);
                FUN_0c15d61c(a4, t3, 0x0);
                t1 = (t1 + 0x1);
                if ((unsigned int)t1 >= (unsigned int)0x9) {
                    break;
                }
            }
            return FUN_0c03f346(a4);
        }
        u0 = (((struct oB4_float *)(a4))->v);
        (((struct oBC_float *)(a4))->v) = u0;
        (((struct oB8_float *)(a4))->v) = u0;
        return 0xB8;
    }
    t1 = FUN_0c064f80((*(int *)((a4 + 0x10))));
    if ((t1 == 0) && (t0 = *(int *)0xC542260, (t0 & 20) == 0)) {
        t0 = *(int *)((0xC2A2B9C + (((int)((unsigned int)(FUN_0c179ac0()) % (unsigned int)0x9)) << 2)));
        FUN_0c15d61c(a4, t0, 0x1);
    }
    t0 = 0x3743;
    if ((*(signed char *)(((*(int *)((a4 + 0x10))) + 0x3743))) == 0) {
        (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x200);
        (((struct oBC_float *)(a4))->v) = 1.0f;
        (((struct oB8_float *)(a4))->v) = 1.0f;
        (((struct oB4_float *)(a4))->v) = 1.0f;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t0 = 0x14;
    }
    return t0;
}
