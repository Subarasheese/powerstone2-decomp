/* game/save: functions 0C03D224-0C03D254, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o16_uchar { char p[0x16]; unsigned char v; };
struct o180_uint { char p[0x180]; unsigned int v; };
struct o192_uchar { char p[0x192]; unsigned char v; };
struct o193_uchar { char p[0x193]; unsigned char v; };
struct o194_uchar { char p[0x194]; unsigned char v; };
struct o37_uchar { char p[0x37]; unsigned char v; };
struct o50_uchar { char p[0x50]; unsigned char v; };
int FUN_0c03d224(int a4, int a5, int a6);

int FUN_0c03d224(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    t0 = a5;
    for (;;) {
        t1 = ((0xC0 + a4) + t0);
        t0 = (t0 + 0x1);
        *(unsigned char *)((t1 + 0x0)) = a5;
        if ((int)t0 >= (int)a6) {
            break;
        }
    }
    (((struct o180_uint *)(a4))->v) = a5;
    (((struct o192_uchar *)(a4))->v) = a5;
    (((struct o193_uchar *)(a4))->v) = a5;
    (((struct o194_uchar *)(a4))->v) = 0x1;
    (((struct o16_uchar *)(a4))->v) = 0x1;
    (((struct o37_uchar *)(a4))->v) = 0x1;
    (((struct o50_uchar *)(a4))->v) = 0x1;
    return 0x50;
}
