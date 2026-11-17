/* game/unsorted: functions 0C115120-0C115DBE, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_ushort { char p[0x8]; unsigned short v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
int FUN_0c037bf6(int);
int FUN_0c0385e0(int);
int FUN_0c03f444(int, int, int);
int FUN_0c058854(int, int, int, int);
int FUN_0c115292(int, int, int, float);
int FUN_0c1152fe(void);
int FUN_0c11534c(void);
int FUN_0c1153bc(void);
int FUN_0c11549a(void);
int FUN_0c11550e(void);
int FUN_0c115680(int, int, int, int);
int FUN_0c1159a4(int, int, int);
int FUN_0c11e1e0(int, int, int, int);
int math_atan2_angle16(int, float, float);
extern int FUN_0c187798();
void FUN_0c115120(int a4, int a5, int a6, int a7, float f4);
int FUN_0c115238(void);
int FUN_0c115278(void);
int FUN_0c1152e4(void);
int FUN_0c115322(void);
int FUN_0c1153a2(void);
int FUN_0c115490(void);
int FUN_0c1154f4(void);
int FUN_0c1155b6(void);
int FUN_0c1155d0(int a4, int a5, int a6, float f4);
int FUN_0c115976(void);
int FUN_0c115c38(int a4, int a5, int a6, int a7, float f4);
int FUN_0c115d96(void);

void FUN_0c115120(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;

    (((struct o1_uchar *)0xC535BAD)->v) = (*(signed char *)0xC535BAD);
    (((struct o0_uchar *)0xC535BAD)->v) = a4;
    t0 = *(signed char *)0xC535BAD;
    if ((unsigned int)t0 < (unsigned int)0xD) {
        switch ((t0 << 1)) {
            case 0:
            {
                return;
            }
            case 2:
            {
                *(volatile signed char *)0xC535BAE;
                
                FUN_0c115278();
    return;
            }
            case 4:
            {
                *(volatile signed char *)0xC535BAE;
                FUN_0c1152e4();
    return;
            }
            case 6:
            {
                *(volatile signed char *)0xC535BAE;
                
                FUN_0c115322();
    return;
            }
            case 8:
            {
                *(volatile signed char *)0xC535BAE;
                FUN_0c1153a2();
    return;
            }
            case 10:
            {
                *(volatile signed char *)0xC535BAE;
                FUN_0c115490();
    return;
            }
            case 12:
            {
                *(volatile signed char *)0xC535BAE;
                FUN_0c1154f4();
    return;
            }
            case 14:
            {
                *(volatile signed char *)0xC535BAE;
                FUN_0c1155b6();
    return;
            }
            case 16:
            {
                if ((*(signed char *)0xC535BAE) != 8) {
                    FUN_0c115976();
    return;
                }
                if ((int)(*(signed char *)0xC5324AC) >= (int)0x2) {
                    FUN_0c115976();
                    t0 = (((struct o0_int *)0xC5325B0)->v);
                    (((struct o98_float *)(t0))->v) = 5.0f;
                    (((struct o94_float *)(t0))->v) = 5.0f;
                    t0 = (((struct o4_int *)0xC5325B0)->v);
                    (((struct o98_float *)(t0))->v) = 5.0f;
                    (((struct o94_float *)(t0))->v) = 5.0f;
                }
                return;
            }
            case 18:
            {
                *(volatile signed char *)0xC535BAE;
                ((int (*)(int, int, int, int))(0xC115C10))(a4, 0xC532498, a6, a7);
    return;
            }
            default:
            {
                return;
            }
        }
    }
}

int FUN_0c115238(void)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)0xC5324AC;
    if (t0 != 0) {
        if (t0 != 99) {
            return t0;
        }
        *(unsigned char *)0xC5324AC = 0x0;
        return FUN_0c037bf6(0xC532498);
    }
    t0 = FUN_0c037bf6(0xC532498);
    t1 = (unsigned char)t0;
    if ((unsigned char)t0 != 0) {
        *(unsigned char *)0xC5324AC = 0x63;
        t1 = 0x14;
    }
    return t1;
}

int FUN_0c115278(void)
{
    *(unsigned char *)0xC5324AC = 0x0;
    return FUN_0c11e1e0(0xC532498, (*(signed char *)0xC532499), 0x6, 0x30);
}

int FUN_0c1152e4(void)
{
    *(unsigned char *)0xC5324AC = 0x0;
    return FUN_0c11e1e0(0xC532498, (*(signed char *)0xC532499), 0x6, 0x31);
}

int FUN_0c115322(void)
{
    *(unsigned char *)0xC5324AC = 0x0;
    return FUN_0c11e1e0(0xC532498, (*(signed char *)0xC532499), 0x6, 0x3F);
}

int FUN_0c1153a2(void)
{
    *(unsigned char *)0xC5324AC = 0x0;
    return FUN_0c11e1e0(0xC532498, (*(signed char *)0xC532499), 0x6, 0x34);
}

int FUN_0c115490(void)
{
    *(unsigned char *)0xC5324AC = 0x0;
    return 0x14;
}

int FUN_0c1154f4(void)
{
    *(unsigned char *)0xC5324AC = 0x0;
    return FUN_0c11e1e0(0xC532498, (*(signed char *)0xC532499), 0x6, 0x36);
}

int FUN_0c1155b6(void)
{
    *(unsigned char *)0xC5324AC = 0x0;
    return FUN_0c11e1e0(0xC532498, (*(signed char *)0xC532499), 0x6, 0x38);
}

int FUN_0c1155d0(int a4, int a5, int a6, float f4)
{
    int stk[4];
    register float u3;
    register float u4;
    register int t6;

    *(float *)(((int)stk + 0)) = f4;
    FUN_0c187798(a4, a5, a6);
    (((struct o4_float *)(((int)stk + 0)))->v) = (((((struct o0_float *)0xC473CA8)->v)) - ((((struct o28_float *)(a4))->v)));
    u3 = (((struct o30_float *)(a4))->v);
    u4 = (((struct o8_float *)0xC473CA8)->v);
    (((struct o8_float *)((((int)stk + 0) + 0x4)))->v) = (u4 - u3);
    t6 = math_atan2_angle16(0xC473CA8, ((((struct o4_float *)(((int)stk + 0)))->v)), (u4 - u3));
    return (FUN_0c058854((a4 + 0x38), t6, (*(int *)((a4 + 0x38))), ((int)(((((*(float *)(((int)stk + 0))) * ((((struct o0_float *)0xC115700)->v))) / ((((struct o4_float *)0xC115700)->v)))) + ((((struct o8_float *)0xC115700)->v))) & 0xFFFF)));
}

int FUN_0c115976(void)
{
    (((struct o0_uchar *)0xC5324AC)->v) = 0x0;
    (((struct o8_ushort *)0xC5324AC)->v) = 0x0;
    return FUN_0c11e1e0(0xC532498, (*(signed char *)0xC532499), 0x6, 0x3A);
}

int FUN_0c115c38(int a4, int a5, int a6, int a7, float f4)
{
    register int t0;

    t0 = *(signed char *)0xC535BAD;
    if ((unsigned int)(t0 - 1) < (unsigned int)0xC) {
        switch (((t0 - 1) << 1)) {
            case 0:
            {
                FUN_0c115238();
            }
                break;
            case 2:
            {
                FUN_0c115292(a4, a5, a6, f4);
            }
                break;
            case 4:
            {
                FUN_0c1152fe();
            }
                break;
            case 6:
            {
                FUN_0c11534c();
            }
                break;
            case 8:
            {
                FUN_0c1153bc();
            }
                break;
            case 10:
            {
                FUN_0c11549a();
            }
                break;
            case 12:
            {
                FUN_0c11550e();
            }
                break;
            case 14:
            {
                FUN_0c115680(a4, a5, a6, a7);
            }
                break;
            case 16:
            {
                FUN_0c1159a4(a4, a5, a6);
            }
                break;
            default:
            {
                FUN_0c115238();
            }
                break;
        }
    }
    return FUN_0c0385e0(0xC532498);
}

int FUN_0c115d96(void)
{
    register int t0;

    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
    if (t0 != 0) {
        *(unsigned char *)((t0 + 0x1)) = 0xFFFFFFFF;
        *(unsigned int *)((t0 + 0x4)) = 0xC115CC6;
        return t0;
    }
    return 0x0;
}
