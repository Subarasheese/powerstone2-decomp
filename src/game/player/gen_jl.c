/* Straight-line functions with calls and guards (batch gen_jl): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o376C_int { char p[0x376C]; int v; };
struct o3770_int { char p[0x3770]; int v; };
struct o46C_int { char p[0x46C]; int v; };
struct o8C_float { char p[0x8C]; float v; };
int FUN_0c085d0c(int, int, int, int);
int FUN_0c09e3fc(int);
int FUN_0c09e5a0(int, int, int);
int FUN_0c09e6f0(int);
int FUN_0c09e84c(int);
int FUN_0c0b825e(int);
int FUN_0c0b8370(int);
int FUN_0c0b8416(int);
int FUN_0c15b4fa(int, int, int, int, int, int, int, int, int);
int FUN_0c17594c(void);
int FUN_0c176890(void);
int FUN_0c08c960(int a4);
int FUN_0c09e8de(int a4, int a5, int a6, int a7);
int FUN_0c0b8438(int a4, int a5, int a6);
int FUN_0c176996(int a4, int a5);


int FUN_0c09e8de(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;

    if ((((int)(*(signed char *)((a4 + 0x16))) >= (int)0x3) && (t0 = *(short *)((a4 + 0x1C)), t0 != 1)) || (t1 = (((struct o3770_int *)(a4))->v), t1 != 0)) {
        t0 = *(signed char *)((a4 + 0x16));
        if (t0 != 0) {
            if (t0 != 1) {
                if (t0 != 2) {
                    if (t0 != 3) {
                        return t0;
                    }
                    return FUN_0c09e84c(a4);
                }
                return FUN_0c09e6f0(a4);
            }
            return FUN_0c09e5a0(a4, a5, a6);
        }
        return FUN_0c09e3fc(a4);
    }
    return FUN_0c085d0c(a4, a5, a6, a7);
}

int FUN_0c0b8438(int a4, int a5, int a6)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            return FUN_0c0b8416(a4);
        }
        return FUN_0c0b8370(a4);
    }
    return FUN_0c0b825e(a4);
}

int FUN_0c176996(int a4, int a5)
{
    register int t0;

    t0 = *(signed char *)0xC541F44;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            return (unsigned char)t0;
        }
        return FUN_0c176890();
    }
    return FUN_0c17594c();
}
