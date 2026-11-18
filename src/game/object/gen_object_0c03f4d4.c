/* game/object: functions 0C03F4D4-0C03F5D6, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o24_float { char p[0x24]; float v; };
struct o4_short { char p[0x4]; short v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC0_uint { char p[0xC0]; unsigned int v; };
extern int FUN_0c187798();
int memset(int, int, int);
int FUN_0c03f4d4(void);
int FUN_0c03f546(int a4);
int FUN_0c03f566(int a4, int a5);


int FUN_0c03f546(int a4)
{
    register int t0;

    if ((*(int *)0xC3F3474) != 0) {
        t0 = *(int *)0xC3F3474;
        *(unsigned int *)0xC3F3474 = (t0 - 1);
        *(unsigned int *)((a4 + 0x0)) = (*(int *)((((t0 - 1) << 2) + 0xC3F2A74)));
        t0 = 0xC3F2A74;
    } else {
        *(unsigned int *)((a4 + 0x0)) = 0x0;
    }
    return t0;
}

int FUN_0c03f566(int a4, int a5)
{
    register int t0;
    register int t9;
    register int t1;
    register int t2;
    register int t3;

    t0 = (((struct oC0_int *)(a4))->v);
    t9 = 0x1;
    if ((int)t0 < (int)(t0 + a5)) {
        t1 = (t0 << 2);
        t2 = t0;
        t3 = (t0 << 2);
        for (;;) {
            FUN_0c03f546(((0xC4 + a4) + t3));
            if ((*(int *)((((0xC4 + a4) + t3) + 0x0))) == 0) {
                break;
            }
            *(unsigned char *)(((*(int *)((((0xC4 + a4) + t1) + 0x0))) + 0x1)) = 0x0;
            t2 = (t2 + 0x1);
            t1 = (t1 + 0x4);
            (((struct oC0_uint *)(a4))->v) = (((((struct oC0_int *)(a4))->v)) + 0x1);
            t3 = (t3 + 0x4);
            if ((int)t2 >= (int)(t0 + a5)) {
                return 0x1;
            }
        }
        t9 = 0x0;
    }
    return t9;
}

int FUN_0c03f4d4(void)
{
    register int t0;
    register int t1;
    register int t6;
    register int t7;

    t0 = 0xC3F2A74;
    t1 = 0xC3DC274;
    for (;;) {
        memset(t1, 0x0, 0x90);
        *(unsigned char *)((t1 + 0x0)) = (*(signed char *)0xC1B7A22);
        *(unsigned short *)((t1 + 0x6)) = ((((struct o4_short *)0xC1B7A1C)->v));
        (((struct o24_float *)(t1))->v) = ((((struct o0_float *)0xC1B7A1C)->v));
        { struct mv3 { int w[3]; }; *(struct mv3 *)((t1 + 0x84)) = *(struct mv3 *)(0xC1B7A10); }  /* manual: _quick_odd_mvn r0 12, r1 t1 + 0x84, r2 0x0C1B7A10 */
        t6 = *(int *)0xC1B7A10;  /* the helper leaves r0 holding the first word it copied */
        t7 = t1;
        t1 = (t1 + 0x90);
        *(unsigned int *)((t0 + 0x0)) = t7;
        t0 = (t0 + 0x4);
        if ((unsigned int)t1 >= (unsigned int)0xC3F2A74) {
            break;
        }
    }
    *(unsigned int *)0xC3F3474 = 0x280;
    return t6;
}

