/* Straight-line functions with calls and guards (batch gen_ac): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o9_uchar { char p[0x9]; unsigned char v; };
int vmsfs_write_retry(int, int, int);
int FUN_0c2e3400(void);
int FUN_0c2e7248(int, int);
int FUN_0c2e7e3e(void);
int FUN_0c2e7f3c(void);
int FUN_0c2e80c0(void);
int FUN_0c2e8268(void);
int FUN_0c2e8714(void);
int FUN_0c2e8992(void);
int FUN_0c2e89f0(void);
int FUN_0c2ebc72(int, int, int, int, int);
int FUN_0c2ec430(int);
int FUN_0c2eedc0(int);
int FUN_0c2fa3c4(void);
int FUN_0c2fc074(void);
int FUN_0c2fd598(void);
int get_fat(int, int);
int set_fat(int, int);
int thunk_FUN_0c2c067e(int);
int vmsfs_unmount(int);
int vmsio_ismount(int);
int vmsio_isready(int);
int vmsfs_xwrite1(int a4, int a5);
int FUN_0c2f9e9a(void);


int FUN_0c2f9e9a(void)
{
    int stk[1];
    register int t0;
    register int t14;
    register int t20;

    t0 = *(signed char *)0xC8D677E;
    if (((unsigned char)t0 & 0x8) != 0) {
        if (((unsigned char)(*(signed char *)0xC8D67BA) & 0x8) != 0) {
            *(unsigned char *)0xC8D646D = 0x4;
            FUN_0c2e80c0();
        }
        if (((unsigned char)(*(signed char *)0xC8D677F) & 128) != 0) {
            FUN_0c2e7f3c();
            *(unsigned char *)0xC8D67D3 = 0x2;
            FUN_0c2ebc72(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 0));
            FUN_0c2e7248(0x3, 0x0);
            FUN_0c2e8268();
            t14 = *(signed char *)0xC8D677F;
            (((struct o0_uchar *)0xC8D677F)->v) = (t14 & 0x7F);
            *(unsigned short *)0xC8D6524 = 0x0;
            return (t14 & 0x7F);
        }
        FUN_0c2e8714();
        FUN_0c2e89f0();
        FUN_0c2fa3c4();
        FUN_0c2e8992();
        t20 = FUN_0c2ec430((*(int *)0xC8D6618));
        if ((signed char)t20 != 0) {
            if (((unsigned char)(*(signed char *)0xC8D6788) & 64) != 0) {
                (((struct o9_uchar *)0xC8D677F)->v) = ((*(signed char *)0xC8D6788) | 0x10);
                (((struct o9_uchar *)0xC8D677F)->v) = ((*(signed char *)0xC8D6788) & 0xBF);
                FUN_0c2e7e3e();
            }
            if ((unsigned char)(*(signed char *)0xC8D65A0) == 3) {
                FUN_0c2eedc0(0x0);
            }
        }
        FUN_0c2e3400();
        FUN_0c2fc074();
        return FUN_0c2fd598();
    }
    return (unsigned char)t0;
}
