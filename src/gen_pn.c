/* Straight-line functions with calls and guards (batch gen_pn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o114_int { char p[0x114]; int v; };
struct o118_int { char p[0x118]; int v; };
struct o11C_int { char p[0x11C]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o4_int { char p[0x4]; int v; };
struct o8_int { char p[0x8]; int v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct oC0_int { char p[0xC0]; int v; };
int FUN_0c037bf6(int, int);
int FUN_0c03f06a(int);
int FUN_0c03fbcc(int);
int FUN_0c07d6cc(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c14607c(int, int, int, int);
int FUN_0c1463b8(int, int, int, int);
int FUN_0c03f346(int a4, int a5, int a6, int a7);
int FUN_0c146408(int a4, int a5, int a6, int a7);
int FUN_0c06d13c(int a4, int a5);

int FUN_0c03f346(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = 0x0;
    for (;;) {
        t1 = (((struct oC0_int *)(a4))->v);
        if ((int)t0 >= (int)t1) {
            break;
        }
        t3 = 0xC4;
        t2 = t0;
        t2 = (t2 << 2);
        t3 = (t3 + a4);
        t3 = (t3 + t2);
        t3 = (*(int *)((t3 + 0x0)));
        t4 = ((int (*)(int, int, int, int))((*(int *)((0xC240284 + ((*(signed char *)((t3 + 0x1))) << 2))))))(t3, a5, a6, a7);
        t3 = 0xC4;
        t0 = (t0 + 0x1);
        t3 = (t3 + a4);
        t2 = (t2 + t3);
        *(unsigned int *)((t2 + 0x0)) = 0x0;
    }
    t0 = t1;
    t1 = t2;
    t2 = 0x0;
    for (;;) {
        if ((int)t2 >= (int)((((struct o114_int *)(a4))->v))) {
            break;
        }
        t1 = t2;
        t1 = (t1 << 2);
        FUN_0c03fbcc((*(int *)((((0x118 + a4) + t1) + 0x0))));
        t0 = 0x118;
        t2 = (t2 + 0x1);
        t0 = (t0 + a4);
        t1 = (t1 + t0);
        *(unsigned int *)((t1 + 0x0)) = 0x0;
    }
    if ((*(int *)((a4 + 0x8))) == 0) {
        t0 = *(int *)((a4 + 0xC));
        *(unsigned int *)((((*(signed char *)((a4 + 0x0))) << 2) + 0xC532434)) = t0;
        if (t0 == 0) {
            *(unsigned int *)((0xC53245C + ((*(signed char *)((a4 + 0x0))) << 2))) = 0x0;
        } else {
            *(unsigned int *)((t0 + 0x8)) = 0x0;
        }
    } else {
        if ((*(int *)((a4 + 0xC))) == 0) {
            t0 = *(int *)((a4 + 0x8));
            *(unsigned int *)((0xC53245C + ((*(signed char *)((a4 + 0x0))) << 2))) = t0;
            *(unsigned int *)((t0 + 0xC)) = 0x0;
        } else {
            *(unsigned int *)(((*(int *)((a4 + 0x8))) + 0xC)) = (*(int *)((a4 + 0xC)));
            *(unsigned int *)(((*(int *)((a4 + 0xC))) + 0x8)) = (*(int *)((a4 + 0x8)));
        }
    }
    return FUN_0c03f06a(a4);
}

int FUN_0c146408(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t0 = (int)((unsigned int)(*(int *)0xC542260) % (unsigned int)((((struct o0_int *)0xC2A249C)->v)));
        if (t0 == 0) {
            t1 = t0;
            t0 = 0x0;
            for (;;) {
                if ((int)t0 >= (int)((((struct o8_int *)0xC2A249C)->v))) {
                    break;
                }
                t1 = (*(signed char *)((a4 + 0x2)));
                t2 = t1;
                t1 = (*(signed char *)((a4 + 0x1)));
                t1 = (FUN_0c1463b8(t1, t2, (a4 + 0x28), (a4 + 0x34)));
                t0 = (t0 + 0x1);
            }
        }
        t0 = (int)((unsigned int)(*(int *)0xC542260) % (unsigned int)((((struct o4_int *)0xC2A249C)->v)));
        if (t0 == 0) {
            return FUN_0c14607c((*(signed char *)((a4 + 0x2))), (*(signed char *)((a4 + 0x1))), (a4 + 0x28), (a4 + 0x34));
        }
        return t0;
    }
    return FUN_0c03f346(a4, a5, a6, a7);
}

int FUN_0c06d13c(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = a5;
    if ((int)(*(short *)((a4 + 0x1C))) <= (int)0x10) {
        t1 = *(int *)((a4 + 0x38));
        t2 = FUN_0c07d6cc(a4);
        t3 = (unsigned short)(t1 - t2);
        if ((0x8000 & (unsigned short)(t1 - t2)) != 0) {
            t3 = ((unsigned short)(t1 - t2) | 0xFFFF0000);
        }
        if (((int)t3 <= (int)0xFFFFF8E4) || ((int)t3 >= (int)0x71C)) {
            if ((int)t3 < 0) {
                *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + 0x71C);
            } else {
                *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) - 0x71C);
            }
            *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) & 0xFFFF);
            t1 = 0x71C;
        }
        t0 = t1;
    }
    if ((*(short *)((a4 + 0x1E))) == 0) {
        t1 = FUN_0c037bf6(a4, t0);
        t2 = (unsigned char)t1;
        if ((unsigned char)t1 != 0) {
            t1 = *(signed char *)((a4 + 0x1));
            FUN_0c07e79c(a4, t1, 0x0, 0x0, (t1), 0x0, 0x0);
            t1 = (((struct o118_int *)(a4))->v);
            t3 = *(short *)((a4 + 0x1C));
            (((struct o98_float *)(t1))->v) = (float)(signed char)t3;
            (((struct o94_float *)(t1))->v) = (float)(signed char)t3;
            t1 = (((struct o11C_int *)(a4))->v);
            t3 = *(short *)((a4 + 0x1C));
            (((struct o98_float *)(t1))->v) = (float)(signed char)t3;
            (((struct o94_float *)(t1))->v) = (float)(signed char)t3;
            *(unsigned short *)((a4 + 0x1E)) = 0x1;
            t2 = 0x1;
        }
        return t2;
    }
    return FUN_0c037bf6(a4, t0);
}
