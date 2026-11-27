/* game/unsorted: functions 0C125CD0-0C125E12, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC0_int { char p[0xC0]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f444(int, int, int);
float math_cos_angle16(int);
int nlRand(void);
float math_sin_angle16(int);
int FUN_0c187798(void);
int FUN_0c125cd0(int a4);

int FUN_0c125cd0(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;
    register float u1;
    register float u2;

    t0 = FUN_0c03f444(0x5, 0x0, 0x1);
    t1 = t0;
    if (t0 == 0) {
    } else {
        t2 = 0x0;
        for (;;) {
            if ((int)t2 >= (int)((((struct oC0_int *)(t0))->v))) {
                break;
            }
            FUN_0c03744a((*(int *)((((t2 << 2) + (0xC4 + t0)) + 0x0))), 0x3, 0xD, (*(int *)((0xC4B40FC + ((*(signed char *)((a4 + 0x1))) << 2)))));
            t2 = (t2 + 0x1);
        }
        (((struct oA8_uchar *)(t0))->v) = 0x1;
        (((struct oAC_ushort *)(t0))->v) = 0xF;
        (((struct oA9_uchar *)(t0))->v) = (*(signed char *)((a4 + 0xA9)));
        *(unsigned int *)((t0 + 0x4)) = 0xC125E4C;
        *(unsigned int *)((t0 + 0x10)) = a4;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x34)) = *(struct mv3 *)((a4 + 0x34)); }  /* manual: _quick_odd_mvn r0 12, r1 r14 + 52, r2 r12 (a4) + 52 */
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t0 + 0x28)) = *(struct mv3 *)((a4 + 0x28)); }  /* manual: _quick_odd_mvn r0 12, r1 r14 + 40, r2 r12 + 40 */
        u0 = 50.0f;
        u0 = u0 + 20.0f * (float)((int)((int)(nlRand()) % (int)0x14));
        (((struct o2C_float *)(t0))->v) = (((((struct o2C_float *)(t0))->v)) + u0);
        t2 = nlRand();
        t3 = ((~(((~t2) + 0x1) & 0xF)) + 0x1);
        if ((int)t2 >= 0) {
            t3 = (t2 & 0xF);
        }
        u0 = math_sin_angle16((((t3 << 8) << 2) << 2));
        u1 = math_cos_angle16((((t3 << 8) << 2) << 2));
        u2 = ((((struct o28_float *)(t0))->v));
        u2 = u2 + 150.0f * u0;
        (((struct o28_float *)(t0))->v) = u2;
        u0 = ((((struct o30_float *)(t0))->v));
        u0 = u0 + 150.0f * u1;
        (((struct o30_float *)(t0))->v) = u0;
        (((struct o50_float *)(t0))->v) = -2.0f;
        t2 = nlRand();
        t3 = ((~(((~t2) + 0x1) & 0xF)) + 0x1);
        if ((int)t2 >= 0) {
            t3 = (t2 & 0xF);
        }
        u0 = math_sin_angle16(((t3 << 8) << 2));
        u1 = math_cos_angle16(((t3 << 8) << 2));
        u2 = (u0 * (1.0f + 1.0f));
        u2 = -u2;
        (((struct o4C_float *)(t0))->v) = u2;
        u0 = (u1 * (1.0f + 1.0f));
        u0 = -u0;
        (((struct o54_float *)(t0))->v) = u0;
        t1 = 0x54;
    }
    return t1;
}

