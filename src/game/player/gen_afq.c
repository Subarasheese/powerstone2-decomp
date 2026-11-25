/* Straight-line functions with calls and guards (batch gen_afq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o160_float { char p[0x160]; float v; };
struct o24_short { char p[0x24]; short v; };
int FUN_0c07d15c(int a4);

int FUN_0c07d15c(int a4)
{
    register int t2;
    register int t3;
    register int t4;
    register int t8;
    register int t9;
    register int t10;
    register int t11;

    for (;;) {
        if ((int)0x0 >= (int)(*(signed char *)((a4 + 0x136)))) {
            return 0x0;
        }
        t2 = 0x0;
        t3 = 0x0;
        t4 = 0x0;
        for (;;) {
            if (((((struct o160_float *)(((t2 * 0x3938) + 0xC532498)))->v)) > 0.0f) {
                if (((*(short *)((((0x138 + a4) + t3) + 0x0))) == ((((struct o24_short *)(((t2 * 0x3938) + 0xC532498)))->v))) && ((t8 = *(signed char *)((((t2 * 0x3938) + 0xC532498) + 0x3721)), (unsigned char)t8 != 15) && (((unsigned char)t8 != 37) && (((unsigned char)t8 != 63) && ((t9 = *(signed char *)((((t2 * 0x3938) + 0xC532498) + 0x3757)), t9 == 0) && ((t10 = *(signed char *)0xC54235E, t10 == 0) || (t11 = *(signed char *)0xC542363, t2 != t11))))))) {
                    break;
                }
            }
            t2 = (t2 + 0x1);
            if ((int)t2 >= (int)0x4) {
                t4 = (t4 + 0x1);
                if ((int)t4 >= (int)(*(signed char *)((a4 + 0x136)))) {
                    return 0x0;
                }
                t3 = t4;
                t3 = (t3 << 1);
                t2 = 0x0;
                continue;
            }
        }
        break;
    }
    return ((*(signed char *)((((t2 * 0x3938) + 0xC532498) + 0x1))) + 0x1);
}
