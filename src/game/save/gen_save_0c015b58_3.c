/* game/save: functions 0C015B58-0C017EF8, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o18_float { char p[0x18]; float v; };
struct o1D_uchar { char p[0x1D]; unsigned char v; };
struct o1E_uchar { char p[0x1E]; unsigned char v; };
struct o24_float { char p[0x24]; float v; };
struct o4B_uchar { char p[0x4B]; unsigned char v; };
struct o4E_uchar { char p[0x4E]; unsigned char v; };
int FUN_0c01623a(void);
int FUN_0c016244(void);
int FUN_0c016334(int, int);
int FUN_0c016518(int, int);
int thunk_FUN_0c0167cc(int, int);
int FUN_0c0169cc(int, int, int);
int FUN_0c016a88(int, int, int, int);
int FUN_0c016c42(int);
int FUN_0c016d00(int, int, int, int);
int FUN_0c017a2e(void);
int FUN_0c017be8(void);
int FUN_0c017c70(int, int, int);
extern int thunk_FUN_0c03f346();
int FUN_0c02b3ba(int, float, float, float);
int FUN_0c02b502(int);
int FUN_0c02b51c(float, float);
int strlen(int);
int strncpy(int, int, int);
int FUN_0c0167da(void);
int FUN_0c017098(int a4, int a5, int a6, int a7);
int FUN_0c017104(void);
int FUN_0c017160(int a4, int a5, int a6, int a7);
int FUN_0c017708(void);
int FUN_0c017d4c(int a4, int a5, int a6, int a7);
int FUN_0c017e68(void);


int FUN_0c017098(int a4, int a5, int a6, int a7)
{
    if ((*(signed char *)0xC304C24) != 0) {
        return FUN_0c016a88(a4, a5, a6, a7);
    }
    *(unsigned int *)(((*(int *)0xC304BA0) + 0x4)) = 0x1;
    return 0xC304BA0;
}

int FUN_0c017104(void)
{
    register int t0;
    register int t1;
    register int t2;

    if ((*(signed char *)(((*(int *)0xC304BA0) + 0x4C))) == 0) {
        t0 = FUN_0c01623a();
        if (t0 == 0) {
            return FUN_0c016c42(0x1);
        }
        t0 = *(int *)0xC304BA0;
        if ((*(signed char *)0xC304C24) != 0) {
            t1 = (FUN_0c016518(0xC304C24, (unsigned char)(*(signed char *)((t0 + 0x4D)))));
            t2 = (0x4D + t0);
        } else {
            t1 = (FUN_0c016518(0xC304BA4, (unsigned char)(*(signed char *)((t0 + 0x50)))));
            t2 = (0x50 + t0);
        }
        *(unsigned char *)((t2 + 0x0)) = ((*(signed char *)((t2 + 0x0))) - t1);
        return t1;
    }
    return FUN_0c016c42(0x1);
}

int FUN_0c017160(int a4, int a5, int a6, int a7)
{
    if ((*(signed char *)(((*(int *)0xC304BA0) + 0x4C))) == 0) {
        if ((*(signed char *)0xC304C24) == 0) {
            if (a4 == 0) {
                return FUN_0c016d00(a4, a5, a6, a7);
            }
            return 0x4C;
        }
        return FUN_0c0169cc(a4, a5, a6);
    }
    return FUN_0c017e68();
}

int FUN_0c017708(void)
{
    int qa0;
    int t104;
    int stk[10];
    int t135;
    int t13;
    int t15;
    int t107;
    int t58;
    float u109;
    int t182;
    int t181;
    int t180;
    int t123;
    int t75;
    int t74;
    int t41;
    int t35;
    int t172;
    int t167;
    int t71;
    int t57;
    int t39;
    int qe0;
    int t192;
    int t59;

    qa0 = 0xC304BA0;
    FUN_0c02b51c(1.0f, 1.0f);
    if ((*(signed char *)(((*(int *)qa0) + 0x4C))) == 0) {
        t13 = (*(int *)(((*(int *)qa0) + 0x1C)));
        t15 = ((unsigned char)(*(signed char *)(((*(int *)qa0) + 0x50))) + (unsigned char)(*(signed char *)(((*(int *)qa0) + 0x4D))));
    } else {
        t13 = (*(int *)(((*(int *)qa0) + 0x1C)));
        t15 = (unsigned char)(*(signed char *)(((*(int *)qa0) + 0x50)));
    }
    if ((int)(t15 - t13) < (int)0x2) {
        *(unsigned int *)(((*(int *)qa0) + 0x1C)) = ((*(int *)(((*(int *)qa0) + 0x1C))) + ((t15 - t13) - 6));
        if ((int)(*(int *)(((*(int *)qa0) + 0x1C))) < 0) {
            *(unsigned int *)(((*(int *)qa0) + 0x1C)) = 0x0;
        }
    } else {
        if ((int)(t15 - t13) > (int)0x1C) {
            *(unsigned int *)(((*(int *)qa0) + 0x1C)) = ((*(int *)(((*(int *)qa0) + 0x1C))) + ((t15 - t13) - 24));
        }
    }
    t35 = strlen(0xC304BA4);
    if ((int)t35 > (int)(*(int *)(((*(int *)qa0) + 0x1C)))) {
        t39 = *(int *)(((*(int *)qa0) + 0x1C));
        *(unsigned int *)(((int)stk + 0)) = t39;
        if ((int)t39 > 0) {
            t41 = FUN_0c016334(0xC304BA4, (*(int *)(((int)stk + 0))));
            if ((int)t41 < 0) {
                *(unsigned int *)(((*(int *)qa0) + 0x1C)) = ((*(int *)(((*(int *)qa0) + 0x1C))) - 1);
            }
        }
        strncpy((((int)stk + 0) + 0x8), (0xC304BA4 + (*(int *)(((*(int *)qa0) + 0x1C)))), 0x1E);
        (((struct o1E_uchar *)((((int)stk + 0) + 0x8)))->v) = 0x0;
        if (((*(int *)(((*(int *)qa0) + 0x8))) & 0xFFFFFF7F) == 2) {
            t57 = strlen((((int)stk + 0) + 0x8));
            if ((int)t57 > 0) {
                t58 = (0x0 + (((int)stk + 0) + 0x8));
                t59 = 0x0;
                for (;;) {
                    t59 = (t59 + 0x1);
                    *(unsigned char *)(t58) = 0x2A;
                    t58 = (t58 + 0x1);
                    if ((int)t59 >= (int)t57) {
                        break;
                    }
                }
            }
        }
        t71 = 0x10;
        if (((*(int *)(((*(int *)qa0) + 0x8))) & 128) != 0) {
            t71 = 0x7;
        }
        FUN_0c02b502(t71);
        t74 = strlen((((int)stk + 0) + 0x8));
        if (t74 == 30) {
            t75 = FUN_0c016334((((int)stk + 0) + 0x8), 0x1D);
            if (t75 == 2) {
                (((struct o1D_uchar *)((((int)stk + 0) + 0x8)))->v) = 0x0;
            }
        }
        FUN_0c02b3ba((((int)stk + 0) + 0x8), (float)(*(int *)(((*(int *)qa0) + 0xC))), (float)(*(int *)(((*(int *)qa0) + 0x10))), 630.200012f);
    }
    (((struct o4E_uchar *)((*(int *)qa0)))->v) = ((*(signed char *)(((*(int *)qa0) + 0x4E))) + 0x1);
    *(unsigned int *)(((int)stk + 4)) = 0xC304C24;
    if ((*(signed char *)0xC304C24) == 0) {
    } else {
        if ((int)((unsigned char)(*(signed char *)(((*(int *)qa0) + 0x50))) - (*(int *)(((*(int *)qa0) + 0x1C)))) < 0) {
            t104 = 0x0;
            t107 = ((*(int *)(((*(int *)qa0) + 0x1C))) - (unsigned char)(*(signed char *)(((*(int *)qa0) + 0x50))));
        } else {
            t104 = ((unsigned char)(*(signed char *)(((*(int *)qa0) + 0x50))) - (*(int *)(((*(int *)qa0) + 0x1C))));
            t107 = 0x0;
        }
        u109 = (((struct o0_float *)0xC017A70)->v);
        *(unsigned int *)(((int)stk + 0)) = (0x1E - t104);
        if ((*(signed char *)(((*(int *)qa0) + 0x4C))) == 0) {
            strncpy((((int)stk + 0) + 0x8), ((*(int *)(((int)stk + 4))) + t107), (*(int *)(((int)stk + 0))));
            *(unsigned char *)(((((int)stk + 0) + 0x8) + (*(int *)(((int)stk + 0))))) = 0x0;
            thunk_FUN_0c0167cc((((int)stk + 0) + 0x8), (((int)stk + 0) + 0x8));
            FUN_0c02b502(0x11);
            FUN_0c02b3ba((((int)stk + 0) + 0x8), (float)((((t104 << 1) + t104) << 2) + (*(int *)(((*(int *)qa0) + 0xC)))), (float)(*(int *)(((*(int *)qa0) + 0x10))), u109);
        } else {
            t123 = strlen(0xC304D24);
            t135 = t104;
            if ((int)t123 > (int)t107) {
                strncpy((((int)stk + 0) + 0x8), (0xC304D24 + t107), (*(int *)(((int)stk + 0))));
                *(unsigned char *)(((((int)stk + 0) + 0x8) + (*(int *)(((int)stk + 0))))) = 0x0;
                FUN_0c02b502(0x12);
                FUN_0c02b3ba((((int)stk + 0) + 0x8), (float)((((t104 << 1) + t104) << 2) + (*(int *)(((*(int *)qa0) + 0xC)))), (float)(*(int *)(((*(int *)qa0) + 0x10))), u109);
                t135 = (t104 + (strlen((((int)stk + 0) + 0x8))));
            }
            if ((int)t135 < (int)0x1E) {
                *(unsigned int *)(((int)stk + 0)) = (0x1E - t135);
                strncpy((((int)stk + 0) + 0x8), 0xC304DA4, (0x1E - t135));
                *(unsigned char *)(((((int)stk + 0) + 0x8) + (*(int *)(((int)stk + 0))))) = 0x0;
                FUN_0c02b502(0x11);
                FUN_0c02b3ba((((int)stk + 0) + 0x8), (float)((((t135 << 1) + t135) << 2) + (*(int *)(((*(int *)qa0) + 0xC)))), (float)(*(int *)(((*(int *)qa0) + 0x10))), u109);
            }
        }
    }
    t192 = 0x4C;
    if ((*(signed char *)(((*(int *)qa0) + 0x4C))) == 0) {
        t167 = *(signed char *)((0x4E + (*(int *)qa0)));
        t192 = (unsigned char)t167;
        if (((unsigned char)t167 & 32) == 0) {
            t172 = 0x0;
            if (((*(int *)(((*(int *)qa0) + 0x8))) & 128) != 0) {
                t172 = 0x7;
            }
            FUN_0c02b502(t172);
            FUN_0c02b51c(((((struct o18_float *)0xC017A70)->v)), 1.0f);
            t180 = *(signed char *)(((*(int *)qa0) + 0x50));
            t181 = *(signed char *)(((*(int *)qa0) + 0x4D));
            t182 = *(int *)(((*(int *)qa0) + 0x1C));
            qe0 = (((unsigned char)t180 + (unsigned char)t181) - t182);
            FUN_0c02b3ba(0xC1A5E18, (float)((((qe0 << 1) + qe0) << 2) + (*(int *)(((*(int *)qa0) + 0xC)))), (float)(*(int *)(((*(int *)qa0) + 0x10))), ((((struct o24_float *)0xC017A70)->v)));
            t192 = (FUN_0c02b51c(1.0f, 1.0f));
        }
    }
    return t192;
}

int FUN_0c017d4c(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = ((int (*)(int, int, int, int))(thunk_FUN_0c03f346))((*(int *)(((*(int *)0xC304BA0) + 0x2C))), a5, a6, a7);
    t0 = ((int (*)(int))(thunk_FUN_0c03f346))((*(int *)(((*(int *)0xC304BA0) + 0x30))));
    if ((*(int *)(((*(int *)0xC304BA0) + 0x34))) != 0) {
        t0 = ((int (*)(int))(thunk_FUN_0c03f346))((*(int *)(((*(int *)0xC304BA0) + 0x34))));
    }
    return (((int (*)(int))(thunk_FUN_0c03f346))((*(int *)(((*(int *)0xC304BA0) + 0x38)))));
}

int FUN_0c017e68(void)
{
    register int t0;

    t0 = *(int *)0xCA00020;
    return ((int (*)(void))(t0))();
}
