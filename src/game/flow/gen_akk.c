/* Straight-line functions with calls and guards (batch gen_akk): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o4_float { char p[0x4]; float v; };
int FUN_0c120018(int, int, int, int, int, int);
int FUN_0c11efc0(int a4, int a5);

int FUN_0c11efc0(int a4, int a5)
{
    int stk[5];
    register int t3;
    register int t19;
    register float u4;
    register float u5;
    register int t6;
    register int t8;
    register int t9;
    register int t13;
    register float u15;
    register int t16;
    register int t36;
    register int t37;
    register int t44;

    t19 = *(signed char *)0xC4750AE;
    if (t19 == 0) {
        (((struct o1_uchar *)0xC4750AD)->v) = ((*(signed char *)0xC4750AE) + 0x1);
        *(unsigned int *)0xC4750C0 = 0x0;
        *(unsigned int *)0xC4750C4 = 0x0;
    }
    if ((t19 == 0) || (t19 == 1)) {
        t3 = *(int *)0xC4750C0;
        *(unsigned int *)0xC4750C0 = (t3 - 1);
        if ((int)(t3 - 1) <= 0) {
            *(unsigned int *)0xC4750C0 = 0x5A;
            u4 = (((struct o0_float *)0xC11F130)->v);
            u5 = (((struct o4_float *)0xC11F130)->v);
            t6 = 0x0;
            for (;;) {
                t8 = *(signed char *)(((*(int *)0xC4750C4) + 0xC2A0CBC));
                t9 = *(signed char *)((0xC543025 + (unsigned char)t8));
                t13 = 0x1;
                if (t9 != 1) {
                    t13 = 0x3;
                    if (t9 != 2) {
                        t13 = 0x0;
                    }
                }
                if ((unsigned char)t8 == 0xFF) {
                    break;
                }
                u15 = u5;
                u15 = u15 + u4 * (float)t6;
                *(float *)(((int)stk + 8)) = u15;
                *(float *)(((int)stk + 12)) = u5;
                *(int *)((int)stk + 4) = 0x0;
                *(int *)((int)stk + 0) = 0xC201828;
                t16 = FUN_0c120018(t13, ((unsigned char)t8 + 0x1), 0x63, (((int)stk + 0) + 0x8), 0xC201828, 0x0);
                t6 = (t6 + 0x1);
                *(unsigned int *)0xC4750C4 = ((*(int *)0xC4750C4) + 0x1);
                if ((int)t6 >= (int)0x4) {
                    return t16;
                }
            }
            (((struct o1_uchar *)0xC4750AD)->v) = ((*(signed char *)0xC4750AE) + 0x1);
            (((struct o2_uchar *)0xC4750AD)->v) = 0x0;
            t19 = 0x0;
        }
        t44 = t19;
    } else {
        t44 = *(signed char *)0xC4750AF;
        if (t44 == 0) {
            (((struct o2_uchar *)0xC4750AD)->v) = ((*(signed char *)0xC4750AF) + 0x1);
            *(unsigned int *)0xC4750C4 = 0x12C;
        }
        if ((t44 == 0) || (t44 == 1)) {
            t36 = *(int *)0xC4750C4;
            *(unsigned int *)0xC4750C4 = (t36 - 1);
            if ((int)(t36 - 1) <= 0) {
                t37 = *(signed char *)0xC4750AF;
                (((struct o2_uchar *)0xC4750AD)->v) = (t37 + 0x1);
                t44 = (t37 + 0x1);
            }
        } else {
            (((struct o0_uchar *)0xC4750AD)->v) = ((*(signed char *)0xC4750AD) + 0x1);
            (((struct o1_uchar *)0xC4750AD)->v) = 0x0;
            t44 = 0x0;
        }
    }
    return t44;
}
