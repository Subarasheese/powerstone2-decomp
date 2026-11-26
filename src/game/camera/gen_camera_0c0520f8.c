/* game/camera: functions 0C0520F8-0C052816, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o180_int { char p[0x180]; int v; };
struct o190_float { char p[0x190]; float v; };
struct o208_uint { char p[0x208]; unsigned int v; };
struct o20C_uint { char p[0x20C]; unsigned int v; };
struct o210_uint { char p[0x210]; unsigned int v; };
struct o214_uint { char p[0x214]; unsigned int v; };
struct o218_uint { char p[0x218]; unsigned int v; };
struct o21C_uint { char p[0x21C]; unsigned int v; };
struct o220_uint { char p[0x220]; unsigned int v; };
struct o240_uint { char p[0x240]; unsigned int v; };
struct o244_uint { char p[0x244]; unsigned int v; };
struct o2EC_uint { char p[0x2EC]; unsigned int v; };
struct oB8_uchar { char p[0xB8]; unsigned char v; };
int FUN_0c052640(int, int, int);
int FUN_0c052830(int);
int FUN_0c05283e(int);
int FUN_0c0549f8(int);
int hit_list_reset(int);
int FUN_0c056e78(void);
int FUN_0c056e7c(void);
int math_atan2_angle16(float, float);
int nlStoreMatrix(int);
int nlInvertMatrix(int);
int nlLookAt(int, int, int);
int nlSelectMatrixStack(int);
int nlUnitMatrix(void);
float nlLength(int, int);
int FUN_0c187798(void);
int FUN_0c0520f8(int a4);
int FUN_0c052114(int a4);
int FUN_0c052168(int a4);
int FUN_0c052184(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12);
int FUN_0c05223e(int a4, int a5);
int FUN_0c0522be(int a4);
int FUN_0c0522e2(int a4, int a5);
int FUN_0c052364(int a4, int a5);
int FUN_0c052370(int a4);
float FUN_0c052378(int a4);
int cam_set_view_matrix(int a4, int a5, int a6);
int FUN_0c05253c(int a4, int a5, int a6, int a7, int a8, int a9);
int FUN_0c05258e(int a4, int a5, int a6, int a7, int a8);
int FUN_0c0525c6(int a4, int a5);
int FUN_0c05261c(int a4);
int FUN_0c0527e6(void);

int FUN_0c0520f8(int a4)
{
    if ((*(signed char *)((a4 + 0x5))) == 0) {
        FUN_0c052830(a4);
    }
    return FUN_0c05283e(a4);
}

int FUN_0c052114(int a4)
{
    if ((*(signed char *)((a4 + 0x5))) == 0) {
        FUN_0c0549f8(a4);
    }
    return hit_list_reset(a4);
}

int FUN_0c052168(int a4)
{
    if ((*(signed char *)((a4 + 0x5))) == 0) {
        FUN_0c056e78();
    }
    return FUN_0c056e7c();
}

int FUN_0c052184(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12)
{
    int t0;

    if (((0xFF00 & a5) == 0) && (t0 = *(signed char *)(((0xB8 + ((a4 * 0x2F8) + 0xC5410FC)) + 0x0)), (int)(unsigned char)a5 < (int)(unsigned char)t0)) {
        return 0x0;
    }
    (((struct oB8_uchar *)(((a4 * 0x2F8) + 0xC5410FC)))->v) = a5;
    *(unsigned char *)((((a4 * 0x2F8) + 0xC5410FC) + 0x4)) = a6;
    *(unsigned char *)((((a4 * 0x2F8) + 0xC5410FC) + 0x5)) = 0x0;
    *(unsigned char *)((((a4 * 0x2F8) + 0xC5410FC) + 0x6)) = a7;
    *(unsigned char *)((((a4 * 0x2F8) + 0xC5410FC) + 0x7)) = ((signed char)(a8 >> 0));
    *(unsigned char *)((((a4 * 0x2F8) + 0xC5410FC) + 0x8)) = ((signed char)(a9 >> 0));
    *(unsigned char *)((((a4 * 0x2F8) + 0xC5410FC) + 0x9)) = ((signed char)(a10 >> 0));
    if (a11 != 0) {
        (((struct o240_uint *)(((a4 * 0x2F8) + 0xC5410FC)))->v) = a11;
    }
    if (a12 != 0) {
        (((struct o244_uint *)(((a4 * 0x2F8) + 0xC5410FC)))->v) = a12;
    }
    *(unsigned int *)((((a4 * 0x2F8) + 0xC5410FC) + 0x14)) = 0x0;
    return 0x1;
}

int FUN_0c05223e(int a4, int a5)
{
    int t1;
    register int t2;

    if ((((*(int *)((a5 + 0x0))) & 0xFF00) == 0) && (t1 = *(int *)((a5 + 0x0)), t2 = *(signed char *)((((a4 * 0x2F8) + 0xC5410FC) + 0xB8)), (int)(unsigned char)t1 < (int)(unsigned char)t2)) {
        return 0x0;
    }
    (((struct oB8_uchar *)(((a4 * 0x2F8) + 0xC5410FC)))->v) = (*(int *)((a5 + 0x0)));
    *(unsigned char *)((((a4 * 0x2F8) + 0xC5410FC) + 0x4)) = (*(signed char *)((a5 + 0x4)));
    *(unsigned char *)((((a4 * 0x2F8) + 0xC5410FC) + 0x5)) = 0x0;
    *(unsigned char *)((((a4 * 0x2F8) + 0xC5410FC) + 0x6)) = (*(signed char *)((a5 + 0x8)));
    *(unsigned char *)((((a4 * 0x2F8) + 0xC5410FC) + 0x7)) = (*(signed char *)((a5 + 0x9)));
    *(unsigned char *)((((a4 * 0x2F8) + 0xC5410FC) + 0x8)) = (*(signed char *)((a5 + 0xA)));
    *(unsigned char *)((((a4 * 0x2F8) + 0xC5410FC) + 0x9)) = (*(signed char *)((a5 + 0xB)));
    if ((*(int *)((a5 + 0xC))) != 0) {
        (((struct o240_uint *)(((a4 * 0x2F8) + 0xC5410FC)))->v) = (*(int *)((a5 + 0xC)));
    }
    if ((*(int *)((a5 + 0x10))) != 0) {
        (((struct o244_uint *)(((a4 * 0x2F8) + 0xC5410FC)))->v) = (*(int *)((a5 + 0x10)));
    }
    *(unsigned int *)((((a4 * 0x2F8) + 0xC5410FC) + 0x14)) = 0x0;
    return 0x1;
}

int FUN_0c0522be(int a4)
{
    register int t0;
    register int t1;

    t0 = 0x0;
    for (;;) {
        t1 = FUN_0c05223e(t0, a4);
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x4) {
            break;
        }
    }
    return t1;
}

int FUN_0c0522e2(int a4, int a5)
{
    int t1;
    register int t2;

    if ((((*(int *)((a5 + 0x0))) & 0xFF00) == 0) && (t1 = *(int *)((a5 + 0x0)), t2 = *(signed char *)(((0xB8 + a4) + 0x0)), (int)(unsigned char)t1 < (int)(unsigned char)t2)) {
        return 0x0;
    }
    (((struct oB8_uchar *)(a4))->v) = (*(int *)((a5 + 0x0)));
    *(unsigned char *)((a4 + 0x4)) = (*(signed char *)((a5 + 0x4)));
    *(unsigned char *)((a4 + 0x5)) = 0x0;
    *(unsigned char *)((a4 + 0x6)) = (*(signed char *)((a5 + 0x8)));
    *(unsigned char *)((a4 + 0x7)) = (*(signed char *)((a5 + 0x9)));
    *(unsigned char *)((a4 + 0x8)) = (*(signed char *)((a5 + 0xA)));
    *(unsigned char *)((a4 + 0x9)) = (*(signed char *)((a5 + 0xB)));
    if ((*(int *)((a5 + 0xC))) != 0) {
        (((struct o240_uint *)(a4))->v) = (*(int *)((a5 + 0xC)));
    }
    if ((*(int *)((a5 + 0x10))) != 0) {
        (((struct o244_uint *)(a4))->v) = (*(int *)((a5 + 0x10)));
    }
    *(unsigned int *)((a4 + 0x14)) = 0x0;
    return 0x1;
}

int FUN_0c052364(int a4, int a5)
{
    *(unsigned int *)(((a4 * 0x2F8) + 0xC541110)) = a5;
    return 0xC541110;
}

int FUN_0c052370(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x3));
    *(unsigned char *)((a4 + 0x3)) = (t0 + 0x1);
    return (t0 + 0x1);
}

float FUN_0c052378(int a4)
{
    register int t0;
    register float t13;

    t0 = *(signed char *)((a4 + 0x4));
    switch (t0) {
    case 0:
        FUN_0c0520f8(a4);
        break;
    case 1:
        FUN_0c052114(a4);
        break;
    case 2:
        FUN_0c052168(a4);
        break;
    }
    t13 = nlLength(((0xBC + a4) + 0xC), ((0xEC + a4) + 0xC));
    (((struct o190_float *)(a4))->v) = t13;
    return t13;
}


int FUN_0c05253c(int a4, int a5, int a6, int a7, int a8, int a9)
{
    (((struct o208_uint *)(((a4 * 0x2F8) + 0xC5410FC)))->v) = a6;
    (((struct o20C_uint *)(((a4 * 0x2F8) + 0xC5410FC)))->v) = a7;
    if (a8 != -1) {
        if ((int)((int)((int)0x168 / (int)a7)) > (int)a8) {
            (((struct o20C_uint *)(((a4 * 0x2F8) + 0xC5410FC)))->v) = a8;
        }
    }
    (((struct o210_uint *)(((a4 * 0x2F8) + 0xC5410FC)))->v) = a8;
    (((struct o214_uint *)(((a4 * 0x2F8) + 0xC5410FC)))->v) = a8;
    (((struct o218_uint *)(((a4 * 0x2F8) + 0xC5410FC)))->v) = a5;
    (((struct o21C_uint *)(((a4 * 0x2F8) + 0xC5410FC)))->v) = a9;
    (((struct o220_uint *)(((a4 * 0x2F8) + 0xC5410FC)))->v) = 0x0;
    return 0x220;
}

int FUN_0c05258e(int a4, int a5, int a6, int a7, int a8)
{
    register int t0;
    register int t1;

    t0 = 0x0;
    for (;;) {
        t1 = FUN_0c05253c(t0, a4, a5, a6, a7, a8);
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x4) {
            break;
        }
    }
    return t1;
}

int FUN_0c0525c6(int a4, int a5)
{
    (((struct o208_uint *)(((a4 * 0x2F8) + 0xC5410FC)))->v) = (*(int *)((a5 + 0x4)));
    (((struct o20C_uint *)(((a4 * 0x2F8) + 0xC5410FC)))->v) = (*(int *)((a5 + 0x8)));
    (((struct o210_uint *)(((a4 * 0x2F8) + 0xC5410FC)))->v) = (*(int *)((a5 + 0xC)));
    (((struct o214_uint *)(((a4 * 0x2F8) + 0xC5410FC)))->v) = (*(int *)((a5 + 0xC)));
    (((struct o218_uint *)(((a4 * 0x2F8) + 0xC5410FC)))->v) = (*(int *)((a5 + 0x0)));
    (((struct o21C_uint *)(((a4 * 0x2F8) + 0xC5410FC)))->v) = (*(int *)((a5 + 0x10)));
    (((struct o220_uint *)(((a4 * 0x2F8) + 0xC5410FC)))->v) = 0x0;
    return 0x220;
}

int FUN_0c05261c(int a4)
{
    register int t0;
    register int t1;

    t0 = 0x0;
    for (;;) {
        t1 = FUN_0c0525c6(t0, a4);
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x4) {
            break;
        }
    }
    return t1;
}

int FUN_0c0527e6(void)
{
    register int t0;
    register int t4;

    t0 = 0x0;
    for (;;) {
        FUN_0c05223e(t0, (*(int *)0xC241B54));
        t4 = FUN_0c0525c6(t0, (*(int *)0xC241C94));
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x4) {
            break;
        }
    }
    return t4;
}
