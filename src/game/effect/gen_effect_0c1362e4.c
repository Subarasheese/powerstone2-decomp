/* game/effect: functions 0C1362E4-0C13669C, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o10C_int { char p[0x10C]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o84_float { char p[0x84]; float v; };
struct o88_float { char p[0x88]; float v; };
struct o8C_float { char p[0x8C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oCC_int { char p[0xCC]; int v; };
int FUN_0c037498(int, int, int, int);
int mdl_vtx_iter_begin(int, int);
int mdl_vtx_iter_next(void);
int mdl_vtx_get_pos(int);
int mdl_vtx_set_pos(int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int thunk_FUN_0c058310(int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
extern int FUN_0c187798();
int FUN_0c187a88(int, int, int);
int FUN_0c1362e4(int a4, int a5);
int FUN_0c1363a4(int a4);
int FUN_0c13648e(int a4, int a5, int a6, int a7);


int FUN_0c1363a4(int a4)
{
    int stk[4];
    register int t1;
    register int t9;
    register float u14;
    int R1000;

    R1000 = *(int *)((int)stk + 0);

    R1000 = ((((struct oC4_int *)(a4))->v));
    t1 = *(int *)(((0x41C + a4) + 0x8));
    *(unsigned int *)(((0x41C + a4) + 0x8)) = (t1 + 0xE38);
    *(unsigned int *)(((0x41C + a4) + 0xC)) = (t1 + 0xE38);
    *(unsigned int *)(((0x41C + a4) + 0x4)) = 0x0;
    mdl_vtx_iter_begin((*(int *)((((((struct o10C_int *)((*(int *)((((*(signed char *)((a4 + 0x1))) << 2) + 0xC4B40FC)))))->v)) + 0x0))), (*(int *)(((R1000) + 0x8))));
    for (;;) {
        t9 = mdl_vtx_iter_next();
        if (t9 != 0) {
            break;
        }
        mdl_vtx_get_pos((((int)stk + 0) + 0x4));
        u14 = (*(float *)(((int)stk + 8)));
        u14 = u14 + 30.0f * (math_sin_angle16((*(int *)(((0x41C + a4) + 0xC)))));
        *(float *)(((int)stk + 8)) = u14;
        mdl_vtx_set_pos((((int)stk + 0) + 0x4));
        if ((*(int *)(((0x41C + a4) + 0x4))) != 0) {
            *(unsigned int *)(((0x41C + a4) + 0xC)) = ((*(int *)(((0x41C + a4) + 0xC))) + 0x2AAA);
        }
        *(unsigned int *)(((0x41C + a4) + 0x4)) = ((-(*(int *)(((0x41C + a4) + 0x4)))) + 0x1);
    }
    return t9;
}

