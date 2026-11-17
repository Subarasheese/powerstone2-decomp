/* game/ai: functions 0C0BBAD0-0C0BBBC0, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o160_float { char p[0x160]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o30_float { char p[0x30]; float v; };
float math_signed_sqrt(float);
int FUN_0c0bbad0(int a4);
int FUN_0c0bbb16(int a4);

int FUN_0c0bbad0(int a4)
{
    register int t3;
    register int t4;
    int t0;
    register int t1;
    register int t2;
    register float u5;
    register float u6;
    register int t7;
    register float u8;
    register int t9;
    register int t10;

    t3 = 0xC532498;
    t4 = 0x0;
    for (;;) {
        if ((t3 != a4) && ((t0 = 0x3714, t7 = *(signed char *)((t3 + t0)), t1 = t7, t1 != 0) && ((t0 = 0x160, u6 = 0.0f, u8 = *(float *)((t3 + t0)), u5 = u8, u5 > u6) && ((t0 = 0x134, t9 = *(signed char *)((t3 + t0)), t1 = t9, t1 != 0) && (t0 = 0x3760, t10 = *(int *)((t3 + t0)), t2 = t10, t2 == a4))))) {
            t4 = t3;
        }
        t3 = (t3 + 0x3938);
        if ((unsigned int)t3 >= (unsigned int)0xC540978) {
            break;
        }
    }
    return t4;
}

int FUN_0c0bbb16(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t10;
    float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;

    t3 = 0xE4E0;
    t4 = 0xC540978;
    t5 = 0x0;
    t6 = 0x2710;
    t7 = 0xC532498;
    for (;;) {
        t8 = t0;
        if ((t7 != a4) && ((t1 = *(signed char *)((t7 + 0x3714)), t2 = t1, t2 != 0) && (u0 = (((struct o160_float *)(t7))->v), u0 > 0.0f))) {
            t3 = (unsigned short)t6;
            u1 = ((((struct o30_float *)(t7))->v));
            u1 = (u1 - ((((struct o30_float *)(a4))->v)));
            u2 = ((((struct o28_float *)(t7))->v));
            u2 = (u2 - ((((struct o28_float *)(a4))->v)));
            u3 = u2;
            u4 = (u1 * u1);
            u4 = u4 + u3 * u2;
            u1 = u4;
            u3 = (math_signed_sqrt(u1));
            t0 = (t3);
            t2 = (int)u3;
            t2 = (unsigned short)t2;
            if ((int)t0 > (int)t2) {
                u3 = (math_signed_sqrt(u1));
                t5 = t7;
                t6 = (int)u3;
            } else {
                t9 = t0;
            }
            t8 = t9;
        } else {
            t9 = t3;
            t10 = t4;
        }
        t0 = t8;
        t2 = 0xC540978;
        t3 = t9;
        t4 = t10;
        t7 = (t7 + 0x3938);
        if ((unsigned int)t7 >= (unsigned int)t2) {
            break;
        }
    }
    return t5;
}
