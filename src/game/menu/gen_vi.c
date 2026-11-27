/* Straight-line functions with calls and guards (batch gen_vi): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o0_ushort { unsigned short v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o2_ushort { char p[0x2]; unsigned short v; };
struct o28_ushort { char p[0x28]; unsigned short v; };
struct o2A_ushort { char p[0x2A]; unsigned short v; };
struct o2C_ushort { char p[0x2C]; unsigned short v; };
struct o2E_ushort { char p[0x2E]; unsigned short v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o6_ushort { char p[0x6]; unsigned short v; };
int FUN_0c02cade(void);
int FUN_0c05a812(void);
int FUN_0c05b250(void);
int memset(int, int, int);
int FUN_0c05e13a(int a4, int a5, int a6);

int FUN_0c05e13a(int a4, int a5, int a6)
{
    int t0;
    register int t1;

    t1 = *(signed char *)0xC2579C8;
    if (t1 != 0) {
    } else {
        *(unsigned char *)0xC2579C8 = ((*(signed char *)0xC2579C8) + 0x1);
        (((struct o2E_ushort *)0xC5428B4)->v) = 0x0;
        (((struct o2C_ushort *)0xC5428B4)->v) = 0x0;
        (((struct o2A_ushort *)0xC5428B4)->v) = 0x0;
        (((struct o28_ushort *)0xC5428B4)->v) = 0x0;
        (((struct o6_ushort *)0xC5428B4)->v) = 0x0;
        (((struct o4_ushort *)0xC5428B4)->v) = 0x0;
        (((struct o2_ushort *)0xC5428B4)->v) = 0x0;
        (((struct o0_ushort *)0xC5428B4)->v) = 0x0;
        (((struct o2E_ushort *)0xC542864)->v) = 0x0;
        (((struct o2C_ushort *)0xC542864)->v) = 0x0;
        (((struct o2A_ushort *)0xC542864)->v) = 0x0;
        (((struct o28_ushort *)0xC542864)->v) = 0x0;
        (((struct o6_ushort *)0xC542864)->v) = 0x0;
        (((struct o4_ushort *)0xC542864)->v) = 0x0;
        (((struct o2_ushort *)0xC542864)->v) = 0x0;
        (((struct o0_ushort *)0xC542864)->v) = 0x0;
        memset(0xC54239C, 0x0, 0x94);
        (((struct o1_uchar *)0xC54208F)->v) = 0x0;
        (((struct o0_uchar *)0xC54208F)->v) = 0x0;
        (((struct o2_uchar *)0xC54208F)->v) = 0x0;
    }
    if ((t1 == 0) || (t1 == 1)) {
        if ((*(signed char *)0xC541F5E) == 0) {
            (((struct o1_uchar *)0xC5423C0)->v) = (*(signed char *)0xC5423C0);
            if ((*(signed char *)0xC5423C0) != 0) {
                (((struct o0_uchar *)0xC5423C0)->v) = 0x0;
                FUN_0c05b250();
            }
        }
        FUN_0c05a812();
        if (((*(signed char *)0xC54208F) == 0) && (t0 = *(signed char *)0xC542092, t0 == 0)) {
            *(unsigned int *)0xC542098 = ((*(int *)0xC542098) + 0x1);
            t0 = 0x0;
            for (;;) {
                { struct mv10 { int w[10]; }; *(struct mv10 *)((t0 + 0xC542854)) = *(struct mv10 *)((t0 + 0xC5426C4)); }
                t0 = (t0 + 0x28);
                if ((unsigned int)t0 >= (unsigned int)0xA0) {
                    break;
                }
            }
        }
    }
    return FUN_0c02cade();
}
