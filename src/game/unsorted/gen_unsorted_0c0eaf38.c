/* game/unsorted: functions 0C0EAF38-0C0EB08C, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
int FUN_0c03f346(int, int, int, int);
int math_vec3_accumulate(int, int);
int FUN_0c0eaf38(int a4, int a5, int a6, int a7, float f4);

int FUN_0c0eaf38(int a4, int a5, int a6, int a7, float f4)
{
    int t0;
    register int t1;
    register float u0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        *(unsigned short *)((a4 + 0x1C)) = 0x5A;
        t0 = *(signed char *)((a4 + 0x2));
        switch (t0) {
        case 0:
            (((struct o4C_float *)(a4))->v) = (1.0f + 1.0f);
            (((struct o54_float *)(a4))->v) = (1.0f + 1.0f);
            (((struct o50_float *)(a4))->v) = 15.0f;
            (((struct o5C_float *)(a4))->v) = -1.0f;
            break;
        case 1:
            (((struct o4C_float *)(a4))->v) = (1.0f + 1.0f);
            (((struct o54_float *)(a4))->v) = -2.0f;
            (((struct o50_float *)(a4))->v) = 15.0f;
            (((struct o5C_float *)(a4))->v) = -1.0f;
            break;
        case 2:
            (((struct o4C_float *)(a4))->v) = (1.0f + 1.0f);
            (((struct o50_float *)(a4))->v) = (1.0f + 1.0f);
            (((struct o50_float *)(a4))->v) = 15.0f;
            (((struct o5C_float *)(a4))->v) = -1.0f;
            break;
        default:
            if ((t0 != 4) && (t0 != 5)) {
                if ((t0 == 3) || ((t0 == 6) || (t0 == 7))) {
                    (((struct o4C_float *)(a4))->v) = 1.0f;
                }
            } else {
                (((struct o4C_float *)(a4))->v) = (1.0f + 1.0f);
            }
            break;
        }
    }
    t0 = *(signed char *)((a4 + 0x2));
    if ((t0 != 0) && ((t0 != 1) && (t0 != 2))) {
        if ((t0 != 4) && (t0 != 5)) {
            if ((t0 == 3) || ((t0 == 6) || (t0 == 7))) {
                if ((int)(*(int *)((a4 + 0x3C))) >= (int)0xFFFFC000) {
                    *(unsigned int *)((a4 + 0x3C)) = ((*(int *)((a4 + 0x3C))) - 0xB6);
                } else {
                    *(unsigned int *)((a4 + 0x3C)) = 0xFFFFC000;
                }
            }
        } else {
            *(unsigned int *)((a4 + 0x3C)) = ((*(int *)((a4 + 0x3C))) - 0x444);
        }
    } else {
        *(unsigned int *)((a4 + 0x3C)) = ((*(int *)((a4 + 0x3C))) - 0xB6);
        u0 = *(float *)0xC0EB0F0;
        (((struct o40_float *)(a4))->v) = (((((struct o40_float *)(a4))->v)) + u0);
        (((struct o44_float *)(a4))->v) = (((((struct o44_float *)(a4))->v)) + u0);
        (((struct o48_float *)(a4))->v) = (((((struct o48_float *)(a4))->v)) + u0);
    }
    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    if ((int)(*(short *)((a4 + 0x1C))) <= (int)0x2D) {
        (((struct oA8_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0xA8))) ^ 0x1);
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
    t1 = (short)(t0 - 1);
    if ((int)(short)(t0 - 1) <= 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        t1 = 0x14;
    }
    return t1;
}
