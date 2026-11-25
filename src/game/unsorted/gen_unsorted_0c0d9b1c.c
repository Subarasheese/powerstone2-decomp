/* game/unsorted: functions 0C0D9B1C-0C0D9EA0, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o132_uchar { char p[0x132]; unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
extern int FUN_0c064d24();
int FUN_0c187798(void);
int FUN_0c0d9b1c(int a4, int a5, int a6, int a7);
int FUN_0c0d9b62(int a4, int a5);
int FUN_0c0d9c40(float f4, float f5);



int FUN_0c0d9c40(float f4, float f5)
{
    register float u0;
    register int t1;
    register int t2;
    register float u7;
    register float u4;
    register float u6;
    register float u9;
    float u10;

    u0 = (((struct o0_float *)0xC0D9CF0)->v);
    if ((unsigned int)0xC532498 < (unsigned int)0xC540978) {
        t1 = 0xC532498;
        t2 = 0xC532498;
        u7 = f5;
        for (;;) {
            if (((*(signed char *)((t2 + 0x3714))) != 0) && ((u9 = (((struct o28_float *)(t1))->v), u7 = u9, u7 > u0) && (u10 = (((struct o4_float *)0xC0D9CF0)->v), u6 = u10, u6 > u7))) {
                u4 = ((((struct o30_float *)(t1))->v));
                if (u4 > (((((struct o8_float *)0xC0D9CF0)->v)))) {
                    u4 = ((((struct oC_float *)0xC0D9CF0)->v));
                    if (u4 > (((((struct o30_float *)(t1))->v)))) {
                        break;
                    }
                    t2 = (t2 + 0x3938);
                    t1 = (t1 + 0x3938);
                    if ((unsigned int)t2 >= (unsigned int)0xC540978) {
                        return 0x0;
                    }
                    continue;
                }
                t2 = (t2 + 0x3938);
                t1 = (t1 + 0x3938);
                if ((unsigned int)t2 >= (unsigned int)0xC540978) {
                    return 0x0;
                }
                continue;
            }
            t2 = (t2 + 0x3938);
            t1 = (t1 + 0x3938);
            if ((unsigned int)t2 >= (unsigned int)0xC540978) {
                return 0x0;
            }
        }
        return 0x1;
    }
    return 0x0;
}
