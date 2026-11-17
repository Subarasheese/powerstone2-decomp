/* game/player: functions 0C0B111C-0C0B140E, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o18_uchar { char p[0x18]; unsigned char v; };
struct o19_uchar { char p[0x19]; unsigned char v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
int FUN_0c037bf6(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c0ae748(int);
int FUN_0c0b11ba(void);
int FUN_0c0b11cc(int);
extern int FUN_0c0b124a();
int FUN_0c0b1250(void);
int FUN_0c0b1254(void);
int FUN_0c0b1258(void);
int FUN_0c0b125c(int a4, int a5, int a6, int a7);

int FUN_0c0b125c(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = *(signed char *)((a4 + 0x15));
    if (t0 != 0) {
        if (t0 == 1) {
            t1 = *(signed char *)((a4 + 0x18));
            switch (t1) {
            case 0:
                FUN_0c0b11ba();
                break;
            case 1:
                FUN_0c0b11cc(a4);
                break;
            case 2:
                t1 = ((int (*)(int, int, int, int))(FUN_0c0b124a))(a4, a5, a6, a7);
                break;
            case 3:
                FUN_0c0b1250();
                break;
            case 4:
                FUN_0c0b1254();
                break;
            case 5:
                FUN_0c0b1258();
                break;
            }
            return FUN_0c037bf6(a4);
        }
        return t0;
    }
    t0 = *(signed char *)((a4 + 0x17));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                (((struct o18_uchar *)(a4))->v) = 0x5;
                t0 = *(signed char *)((a4 + 0x1));
                t1 = 0x5;
                t2 = (t0);
                t3 = t0;
                t0 = 0x5;
            } else {
                (((struct o18_uchar *)(a4))->v) = 0x4;
                t4 = *(signed char *)((a4 + 0x1));
                t1 = 0x4;
                t2 = (t4);
                t3 = t4;
                t0 = 0x4;
            }
            FUN_0c07e79c(a4, t3, 0x6, t0, t2, 0x6, t1);
        } else {
            if ((*(signed char *)((a4 + 0x371A))) == 0) {
                (((struct o18_uchar *)(a4))->v) = 0x2;
                t0 = *(signed char *)((a4 + 0x1));
                t1 = 0x3;
                t2 = (t0);
                t3 = t0;
                t0 = 0x3;
            } else {
                (((struct o18_uchar *)(a4))->v) = 0x1;
                t4 = *(signed char *)((a4 + 0x1));
                t1 = 0xD;
                t2 = (t4);
                t3 = t4;
                t0 = 0xD;
            }
            FUN_0c07e79c(a4, t3, 0x6, t0, t2, 0x6, t1);
        }
    } else {
        if ((*(signed char *)((a4 + 0x371A))) == 0) {
            (((struct o18_uchar *)(a4))->v) = 0x0;
            t0 = *(signed char *)((a4 + 0x1));
            t1 = 0x2;
            t2 = (t0);
            t3 = t0;
            t0 = 0x2;
        } else {
            (((struct o18_uchar *)(a4))->v) = 0x1;
            t4 = *(signed char *)((a4 + 0x1));
            t1 = 0xD;
            t2 = (t4);
            t3 = t4;
            t0 = 0xD;
        }
        FUN_0c07e79c(a4, t3, 0x6, t0, t2, 0x6, t1);
    }
    t0 = *(int *)(((0x118 + a4) + 0x4));
    t1 = (((struct o118_int *)(a4))->v);
    (((struct oA0_float *)(t0))->v) = 1.0f;
    (((struct o9C_float *)(t0))->v) = 1.0f;
    (((struct oA0_float *)(t1))->v) = 1.0f;
    (((struct o9C_float *)(t1))->v) = 1.0f;
    t0 = *(int *)(((0x118 + a4) + 0x4));
    t1 = (((struct o118_int *)(a4))->v);
    (((struct o98_float *)(t0))->v) = 1.0f;
    (((struct o98_float *)(t1))->v) = 1.0f;
    (((struct o94_float *)(t0))->v) = 1.0f;
    (((struct o94_float *)(t1))->v) = 1.0f;
    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    (((struct o19_uchar *)(a4))->v) = 0x0;
    *(unsigned short *)((a4 + 0x1C)) = 0x0;
    *(unsigned short *)((a4 + 0x1E)) = 0x0;
    FUN_0c0ae748(a4);
    t0 = *(signed char *)((a4 + 0x18));
    switch (t0) {
    case 0:
        FUN_0c0b11ba();
        break;
    case 1:
        FUN_0c0b11cc(a4);
        break;
    case 2:
        t0 = ((int (*)(int))(FUN_0c0b124a))(a4);
        break;
    case 3:
        FUN_0c0b1250();
        break;
    case 4:
        FUN_0c0b1254();
        break;
    case 5:
        FUN_0c0b1258();
        break;
    }
    return FUN_0c037bf6(a4);
}
