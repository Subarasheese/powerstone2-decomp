/* game/hit: functions 0C05FFA4-0C062660, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o10_float { char p[0x10]; float v; };
struct o135_uchar { char p[0x135]; unsigned char v; };
struct o14_float { char p[0x14]; float v; };
struct o17C_float { char p[0x17C]; float v; };
struct o187_uchar { char p[0x187]; unsigned char v; };
struct o24_int { char p[0x24]; int v; };
struct o2C_float { char p[0x2C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct oC_float { char p[0xC]; float v; };
float math_interval_overlap(float, float, float, float);
int FUN_0c060290(int, int, float);
int FUN_0c060376(int, int);
int FUN_0c060454(int, int);
int FUN_0c060a9c(int);
int FUN_0c060bc2(void);
int FUN_0c060bd8(void);
int FUN_0c060c80(int, int, int);
int FUN_0c0610fa(int);
int FUN_0c061222(int, int);
int FUN_0c061284(int, int);
int FUN_0c0612cc(int, int);
int FUN_0c06130a(int, int, int, int);
int FUN_0c061416(int, int, int, int);
int FUN_0c06151a(int, int, int, int, float);
int FUN_0c0641ca(int, int);
int FUN_0c06475c(int, int, float);
int FUN_0c064cbc(int, int, int);
float math_signed_sqrt(float);
int FUN_0c18778c(int, int);
int FUN_0c187798(int, int, int);
int FUN_0c060428(int a4, int a5, float f4);
int FUN_0c060c00(void);
int FUN_0c060d74(int a4, int a5, int a6);
int FUN_0c060daa(int a4, int a5);
int FUN_0c06115c(int a4);
int FUN_0c0622ee(int a4, int a5, int a6, int a7);

int FUN_0c060428(int a4, int a5, float f4)
{
    register float u5;
    float u6;

    if ((*(signed char *)((a5 + 0x2))) != -1) {
        return FUN_0c060290(a4, a5, f4);
    }
    if ((((((struct o40_float *)(a4))->v)) == 1.0f) && ((u5 = (((struct o44_float *)(a4))->v), u5 == 1.0f) && (u6 = (((struct o48_float *)(a4))->v), u6 == 1.0f))) {
        return 0x48;
    }
    return FUN_0c060376(a4, a5);
}

int FUN_0c060c00(void)
{
    FUN_0c0641ca((*(signed char *)0xC542237), (*(signed char *)0xC54223C));
    FUN_0c060bd8();
    FUN_0c060a9c(((((struct o8_int *)0xC532434)->v)));
    FUN_0c060a9c(((((struct o4_int *)0xC532434)->v)));
    FUN_0c060a9c(((((struct o24_int *)0xC532434)->v)));
    FUN_0c060a9c(((((struct o0_int *)0xC532434)->v)));
    return FUN_0c060bc2();
}



int FUN_0c06115c(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;

    t0 = FUN_0c0610fa((a4 + 0x28));
    t1 = t0;
    t2 = 0xC4F90AC;
    t3 = t0;
    t4 = 0x0;
    t5 = ((t0 * 0x960) + 0xC4F6B2C);
    for (;;) {
        if ((int)t4 >= (int)(*(int *)((((t0 << 2) + 0xC4F90AC) + 0x0)))) {
            break;
        }
        t1 = 0x2C;
        u0 = (*(float *)((a4 + t1)));
        t1 = 0x8;
        u1 = (*(float *)((t5 + t1)));
        if (!(u1 > u0)) {
            if ((*(int *)((t5 + 0x0))) == 0) {
                t3 = a4;
                t1 = (FUN_0c064cbc(t3, 0x0, (*(int *)((t5 + 0x4)))));
            } else {
                t1 = 0x128;
                t2 = (*(short *)(((*(int *)((t5 + 0x0))) + t1)));
                if ((t2 & 0xF0) != 0) {
                    t2 = 0xC064CBC;
                    t3 = a4;
                    t1 = (FUN_0c064cbc(t3, (*(int *)((t5 + 0x0))), (*(int *)((t5 + 0x4)))));
                } else {
                    t6 = t2;
                    t7 = t3;
                    u2 = u1;
                    u3 = u0;
                }
                t2 = t6;
                t6 = t7;
                u4 = u2;
                u2 = u3;
            }
            u1 = u4;
            u0 = u2;
            t4 = (t4 + 0x1);
            t3 = t6;
            t5 = (t5 + 0xC);
            continue;
        }
        break;
    }
    return t1;
}




