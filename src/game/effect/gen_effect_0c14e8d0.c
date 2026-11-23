/* game/effect: functions 0C14E8D0-0C14F040, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o41C_float { char p[0x41C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03744a(int, int, int, int);
int mdl_vtx_iter_begin(int, int);
int mdl_vtx_iter_next(void);
int mdl_vtx_get_uv(int, int);
int mdl_vtx_set_uv(int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c187798(int, int, int);
int memset(int, int, int);
int FUN_0c14e8d0(void);
int FUN_0c14ea40(int a4);
int FUN_0c14eb2c(int a4);


int FUN_0c14ea40(int a4)
{
    int stk[4];
    register int t8;

    *(unsigned int *)(((int)stk + 8)) = a4;
    *(unsigned int *)(((int)stk + 12)) = (a4 + 0xC4);
    mdl_vtx_iter_begin((*(int *)(((*(int *)(((*(int *)(((int)stk + 12))) + 0x14))) + 0x8))), (*(int *)((((((struct oC4_int *)(a4))->v)) + 0x8))));
    (((struct o41C_float *)(a4))->v) = (((((struct o41C_float *)(a4))->v)) - (*(float *)0xC14EB6C));
    for (;;) {
        t8 = mdl_vtx_iter_next();
        if (t8 != 0) {
            break;
        }
        mdl_vtx_get_uv(((int)stk + 0), (((int)stk + 0) + 0x4));
        *(float *)(((int)stk + 0)) = ((*(float *)(((int)stk + 0))) + ((((struct o41C_float *)(a4))->v)));
        mdl_vtx_set_uv(((int)stk + 0), (((int)stk + 0) + 0x4));
    }
    return t8;
}

int FUN_0c14eb2c(int a4)
{
    register int t0;
    register int t1;
    register int t4;
    register float u3;

    t0 = 0xC14EB80;
    t1 = 0x18;
    for (;;) {
        t4 = *(int *)((((0xC4 + a4) + t1) + 0x0));
        if ((*(signed char *)((t4 + 0x0))) != 0) {
            t0 = 0x14;
            u3 = (*(float *)((t4 + t0)));
            u3 = (u3 - 0.100000001f);
            *(float *)((t4 + t0)) = u3;
            if (!(u3 > (0.0f))) {
                *(unsigned char *)((t4 + 0x0)) = 0x0;
            }
        }
        t1 = (t1 + 0x4);
        if ((unsigned int)t1 >= (unsigned int)0x20) {
            break;
        }
    }
    return t0;
}
