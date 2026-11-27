/* game/save: functions 0C015B58-0C017EF8, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o4C_uchar { char p[0x4C]; unsigned char v; };
struct o4D_uchar { char p[0x4D]; unsigned char v; };
struct o4E_uchar { char p[0x4E]; unsigned char v; };
struct o50_uchar { char p[0x50]; unsigned char v; };
int FUN_0c01623a(void);
int FUN_0c016244(void);
int FUN_0c016252(int);
int FUN_0c01626a(void);
int FUN_0c0162c6(int, int, int, int);
int FUN_0c016334(int, int);
int FUN_0c0163c4(int, int, int, int);
int thunk_FUN_0c0167cc(int, int, int, int);
int FUN_0c017a2e(void);
int FUN_0c017be8(void);
extern int FUN_0c017c70();
int FUN_0c017e58(void);
int FUN_0c017e68(void);
int FUN_0c017e78(void);
int FUN_0c017eb8(void);
int FUN_0c017ed8(void);
int memset(int, int, int);
int FUN_0c187d24(int, int);
int strlen(int);
int FUN_0c016898(void);
void FUN_0c016a88(int a4, int a5, int a6, int a7);
int FUN_0c016c42(int a4, int a5, int a6, int a7);
int FUN_0c01746e(void);

int FUN_0c016898(void)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = FUN_0c016244();
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    t1 = t0;
                } else {
                    t0 = FUN_0c01626a();
                    t2 = 0x0;
                    if (t0 == 0) {
                        t2 = 0x2;
                    }
                    FUN_0c016252(t2);
                }
                t0 = ((int (*)(int))(FUN_0c017c70))(t1);
                FUN_0c017be8();
                return FUN_0c017a2e();
            }
            t0 = *(signed char *)((0x4A + (*(int *)0xC304BA0)));
            if (((unsigned char)t0 & 28) == 0) {
                FUN_0c016252(0x3);
                t1 = ((int (*)(void))(FUN_0c017c70))();
                FUN_0c017be8();
                return FUN_0c017a2e();
            }
            return (unsigned char)t0;
        }
        FUN_0c016252(0x2);
    } else {
        FUN_0c016252(0x1);
    }
    t0 = ((int (*)(void))(FUN_0c017c70))();
    FUN_0c017be8();
    return FUN_0c017a2e();
}

void FUN_0c016a88(int a4, int a5, int a6, int a7)
{
    register int t13;
    register int t15;

    if ((*(signed char *)0xC304C24) != 0) {
        thunk_FUN_0c0167cc(0xC304C24, 0xC304CA4, a6, a7);
        if ((*(signed char *)(((*(int *)0xC304BA0) + 0x4C))) != 0) {
            FUN_0c017e78();
            (((struct o4C_uchar *)((*(int *)0xC304BA0)))->v) = 0x0;
        }
        t13 = FUN_0c0163c4(0xC304BA4, 0xC304CA4, (unsigned char)(*(signed char *)(((*(int *)0xC304BA0) + 0x50))), (*(int *)(((*(int *)0xC304BA0) + 0x18))));
        memset(0xC304C24, 0x0, 0x80);
        t15 = *(int *)0xC304BA0;
        (((struct o50_uchar *)(t15))->v) = ((*(signed char *)((t15 + 0x50))) + t13);
        (((struct o4D_uchar *)((*(int *)0xC304BA0)))->v) = 0x0;
        (((struct o4E_uchar *)((*(int *)0xC304BA0)))->v) = 0x0;
        FUN_0c017c70();
    return;
    }
}

int FUN_0c016c42(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(int *)0xC304BA0;
    if ((*(signed char *)((t0 + 0x4C))) == 0) {
        if ((*(signed char *)0xC304C24) != 0) {
            t1 = *(signed char *)((t0 + 0x4D));
            if ((unsigned char)t1 != 0) {
                *(unsigned char *)(((((unsigned char)t1 + 0xC304C24) - 2) + 0x0)) = 0x0;
                FUN_0c187d24(0xC304C24, ((unsigned char)t1 + 0xC304C24));
                t1 = *(int *)0xC304BA0;
                (((struct o4D_uchar *)(t1))->v) = ((*(signed char *)((t1 + 0x4D))) - 2);
                (((struct o4E_uchar *)((*(int *)0xC304BA0)))->v) = 0x0;
                return FUN_0c017c70();
            }
            return 0x4D;
        }
        t1 = *(signed char *)((t0 + 0x50));
        if ((unsigned char)t1 != 0) {
            t2 = FUN_0c0162c6(0xC304BA4, (unsigned char)t1, a6, a7);
            *(unsigned char *)((0xC304BA4 + ((unsigned char)t1 - t2))) = 0x0;
            FUN_0c187d24(0xC304BA4, ((unsigned char)t1 + 0xC304BA4));
            t1 = *(int *)0xC304BA0;
            (((struct o50_uchar *)(t1))->v) = ((*(signed char *)((t1 + 0x50))) - t2);
            (((struct o4E_uchar *)((*(int *)0xC304BA0)))->v) = 0x0;
            return FUN_0c017c70();
        }
        return 0x50;
    }
    if (a4 == 0) {
        return FUN_0c017e58();
    }
    (((struct o4C_uchar *)(t0))->v) = 0x0;
    (((struct o4E_uchar *)((*(int *)0xC304BA0)))->v) = 0x0;
    return 0x4E;
}

int FUN_0c01746e(void)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(int *)0xC304BA0;
    if ((*(signed char *)((t0 + 0x4C))) == 0) {
        if ((*(signed char *)0xC304C24) != 0) {
            t1 = *(signed char *)((t0 + 0x4D));
            t2 = strlen(0xC304C24);
            if ((int)(unsigned char)t1 < (int)t2) {
                t1 = FUN_0c01623a();
                if (t1 == 0) {
                    t1 = *(int *)0xC304BA0;
                    (((struct o4D_uchar *)(t1))->v) = ((*(signed char *)((t1 + 0x4D))) + 0x2);
                } else {
                    (((struct o4D_uchar *)((*(int *)0xC304BA0)))->v) = (strlen(0xC304C24));
                }
                (((struct o4E_uchar *)((*(int *)0xC304BA0)))->v) = 0x0;
            }
        } else {
            t1 = *(signed char *)((t0 + 0x50));
            t0 = strlen(0xC304BA4);
            if ((int)(unsigned char)t1 < (int)t0) {
                t0 = FUN_0c01623a();
                if (t0 == 0) {
                    t0 = *(int *)0xC304BA0;
                    (((struct o50_uchar *)(t0))->v) = ((*(signed char *)(((0x50 + t0) + 0x0))) + (FUN_0c016334(0xC304BA4, (unsigned char)(*(signed char *)((t0 + 0x50))))));
                } else {
                    (((struct o50_uchar *)((*(int *)0xC304BA0)))->v) = (strlen(0xC304BA4));
                }
                (((struct o4E_uchar *)((*(int *)0xC304BA0)))->v) = 0x0;
            }
        }
        return FUN_0c017c70();
    }
    FUN_0c017eb8();
    FUN_0c017ed8();
    return FUN_0c017e68();
}
