/* game/unsorted: functions 0C04A868-0C04A962, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o19_uchar { char p[0x19]; unsigned char v; };
struct o1A_uchar { char p[0x1A]; unsigned char v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o1F_uchar { char p[0x1F]; unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o23_uchar { char p[0x23]; unsigned char v; };
struct o30_uchar { char p[0x30]; unsigned char v; };
struct o83_uchar { char p[0x83]; unsigned char v; };
int FUN_0c04a868(int a4);

int FUN_0c04a868(int a4)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    (((struct o19_uchar *)0xC542347)->v) = a4;
    (((struct o1_uchar *)0xC542236)->v) = a4;
    (((struct o1A_uchar *)0xC542347)->v) = 0x0;
    (((struct o0_uchar *)0xC542236)->v) = 0x0;
    (((struct o30_uchar *)0xC542347)->v) = 0x0;
    (((struct o0_uchar *)0xC542347)->v) = 0xF;
    (((struct o18_uchar *)0xC542347)->v) = 0x0;
    (((struct o0_uchar *)0xC5429AC)->v) = 0x1;
    (((struct o23_uchar *)0xC5429AC)->v) = 0x1;
    t1 = 0x167;
    t2 = 0x0;
    for (;;) {
        if ((((int)0x1 << (int)t2) & (unsigned char)(*(signed char *)0xC3BD447)) != 0) {
            t1 = 0x3E;
            t3 = *(signed char *)((0xC5421F8 + t1));
            t1 = 0x56;
            t4 = (t2 * 0x98);
            t4 = (t4 + 0xC541CDC);
            *(unsigned char *)((t4 + t1)) = t3;
            t3 = *(signed char *)((t4 + t1));
            t1 = 0x168;
            t5 = (*(signed char *)((0xC5421F8 + t1)));
            t1 = 0x81;
            *(unsigned char *)((t4 + t1)) = t5;
            t1 = 0x58;
            *(unsigned char *)(((t3 + (0x84 + t4)) + 0x0)) = t5;
            *(unsigned short *)((t4 + t1)) = 0x0;
            t1 = (t1 + 0x28);
            *(unsigned char *)((t4 + t1)) = 0x0;
        }
        t1 = 0x82;
        t3 = (t2 * 0x98);
        t2 = (t2 + 0x1);
        *(unsigned char *)(((t3 + 0xC541CDC) + t1)) = 0xFFFFFFFF;
        if ((int)t2 >= (int)0x4) {
            break;
        }
    }
    t1 = *(signed char *)0xC542237;
    t2 = t1;
    if ((int)t1 > (int)0x1) {
        t1 = *(signed char *)0xC542236;
        t3 = *(signed char *)0xC542366;
        (((struct o1F_uchar *)0xC542347)->v) = (t3 | ((int)0x1 << (int)t1));
        t2 = (t3 | ((int)0x1 << (int)t1));
    }
    *(unsigned char *)0xC3BD447 = 0x0;
    t1 = t2;
    t2 = 0x0;
    for (;;) {
        if (((*(signed char *)((((t2 * 0x3938) + 0xC532498) + 0x3714))) != 0) && (t0 = *(signed char *)((((t2 * 0x3938) + 0xC532498) + 0x3720)), t0 == 0)) {
            t1 = (*(signed char *)0xC3BD447);
            t1 = (t1 | ((int)0x1 << (int)t2));
            *(unsigned char *)0xC3BD447 = t1;
            t1 = (*(signed char *)0xC542366);
            (((struct o83_uchar *)(((t2 * 0x98) + 0xC541CDC)))->v) = t1;
        }
        t2 = (t2 + 0x1);
        *(unsigned char *)0xC40F828 = (*(signed char *)0xC3BD447);
        (((struct o1B_uchar *)0xC542347)->v) = 0x1;
        if ((int)t2 >= (int)0x4) {
            break;
        }
    }
    *(unsigned char *)0xC541F41 = 0x4;
    return 0x16A;
}
