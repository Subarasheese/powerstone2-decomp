/* game/unsorted: functions 0C0CAFC0-0C0CB1CA, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o168_float { char p[0x168]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o50_float { char p[0x50]; float v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c0cb12e(int a4, int a5, int a6, int a7);

int FUN_0c0cb12e(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;

    t1 = *(signed char *)((a4 + 0x1));
    (((struct o28_float *)(a4))->v) = ((((struct o28_float *)((((short)t1 * (short)0x3938) + 0xC532498)))->v));
    (((struct o30_float *)(a4))->v) = ((((struct o30_float *)((((short)t1 * (short)0x3938) + 0xC532498)))->v));
    t2 = *(signed char *)((a4 + 0x14));
    if (t2 != 0) {
        if (t2 != 1) {
        } else {
            t2 = 0;
            if (((((struct o168_float *)(a4))->v)) > (((((struct o50_float *)(a4))->v)) + 1.0f)) {
                u0 = (((struct o50_float *)(a4))->v);
                u1 = (((struct o168_float *)(a4))->v);
                u2 = _builtin_fabsf((u1 - u0));
                if (4.0f > _builtin_fabsf((u1 - u0))) {
                    u3 = (((struct o50_float *)(a4))->v);
                    u4 = (((struct o168_float *)(a4))->v);
                    u5 = (((struct o2C_float *)((((short)t1 * (short)0x3938) + 0xC532498)))->v);
                    (((struct o2C_float *)((((short)t1 * (short)0x3938) + 0xC532498)))->v) = (u5 + _builtin_fabsf((u4 - u3)));
                    _builtin_fabsf((u4 - u3));
                    u2 = (u5 + _builtin_fabsf((u4 - u3)));
                }
                t2 = ((4.0f > _builtin_fabsf((u1 - u0))));
            } else {
                t2 = (0);
            }
            (((struct o50_float *)(a4))->v) = ((((struct o168_float *)(a4))->v));
        }
    } else {
        u0 = (((struct o2C_float *)((((short)t1 * (short)0x3938) + 0xC532498)))->v);
        (((struct o50_float *)(a4))->v) = u0;
        (((struct o2C_float *)(a4))->v) = u0;
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    }
    if (((*(signed char *)(((((short)t1 * (short)0x3938) + 0xC532498) + 0x3714))) != 0) && (t0 = *(signed char *)(((((short)t1 * (short)0x3938) + 0xC532498) + 0x3715)), t0 == 41)) {
        return t0;
    }
    return FUN_0c03f346(a4, (((short)t1 * (short)0x3938) + 0xC532498), a6, a7);
}
