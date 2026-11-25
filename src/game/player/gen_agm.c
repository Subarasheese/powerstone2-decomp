/* Straight-line functions with calls and guards (batch gen_agm): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
int FUN_0c03f346(int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c1392d8(int a4);

int FUN_0c1392d8(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;

    t0 = *(signed char *)((a4 + 0x1));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x28)); }
    u0 = math_sin_angle16((*(int *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x38))));
    u1 = ((((struct o28_float *)(a4))->v));
    u1 = u1 + ((((struct o0_float *)0xC2A1C4C)->v)) * u0;
    (((struct o28_float *)(a4))->v) = u1;
    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o4_float *)0xC2A1C4C)->v)));
    u0 = math_cos_angle16((*(int *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x38))));
    u1 = ((((struct o30_float *)(a4))->v));
    u1 = u1 + ((((struct o8_float *)0xC2A1C4C)->v)) * u0;
    (((struct o30_float *)(a4))->v) = u1;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x34)) = *(struct mv3 *)(((((short)t0 * (short)0x3938) + 0xC532498) + 0x34)); }
    if ((*(signed char *)((0xC535BAD + ((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938)))) != 26) {
        (((struct o14_uchar *)(a4))->v) = 0x2;
    }
    t0 = *(signed char *)((a4 + 0x14));
    if (t0 == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0xF;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x40)) = *(struct mv3 *)(0xC2A1C40); }
    }
    if ((t0 == 0) || (t0 == 1)) {
        t1 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t1 + 0x1);
        t2 = (short)(t1 + 0x1);
        if ((int)(short)(t1 + 0x1) > (int)0xA0) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t2 = 0x14;
        }
        return t2;
    } else {
        if (t0 != 2) {
            return t0;
        }
        return FUN_0c03f346(a4);
    }
}
