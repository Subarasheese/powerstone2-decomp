/* game/unsorted: functions 0C0AB4B4-0C0ABB28, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o118_int { char p[0x118]; int v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o3747_uchar { char p[0x3747]; unsigned char v; };
struct o446_uchar { char p[0x446]; unsigned char v; };
struct o447_uchar { char p[0x447]; unsigned char v; };
struct o50_float { char p[0x50]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
int FUN_0c037bf6(int, int, int);
int FUN_0c07053a(int, int, float);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c0819c2(int, int);
int FUN_0c0ab4b4(int a4, int a5, int a6);

int FUN_0c0ab4b4(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register float u0;

    t0 = FUN_0c037bf6(a4, a5, a6);
    t1 = (unsigned char)t0;
    if ((unsigned char)t0 != 0) {
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x2, 0x8, (t0), 0x2, 0x8);
        t0 = *(int *)(((0x118 + a4) + 0x4));
        t2 = (((struct o118_int *)(a4))->v);
        (((struct oA0_float *)(t0))->v) = 1.0f;
        (((struct o9C_float *)(t0))->v) = 1.0f;
        (((struct oA0_float *)(t2))->v) = 1.0f;
        (((struct o9C_float *)(t2))->v) = 1.0f;
        t0 = *(int *)(((0x118 + a4) + 0x4));
        t2 = (((struct o118_int *)(a4))->v);
        (((struct o98_float *)(t0))->v) = 1.0f;
        (((struct o98_float *)(t2))->v) = 1.0f;
        (((struct o94_float *)(t0))->v) = 1.0f;
        (((struct o94_float *)(t2))->v) = 1.0f;
        (((struct o446_uchar *)(a4))->v) = 0x1;
        (((struct o447_uchar *)(a4))->v) = 0x1;
        *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + 0x8000);
        FUN_0c0819c2(a4, 0x4000);
        t0 = 0x54;
        u0 = 15.0f;
        if ((*(signed char *)((a4 + 0x2))) != 4) {
            t0 = 0x2C;
            u0 = 30.0f;
        }
        FUN_0c07053a(a4, t0, u0);
        (((struct o50_float *)(a4))->v) = 0.0f;
        (((struct o5C_float *)(a4))->v) = 0.0f;
        (((struct o3747_uchar *)(a4))->v) = 0x4;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t1 = 0x15;
    }
    return t1;
}
