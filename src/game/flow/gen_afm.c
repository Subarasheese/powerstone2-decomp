/* Straight-line functions with calls and guards (batch gen_afm): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct oC4_int { char p[0xC4]; int v; };
int nlRand(void);
int FUN_0c120d12(int a4);

int FUN_0c120d12(int a4)
{
    register int t0;
    register int t1;
    register float u0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t1 = (((struct oC4_int *)(a4))->v);
        *(unsigned short *)((t1 + 0x6)) = ((*(short *)((t1 + 0x6))) | 0x200);
    }
    t1 = t0;
    if ((t0 == 0) || (t0 == 1)) {
        u0 = *(float *)0xC120E10;
        (((struct o18_float *)(((((struct oC4_int *)(a4))->v))))->v) = ((float)((int)((int)(nlRand()) % (int)0xA)) * u0);
        (((struct o1C_float *)(((((struct oC4_int *)(a4))->v))))->v) = ((float)((int)((int)(nlRand()) % (int)0xA)) * u0);
        t0 = (((struct oC4_int *)(a4))->v);
        t1 = (int)((int)(nlRand()) % (int)0xA);
        (((struct o20_float *)(t0))->v) = ((float)t1 * u0);
    }
    return t1;
}
