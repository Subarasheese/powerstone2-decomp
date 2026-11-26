/* Straight-line functions with calls and guards (batch gen_pp): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o378C_float { char p[0x378C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
extern int FUN_0c03f346();
float math_sin_angle16(int);
int nlVoidUnitVector(int);
int thunk_FUN_0c058310(int, int);
int FUN_0c15c1c0(int a4, int a5, int a6, int a7);

int FUN_0c15c1c0(int a4, int a5, int a6, int a7)
{
    int stk[6];
    register int t0;
    register int t4;
    register float u19;
    register float u20;
    register float u24;
    register float u25;
    register float u29;
    register float u30;
    register float t33;
    register float u35;
    register int t47;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 == 0) {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    if ((t0 == 0) || (t0 == 1)) {
        t4 = *(int *)((a4 + 0x10));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((int)stk + 0) + 0xC)) = *(struct mv3 *)((((short)(*(signed char *)((t4 + 0x1))) * (short)0x2F8) + 0xC5411C4)); }
        thunk_FUN_0c058310(((*(int *)((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC53256C))) + 0x28), ((int)stk + 0));
        *(float *)(((int)stk + 12)) = ((*(float *)(((int)stk + 12))) - (*(float *)(((int)stk + 0))));
        *(float *)(((int)stk + 16)) = ((*(float *)(((int)stk + 16))) - (*(float *)(((int)stk + 4))));
        *(float *)(((int)stk + 20)) = ((*(float *)(((int)stk + 20))) - (*(float *)(((int)stk + 8))));
        nlVoidUnitVector((((int)stk + 0) + 0xC));
        u19 = ((*(float *)(((int)stk + 12))) * ((((struct o378C_float *)(t4))->v)));
        u20 = (*(float *)(((int)stk + 0)));
        u20 = u20 + 150.0f * u19;
        (((struct o28_float *)(a4))->v) = u20;
        u24 = ((*(float *)(((int)stk + 20))) * ((((struct o378C_float *)(t4))->v)));
        u25 = (*(float *)(((int)stk + 8)));
        u25 = u25 + 150.0f * u24;
        (((struct o30_float *)(a4))->v) = u25;
        u29 = ((*(float *)(((int)stk + 16))) * ((((struct o378C_float *)(t4))->v)));
        u30 = (*(float *)(((int)stk + 4)));
        u30 = u30 + 150.0f * u29;
        (((struct o2C_float *)(a4))->v) = u30;
        *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x5);
        t33 = math_sin_angle16((int)(((float)(*(short *)((a4 + 0x1C))) * 65536.0f) / 360.0f));
        u35 = (((((struct o378C_float *)(t4))->v)) * 1.5f);
        u35 = u35 + 0.100000001f * t33;
        (((struct o48_float *)(a4))->v) = u35;
        (((struct o44_float *)(a4))->v) = u35;
        (((struct o40_float *)(a4))->v) = u35;
        if (((*(signed char *)((t4 + 0x3715))) == 17) && (t47 = *(signed char *)((t4 + 0x3741)), t47 == 5)) {
        } else {
            t47 = (((int (*)(int))(FUN_0c03f346))(a4));
        }
    } else {
        t47 = t0;
        if (t0 == 2) {
            t47 = (((int (*)(int, int, int, int))(FUN_0c03f346))(a4, a5, a6, a7));
        }
    }
    return t47;
}
