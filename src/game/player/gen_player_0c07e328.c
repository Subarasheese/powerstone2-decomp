/* game/player: functions 0C07E328-0C07E3D2, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o131_uchar { char p[0x131]; unsigned char v; };
struct o134_uchar { char p[0x134]; unsigned char v; };
struct o136_uchar { char p[0x136]; unsigned char v; };
struct o414_uint { char p[0x414]; unsigned int v; };
int FUN_0c07e328(int a4, int a5, int a6);
int FUN_0c07e3ae(int a4, int a5);

int FUN_0c07e328(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x41C));
    if ((unsigned char)t0 != 0xC3) {
        t1 = a5;
        if ((unsigned char)t0 != 0xC8) {
        } else {
            if ((unsigned char)a5 == 0) {
                t0 = (*(signed char *)((((((*(signed char *)((a4 + 0x424))) << 2) << 1) + 0xC278904) + 0x0)));
            } else {
                t0 = (*(signed char *)((((((*(signed char *)((a4 + 0x424))) << 2) << 1) + 0xC278904) + 0x1)));
            }
            t1 = t0;
        }
        t0 = t1;
    } else {
        if ((unsigned char)a5 == 0) {
            t1 = *(signed char *)((a4 + 0x424));
            t0 = (*(signed char *)((((((t1 << 2) + t1) << 1) + 0xC27883C) + 0x0)));
        } else {
            t1 = *(signed char *)((a4 + 0x424));
            t0 = (*(signed char *)((((((t1 << 2) + t1) << 1) + 0xC27883C) + 0x1)));
        }
    }
    (((struct o134_uchar *)(a4))->v) = t0;
    (((struct o414_uint *)(a4))->v) = (((((unsigned char)t0 << 2) + (unsigned char)t0) << 2) + (*(int *)0xC25AD18));
    (((struct o136_uchar *)(a4))->v) = 0x0;
    (((struct o131_uchar *)(a4))->v) = 0x0;
    return 0x131;
}

int FUN_0c07e3ae(int a4, int a5)
{
    (((struct o134_uchar *)(a4))->v) = a5;
    (((struct o414_uint *)(a4))->v) = (((((unsigned char)a5 << 2) + (unsigned char)a5) << 2) + (*(int *)0xC25AD18));
    (((struct o136_uchar *)(a4))->v) = 0x0;
    (((struct o131_uchar *)(a4))->v) = 0x0;
    return 0x131;
}
