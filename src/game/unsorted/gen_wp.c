/* Straight-line functions with calls and guards (batch gen_wp): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
int FUN_0c037bf6(int, int, int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c0ad470(int a4, int a5, int a6);

int FUN_0c0ad470(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;

    (((struct o28_float *)(a4))->v) = (((((struct o28_float *)(a4))->v)) + ((((struct o4C_float *)(a4))->v)));
    (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) - ((((struct o50_float *)(a4))->v)));
    (((struct o30_float *)(a4))->v) = (((((struct o30_float *)(a4))->v)) + ((((struct o54_float *)(a4))->v)));
    FUN_0c037bf6(a4, a5, a6);
    t0 = FUN_0c07ecc6(a4, 0x0, 0x0);
    t1 = 0;
    if (t0 == 0) {
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
        if ((short)(t0 - 1) == 0) {
            t1 = 1;
        }
    } else {
        t1 = 1;
    }
    if (t1) {
        if ((*(short *)((a4 + 0x1C))) != 0) {
            *(unsigned int *)((a4 + 0x34)) = 0x0;
            t1 = *(signed char *)((a4 + 0x1));
            FUN_0c07e79c(a4, t1, 0x1, 0x12, (t1), 0x1, 0x12);
            t1 = *(int *)(((0x118 + a4) + 0x4));
            t2 = (((struct o118_int *)(a4))->v);
            (((struct oA0_float *)(t1))->v) = 1.0f;
            (((struct o9C_float *)(t1))->v) = 1.0f;
            (((struct oA0_float *)(t2))->v) = 1.0f;
            (((struct o9C_float *)(t2))->v) = 1.0f;
            t1 = *(int *)(((0x118 + a4) + 0x4));
            t2 = (((struct o118_int *)(a4))->v);
            (((struct o98_float *)(t1))->v) = 1.0f;
            (((struct o98_float *)(t2))->v) = 1.0f;
            (((struct o94_float *)(t1))->v) = 1.0f;
            (((struct o94_float *)(t2))->v) = 1.0f;
            (((struct o17_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x17))) + 0x1);
        } else {
            (((struct o17_uchar *)(a4))->v) = 0x8;
        }
        t1 = 0x17;
    } else {
        t1 = (short)(t0 - 1);
    }
    return t1;
}
