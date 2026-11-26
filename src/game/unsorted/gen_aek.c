/* Straight-line functions with calls and guards (batch gen_aek): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o2C_float { char p[0x2C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
extern int FUN_0c03f346();
int FUN_0c059e60(int, int);
int FUN_0c064f02(int);
int FUN_0c12d4cc(int, int);
int nlRand(void);
int FUN_0c12da56(int a4, int a5, int a6, int a7);

int FUN_0c12da56(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(int *)((a4 + 0x10));
    if ((*(signed char *)((a4 + 0x14))) == 0) {
        if (!(((((struct o2C_float *)(a4))->v)) > ((((struct o58_float *)(a4))->v)))) {
            (((struct o12E_ushort *)(a4))->v) = 0xF0;
        }
        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + ((((struct o50_float *)(a4))->v)));
        (((struct o50_float *)(a4))->v) = (((((struct o50_float *)(a4))->v)) + ((((struct o5C_float *)(a4))->v)));
        t1 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
        if ((short)(t1 - 1) == 0) {
            (((struct o14_uchar *)(a4))->v) = 0x1;
            return 0x14;
        }
        if ((*(signed char *)((a4 + 0x131))) == 0) {
            t1 = FUN_0c064f02(a4);
            if (t1 != 0) {
            } else {
                return t1;
            }
        }
        FUN_0c12d4cc(a4, 0x0);
        t1 = nlRand();
        t2 = (t1 % 0x2);
        if (t2 == 0) {
            FUN_0c059e60(t0, 0x22);
        }
        return ((int (*)(int))(FUN_0c03f346))(a4);
    }
    return ((int (*)(int, int, int, int))(FUN_0c03f346))(a4, a5, a6, a7);
}
