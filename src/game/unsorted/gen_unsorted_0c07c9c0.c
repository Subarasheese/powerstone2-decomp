/* game/unsorted: functions 0C07C9C0-0C07CAA4, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o14_float { char p[0x14]; float v; };
struct o168_float { char p[0x168]; float v; };
struct o178_float { char p[0x178]; float v; };
struct o17C_float { char p[0x17C]; float v; };
struct o180_float { char p[0x180]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o376C_int { char p[0x376C]; int v; };
struct o37C0_float { char p[0x37C0]; float v; };
struct o3842_short { char p[0x3842]; short v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c064f80(int);
float math_signed_sqrt(float);
int FUN_0c07c9c0(int a4);
void FUN_0c07ca6a(int a4);

int FUN_0c07c9c0(int a4)
{
    register int t1;
    register int t2;
    register int t6;
    register float u0;
    register float u1;
    register float u2;

    t1 = 0x1;
    if (((((struct o0_float *)0xC07CAB4)->v)) > ((((struct o17C_float *)(a4))->v))) {
    } else {
        t2 = FUN_0c064f80(a4);
        t1 = 0x0;
        if ((t2 == 0) && (t1 = *(signed char *)((a4 + 0x3715)), t1 != 38)) {
            t1 = 0x0;
            if (((((struct o37C0_float *)(a4))->v)) > (((((struct o168_float *)(a4))->v)) + ((((struct o8_float *)0xC07CAB4)->v)))) {
                t2 = 0x0;
                if (((((struct o2C_float *)(a4))->v)) > (((((struct o37C0_float *)(a4))->v)) + ((((struct oC_float *)0xC07CAB4)->v)))) {
                    t2 = 0x0;
                    if (((((struct o37C0_float *)(a4))->v)) > ((((struct o2C_float *)(a4))->v))) {
                        t2 = (((struct o3842_short *)(a4))->v);
                        u0 = (((struct o28_float *)(a4))->v);
                        t6 = *(short *)(((0x3842 + a4) + 0x2));
                        u1 = (((struct o30_float *)(a4))->v);
                        u2 = (((float)t6 - u1) * ((float)t6 - u1));
                        u2 = u2 + (((float)t2 - u0)) * (((float)t2 - u0));
                        u0 = math_signed_sqrt(u2);
                        t2 = 0x0;
                        if (!(u0 > ((((struct o14_float *)0xC07CAB4)->v)))) {
                            t2 = 0x2;
                        }
                    }
                }
                t1 = t2;
            }
        }
    }
    return t1;
}

void FUN_0c07ca6a(int a4)
{
    register int t1;
    float u2;

    if ((((((struct o376C_int *)(a4))->v)) == 0) && ((t1 = *(signed char *)((a4 + 0x3715)), t1 == 5) && (u2 = (((struct o17C_float *)(a4))->v), -2.0f > u2))) {
        if (((((struct o178_float *)(a4))->v)) == 0.0f) {
            if (((((struct o180_float *)(a4))->v)) == 0.0f) {
                return;
            }
            return;
        }
        return;
    }
}
