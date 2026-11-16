/* Straight-line functions with calls and guards (batch gen_fd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o12A_short { char p[0x12A]; short v; };
struct o12A_ushort { char p[0x12A]; unsigned short v; };
struct o3818_short { char p[0x3818]; short v; };
struct o8C_float { char p[0x8C]; float v; };
int FUN_0c03f346(int);
int FUN_0c07e3fc(int, int);
extern int FUN_0c187798();
int FUN_0c0cacac(int a4, int a5, int a6);

int FUN_0c0cacac(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    int t9;
    register int t10;
    register int t11;
    register int t12;
    register int t13;
    register int t14;
    register int t15;
    register int t16;
    register int t17;
    register int t18;
    register int t19;
    register int t20;
    register float u0;

    t19 = *(signed char *)((a4 + 0x2));
    if (t19 != 0) {
        if (t19 != 1) {
            if (t19 != 2) {
                if (t19 == 3) {
                    t20 = ((int (*)(int, int, int))(FUN_0c187798))((0xC532498 + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938)), a5, a6);
                    t20 = ((int (*)(int))(FUN_0c187798))(t0);
                    t0 = ((int (*)(int))(FUN_0c187798))(t1);
                    if ((*(signed char *)((t2 + 0x3715))) != 7) {
                        return FUN_0c03f346(a4);
                    }
                    if ((*(signed char *)((t2 + 0x3732))) != 11) {
                        return FUN_0c03f346(a4);
                    }
                    t0 = *(short *)((a4 + 0x1C));
                    if (t0 == (unsigned short)((((struct o3818_short *)(t2))->v))) {
                        return t0;
                    }
                    return FUN_0c03f346(a4);
                }
                if (t19 == 4) {
                    t0 = *(signed char *)((a4 + 0x1));
                    t1 = ((int (*)(int, int, int))(FUN_0c187798))(0xC532498, a5, a6);
                    t1 = ((int (*)(void))(FUN_0c187798))();
                    t1 = ((int (*)(void))(FUN_0c187798))();
                    t1 = *(short *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x1E));
                    *(unsigned short *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x1E)) = (t1 + 0x1);
                    if ((short)(t1 + 0x1) == 8) {
                        FUN_0c07e3fc(a4, 0xA);
                    }
                    if (((*(signed char *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x3715))) == 7) && ((t3 = *(signed char *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x3732)), t3 == 15) && (t4 = *(short *)((a4 + 0x1C)), t5 = (((struct o3818_short *)((((short)t0 * (short)0x3938) + 0xC532498)))->v), t4 == (unsigned short)t5))) {
                        if (!(22.0f > ((((struct o8C_float *)(((((struct o118_int *)((((short)t0 * (short)0x3938) + 0xC532498)))->v))))->v)))) {
                            return FUN_0c03f346(a4);
                        }
                        return 0x8C;
                    }
                    return FUN_0c03f346(a4);
                }
                if (t19 == 5) {
                    t0 = *(signed char *)((a4 + 0x1));
                    t1 = ((int (*)(int, int, int))(FUN_0c187798))(0xC532498, a5, a6);
                    t1 = ((int (*)(void))(FUN_0c187798))();
                    t1 = ((int (*)(void))(FUN_0c187798))();
                    t1 = *(short *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x1E));
                    *(unsigned short *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x1E)) = (t1 + 0x1);
                    if ((short)(t1 + 0x1) == 8) {
                        FUN_0c07e3fc(a4, 0xC);
                    }
                    if (((*(signed char *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x3715))) == 7) && ((t6 = *(signed char *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x3732)), t6 == 15) && ((t7 = *(short *)((a4 + 0x1C)), t8 = (((struct o3818_short *)((((short)t0 * (short)0x3938) + 0xC532498)))->v), t7 == (unsigned short)t8) && (t9 = (((struct o118_int *)((((short)t0 * (short)0x3938) + 0xC532498)))->v), u0 = (((struct o8C_float *)(t9))->v), 23.0f > u0)))) {
                        return 0x8C;
                    }
                    return FUN_0c03f346(a4);
                }
                return t19;
            }
            t0 = ((int (*)(int, int, int))(FUN_0c187798))((0xC532498 + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938)), a5, a6);
            t0 = ((int (*)(int))(FUN_0c187798))(t10);
            t0 = ((int (*)(int))(FUN_0c187798))(t11);
            if ((*(signed char *)((t12 + 0x3715))) != 7) {
                return FUN_0c03f346(a4);
            }
            if ((*(signed char *)((t12 + 0x3732))) != 11) {
                return FUN_0c03f346(a4);
            }
            if ((*(short *)((a4 + 0x1C))) != (unsigned short)((((struct o3818_short *)(t12))->v))) {
                return FUN_0c03f346(a4);
            }
            t0 = *(short *)((a4 + 0x1E));
            *(unsigned short *)((a4 + 0x1E)) = (t0 - 1);
            if ((int)(short)(t0 - 1) > 0) {
                return (short)(t0 - 1);
            }
            return FUN_0c03f346(a4);
        }
        t0 = ((int (*)(int, int, int))(FUN_0c187798))((0xC532498 + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938)), a5, a6);
        t0 = ((int (*)(int))(FUN_0c187798))(t13);
        t0 = ((int (*)(int))(FUN_0c187798))(t14);
        if ((*(signed char *)((t15 + 0x3715))) != 7) {
            return FUN_0c03f346(a4);
        }
        t0 = *(signed char *)((t15 + 0x3732));
        if (t0 == 10) {
            return t0;
        }
        return FUN_0c03f346(a4);
    }
    t0 = ((int (*)(int, int, int))(FUN_0c187798))((0xC532498 + ((short)(*(short *)((a4 + 0x1C))) * (short)0x3938)), a5, a6);
    t0 = ((int (*)(int))(FUN_0c187798))(t16);
    t0 = ((int (*)(int))(FUN_0c187798))(t17);
    if ((*(signed char *)((t18 + 0x3715))) != 32) {
        return FUN_0c03f346(a4);
    }
    if ((*(signed char *)((t18 + 0x3739))) != 16) {
        return FUN_0c03f346(a4);
    }
    if ((*(short *)((t18 + 0x1C))) != 0) {
        return FUN_0c03f346(a4);
    }
    t0 = 0x3740;
    if ((*(signed char *)((t18 + 0x3740))) == 0xFF) {
    } else {
        (((struct o12A_ushort *)(a4))->v) = (((((struct o12A_short *)(a4))->v)) & (~((int)0x1 << (int)(*(signed char *)((t18 + 0x3740))))));
        t0 = 0x12A;
    }
    return t0;
}
