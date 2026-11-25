/* game/unsorted: functions 0C167F94-0C1684B2, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c058b06(int, int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c07e3ae(int, int);
int FUN_0c168160(int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int nlAddVector3op(int, int, int);
int FUN_0c18778c(void);
extern int FUN_0c187798();
int FUN_0c167f94(int a4, int a5, int a6, int a7);
int FUN_0c16819e(int a4, int a5, int a6, int a7, int a8);
int FUN_0c16844c(int a4, int a5, int a6);



int FUN_0c16844c(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t4;
    register int t5;

    t0 = 0xC2A35F8;
    t1 = 0xC2A35EC;
    for (;;) {
        t4 = FUN_0c16819e(a4, a5, a6, t0, ((*(int *)((t1 + 0x0)))));
        t5 = t4;
        if (t4 != 0) {
            *(unsigned char *)((t4 + 0x1)) = a4;
            *(unsigned int *)((t4 + 0x4)) = 0xC1682B0;
            *(unsigned short *)((t4 + 0x1C)) = 0x5A;
            t5 = 0x5A;
        }
        t1 = (t1 + 0x4);
        t0 = (t0 + 0xC);
        if ((unsigned int)t1 >= (unsigned int)0xC2A35F8) {
            break;
        }
    }
    return t5;
}
