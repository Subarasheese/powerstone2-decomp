/* game/unsorted: functions 0C02DC1C-0C02EC54, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c02dca4(int);
int FUN_0c02de40(int);
int FUN_0c02e078(int, int, int);
int FUN_0c02e406(int, int, int, int, int);
int FUN_0c02fb24(int, int);
int FUN_0c03934e(int);
int FUN_0c03a028(int);
int FUN_0c03ee04(int);
int nlSelectMatrixStack(int);
int nlObjPutSetPaletteOffset(int, int);
int nlObjPutSetFadeColor(float, float, float);
void FUN_0c02e43c(int a4);

/* FUN_0c02e43c, written by hand from the original (888 bytes; the generated C compiles to 2,302).
   a4: a model object. q = a4 + 0xA8 is a header (byte 0: enabled; byte 1: first index; flags at +4; fade colour floats at +12..+20;
   a list of n entry pointers at +28). b = a4 + 0x444 holds four per-kind counts and four selected indices (bytes 1..3 of b),
   by the model set m = (signed char)a4[0x371A]. Each entry e is drawn the same way (SEND), and for kinds 12/13 followed by FUN_0c02e406. */

#define SEND(e) \
    if (*(int *)((e) + 12) != 0 && *(int *)0xC20EA8C != 3) { \
        FUN_0c02fb24(a4, (e)); \
    } \
    nlObjPutSetPaletteOffset(*(int *)((e) + 8), (int)*(signed char *)(a4 + 1) << 4); \
    FUN_0c02e078(a4, (e), 0)
#define KIND(e) \
    k = *(signed char *)(a4 + 2); \
    if (k == 12 || k == 13) { \
        FUN_0c02e406(q, (e), 0, 0, 0); \
    }

/* manual: written by hand, 2026-11-23/24 (build/manual/notes_FUN_0c02e43c.txt) */
void FUN_0c02e43c(int a4)
{
    int q;
    int b;
    int m;
    int n;
    int c;
    int i;
    int e;
    int p;
    int k;
    int t;

    q = a4 + 168;
    if (*(unsigned char *)q == 0) {
        return;
    }
    nlSelectMatrixStack(1);
    FUN_0c03ee04(*(signed char *)(q + 1));
    k = *(signed char *)(a4 + 2);
    if (k == 12) {
        FUN_0c02de40(a4);
    } else if (k != 13) {
        FUN_0c02dca4(a4);
    }
    if ((*(unsigned short *)(q + 4) & 0x200) != 0) {
        nlObjPutSetFadeColor(*(float *)(q + 12), *(float *)(q + 16), *(float *)(q + 20));
    }
    if (*(int *)0xC20EA8C != 3) {
        FUN_0c03934e(a4);
        FUN_0c03a028(a4);
    }
    n = *(int *)(q + 24);
    p = q + 28;
    for (i = 0; i < n; i++) {
        e = *(int *)p;
        p = p + 4;
        SEND(e);
        KIND(e);
    }
    b = a4 + 0x444;
    m = *(signed char *)(a4 + 0x371A);
    n = *(int *)(b + 4 + m * 4);
    e = b + 36 + m * 4320;
    for (i = 0; i < n; i++, e += 144) {
        t = *(signed char *)(e + 3);
        if (t == 2) {
            if (*(signed char *)(e + 4) != *(signed char *)(b + 1)) {
                continue;
            }
        } else if (t == 3) {
            if (*(signed char *)(e + 4) != *(signed char *)(b + 2)) {
                continue;
            }
        } else if (t == 4) {
            if (*(signed char *)(e + 4) != *(signed char *)(b + 3)) {
                continue;
            }
        }
        SEND(e);
        KIND(e);
    }
    c = *(int *)(b + 12 + m * 4);
    if (c > 0) {
        if (*(signed char *)(b + 1) >= c) {
            *(signed char *)(b + 1) = c - 1;
        }
        e = b + 8676 + m * 720 + *(signed char *)(b + 1) * 144;
        SEND(e);
        KIND(e);
    }
    c = *(int *)(b + 20 + m * 4);
    if (c > 0) {
        if (*(signed char *)(b + 2) >= c) {
            *(signed char *)(b + 2) = c - 1;
        }
        e = b + 10116 + m * 720 + *(signed char *)(b + 2) * 144;
        SEND(e);
    }
    c = *(int *)(b + 28 + m * 4);
    if (c <= 0) {
        return;
    }
    if (*(signed char *)(b + 3) >= c) {
        *(signed char *)(b + 3) = c - 1;
    }
    e = b + 11556 + m * 720 + *(signed char *)(b + 3) * 144;
    SEND(e);
}
#undef SEND
#undef KIND
