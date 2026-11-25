/* Straight-line functions with calls and guards (batch gen_xr): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o3850_int { char p[0x3850]; int v; };
struct o3850_uint { char p[0x3850]; unsigned int v; };
struct o8C_float { char p[0x8C]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
int FUN_0c037bf6(int);
int FUN_0c059e60(int, int);
int FUN_0c07d030(int, int);
int FUN_0c07d774(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c085d0c(int);
int FUN_0c14cff8(int, int);
int FUN_0c0b8874(int a4);

int FUN_0c0b8874(int a4)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;

    t1 = *(signed char *)((a4 + 0x15));
    if (t1 != 0) {
    } else {
        t2 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t2, 0x6, 0x3F, (t2), 0x6, 0x3F);
        t2 = *(int *)(((0x118 + a4) + 0x4));
        t3 = (((struct o118_int *)(a4))->v);
        (((struct oA0_float *)(t2))->v) = 1.0f;
        (((struct o9C_float *)(t2))->v) = 1.0f;
        (((struct oA0_float *)(t3))->v) = 1.0f;
        (((struct o9C_float *)(t3))->v) = 1.0f;
        t2 = *(int *)(((0x118 + a4) + 0x4));
        t3 = (((struct o118_int *)(a4))->v);
        (((struct o98_float *)(t2))->v) = 1.0f;
        (((struct o98_float *)(t3))->v) = 1.0f;
        (((struct o94_float *)(t2))->v) = 1.0f;
        (((struct o94_float *)(t3))->v) = 1.0f;
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
        *(unsigned short *)((a4 + 0x1E)) = 0x14;
        FUN_0c059e60(a4, 0xA);
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    }
    if ((t1 == 0) || (t1 == 1)) {
        FUN_0c037bf6(a4);
        if ((*(short *)((a4 + 0x1E))) != 0) {
            (((struct o3850_uint *)(a4))->v) = (unsigned short)((FUN_0c07d774(a4)) - (*(int *)((a4 + 0x38))));
            if ((((((struct o3850_int *)(a4))->v)) & 0x8000) != 0) {
                (((struct o3850_uint *)(a4))->v) = (((((struct o3850_int *)(a4))->v)) | 0xFFFF0000);
            }
            *(unsigned int *)((a4 + 0x38)) = ((*(int *)((a4 + 0x38))) + ((int)((int)((((struct o3850_int *)(a4))->v)) / (int)(*(short *)((a4 + 0x1E))))));
            *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) - 1);
        }
        if (!((*(float *)0xC0B89D8) > ((((struct o8C_float *)(((((struct o118_int *)(a4))->v))))->v))) && (t0 = *(short *)((a4 + 0x1C)), t0 == 0)) {
            FUN_0c07d030(a4, 0x1);
            FUN_0c059e60(a4, 0x22);
            FUN_0c14cff8(a4, 0x0);
            *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + 0x1);
        }
        t0 = FUN_0c037bf6(a4);
        if ((unsigned char)t0 != 0) {
            return FUN_0c085d0c(a4);
        }
        return (unsigned char)t0;
    } else {
        return t1;
    }
}
