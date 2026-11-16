/* Straight-line functions with calls and guards (batch gen_a): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
int FUN_0c01591c(void);
int FUN_0c01e9e4(void);
int FUN_0c02ae40(int);
int FUN_0c036de8(int, int, int);
int FUN_0c03ea04(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c187b48(int, int, int);
int FUN_0c014970(int a4);
int FUN_0c010460(int a4, int a5, int a6);
int FUN_0c0117a0(int a4);
int FUN_0c013b20(int a4);
int FUN_0c0148d0(int a4);
int FUN_0c013aa6(void);
int FUN_0c0144ce(int a4);
int FUN_0c0102c4(void);
void FUN_0c010448(void);
void FUN_0c010450(void);
void FUN_0c010444(void);
void FUN_0c014040(void);

int FUN_0c014970(int a4)
{
    register int t2;
    register int t3;

    (((struct o28_float *)(a4))->v) = ((((struct o0_float *)0xC014A4C)->v));
    (((struct o2C_float *)(a4))->v) = ((((struct o4_float *)0xC014A4C)->v));
    t2 = FUN_0c01591c();
    t3 = 0x0;
    if (t2 != 0) {
        t3 = 0x1;
    }
    (((struct oA8_uchar *)(a4))->v) = t3;
    return 0xA8;
}


int FUN_0c0117a0(int a4)
{
    register int t0;
    register int t1;

    t0 = 0x0;
    t1 = a4;
    for (;;) {
        if ((unsigned char)(*(signed char *)((t1 + 0x0))) != (unsigned char)(*(signed char *)((0xC309998 + t0)))) {
            break;
        }
        t0 = (t0 + 0x1);
        t1 = (t1 + 0x1);
        if ((int)t0 >= (int)0x6) {
            t0 = 0x0;
            return t0;
        }
    }
    return 0x1;
}

int FUN_0c013b20(int a4)
{
    if ((((int)(unsigned char)a4 >= (int)0x80) && ((int)(unsigned char)a4 <= (int)0x9F)) || (((int)(unsigned char)a4 >= (int)0xE0) && ((int)(unsigned char)a4 <= (int)0xFF))) {
        return 0x0;
    }
    return 0x1;
}

int FUN_0c0148d0(int a4)
{
    register int t1;

    (((struct o28_float *)(a4))->v) = -154.0f;
    (((struct o2C_float *)(a4))->v) = -25.0f;
    t1 = 0x0;
    if ((*(int *)0xC5426EC) != 1) {
        t1 = 0x1;
    }
    (((struct oA8_uchar *)(a4))->v) = t1;
    return 0xA8;
}

int FUN_0c013aa6(void)
{
    register int t1;
    int t2;

    if (((*(signed char *)0xC30AD64) != 0) && ((t1 = *(signed char *)0xC30AD76, t1 != 0) && (t2 = *(signed char *)0xC30ADF6, t2 != 0))) {
        return 0x1;
    }
    return 0x0;
}

int FUN_0c0144ce(int a4)
{
    register int t0;
    register int t2;

    t0 = *(signed char *)((a4 + 0x15));
    t2 = t0;
    if (t0 == 0) {
        (((struct o28_float *)(a4))->v) = 0.0f;
        (((struct o2C_float *)(a4))->v) = 208.0f;
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t2 = 0x15;
    }
    return t2;
}

int FUN_0c0102c4(void)
{
    register int t0;

    t0 = FUN_0c187b48(0xC30EF64, 0x0, 0x18);
    *(unsigned char *)0xC30EFA5 = 0x1;
    return t0;
}

void FUN_0c010448(void)
{
    *(unsigned char *)0xC30EF64 = 0x2;
}

void FUN_0c010450(void)
{
    *(unsigned char *)0xC30EF64 = 0x3;
}

void FUN_0c010444(void)
{
    
}

void FUN_0c014040(void)
{
    
}
