/* Straight-line functions with calls and guards (batch gen_aa): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o18_uchar { char p[0x18]; unsigned char v; };
struct o20_uchar { char p[0x20]; unsigned char v; };
struct o78_uchar { char p[0x78]; unsigned char v; };
struct o7C_uchar { char p[0x7C]; unsigned char v; };
int FUN_0c1a2184(void);
int FUN_0c2c14a8(void);
int FUN_0c2d65ae(int);
int FUN_0c2d663a(int);
int FUN_0c2ec410(int, int);
int FUN_0c2ec430(int);
int clear_file(int, int);
int direntry(int, int);
int direntry_dirty(int, int);
int search_dir(int, int, int);
int set_vmstime(int, int);
int thunk_FUN_0c2c067e(int);
int vmsfs_unmount(int);
int vmsio_ismount(int);
int vmsio_isready(int);
int write_dir(int);
int write_fat(int, int, int);
int vmsfs_fdelete_ex(int a4, int a5, int a6);
int vmsfs_frename(int a4, int a5, int a6);
int vmsfs_fsettime(int a4, int a5, int a6);
int FUN_0c2d52d4(void);




int FUN_0c2d52d4(void)
{
    int stk[1];
    register int t1;
    register int t3;
    register int t5;
    register int t8;
    register int t34;
    register int t12;
    register int t13;
    register int t19;
    register int t21;
    register int t32;
    register int t28;
    register int t30;
    int t25;

    FUN_0c2d663a(0x0);
    t1 = *(int *)0xC8D25F0;
    (((struct o78_uchar *)(t1))->v) = ((*(signed char *)(((t1 + 0x78) + 0x0))) & 0xDF);
    t3 = *(int *)0xC8D25F0;
    (((struct o78_uchar *)(t3))->v) = ((*(signed char *)(((t3 + 0x78) + 0x0))) & 0xFB);
    t5 = *(int *)0xC8D25F0;
    (((struct o7C_uchar *)(t5))->v) = ((*(signed char *)(((t5 + 0x7C) + 0x0))) & 0xEF);
    t8 = *(signed char *)((((*(int *)0xC8D25F0) + 0x18) + 0x0));
    t34 = t8;
    if ((t8 & 16) != 0) {
        *(unsigned char *)(((int)stk + 0)) = (-((((((*(signed char *)((((*(int *)0xC8D25F0) + 0x3C) + 0x0))) & 32) == 0)) ? 1 : 0) - 1));
        t12 = *(signed char *)((((*(int *)0xC8D25F0) + 0x20) + 0x0));
        t13 = *(int *)0xC8D25F0;
        (((struct o20_uchar *)(t13))->v) = ((*(signed char *)(((t13 + 0x20) + 0x0))) & 0xFE);
        FUN_0c2ec410(0xC8D2698, 0x32);
        for (;;) {
            if (((*(signed char *)((((*(int *)0xC8D25F0) + 0x3C) + 0x0))) & 32) == 0) {
                break;
            }
            t19 = FUN_0c2ec430((*(int *)0xC8D2698));
            if ((signed char)t19 == 0) continue;
            return (FUN_0c2d65ae(0x56E));
        }
        t21 = *(int *)0xC8D25F0;
        (((struct o18_uchar *)(t21))->v) = ((*(signed char *)(((t21 + 0x18) + 0x0))) & 0xEF);
        *(volatile int *)0xC8D25F0;
        t32 = (FUN_0c1a2184());
        if (((unsigned char)(t12 & 0x1) != 0) && (t25 = *(signed char *)(((int)stk + 0)), t25 != 0)) {
            FUN_0c2ec410(0xC8D2698, 0x32);
            for (;;) {
                t28 = *(signed char *)((((*(int *)0xC8D25F0) + 0x3C) + 0x0));
                if ((t28 & 32) != 0) {
                    return t28;
                }
                t30 = FUN_0c2ec430((*(int *)0xC8D2698));
                if ((signed char)t30 != 0) {
                    break;
                }
            }
            t32 = (FUN_0c2d65ae(0x578));
        }
        t34 = t32;
    }
    return t34;
}
