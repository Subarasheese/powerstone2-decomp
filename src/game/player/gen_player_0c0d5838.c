/* game/player: functions 0C0D5838-0C0D5BE6, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o8_float { char p[0x8]; float v; };
float math_signed_sqrt(float);
float FUN_0c0e2340(int);
int FUN_0c0e2390(int, int, int);
int FUN_0c187798(int, int, int);
int FUN_0c0d5838(int a4, int a5, int a6, float f4, float f5);

int FUN_0c0d5838(int a4, int a5, int a6, float f4, float f5)
{
    int stk[6];
    register int t0;
    register float u3;
    register float u4;
    int t5;
    register int t6;
    register int t7;
    register int t9;
    register int t11;
    register int t12;
    register int t13;
    register float u14;
    register float u15;
    register float u16;
    register float u17;
    register float u18;
    register int t57;
    register int t58;
    register int t59;
    register int t60;
    register float u63;
    register float u54;
    register float u45;
    register float u69;
    register float u70;
    register float u73;
    register float t75;
    register float u76;
    register int t80;
    register int t8;
    register int t10;
    register float u20;
    register int t56;
    register float u61;
    register float u62;
    register float u52;
    register float u53;
    register float u43;
    register float u44;
    register float u34;
    register float u35;
    register float u36;

    t0 = ((int (*)(int, int, int))(FUN_0c187798))(a4, a5, a6);
    t7 = *(signed char *)((a4 + 0x2));
    u3 = *(float *)((0xC1C8188 + (((t7 << 1) + t7) << 2)));
    u4 = *(float *)(((int)stk + 20));
    *(float *)(((int)stk + 20)) = (u4 - u3);
    t5 = 0xC0D58A4;
    t6 = 0xC1C8188;
    t9 = t8;
    t11 = t10;
    t12 = 0xFFFFFFFF;
    t13 = 0x0;
    u14 = (u4 - u3);
    u15 = u3;
    u16 = f4;
    u17 = f5;
    u18 = 999999.0f;
    for (;;) {
        if ((int)t13 >= (int)0x4) {
            break;
        }
        t5 = 0x3714;
        t9 = (t13 * 0x3938);
        t9 = (t9 + 0xC532498);
        t7 = (*(signed char *)((t9 + t5)));
        t57 = t6;
        t58 = t7;
        t59 = t9;
        t60 = t11;
        u63 = u17;
        if ((t7 != 0) && (t5 = 0x160, u15 = 0.0f, u20 = *(float *)((t9 + t5)), u14 = u20, u14 > u15)) {
            t5 = 0xC;
            t11 = t9;
            u15 = (*(float *)((((int)stk + 0) + t5)));
            t11 = (t11 + 0x28);
            u14 = (*(float *)((t11 + 0x0)));
            u15 = (u15 + 550.0f);
            t57 = t6;
            t58 = t7;
            t59 = t9;
            t60 = t11;
            u54 = u17;
            if (u14 > u15) {
                t5 = 0x8;
                u16 = (*(float *)((t11 + t5)));
                t5 = 0x14;
                u17 = (*(float *)((((int)stk + 0) + t5)));
                u15 = u17;
                u15 = (u15 + -450.0f);
                t57 = t6;
                t58 = t7;
                t59 = t9;
                t60 = t11;
                u45 = u17;
                if (u16 > u15) {
                    t5 = 0xC0D59D0;
                    u14 = u17;
                    u15 = (*(float *)((t5 + 0x0)));
                    u14 = (u14 + u15);
                    if (u14 > u16) {
                        t9 = ((int)stk + 0);
                        t5 = (FUN_0c0e2390(t9, t11, (((int)stk + 0) + 0xC)));
                        t9 = ((int)stk + 0);
                        u16 = (FUN_0c0e2340(t9));
                        if (u18 > u16) {
                            t12 = t13;
                            u18 = u16;
                        }
                    } else {
                        t56 = t5;
                        t57 = t6;
                        t58 = t7;
                        t59 = t9;
                        t60 = t11;
                        u34 = u14;
                        u35 = u15;
                        u36 = u17;
                    }
                    u43 = u34;
                    u44 = u35;
                    u45 = u36;
                } else {
                    t56 = t5;
                    u43 = u14;
                    u44 = u15;
                }
                u52 = u43;
                u53 = u44;
                u54 = u45;
            } else {
                t56 = t5;
                u52 = u14;
                u53 = u15;
            }
            u61 = u52;
            u62 = u53;
            u63 = u54;
        } else {
            t56 = t5;
            u61 = u14;
            u62 = u15;
        }
        u14 = u61;
        u15 = u62;
        u17 = u63;
        t5 = t56;
        t6 = t57;
        t13 = (t13 + 0x1);
        t7 = t58;
        t9 = t59;
        t11 = t60;
    }
    if ((int)t12 >= 0) {
        FUN_0c0e2390((((int)stk + 0) + 0xC), (((t12 * 0x3938) + 0xC532498) + 0x28), (a4 + 0x28));
        *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 16))) + ((((struct o0_float *)0xC0D59D8)->v)));
        u69 = (((struct o4_float *)0xC0D59D8)->v);
        u70 = ((*(float *)(((int)stk + 16))) * (1.0f + 1.0f));
        u70 = -u70;
        u73 = (u70 + u69);
        if (!((u70 + u69) > 0.0f)) {
            u73 = ((((struct o8_float *)0xC0D59D8)->v));
        }
        t75 = math_signed_sqrt(u73);
        u76 = (((struct o10_float *)0xC0D59D8)->v);
        (((struct o4C_float *)(a4))->v) = ((*(float *)(((int)stk + 12))) / (t75 + u76));
        (((struct o54_float *)(a4))->v) = ((*(float *)(((int)stk + 20))) / (t75 + u76));
        (((struct o50_float *)(a4))->v) = ((((struct o14_float *)0xC0D59D8)->v));
    } else {
        t80 = ((int (*)(int, int))(FUN_0c187798))(t9, t11);
    }
    return 0x0;
}
