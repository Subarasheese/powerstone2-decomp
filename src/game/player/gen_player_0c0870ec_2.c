/* game/player: functions 0C0870EC-0C087610, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o17_uchar { char p[0x17]; unsigned char v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o380C_float { char p[0x380C]; float v; };
struct o3810_float { char p[0x3810]; float v; };
struct o3814_float { char p[0x3814]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
int FUN_0c037bf6(int);
int FUN_0c0871fa(int);
int FUN_0c0874f6(int);
float math_signed_sqrt(float);
int math_atan_angle16(float);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c087318(int a4);
int FUN_0c087512(int a4);

int FUN_0c087318(int a4)
{
    register int t0;
    register int t1;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;

    FUN_0c037bf6(a4);
    t0 = *(short *)((a4 + 0x1E));
    *(unsigned short *)((a4 + 0x1E)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((short)(t0 - 1) == 0) {
        u0 = (((struct o3810_float *)(a4))->v);
        u1 = (((struct o2C_float *)(a4))->v);
        if (((*(signed char *)((a4 + 0x3731))) != 0) && !(((u1 - u0) + -50.0f) > 0.0f)) {
            (((struct o50_float *)(a4))->v) = -17.5f;
            (((struct o5C_float *)(a4))->v) = 0.0f;
            (((struct o4C_float *)(a4))->v) = ((math_sin_angle16((*(int *)((a4 + 0x38))))) * 17.5f);
            (((struct o54_float *)(a4))->v) = ((math_cos_angle16((*(int *)((a4 + 0x38))))) * 17.5f);
        } else {
            u2 = (((struct o380C_float *)(a4))->v);
            u3 = (((struct o28_float *)(a4))->v);
            u4 = (((struct o3814_float *)(a4))->v);
            u5 = (((struct o30_float *)(a4))->v);
            u6 = ((u5 - u4) * (u5 - u4));
            u6 = u6 + ((u3 - u2)) * ((u3 - u2));
            u2 = math_signed_sqrt(u6);
            u3 = u2;
            if (u2 == 0.0f) {
                u3 = 9.99999975e-06f;
            }
            t0 = math_atan_angle16((((u1 - u0) + -50.0f) / u3));
            *(unsigned int *)((a4 + 0x34)) = t0;
            if ((int)t0 < (int)0x2000) {
                *(unsigned int *)((a4 + 0x34)) = 0x2000;
            }
            if ((int)(*(int *)((a4 + 0x34))) > (int)0x31C7) {
                *(unsigned int *)((a4 + 0x34)) = 0x31C7;
            }
            (((struct o50_float *)(a4))->v) = (-((math_sin_angle16((*(int *)((a4 + 0x34))))) * 24.7000008f));
            u0 = math_sin_angle16((*(int *)((a4 + 0x38))));
            u1 = (u0 * (math_cos_angle16((*(int *)((a4 + 0x34))))));
            (((struct o4C_float *)(a4))->v) = (u1 * 24.7000008f);
            u0 = math_cos_angle16((*(int *)((a4 + 0x38))));
            u1 = (u0 * (math_cos_angle16((*(int *)((a4 + 0x34))))));
            (((struct o54_float *)(a4))->v) = (u1 * 24.7000008f);
            (((struct o60_float *)(a4))->v) = 0.0f;
            (((struct o5C_float *)(a4))->v) = 0.0f;
            (((struct o58_float *)(a4))->v) = 0.0f;
            *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) - 0x1555);
        }
        (((struct o22_ushort *)(a4))->v) = 0xB4;
        (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
        t1 = 0x17;
    }
    return t1;
}

int FUN_0c087512(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x16));
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        return FUN_0c0874f6(a4);
    }
    return FUN_0c0871fa(a4);
}
