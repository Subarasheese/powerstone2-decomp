/* Straight-line functions with calls and guards (batch gen_afu): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
int FUN_0c01cc56(int, int);
int FUN_0c01cd2c(int);
int FUN_0c02b3ba(int, float, float, float);
int FUN_0c02b502(int);
int FUN_0c05aab6(int, int);
int FUN_0c05b048(int, int);
int FUN_0c05b05c(int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int strlen(int);
int strncpy(int, int, int);
extern int thunk_FUN_0c03f346();
int FUN_0c01a502(int a4, int a5, int a6, int a7);

/* manual: title screen step on state byte a4[20] (set up, zoom in, show the text, count down, shrink out), switches instead of copied blocks; 129 cases, 508 of 508 instructions */
#define STEP (*(signed char *)(a4 + 0x14))
#define FLAGS (*(unsigned short *)(a4 + 0xAC))
#define TIMER (*(short *)(a4 + 0x1C))
#define F(o) (*(float *)(a4 + (o)))
#define MODE (*(signed char *)0xC309E06)
#define MARK if (MODE == 2) *(unsigned char *)(a4 + 0xA8) = *(int *)0xC5426EC != 0
int FUN_0c01a502(int a4, int a5, int a6, int a7)
{
    char buf[48];
    float t;
    int st, r, y, o;
    unsigned char len, i;
    char *src;

    st = STEP;
    switch (st) {
    case 0:
        STEP++;
        FLAGS |= 0x210;
        F(0x40) = F(0x44) = 0.0199999996f;
        F(0xB4) = F(0xB8) = F(0xBC) = 0.0f;
        TIMER = 0x5C;
        FUN_0c05b05c(1, 0);
        *(unsigned char *)0xC30EFA5 = 0;
    case 1:
        TIMER--;
        F(0x40) = -math_sin_angle16(TIMER * (short)0x216) + 1.0f;
        F(0x44) = -math_sin_angle16(TIMER * (short)0x216) + 1.0f;
        t = -math_sin_angle16(TIMER * (short)0x216) + 1.0f;
        F(0xB4) = F(0xB8) = F(0xBC) = t;
        *(int *)(a4 + 0x3C) = TIMER * 0x1800;
        if ((r = TIMER) != 0)
            return r;
        STEP++;
        FLAGS &= 0xFDEF;
        FUN_0c05aab6(0, 0x22);
        o = FUN_0c01cc56(MODE + 0x16, 0xC01A2A0);
        *(float *)(o + 0x28) = 0.0f;
        *(float *)(o + 0x2C) = -68.0f;
        *(float *)(o + 0x30) = 5.0f;
        FUN_0c01cc56(0x1B, 0xC01A186);
        if (MODE != 2)
            goto input;
        o = FUN_0c01cc56(0x15, 0xC01A2A0);
        *(float *)(o + 0x28) = 0.0f;
        *(float *)(o + 0x2C) = -98.0f;
        FUN_0c01cc56(0x3E, 0xC01A3A4);
    case 2:
        MARK;
    input:
        if ((short)FUN_0c01cd2c(0x101) != 0 && *(signed char *)0xC30B707 != 0) {
            if (*(signed char *)0xC30B701 == 0 && MODE != 3) {
                STEP++;
                *(unsigned char *)(a4 + 0x17) = 1;
                FUN_0c05b048(0x1E, 1);
                *(unsigned char *)0xC30EFA5 = 1;
                goto draw;
            }
            o = 1;
        } else if (*(signed char *)0xC30B706 != 0) {
            o = 0;
        } else {
            goto draw;
        }
        STEP++;
        *(unsigned char *)(a4 + 0x17) = 0;
        TIMER = 0x10;
        if (o)
            FUN_0c05b048(0x1E, 1);
        goto draw;
    case 3:
        MARK;
    draw:
        len = strlen(0xC30A354);
        FUN_0c02b502(0xC);
        FUN_0c02b3ba(0xC30A354, (float)(0x140 - len * 6), 140.0f, 2.0f);
        FUN_0c02b502(0);
        r = (unsigned char)(len = strlen(0xC30A366));
        if (len > 0x30)
            len = 0x30;
        src = (char *)0xC30A366;
        y = 0xCC;
        for (i = 0; i * 24 < len; i++) {
            strncpy((int)buf, (int)src, 24);
            buf[24] = 0;
            r = FUN_0c02b3ba((int)buf, 176.0f, (float)y, 2.0f);
            src += 24;
            y += 24;
        }
        if (st != 3)
            return r;
        if (*(signed char *)(a4 + 0x17) != 0)
            return 0x17;
        if ((r = (short)(--TIMER)) != 0)
            return r;
        STEP++;
        FLAGS |= 0x10;
        F(0x40) = F(0x44) = F(0x48) = 1.0f;
        TIMER = 8;
        *(unsigned char *)0xC30EFA5 = 1;
    case 4:
        MARK;
        TIMER--;
        F(0x40) = -math_cos_angle16(TIMER << 11) + 1.0f;
        if ((r = TIMER) != 0)
            return r;
        STEP++;
        return ((int (*)(int))thunk_FUN_0c03f346)(a4);
    }
    return ((int (*)(int, int, int, int))thunk_FUN_0c03f346)(a4, a5, a6, a7);
}
#undef STEP
#undef FLAGS
#undef TIMER
#undef F
#undef MODE
#undef MARK
