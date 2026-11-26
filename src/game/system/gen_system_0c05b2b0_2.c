/* game/system: functions 0C05B2B0-0C05B768, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct oC_uchar { char p[0xC]; unsigned char v; };
int FUN_0c0102da(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c02c96a(void);
extern int FUN_0c02e9d4();
int FUN_0c0300da(void);
int FUN_0c03036c(void);
int FUN_0c030c94(int);
int FUN_0c03ac42(void);
int FUN_0c03ad28(void);
int thunk_FUN_0c03e600(void);
int FUN_0c03ec80(void);
int cam_init_records(void);
int FUN_0c0524bc(void);
int ui_sprite_queue_reset(void);
int FUN_0c05a0b8(void);
int FUN_0c05a812(void);
int game_reset_objects(void);
int FUN_0c05b122(int);
int FUN_0c05b2da(void);
int FUN_0c05b30e(int);
int FUN_0c05b490(void);
int FUN_0c05b4ba(void);
int FUN_0c05ba86(void);
int FUN_0c05c158(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c05c71c(void);
int FUN_0c05e13a(void);
int FUN_0c05e51c(void);
int FUN_0c05ee64(void);
int FUN_0c05f3d4(void);
int FUN_0c05f436(void);
int FUN_0c05f842(int, int, int, int, int, int, int, int, int, int);
int FUN_0c0d05f2(void);
int FUN_0c100cbc(void);
int FUN_0c121412(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c05b494(void);
int FUN_0c05b4e4(void);

int FUN_0c05b494(void)
{
    (((struct o0_uchar *)0xC541F65)->v) = 0x1;
    (((struct o0_uchar *)0xC5429B4)->v) = 0x0;
    (((struct o1_uchar *)0xC5429B4)->v) = 0x1;
    (((struct o2_uchar *)0xC5429B4)->v) = 0x1;
    FUN_0c0d05f2();
    (((struct oC_uchar *)0xC541F65)->v) = 0x1;
    return FUN_0c05b490();
}

