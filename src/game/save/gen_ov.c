/* Straight-line functions with calls and guards (batch gen_ov): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o23_uchar { char p[0x23]; unsigned char v; };
struct o24_uchar { char p[0x24]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
int FUN_0c036de8(int);
int FUN_0c03b3fc(void);
int FUN_0c03d722(int);
int FUN_0c03ea04(int, int);
int FUN_0c03eff6(void);
int FUN_0c03f40c(int);
int FUN_0c0527e6(void);
int FUN_0c0573d8(void);
int game_reset_objects(void);
int gfx_set_background_color(int, int, int);
int memset(int, int, int);
int FUN_0c03d5e0(void);

int FUN_0c03d5e0(void)
{
    int stk[2];
    register int t0;
    register int t13;
    register int t14;
    register int t16;
    register int t26;

    t0 = *(signed char *)0xC541F41;
    if ((unsigned char)t0 != 0) {
    } else {
        (((struct o1_uchar *)0xC541F40)->v) = ((*(signed char *)0xC541F41) + 0x1);
        memset(0xC3DC240, 0x0, 0x28);
        gfx_set_background_color(0xFF000000, 0xFF000000, 0xFF000000);
        FUN_0c03eff6();
        FUN_0c0573d8();
        FUN_0c03ea04(0x3, 0x0);
        FUN_0c0527e6();
        game_reset_objects();
        FUN_0c03b3fc();
        t13 = 0xFF000000;
    }
    if (((unsigned char)t0 == 0) || ((unsigned char)t0 == 1)) {
        *(int *)((int)stk + 4) = t13;
        t14 = *(signed char *)0xC3DC241;
        if (t14 != 0) {
            if (t14 != 1) {
                switch (t14) {
                case 2:
                    break;
                case 3:
                    FUN_0c03d722(0xC3DC240);
                    (((struct o24_uchar *)0xC3DC241)->v) = 0x0;
                    return 0x25;
                case 4:
                    break;
                default:
                    if (t14 != 5) {
                        if (t14 != 6) {
                            t16 = t14;
                            if (t14 != 7) {
                            } else {
                                (((struct o24_uchar *)0xC3DC241)->v) = 0x0;
                                (((struct o0_uchar *)0xC541F40)->v) = ((*(signed char *)0xC541F40) + 0x1);
                                t16 = 0x25;
                            }
                            return t16;
                        }
                        (((struct o0_uchar *)0xC3DC241)->v) = 0x7;
                        (((struct o24_uchar *)0xC3DC241)->v) = 0x0;
                        (((struct o23_uchar *)0xC3DC241)->v) = 0x1;
                        return FUN_0c03f40c(0x5);
                    }
                    return FUN_0c03d722(0xC3DC240);
                }
                (((struct o24_uchar *)0xC3DC241)->v) = 0x0;
                FUN_0c03f40c(0x5);
                (((struct o0_uchar *)0xC3DC241)->v) = 0x5;
                (((struct o1_uchar *)0xC3DC241)->v) = 0x0;
                (((struct o2_uchar *)0xC3DC241)->v) = 0x0;
                return 0x0;
            }
            FUN_0c03d722(0xC3DC240);
            (((struct o24_uchar *)0xC3DC241)->v) = 0x0;
            return 0x25;
        }
        FUN_0c03eff6();
        game_reset_objects();
        (((struct o8_uint *)0xC542440)->v) = 0x0;
        (((struct o4_uint *)0xC542440)->v) = 0x0;
        (((struct o0_uint *)0xC542440)->v) = 0x0;
        FUN_0c036de8(0x13);
        t26 = *(signed char *)0xC5429A8;
        if (t26 == 2) {
            (((struct o0_uchar *)0xC3DC241)->v) = 0x3;
            (((struct o1_uchar *)0xC3DC241)->v) = 0xA;
            (((struct o2_uchar *)0xC3DC241)->v) = 0x0;
        } else {
            if (t26 == 0) {
                (((struct o0_uchar *)0xC3DC241)->v) = 0x1;
                (((struct o1_uchar *)0xC3DC241)->v) = 0x9;
                (((struct o2_uchar *)0xC3DC241)->v) = 0x0;
            } else {
                (((struct o0_uchar *)0xC3DC241)->v) = 0x5;
                (((struct o1_uchar *)0xC3DC241)->v) = 0x0;
                (((struct o2_uchar *)0xC3DC241)->v) = 0x0;
            }
        }
        return 0x0;
    } else {
        return (unsigned char)t0;
    }
}
