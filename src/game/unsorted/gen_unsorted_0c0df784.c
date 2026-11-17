/* game/unsorted: functions 0C0DF784-0C0DF90C, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o128_ushort { char p[0x128]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oC0_int { char p[0xC0]; int v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c042fe0(void);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c06593a(int, int);
int FUN_0c0d04c4(int, int);
int FUN_0c0e294c(void);
int FUN_0c150010(int, float, float, float, float);
extern int FUN_0c187798();
int FUN_0c0df784(int a4, int a5, int a6, int a7);

int FUN_0c0df784(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t3;
    register int t15;
    register int t6;
    register int t7;
    register float u8;
    register int t25;
    register int t38;
    register float u41;
    register int t43;
    register int t44;
    register int t49;
    register int t69;
    register int t58;
    register int t53;

    if ((*(signed char *)0xC54223C) != 1) {
        t69 = (((int (*)(int, int, int, int))(FUN_0c03f346))(a4, a5, a6, a7));
    } else {
        t3 = *(signed char *)((a4 + 0x14));
        if (t3 != 0) {
            if (t3 != 1) {
                t15 = t3;
                if (t3 != 2) {
                } else {
                    FUN_0c187798(a4, a5, a6);
                    *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) - 400.0f);
                    t6 = 0xC0DF8BC;
                    t7 = 0xA;
                    u8 = 400.0f;
                    for (;;) {
                        if (t7 == 0) {
                            break;
                        }
                        t6 = 0xC0DF90C;
                        t6 = (FUN_0c150010(((int)stk + 0), 0.899999976f, (*(float *)((t6 + 0x0))), 0.629999995f, 4.0f));
                        t6 = 0x4;
                        u8 = (*(float *)((((int)stk + 0) + t6)));
                        t6 = 0x4;
                        t7 = (t7 - 1);
                        u8 = (u8 + 80.0f);
                        *(float *)((((int)stk + 0) + t6)) = u8;
                    }
                    FUN_0c0e294c();
                    *(unsigned int *)(((0xC540D98 + ((*(signed char *)((a4 + 0x2))) << 2)) + 0x0)) = 0x0;
                    t15 = (((int (*)(int))(FUN_0c03f346))(a4));
                }
                t58 = t15;
            } else {
                t25 = FUN_0c06593a(a4, (*(int *)0xC540D94));
                t58 = t25;
                if (t25 != 0) {
                    (((struct o14_uchar *)(a4))->v) = 0x2;
                    t58 = (thunk_FUN_0c05abb2(0x45, (a4 + 0x28)));
                }
            }
        } else {
            t38 = FUN_0c042fe0();
            if (t38 == 0) {
                (((struct oA8_uchar *)(a4))->v) = 0x0;
                t53 = 0xA8;
            } else {
                (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
                (((struct oA8_uchar *)(a4))->v) = 0x1;
                (((struct o128_ushort *)(a4))->v) = 0x40;
                u41 = -3600.0f;
                u41 = u41 + 2400.0f * (float)(*(signed char *)((a4 + 0x2)));
                (((struct o28_float *)(a4))->v) = u41;
                FUN_0c0d04c4((0xAC + a4), (a4 + 0x34));
                t43 = 0x0;
                t44 = 0x0;
                for (;;) {
                    if ((int)t44 >= (int)((((struct oC0_int *)(a4))->v))) {
                        break;
                    }
                    t43 = t44;
                    t43 = (t43 << 2);
                    t43 = (t43 + (0xC4 + a4));
                    t43 = (*(int *)((t43 + 0x0)));
                    FUN_0c0d04c4((t43 + 0x6), (t43 + 0x78));
                    t44 = (t44 + 0x1);
                }
                t49 = FUN_0c06593a(a4, (*(int *)0xC540D94));
                t53 = t49;
                if (t49 != 0) {
                    (((struct o14_uchar *)(a4))->v) = 0x2;
                    t53 = (thunk_FUN_0c05abb2(0x45, (a4 + 0x28)));
                }
            }
            t58 = t53;
        }
        t69 = t58;
    }
    return t69;
}
