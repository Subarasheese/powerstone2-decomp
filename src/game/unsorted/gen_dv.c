/* Straight-line functions with calls and guards (batch gen_dv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o376C_uint { char p[0x376C]; unsigned int v; };
struct o378C_float { char p[0x378C]; float v; };
int FUN_0c059df2(int, int);
int FUN_0c0c213c(int);
int FUN_0c0c283a(int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c160d32(int, int, int);
int FUN_0c162f8a(int, int, int, int);
int FUN_0c163116(int, int, int);
int FUN_0c16498c(int, int, int, int);
int FUN_0c166190(int, int, int);
int FUN_0c16757a(int, int, int);
int FUN_0c16844c(int, int, int);
int FUN_0c168978(int, int, int);
int FUN_0c16b9ec(int, int, int, int);
int FUN_0c16c150(int, int, int, int);
int FUN_0c16c1bc(int, int, int, int);
int FUN_0c16d2b4(int, int, int);
float math_cos_angle16(int);
extern float math_sin_angle16();
void FUN_0c0c5f44(int a4);

#define C1 (*(signed char *)(a4 + 0x1))
#define STK ((int)stk)

/* manual: a character's move handler (jump table at 0C2733F4, by the mode byte a4[0x41C]): state a4[0x15] 0 runs the move for the mode, 1-3 count a4[0x1C] down and play a sound, 4 counts a4[0x1E] and runs a move with a4[0x1C]; the moves of state 0 and of state 4 differ in constants (x factor, y offset, sound), the callee and its extra argument, so one vector block follows a switch that picks them; 38 hand cases, 1020 of 1020 instructions */
void FUN_0c0c5f44(int a4)
{
    int stk[3];
    int m;
    int d;
    int state;
    int c;
    float kx;
    float ky;
    int snd;

    m = (short)C1 * (short)0x3938 + 0xC532498;
    if (FUN_0c0c283a(a4) == 0) {
        state = *(signed char *)(a4 + 0x15);
        kx = 90.0f;
        ky = 153.0f;
        d = 0;
        snd = 0x66;
        c = 0;
        if (state == 0) {
            c = *(unsigned char *)(a4 + 0x41C);
            kx = 100.0f;
            ky = 160.0f;
            switch (c) {
            case 2: case 34: snd = 0x41; break;
            case 13: kx = 90.0f; ky = 153.0f; snd = 0x45; break;
            case 28: ky = 157.0f; snd = 0x74; break;
            case 40: kx = 150.0f; snd = 0x5A; break;
            case 51: kx = 15.0f; ky = 123.0f; snd = 0x6E; break;
            case 52: kx = 15.0f; ky = 123.0f; snd = 0x6F; break;
            case 56: snd = 0x73; break;
            case 58: snd = 0x75; break;
            case 1: case 57: case 59: case 60: case 61: break;
            default: goto tail;
            }
        } else if (state == 4) {
            int v = *(short *)(a4 + 0x1E);
            *(unsigned short *)(a4 + 0x1E) = v - 1;
            if ((short)(v - 1) > 0) goto store;
            *(unsigned short *)(a4 + 0x1E) = 4;
        } else if (state == 2 || state == 3) {
            int v = *(short *)(a4 + 0x1C);
            *(unsigned short *)(a4 + 0x1C) = v - 1;
            if ((short)(v - 1) > 0) {
                if (state == 2 ? *(short *)(a4 + 0x1C) != 3 : *(short *)(a4 + 0x1C) % 3 != 0) goto store;
            } else {
                FUN_0c0c2d56(a4, 5, C1);
            }
            FUN_0c059df2(C1, state == 2 ? 0x6E : 0x6F);
            goto store;
        } else {
            if (state == 1) FUN_0c0c2d56(a4, 5, C1);
            goto store;
        }
        { struct mv3 { int w[3]; }; *(struct mv3 *)stk = *(struct mv3 *)(m + 0x28); }
        if (c == 1) {
            if (*(signed char *)(a4 + 0x41F) == 0) {
                kx = 100.0f;
                ky = 156.0f;
            } else {
                d = -3276;
                kx = 142.0f;
                ky = 140.0f;
            }
            snd = 0x40;
        }
        {
            float s;
            s = ((float (*)(int, Stk3))(math_sin_angle16))(*(int *)(m + 0x38) + d, *(Stk3 *)stk) * ((struct o378C_float *)m)->v;
            *(float *)stk = *(float *)stk + kx * s;
            *(float *)(stk + 1) = *(float *)(stk + 1) + ky * ((struct o378C_float *)m)->v;
            s = math_cos_angle16(*(int *)(m + 0x38) + d) * ((struct o378C_float *)m)->v;
            *(float *)(stk + 2) = *(float *)(stk + 2) + kx * s;
        }
        if (state == 4) {
            if (*(short *)(a4 + 0x1C) == 1) {
                FUN_0c16c1bc(*(signed char *)(m + 1), STK, m + 0x34, 1);
            } else {
                FUN_0c16c150(*(signed char *)(m + 1), STK, m + 0x34, 1);
            }
            {
                int v = *(short *)(a4 + 0x1C);
                *(unsigned short *)(a4 + 0x1C) = v - 1;
                if ((short)(v - 1) == 0) FUN_0c0c2d56(a4, 5, C1);
            }
            goto store;
        }
        switch (c) {
        case 1: FUN_0c162f8a(C1, STK, m + 0x34, 0); break;
        case 2: FUN_0c163116(C1, STK, m + 0x34); break;
        case 13: FUN_0c16c150(C1, STK, m + 0x34, 1); FUN_0c160d32(C1, STK, m + 0x34); break;
        case 28: FUN_0c16d2b4(C1, STK, m + 0x34); FUN_0c160d32(C1, STK, m + 0x34); break;
        case 34: FUN_0c166190(a4, STK, m + 0x34); break;
        case 40: FUN_0c16757a(C1, STK, m + 0x34); break;
        case 51: FUN_0c16844c(C1, STK, m + 0x34); break;
        case 52: FUN_0c168978(C1, STK, m + 0x34); break;
        case 56: case 57: case 58:
            FUN_0c16b9ec(a4, STK, m + 0x34, *(unsigned char *)(a4 + 0x41C) - 56); break;
        default:
            FUN_0c16498c(C1, STK, m + 0x34, c - 59); break;
        }
        FUN_0c059df2(C1, snd);
      tail:
        FUN_0c0c213c(a4);
        c = *(unsigned char *)(a4 + 0x41C);
        if (c == 56 || c == 57 || c == 58) {
            *(unsigned char *)(a4 + 0x15) = *(signed char *)(a4 + 0x15) + 1;
        } else if (c == 51) {
            *(unsigned short *)(a4 + 0x1C) = 6;
            *(unsigned char *)(a4 + 0x15) = 2;
        } else if (c == 52) {
            *(unsigned short *)(a4 + 0x1C) = 12;
            *(unsigned char *)(a4 + 0x15) = 3;
        } else if (c == 13) {
            *(unsigned short *)(a4 + 0x1C) = 6;
            *(unsigned short *)(a4 + 0x1E) = 4;
            *(unsigned char *)(a4 + 0x15) = 4;
        } else {
            FUN_0c0c2d56(a4, 5, C1);
        }
      store:
        ((struct o376C_uint *)m)->v = a4;
    } else {
        FUN_0c0c2d56(a4, 6, C1);
    }
}
