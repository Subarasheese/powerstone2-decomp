/* game/unsorted: functions 0C115120-0C115DBE, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o4_int { char p[0x4]; int v; };
struct o8C_float { char p[0x8C]; float v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
int FUN_0c037bf6(int);
int FUN_0c115120(int);
int FUN_0c11e1e0(int, int, int, int);
int FUN_0c1152fe(void);
int FUN_0c11534c(void);
int FUN_0c1153bc(void);
int FUN_0c11549a(void);

int FUN_0c1152fe(void)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)0xC5324AC;
    if (t0 == 0) {
        t1 = FUN_0c037bf6(0xC532498);
        if ((unsigned char)t1 != 0) {
            return FUN_0c115120(0x1);
        }
        return (unsigned char)t1;
    }
    return t0;
}

int FUN_0c11534c(void)
{
    register int t0;

    t0 = *(signed char *)0xC5324AC;
    if (t0 != 0) {
        if (t0 != 1) {
            return t0;
        }
        t0 = FUN_0c037bf6(0xC532498);
        if ((unsigned char)t0 != 0) {
            return FUN_0c115120(0x1);
        }
        return (unsigned char)t0;
    }
    t0 = FUN_0c037bf6(0xC532498);
    if ((unsigned char)t0 != 0) {
        *(unsigned char *)0xC5324AC = ((*(signed char *)0xC5324AC) + 0x1);
        return FUN_0c11e1e0(0xC532498, (*(signed char *)0xC532499), 0x6, 0x35);
    }
    return (unsigned char)t0;
}

int FUN_0c1153bc(void)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(signed char *)0xC5324AC;
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            t0 = FUN_0c037bf6(0xC532498);
            if ((unsigned char)t0 != 0) {
                return FUN_0c115120(0x1);
            }
            return (unsigned char)t0;
        }
        t0 = FUN_0c037bf6(0xC532498);
        if ((unsigned char)t0 != 0) {
            *(unsigned char *)0xC5324AC = ((*(signed char *)0xC5324AC) + 0x1);
            return FUN_0c11e1e0(0xC532498, (*(signed char *)0xC532499), 0x6, 0x33);
        }
        return (unsigned char)t0;
    }
    FUN_0c037bf6(0xC532498);
    t0 = 0x8C;
    if ((int)((((struct o8C_float *)(((((struct o0_int *)0xC5325B0)->v))))->v)) == ((((struct o0_int *)0xC291900)->v))) {
        *(unsigned char *)0xC5324AC = ((*(signed char *)0xC5324AC) + 0x1);
        FUN_0c11e1e0(0xC532498, (*(signed char *)0xC532499), 0x6, 0x32);
        t1 = (((struct o4_int *)0xC291900)->v);
        t2 = (((struct o0_int *)0xC5325B0)->v);
        (((struct o98_float *)(t2))->v) = (float)t1;
        (((struct o94_float *)(t2))->v) = (float)t1;
        t1 = (((struct o4_int *)0xC291900)->v);
        t2 = (((struct o4_int *)0xC5325B0)->v);
        (((struct o98_float *)(t2))->v) = (float)t1;
        (((struct o94_float *)(t2))->v) = (float)t1;
        t0 = 0x94;
    }
    return t0;
}

int FUN_0c11549a(void)
{
    register int t0;

    t0 = *(signed char *)0xC5324AC;
    if (t0 != 0) {
        if (t0 != 1) {
            
            return t0;
        }
        t0 = FUN_0c037bf6(0xC532498);
        if ((unsigned char)t0 != 0) {
            return FUN_0c115120(0x1);
        }
        return (unsigned char)t0;
    }
    t0 = FUN_0c037bf6(0xC532498);
    if ((unsigned char)t0 != 0) {
        *(unsigned char *)0xC5324AC = ((*(signed char *)0xC5324AC) + 0x1);
        return FUN_0c11e1e0(0xC532498, (*(signed char *)0xC532499), 0x6, 0x37);
    }
    return (unsigned char)t0;
}
