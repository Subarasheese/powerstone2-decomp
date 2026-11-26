/* game/stage: functions 0C0EA298-0C0EA546, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o74_float { char p[0x74]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03f346(int);
int thunk_FUN_0c05abb2(int, int);
void FUN_0c0ea298(char *p);

#define B(o) (*(signed char *)(p + (o)))
#define S(o) (*(short *)(p + (o)))
#define F(o) (*(float *)(p + (o)))
/* manual: stage object update (state byte p[0x14]): a moving part, kind 0 up/shake/down, other kinds a four-leg path; 234 cases, 329 of 329 instructions */
void FUN_0c0ea298(char *p)
{
    int s = B(0x14);
    int sub, sh, i;
    float d, lim, *q;
    char *o;
    if (s != 0 && s != 1) {
        thunk_FUN_0c05abb2(B(2) == 0 ? 0x4E : 0x4B, (int)(p + 0x28));
        FUN_0c03f346((int)p);
        return;
    }
    if (s == 0) {
        B(0x14)++;
        B(0xA8) = 1;
        S(0xAC) = 1;
        thunk_FUN_0c05abb2(B(2) == 0 ? 0x4D : 0x48, (int)(p + 0x28));
    }
    if (B(2) == 0) {
        sub = B(0x15);
        if (sub == 0 || sub == 2) {
            if (sub == 0) {
                F(0x2C) -= 3.0f;
                if (F(0x2C) > 3400.0f)
                    goto gate;
                lim = 3400.0f;
            } else {
                F(0x2C) += 3.0f;
                if (4300.0f > F(0x2C))
                    goto gate;
                lim = 4300.0f;
            }
            B(0x15)++;
            F(0x2C) = lim;
            thunk_FUN_0c05abb2(0x4E, (int)(p + 0x28));
            S(0x20) = 20;
            goto gate;
        }
        sh = S(0x20);
        if (sh != 0) {
            o = *(char **)(p + 0xC4);
            *(float *)(o + 0x6C) += (S(0x20) & 2) ? 2.0f : -2.0f;
            o = *(char **)(p + 0xC4);
            *(float *)(o + 0x74) += (S(0x20) & 4) ? 2.0f : -2.0f;
            S(0x20)--;
        } else {
            o = *(char **)(p + 0xC4);
            *(float *)(o + 0x74) = 0.0f;
            *(float *)(o + 0x6C) = 0.0f;
        }
        if ((short)((*(unsigned short *)(p + 0x1E))++) < 120)
            goto gate;
        if (sub == 1)
            B(0x15)++;
        else
            B(0x15) = 0;
        S(0x1E) = 0;
        thunk_FUN_0c05abb2(0x4D, (int)(p + 0x28));
    } else {
        i = B(0x15);
        q = &F(0x28);
        d = 3.0f;
        switch (i) {
        case 0: lim = 250.0f; break;
        case 1: q = &F(0x30); d = -3.0f; lim = 150.0f; break;
        case 2: d = -3.0f; lim = -150.0f; break;
        default: q = &F(0x30); lim = 350.0f; i = 3; break;
        }
        *q += d;
        if (d > 0.0f ? lim > *q : *q > lim)
            goto gate;
        *q = lim;
        if (i == 3)
            B(0x15) = 0;
        else
            B(0x15)++;
        thunk_FUN_0c05abb2(0x48, (int)(p + 0x28));
    }
gate:
    s = *(signed char *)0x0C54098D;
    if (s >= 13 && s <= 14)
        B(0x14)++;
}
