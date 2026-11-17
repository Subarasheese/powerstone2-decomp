/* game/unsorted: functions 0C05C158-0C05C240, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
int FUN_0c036de8(int);
extern int FUN_0c03d5e0();
int FUN_0c0573d8(void);
int game_reset_objects(void);
int FUN_0c05f7a0(int);
int FUN_0c05fba0(int, int, int, int);
int FUN_0c0d05f2(void);
int FUN_0c0fb8ca(int, int);
int FUN_0c120f18(int);
int FUN_0c05c158(int a4, int a5, int a6, int a7);

int FUN_0c05c158(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)0xC541F40;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            if ((unsigned char)t0 != 2) {
                if ((unsigned char)t0 != 3) {
                    if ((unsigned char)t0 != 4) {
                        if ((unsigned char)t0 != 5) {
                            return FUN_0c05f7a0(0x1);
                        }
                        (((struct o0_uchar *)0xC541F40)->v) = 0x63;
                        return FUN_0c0fb8ca((*(signed char *)0xC5429CD), (*(signed char *)0xC5429CE));
                    }
                    return ((int (*)(int, int, int, int))(FUN_0c03d5e0))(0xC541F40, a5, a6, a7);
                }
                (((struct o0_uchar *)0xC541F40)->v) = ((*(signed char *)0xC541F40) + 0x1);
                (((struct o1_uchar *)0xC541F40)->v) = 0x0;
                if ((*(int *)0xC2577BC) == 0) {
                    FUN_0c036de8(0x0);
                    *(unsigned int *)0xC2577BC = ((*(int *)0xC2577BC) + 0x1);
                } else {
                    t0 = 0xC541F40;
                }
                return ((int (*)(int))(FUN_0c03d5e0))(t0);
            }
            return FUN_0c05fba0(0xC541F40, a5, a6, a7);
        }
    } else {
        (((struct o1_uchar *)0xC541F40)->v) = 0x0;
        (((struct o8_uint *)0xC542440)->v) = 0x0;
        (((struct o4_uint *)0xC542440)->v) = 0x0;
        (((struct o0_uint *)0xC542440)->v) = 0x0;
        FUN_0c0573d8();
        game_reset_objects();
        FUN_0c120f18(0x0);
        FUN_0c0d05f2();
        (((struct o0_uchar *)0xC541F40)->v) = ((*(signed char *)0xC541F40) + 0x1);
    }
    if ((*(int *)0xC5421D0) == 19) {
        (((struct o0_uchar *)0xC541F40)->v) = ((*(signed char *)0xC541F40) + 0x1);
        *(unsigned int *)0xC2577BC = 0x0;
    } else {
        (((struct o0_uchar *)0xC541F40)->v) = ((*(signed char *)0xC541F40) + 0x2);
    }
    (((struct o1_uchar *)0xC541F40)->v) = 0x0;
    return 0x0;
}
