/* game/unsorted: functions 0C027FC4-0C028188, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
int FUN_0c01b0fc(void);
int FUN_0c01e9e4(void);
int FUN_0c022050(void);
int FUN_0c0220c4(int, int, int);
int FUN_0c0222a4(int, int, int);
int FUN_0c02aa9e(void);
int FUN_0c0573c0(int, int, int);
int FUN_0c1864e0(int, int, int);
int FUN_0c186740(int, int, int);
int FUN_0c027fc4(void);

int FUN_0c027fc4(void)
{
    int stk[102];
    register int t0;
    register int t123;
    register int t2;
    register int t3;
    register int t60;
    register int t61;
    register int t76;
    register int t96;
    int t4;
    register int t119;
    int t44;
    register int t115;
    int t68;
    register int t111;
    int t91;

    t0 = FUN_0c022050();
    t123 = t0;
    if (t0 == 0) {
    } else {
        FUN_0c0220c4((((int)stk + 0) + 0xC), ((int)stk + 0), (((int)stk + 0) + 0x4));
        t2 = *(signed char *)(((int)stk + 12));
        t3 = *(int *)0xC309994;
        if ((t2 == 101) && (t4 = *(signed char *)(((int)stk + 4)), t4 == 8)) {
            FUN_0c1864e0(t3, (((int)stk + 0) + 0x14), 0x1);
            FUN_0c1864e0((*(int *)0xC309994), ((int)stk + 0), 0x1);
            FUN_0c1864e0((*(int *)0xC309994), 0xC309E07, 0x1);
            (((struct o18_uchar *)(((int)stk + 0)))->v) = 0x77;
            *(unsigned int *)(((int)stk + 16)) = ((((int)stk + 0) + 0x18) + 0x1);
            *(unsigned char *)((((((int)stk + 0) + 0x18) + 0x1) + 0x0)) = 0x3;
            *(unsigned char *)(((((int)stk + 0) + 0x18) + 0x2)) = 0x2;
            t119 = (FUN_0c186740((*(int *)0xC309994), (((int)stk + 0) + 0x18), (*(signed char *)(((*(int *)(((int)stk + 16))) + 0x0)))));
        } else {
            if ((t2 == 103) && (t44 = *(signed char *)(((int)stk + 4)), t44 == 2)) {
                t60 = 0x0;
                t61 = 0xC3099B8;
                for (;;) {
                    if ((int)t60 >= (int)0xE) {
                        break;
                    }
                    FUN_0c1864e0((*(int *)0xC309994), t61, 0x1);
                    t61 = (t61 + 0x1);
                    t60 = (t60 + 0x1);
                }
                (((struct o18_uchar *)(((int)stk + 0)))->v) = 0x76;
                *(unsigned int *)(((int)stk + 16)) = ((((int)stk + 0) + 0x18) + 0x1);
                *(unsigned char *)((((((int)stk + 0) + 0x18) + 0x1) + 0x0)) = 0x3;
                *(unsigned char *)(((((int)stk + 0) + 0x18) + 0x2)) = 0x6;
                t115 = (FUN_0c186740((*(int *)0xC309994), (((int)stk + 0) + 0x18), (*(signed char *)(((*(int *)(((int)stk + 16))) + 0x0)))));
            } else {
                if ((t2 == 102) && (t68 = *(signed char *)(((int)stk + 4)), t68 == 6)) {
                    FUN_0c1864e0(t3, (((int)stk + 0) + 0x8), 0x1);
                    t76 = 0x0;
                    for (;;) {
                        if ((int)t76 >= (int)(unsigned char)(*(signed char *)(((int)stk + 8)))) {
                            break;
                        }
                        FUN_0c1864e0((*(int *)0xC309994), (0xC30AA34 + t76), 0x1);
                        t76 = (t76 + 0x1);
                    }
                    if ((*(signed char *)0xC309993) == 0) {
                        (((struct o18_uchar *)(((int)stk + 0)))->v) = 0x77;
                        *(unsigned int *)(((int)stk + 16)) = ((((int)stk + 0) + 0x18) + 0x1);
                        *(unsigned char *)((((((int)stk + 0) + 0x18) + 0x1) + 0x0)) = 0x3;
                        *(unsigned char *)(((((int)stk + 0) + 0x18) + 0x2)) = 0x3;
                        t111 = (FUN_0c186740((*(int *)0xC309994), (((int)stk + 0) + 0x18), (*(signed char *)(((*(int *)(((int)stk + 16))) + 0x0)))));
                    } else {
                        *(unsigned short *)0xC30540C = 0x12C;
                        (((struct o0_uchar *)0xC30985A)->v) = 0x6;
                        (((struct o1_uchar *)0xC30985A)->v) = 0x0;
                        (((struct o2_uchar *)0xC30985A)->v) = 0x0;
                        FUN_0c01e9e4();
                        FUN_0c01b0fc();
                        t111 = (FUN_0c0573c0(0xFF000000, 0x0, 0x14));
                    }
                } else {
                    if ((t2 == 103) && (t91 = *(signed char *)(((int)stk + 4)), t91 == 3)) {
                        FUN_0c1864e0(t3, ((int)stk + 0), 0x1);
                        t96 = 0x0;
                        for (;;) {
                            if ((int)t96 >= (int)(unsigned char)(*(signed char *)(((int)stk + 0)))) {
                                break;
                            }
                            FUN_0c1864e0((*(int *)0xC309994), (t96 + 0xC3098E3), 0x1);
                            t96 = (t96 + 0x1);
                        }
                        *(unsigned char *)((t96 + 0xC3098E3)) = 0x0;
                        *(unsigned short *)0xC30540C = 0x12C;
                        (((struct o0_uchar *)0xC30985A)->v) = 0x6;
                        (((struct o1_uchar *)0xC30985A)->v) = 0x0;
                        (((struct o2_uchar *)0xC30985A)->v) = 0x0;
                        FUN_0c01e9e4();
                        FUN_0c01b0fc();
                        t111 = (FUN_0c0573c0(0xFF000000, 0x0, 0x14));
                    } else {
                        if ((*(signed char *)0xC30AF9A) != 0) {
                            t111 = (FUN_0c02aa9e());
                        } else {
                            t111 = (FUN_0c0222a4((((int)stk + 0) + 0xC), ((int)stk + 0), (((int)stk + 0) + 0x4)));
                        }
                    }
                }
                t115 = t111;
            }
            t119 = t115;
        }
        t123 = t119;
    }
    return t123;
}
