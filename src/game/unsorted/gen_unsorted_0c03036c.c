/* game/unsorted: functions 0C03036C-0C0303FC, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o4B_uchar { char p[0x4B]; unsigned char v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o5A_uchar { char p[0x5A]; unsigned char v; };
struct o5_uchar { char p[0x5]; unsigned char v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
int memset(int, int, int);
int FUN_0c03036c(void);

int FUN_0c03036c(void)
{
    register int t0;
    register int t2;
    register int t3;
    register int t4;

    t0 = 0x0;
    for (;;) {
        memset(((t0 * 0x98) + 0xC541CDC), 0x0, 0x98);
        *(unsigned char *)((((t0 * 0x98) + 0xC541CDC) + 0x9)) = t0;
        (((struct o78_uint *)(((t0 * 0x98) + 0xC541CDC)))->v) = t0;
        (((struct o7C_uint *)(((t0 * 0x98) + 0xC541CDC)))->v) = 0x0;
        *(unsigned char *)(((((t0 * 0x98) + 0xC541CDC) + 0x1) + 0x3)) = 0x0;
        *(unsigned char *)(((((t0 * 0x98) + 0xC541CDC) + 0x1) + 0x2)) = 0x0;
        *(unsigned char *)(((((t0 * 0x98) + 0xC541CDC) + 0x1) + 0x1)) = 0x0;
        t2 = ((t0 * 0x98) + 0xC541CDC);
        t3 = (((t0 * 0x98) + 0xC541CDC) + 0x1);
        t4 = (((t0 * 0x98) + 0xC541CDC) + 0x4A);
        t0 = (t0 + 0x1);
        *(unsigned char *)((t3 + 0x0)) = 0x0;
        *(unsigned char *)(((t2 + 0x5A) + 0x3)) = 0x0;
        *(unsigned char *)(((t2 + 0x5A) + 0x2)) = 0x0;
        *(unsigned char *)(((t2 + 0x5A) + 0x1)) = 0x0;
        (((struct o5A_uchar *)(t2))->v) = 0x0;
        *(unsigned char *)((t4 + 0x0)) = 0x0;
        (((struct o4B_uchar *)(t2))->v) = 0x0;
        if ((int)t0 >= (int)0x4) {
            break;
        }
    }
    (((struct o0_uchar *)0xC3BD444)->v) = 0x0;
    (((struct o1_uchar *)0xC3BD444)->v) = 0x0;
    (((struct o2_uchar *)0xC3BD444)->v) = 0x0;
    (((struct o3_uchar *)0xC3BD444)->v) = 0x0;
    (((struct o4_uchar *)0xC3BD444)->v) = 0x0;
    (((struct o5_uchar *)0xC3BD444)->v) = 0x0;
    return 0x4B;
}
