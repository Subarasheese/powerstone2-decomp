/* game/save: functions 0C015B58-0C017EF8, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o4D_uchar { char p[0x4D]; unsigned char v; };
struct o4E_uchar { char p[0x4E]; unsigned char v; };
struct o50_uchar { char p[0x50]; unsigned char v; };
int FUN_0c01623a(void);
int FUN_0c016244(void);
int FUN_0c01626a(void);
int FUN_0c0162c6(int, int);
int thunk_FUN_0c0167cc(int, int);
int FUN_0c016a88(void);
int FUN_0c017c70(int);
int FUN_0c017e48(void);
int FUN_0c017e68(void);
int FUN_0c017ec8(void);
int FUN_0c017ed8(void);
int FUN_0c017ee8(void);
int FUN_0c017538(void);
int FUN_0c0176ba(void);

int FUN_0c017538(void)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(int *)0xC304BA0;
    if ((*(signed char *)((t0 + 0x4C))) == 0) {
        if ((*(signed char *)0xC304C24) != 0) {
            if ((*(signed char *)((t0 + 0x4D))) != 0) {
                t1 = FUN_0c01623a();
                if (t1 == 0) {
                    t1 = *(int *)0xC304BA0;
                    (((struct o4D_uchar *)(t1))->v) = ((*(signed char *)((t1 + 0x4D))) - 2);
                } else {
                    (((struct o4D_uchar *)((*(int *)0xC304BA0)))->v) = 0x0;
                }
                (((struct o4E_uchar *)((*(int *)0xC304BA0)))->v) = 0x0;
            } else {
                t1 = t0;
            }
            t2 = t1;
        } else {
            if ((*(signed char *)((t0 + 0x50))) != 0) {
                t1 = FUN_0c01623a();
                if (t1 == 0) {
                    t1 = *(int *)0xC304BA0;
                    (((struct o50_uchar *)(t1))->v) = ((*(signed char *)(((0x50 + t1) + 0x0))) - (FUN_0c0162c6(0xC304BA4, (unsigned char)(*(signed char *)((t1 + 0x50))))));
                } else {
                    (((struct o50_uchar *)((*(int *)0xC304BA0)))->v) = 0x0;
                }
                (((struct o4E_uchar *)((*(int *)0xC304BA0)))->v) = 0x0;
            } else {
                t1 = t0;
            }
            t2 = t1;
        }
        return FUN_0c017c70(t2);
    }
    FUN_0c017ec8();
    FUN_0c017ed8();
    return FUN_0c017e68();
}

int FUN_0c0176ba(void)
{
    int t0;
    register int t1;

    t1 = FUN_0c01626a();
    if ((t1 != 0) && (t0 = *(signed char *)0xC304C24, t0 != 0)) {
        if ((*(signed char *)(((*(int *)0xC304BA0) + 0x4C))) == 0) {
            return FUN_0c016a88();
        }
        t0 = FUN_0c016244();
        if (t0 == 0) {
            return FUN_0c017ee8();
        }
        thunk_FUN_0c0167cc(0xC304C24, 0xC304CA4);
        return FUN_0c017e48();
    }
    return t1;
}
