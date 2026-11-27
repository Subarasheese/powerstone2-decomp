/* game/unsorted: functions 0C10491C-0C1066DC, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o4_int { char p[0x4]; int v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_float { char p[0x9C]; float v; };
struct oA0_float { char p[0xA0]; float v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c059c7a(int, int);
int FUN_0c100780(int);
int FUN_0c104cc8(int);
int FUN_0c105616(int);
int FUN_0c1056b6(int);
int FUN_0c105752(int);
int FUN_0c105818(int);
int FUN_0c105cec(int);
int FUN_0c1061dc(void);
int FUN_0c1061e0(void);
int FUN_0c1061e4(void);
int FUN_0c106508(void);
int FUN_0c1066a4(void);
int FUN_0c115120(int);
int FUN_0c117944(int, ...);
int FUN_0c117d54(void);
int FUN_0c117e76(void);
int nlRand(void);
int FUN_0c105c86(int a4, int a5, int a6, int a7);
void FUN_0c1061e8(int a4, int a5, int a6, int a7, float f4);
int FUN_0c106510(void);

int FUN_0c105c86(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x14));
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                if (t0 != 3) {
                    if (t0 != 4) {
                        if (t0 != 99) {
                            return t0;
                        }
                        return FUN_0c03f346(a4, a5, a6, a7);
                    }
                    return FUN_0c105818(a4);
                }
                return FUN_0c105752(a4);
            }
            return FUN_0c1056b6(a4);
        }
        return FUN_0c105616(a4);
    }
    return ((int (*)(int, int, int, int))(0xC105612))(a4, a5, a6, a7);
}


int FUN_0c106510(void)
{
    *(unsigned char *)0xC541F43 = 0x1;
    return FUN_0c106508();
}

typedef struct { char p[0x16]; signed char a, b; } OBJ;

/* manual: task state machine on byte a4[0x16] (sub state a4[0x17]): start, a message by random pick, waits, then the next screen; void (r0 was leftovers); 127 cases, 245 of 245 instructions */
void FUN_0c1061e8(int a4, int a5, int a6, int a7, float f4)
{
    float *p, *q;
    int *w;
    int r;

    switch (((OBJ *)a4)->a) {
    case 0:
        FUN_0c100780(0);
        FUN_0c1066a4();
        FUN_0c059c7a(0x18, 1);
        ((OBJ *)a4)->a++;
        ((OBJ *)a4)->b = 0;
    case 1:
        switch (((OBJ *)a4)->b) {
        case 0:
            if (*(signed char *)0xC5324AC != 99)
                return;
            FUN_0c115120(3);
            q = ((float **)0xC5325B0)[1];
            p = ((float **)0xC5325B0)[0];
            q[40] = 1.0f;
            q[39] = 1.0f;
            p[40] = 1.0f;
            p[39] = 1.0f;
            q = ((float **)0xC5325B0)[1];
            p = ((float **)0xC5325B0)[0];
            q[38] = 1.0f;
            p[38] = 1.0f;
            q[37] = 1.0f;
            p[37] = 1.0f;
            break;
        case 1:
            FUN_0c1061dc();
            break;
        case 2:
            r = FUN_0c1061e4();
            if (r == -1)
                return;
            FUN_0c117944(((int *)0xC290A90)[r * 3 + nlRand() % 3]);
            break;
        case 3:
            FUN_0c1061e0();
            goto next;
        default:
            return;
        }
        ((OBJ *)a4)->b++;
        return;
    case 2:
        if (*(signed char *)0xC535BAD == 1)
            ((OBJ *)a4)->a++;
        return;
    case 3:
        if (FUN_0c117d54() < 0) {
            ((OBJ *)a4)->a++;
            FUN_0c117e76();
        }
        return;
    case 4:
        if (FUN_0c104cc8(0x3FCF)) {
        next:
            ((OBJ *)a4)->a++;
            goto clear;
        }
        return;
    case 5:
        for (w = (int *)0xC473D04; w < (int *)0xC474004; w++)
            if (*w & 0x1000) {
                ((OBJ *)a4)->a = 6;
                goto clear;
            }
        ((OBJ *)a4)->a = 7;
    clear:
        ((OBJ *)a4)->b = 0;
        return;
    case 6:
        switch (((OBJ *)a4)->b) {
        case 0:
            ((OBJ *)a4)->b++;
            FUN_0c117944(0x50);
            return;
        case 1:
            if (FUN_0c117d54() < 0) {
                ((OBJ *)a4)->b++;
                FUN_0c117e76();
            }
            return;
        case 2:
            if (FUN_0c104cc8(0x3FCF))
                goto last;
        }
        return;
    case 7:
    last:
        FUN_0c105cec(a4);
    }
}

