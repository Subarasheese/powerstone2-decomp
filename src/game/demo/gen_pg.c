/* Straight-line functions with calls and guards (batch gen_pg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o6C_float { char p[0x6C]; float v; };
struct o90_float { char p[0x90]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oEC_int { char p[0xEC]; int v; };
struct oF0_int { char p[0xF0]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int);
int FUN_0c1171f0(int);
extern int FUN_0c1175b6();
int nlAddVector3op(int, int, int);
int FUN_0c1176ce(int a4, int a5, int a6);

int FUN_0c1176ce(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0x1F;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        FUN_0c1171f0(a4);
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x3, 0xD, (*(int *)0xC4B410C));
        FUN_0c03744a(((((struct oC8_int *)(a4))->v)), 0xA, 0x2, (*(int *)0xC4B410C));
        FUN_0c03744a(((((struct oEC_int *)(a4))->v)), 0xB, 0x2, (*(int *)0xC4B410C));
        *(unsigned char *)((((((struct oEC_int *)(a4))->v)) + 0x0)) = 0x0;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oEC_int *)(a4))->v)) + 0x6C)) = *(struct mv3 *)(0xC291ACC); }
        FUN_0c03744a(((((struct oF0_int *)(a4))->v)), 0xB, 0x2, (*(int *)0xC4B410C));
        *(unsigned char *)((((((struct oF0_int *)(a4))->v)) + 0x0)) = 0x0;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oF0_int *)(a4))->v)) + 0x6C)) = *(struct mv3 *)(0xC291AD8); }
        t1 = (((struct oC4_int *)(a4))->v);
        (((struct o6C_float *)(t1))->v) = (((((struct o6C_float *)(t1))->v)) + 300.0f);
        (((struct o90_float *)(t1))->v) = -18.75f;
    }
    if ((t0 == 0) || (t0 == 1)) {
        t1 = (((struct oC4_int *)(a4))->v);
        (((struct o6C_float *)(t1))->v) = (((((struct o6C_float *)(t1))->v)) + ((((struct o90_float *)(t1))->v)));
        nlAddVector3op(((*(int *)(((0xC4 + a4) + 0x4))) + 0x6C), 0xC291AC0, (((((struct oC4_int *)(a4))->v)) + 0x6C));
        nlAddVector3op(((*(int *)(((0xC4 + a4) + 0x28))) + 0x6C), 0xC291ACC, (((((struct oC4_int *)(a4))->v)) + 0x6C));
        nlAddVector3op(((*(int *)(((0xC4 + a4) + 0x2C))) + 0x6C), 0xC291AD8, (((((struct oC4_int *)(a4))->v)) + 0x6C));
        t1 = ((int (*)(int))(FUN_0c1175b6))(a4);
        t1 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t1 + 0x1);
        t2 = (short)(t1 + 0x1);
        if ((int)(short)(t1 + 0x1) >= (int)0x10) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            *(unsigned short *)((a4 + 0x1C)) = 0x0;
            t2 = 0x0;
        }
        return t2;
    } else {
        if (t0 == 2) {
            return ((int (*)(int))(FUN_0c1175b6))(a4);
        }
        if (t0 == 10) {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            (((struct o90_float *)(((((struct oC4_int *)(a4))->v))))->v) = (*(float *)0xC1179C0);
        } else if (t0 == 11) {
        } else {
            t1 = t0;
            if (t0 == 99) {
                (((struct o14_uchar *)(a4))->v) = 0xA;
                t1 = 0x14;
            }
            return t1;
        }
        t0 = (((struct oC4_int *)(a4))->v);
        (((struct o6C_float *)(t0))->v) = (((((struct o6C_float *)(t0))->v)) + ((((struct o90_float *)(t0))->v)));
        nlAddVector3op(((*(int *)(((0xC4 + a4) + 0x4))) + 0x6C), 0xC291AC0, (((((struct oC4_int *)(a4))->v)) + 0x6C));
        nlAddVector3op(((*(int *)(((0xC4 + a4) + 0x28))) + 0x6C), 0xC291ACC, (((((struct oC4_int *)(a4))->v)) + 0x6C));
        nlAddVector3op(((*(int *)(((0xC4 + a4) + 0x2C))) + 0x6C), 0xC291AD8, (((((struct oC4_int *)(a4))->v)) + 0x6C));
        t0 = ((int (*)(int))(FUN_0c1175b6))(a4);
        t0 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
        if ((int)(short)(t0 + 0x1) >= (int)0x10) {
            return FUN_0c03f346(a4);
        }
        return (short)(t0 + 0x1);
    }
}
