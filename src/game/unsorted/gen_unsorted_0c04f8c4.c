/* game/unsorted: functions 0C04F8C4-0C04FE0E, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oB0_float { char p[0xB0]; float v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oC_float { char p[0xC]; float v; };
struct oD0_int { char p[0xD0]; int v; };
struct oD4_int { char p[0xD4]; int v; };
struct oD8_int { char p[0xD8]; int v; };
struct oDC_int { char p[0xDC]; int v; };
struct oE0_int { char p[0xE0]; int v; };
struct oE4_int { char p[0xE4]; int v; };
struct oE8_int { char p[0xE8]; int v; };
struct oEC_int { char p[0xEC]; int v; };
struct oF0_int { char p[0xF0]; int v; };
int FUN_0c03f346(int, int, int, int);
void FUN_0c04f8c4(int a4, int a5, int a6, int a7);

/* FUN_0c04f8c4, written by hand from the original (1,354 bytes; the generated C was 3,604).
   An object a4 with a phase byte at +20 (0 start, 1 move, 2 and others go on) and a sub-phase byte at +21 (a timed fade of the float at +176).
   Phase 0 clears 12 flag bytes (the pointers at +196..+240) and sets one, chosen by the mode byte at 0xC542236 and the bits of the byte at 0xC542366.
   Phase 1 slides the chosen object between two points of the table at 0xC241398 (100 frames, the frame is the word at +28). */

/* manual: written by hand, 2026-11-23/24 (build/manual/notes.txt) */
void FUN_0c04f8c4(int a4, int a5, int a6, int a7)
{
    int i;
    int m;
    int v;
    int t;
    int a;
    int b;
    int p;
    int s;
    float f;
    float ax;
    float ay;

    m = *(signed char *)0xC542236;
    v = *(signed char *)0xC542366;
    t = 0;
    a = 0;
    b = 0;
    switch (m) {
    case 0:
        a = 0;
        b = (v & 1) ? 24 : 12;
        t = (v & 1) ? 200 : 196;
        break;
    case 1:
        a = (v & 1) ? 24 : 12;
        b = (v & 2) ? 48 : 36;
        t = (v & 1) ? ((v & 2) ? 216 : 212) : ((v & 2) ? 208 : 204);
        break;
    case 2:
        a = (v & 2) ? 48 : 36;
        b = 60;
        t = (v & 2) ? 224 : 220;
        break;
    case 3:
        a = 60;
        b = (v & 8) ? 84 : 72;
        t = (v & 8) ? 232 : 228;
        break;
    case 4:
        a = (v & 8) ? 84 : 72;
        b = 96;
        t = (v & 8) ? 240 : 236;
        break;
    }
    s = *(signed char *)(a4 + 20);
    if (s == 0) {
        for (i = 0; i < 48; i += 4) {
            a5 = *(int *)(a4 + 196 + i);
            *(char *)a5 = 0;
        }
        a6 = 48;
        if (t != 0) {
            *(char *)(*(int *)(a4 + t)) = 1;
        }
        *(short *)(a4 + 28) = 0;
        *(signed char *)(a4 + 20) = *(signed char *)(a4 + 20) + 1;
        s = 1;
    }
    if (s == 1) {
        if (t != 0) {
            a5 = *(int *)(a4 + t);
            p = a5;
            if (t == 196 || t == 204 || t == 208) {
                a6 = 0xC241398 + b;
                a7 = 0xC241398 + a;
            } else {
                a6 = 0xC241398 + a;
                a7 = 0xC241398 + b;
            }
            f = (float)*(short *)(a4 + 28);
            ax = *(float *)(0xC241398 + a);
            ay = *(float *)(0xC241398 + a + 4);
            *(float *)(p + 108) = ax + (*(float *)(0xC241398 + b) - ax) * f / 100.0f + -150.0f;
            *(float *)(p + 112) = ay + (*(float *)(0xC241398 + b + 4) - ay) * f / 100.0f;
        }
        i = *(short *)(a4 + 28);
        *(short *)(a4 + 28) = i + 1;
        if ((short)i == 100) {
            *(signed char *)(a4 + 20) = 0;
        }
    } else if (s != 2) {
        FUN_0c03f346(a4, a5, a6, a7);
    }
    switch (*(signed char *)(a4 + 21)) {
    case 0:
        *(char *)(a4 + 168) = 1;
        *(float *)(a4 + 176) = 0.0f;
        *(short *)(a4 + 30) = 180;
        *(signed char *)(a4 + 21) = *(signed char *)(a4 + 21) + 1;
    case 1:
    case 3:
        *(short *)(a4 + 30) = *(short *)(a4 + 30) - 1;
        if (*(short *)(a4 + 30) == 0) {
            *(short *)(a4 + 30) = 20;
            *(signed char *)(a4 + 21) = *(signed char *)(a4 + 21) + 1;
        }
        break;
    case 2:
        *(float *)(a4 + 176) = *(float *)(a4 + 176) + 0.0500000007f;
        *(short *)(a4 + 30) = *(short *)(a4 + 30) - 1;
        if (*(short *)(a4 + 30) == 0) {
            *(short *)(a4 + 30) = 120;
            *(signed char *)(a4 + 21) = *(signed char *)(a4 + 21) + 1;
        }
        break;
    case 4:
        *(float *)(a4 + 176) = *(float *)(a4 + 176) - 0.0500000007f;
        *(short *)(a4 + 30) = *(short *)(a4 + 30) - 1;
        if (*(short *)(a4 + 30) == 0) {
            *(short *)(a4 + 30) = 60;
            *(signed char *)(a4 + 21) = *(signed char *)(a4 + 21) + 1;
        }
        break;
    default:
        FUN_0c03f346(a4, a5, a6, a7);
        break;
    }
}

