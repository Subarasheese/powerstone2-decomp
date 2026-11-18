/* game/effect: functions 0C12FF1C-0C13035A, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o404_int { char p[0x404]; int v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o78_int { char p[0x78]; int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c059e60(int, int);
int FUN_0c07e2f4(int, int);
int FUN_0c13009a(int, int, int);
extern int math_atan2_angle16();
int math_vec3_accumulate(int, int);
int FUN_0c17c450(int);
int FUN_0c187798(int, int);
extern float _builtin_sqrtf(float);
int FUN_0c12ff1c(int a4, int a5, int a6, int a7, float f4, float f5);
int FUN_0c13022a(int a4, int a5, int a6, int a7);


int FUN_0c13022a(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        if ((*(signed char *)((a4 + 0x15))) == 0) {
            if (((*(signed char *)((a4 + 0x131))) == 0) && (t0 = (((struct o404_int *)(a4))->v), t0 == 0)) {
                t0 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
                if ((int)(short)(t0 + 0x1) >= (int)0xA) {
                    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                }
                math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
                t0 = (((struct oC4_int *)(a4))->v);
                (((struct o78_uint *)(t0))->v) = (((((struct o78_int *)(t0))->v)) + 0x1555);
                t0 = 0x78;
            } else {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t0 = 0x15;
            }
            t1 = t0;
        } else {
            t0 = ((*(int *)((a4 + 0x38))) + 0x8000);
            t2 = 0x0;
            for (;;) {
                t0 = (t0 + 0x2000);
                t3 = ((~(((~t2) + 0x1) & 0x1)) + 0x1);
                if ((int)t2 >= 0) {
                    t3 = (t2 & 0x1);
                }
                FUN_0c13009a(a4, t0, t3);
                t2 = (t2 + 0x1);
                if ((int)t2 >= (int)0x7) {
                    break;
                }
            }
            FUN_0c059e60((*(int *)((a4 + 0x10))), 0x21);
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            t1 = 0x14;
        }
        return t1;
    }
    t0 = *(short *)((a4 + 0x1C));
    t1 = ((~(((~t0) + 0x1) & 0x1)) + 0x1);
    if ((int)t0 >= 0) {
        t1 = (t0 & 0x1);
    }
    (((struct oA8_uchar *)(a4))->v) = t1;
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
    if ((int)(short)(t0 + 0x1) >= (int)0x14) {
        return FUN_0c03f346(a4, a5, a6, a7);
    }
    return (short)(t0 + 0x1);
}
