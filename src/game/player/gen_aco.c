/* Straight-line functions with calls and guards (batch gen_aco): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o38_int { char p[0x38]; int v; };
struct o38_uint { char p[0x38]; unsigned int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
int FUN_0c16f890(int, int, int, int, int);
int FUN_0c16fad0(int);
int FUN_0c17a550(int);
int dbg_printf(int, ...);
int nlLocate(int, int);
int FUN_0c16fafc(void);

int FUN_0c16fafc(void)
{
    register int t1;
    register int t2;
    register int t3;

    t3 = (((struct o4_int *)0xC475A64)->v);
    if (t3 == 0) {
        (((struct o4_uint *)0xC475A64)->v) = (((((struct o4_int *)0xC475A64)->v)) + 0x1);
        (((struct o0_uint *)0xC475AAC)->v) = 0x1;
    }
    if ((t3 == 0) || (t3 == 1)) {
        FUN_0c16f890(0xC475AAC, 0x0, 0x1, 0x1, 0x1);
        if ((((((struct o38_int *)0xC475AAC)->v)) & 0x200) != 0) {
            (((struct o4_uint *)0xC475A64)->v) = (((((struct o4_int *)0xC475A64)->v)) + 0x1);
        }
        FUN_0c17a550(0xFFFF0000);
        nlLocate(0x14, 0x2);
        dbg_printf(0xC203EEC);
        nlLocate(0x1E, 0x2);
        if (((((struct o0_int *)0xC475AAC)->v)) == 0) {
            t1 = 0xC203EF4;
        } else {
            t1 = 0xC203EF8;
        }
        t2 = (dbg_printf(t1));
    } else {
        t1 = t3;
        if (t3 != 2) {
        } else {
            (((struct o0_uint *)0xC475A64)->v) = 0x0;
            t3 = (((struct o0_int *)0xC475AAC)->v);
            if (t3 != 0) {
            } else {
                FUN_0c16fad0(0x1);
                (((struct o8_uint *)0xC475AAC)->v) = 0x0;
                (((struct o38_uint *)0xC475A64)->v) = 0x0;
                t3 = 0x50;
            }
            t1 = t3;
        }
        t2 = t1;
    }
    return t2;
}
