/* game/unsorted: functions 0C16638C-0C1670B8, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o10_int { char p[0x10]; int v; };
struct o14_int { char p[0x14]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o8_int { char p[0x8]; int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
float math_cos_angle16(int);
int FUN_0c179ac0(void);
float math_sin_angle16(int);
int FUN_0c18778c(int);
int FUN_0c187798(int);
int FUN_0c16638c(int a4, int a5, int a6, int a7);
int FUN_0c166772(int a4, int a5, int a6, int a7);
int FUN_0c16695a(int a4, int a5, int a6);
int FUN_0c1669c8(int a4, int a5, int a6, int a7);




int FUN_0c1669c8(int a4, int a5, int a6, int a7)
{
    int stk[10];
    register float u1;
    register float u2;
    register float u3;
    register int t4;
    register int t5;
    register int t12;
    register int t18;
    register float u25;
    register float t30;
    register int t33;
    register int t42;
    register int t48;
    register float u6;
    register float u7;
    register float u38;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        *(unsigned int *)(((int)stk + 0)) = 0xC2A3430;
        *(unsigned int *)(((int)stk + 4)) = 0xC2A342C;
        *(unsigned int *)(((int)stk + 8)) = 0xC2A3424;
        *(unsigned int *)(((int)stk + 12)) = 0xC2A3420;
        u1 = (((struct o0_float *)0xC166B48)->v);
        u2 = (((struct o4_float *)0xC166B48)->v);
        u3 = (((struct oC_float *)0xC166B48)->v);
        t4 = 0xC166B54;
        t5 = 0x0;
        for (;;) {
            if ((int)t5 >= (int)(*(int *)(((*(int *)(((int)stk + 0))) + 0x0)))) {
                break;
            }
            t4 = (FUN_0c179ac0());
            t12 = t4;
            t4 = ((((struct o0_int *)0xC2A3428)->v));
            t4 = ((int)((int)t12 % (int)t4));
            u6 = (float)t4;
            u6 = (u6 * u3);
            u6 = (u6 / (float)((((struct o0_int *)0xC2A3428)->v)));
            *(unsigned int *)(((((int)stk + 0) + 0x10) + 0x0)) = (int)u6;
            t4 = (FUN_0c179ac0());
            t18 = t4;
            t4 = (*(int *)(((*(int *)(((int)stk + 4))) + 0x0)));
            t4 = ((int)((int)t18 % (int)t4));
            u6 = (float)t4;
            u7 = (*(float *)(((*(int *)(((int)stk + 12))) + 0x0)));
            u25 = u7;
            u25 = u25 + (*(float *)(((*(int *)(((int)stk + 8))) + 0x0))) * u6;
            u7 = u25;
            u6 = (float)(*(int *)(((((int)stk + 0) + 0x10) + 0x0)));
            u6 = ((u6 * u1) / u3);
            u6 = (u6 + u2);
            t4 = 0x1C;
            *(float *)((((int)stk + 0) + t4)) = ((math_cos_angle16(((int)u6 & 0xFFFF))) * u7);
            u6 = (float)(*(int *)(((((int)stk + 0) + 0x10) + 0x0)));
            u6 = ((u6 * u1) / u3);
            u6 = (u6 + u2);
            t30 = math_sin_angle16(((int)u6 & 0xFFFF));
            t4 = 0x20;
            u6 = 0.0f;
            *(float *)((((int)stk + 0) + t4)) = (t30 * u7);
            t4 = 0x24;
            *(float *)((((int)stk + 0) + t4)) = u6;
            t4 = (*(short *)((a4 + 0x1E)));
            t33 = t4;
            t4 = ((((struct oC_int *)0xC2A3428)->v));
            t4 = ((int)((int)t33 % (int)t4));
            if (t4 == 0) {
                t4 = (*(signed char *)((a4 + 0x1)));
                t4 = (FUN_0c16695a(t4, (a4 + 0x28), (((int)stk + 0) + 0x1C)));
            } else {
                u38 = u6;
            }
            u6 = u38;
            t4 = (*(short *)((a4 + 0x1E)));
            t5 = (t5 + 0x1);
            t4 = (t4 + 0x1);
            *(unsigned short *)((a4 + 0x1E)) = t4;
        }
        t42 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t42 + 0x1);
        t48 = (short)(t42 + 0x1);
        if ((int)(short)(t42 + 0x1) > (int)0x3C) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t48 = 0x14;
        }
    } else {
        t48 = (FUN_0c03f346(a4, a5, a6, a7));
    }
    return t48;
}



