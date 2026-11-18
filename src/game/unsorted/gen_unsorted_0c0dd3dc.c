/* game/unsorted: functions 0C0DD3DC-0C0DD65E, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12C_ushort { char p[0x12C]; unsigned short v; };
struct o131_uchar { char p[0x131]; unsigned char v; };
struct o132_uchar { char p[0x132]; unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o30_float { char p[0x30]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oC0_int { char p[0xC0]; int v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c0bbf58(int);
int FUN_0c0d04c4(int, int);
float math_sin_angle16(int);
int FUN_0c187798(void);
int FUN_0c0dd3dc(int a4);
int FUN_0c0dd3ec(int a4);
int FUN_0c0dd428(int a4, int a5, int a6, int a7);

int FUN_0c0dd3dc(int a4)
{
    (((struct o12C_ushort *)(a4))->v) = 0xFFFFFFFF;
    (((struct o160_float *)(a4))->v) = (*(float *)0xC0DD4F0);
    return 0x160;
}

int FUN_0c0dd3ec(int a4)
{
    if ((*(signed char *)((a4 + 0x132))) != 0) {
        if (((((struct o160_float *)(a4))->v)) != 0.0f) {
            (((struct o15_uchar *)(a4))->v) = 0x1;
        } else {
            (((struct o15_uchar *)(a4))->v) = 0x2;
            (((struct o12C_ushort *)(a4))->v) = 0x0;
        }
        (((struct o132_uchar *)(a4))->v) = 0x0;
        (((struct o131_uchar *)(a4))->v) = 0x0;
        (((struct o16_uchar *)(a4))->v) = 0x0;
        return 0x1;
    }
    return 0x0;
}

