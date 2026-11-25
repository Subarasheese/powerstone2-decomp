/* Straight-line functions with calls and guards (batch gen_of): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o90_float { char p[0x90]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oD0_int { char p[0xD0]; int v; };
struct oD4_int { char p[0xD4]; int v; };
struct oD8_int { char p[0xD8]; int v; };
struct oE4_int { char p[0xE4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c1171f0(int);
void FUN_0c113bd8(int a4, int a5, int a6, int a7);

/* manual: task over 10 sub-objects: state 0 sets up and drops them from +300, states 0/1 and 10/11 add the speed at +0x90 to +0x6C for 16 frames,
   0/2 copy one float by the mode word 0C474778, 99 goes to 10; 144 cases, 304 of 304 instructions */
void FUN_0c113bd8(int a4, int a5, int a6, int a7)
{
    int s, i, p, t;

    s = *(signed char *)(a4 + 20);
    if (s == 0) {
        *(unsigned char *)(a4 + 20) = *(unsigned char *)(a4 + 20) + 1;
        *(unsigned char *)(a4 + 0xA8) = 1;
        *(unsigned short *)(a4 + 0xAC) = 0x1F;
        *(unsigned char *)(a4 + 0xA9) = 0x21;
        FUN_0c1171f0(a4);
        FUN_0c03744a(*(int *)(a4 + 0xC4), 1, 12, *(int *)0xC4B410C);
        FUN_0c03744a(*(int *)(a4 + 0xC8), 6, 12, *(int *)0xC4B410C);
        FUN_0c03744a(*(int *)(a4 + 0xCC), 7, 12, *(int *)0xC4B410C);
        FUN_0c03744a(*(int *)(a4 + 0xD0), 8, 12, *(int *)0xC4B410C);
        FUN_0c03744a(*(int *)(a4 + 0xD4), 9, 12, *(int *)0xC4B410C);
        FUN_0c03744a(*(int *)(a4 + 0xD8), 13, 12, *(int *)0xC4B410C);
        FUN_0c03744a(*(int *)(a4 + 0xE4), 10, 12, *(int *)0xC4B410C);
        for (i = 1; i < 5; i++) {
            **(char **)(a4 + 0xC4 + i * 4) = 0;
        }
        t = *(int *)0xC474778;
        if ((unsigned int)t < 4) {
            *(float *)(*(int *)(a4 + 0xD8) + 0x70) = *(float *)(*(int *)(a4 + 0xC8 + t * 4) + 0x70);
        }
        for (i = 0; i < 10; i++) {
            p = *(int *)(a4 + 0xC4 + i * 4);
            *(float *)(p + 0x6C) = *(float *)(p + 0x6C) - 300.0f;
            *(float *)(p + 0x90) = 18.75f;
        }
        s = 1;
    } else if (s == 10) {
        *(unsigned char *)(a4 + 20) = *(unsigned char *)(a4 + 20) + 1;
        *(short *)(a4 + 0x1C) = 0;
        for (i = 0; i < 10; i++) {
            *(float *)(*(int *)(a4 + 0xC4 + i * 4) + 0x90) = -18.75f;
        }
        s = 11;
    }
    if (s == 1 || s == 11) {
        for (i = 0; i < 10; i++) {
            p = *(int *)(a4 + 0xC4 + i * 4);
            *(float *)(p + 0x6C) = *(float *)(p + 0x6C) + *(float *)(p + 0x90);
        }
        t = *(short *)(a4 + 0x1C) + 1;
        *(short *)(a4 + 0x1C) = t;
        if ((short)t >= 16) {
            if (s == 1) {
                *(unsigned char *)(a4 + 20) = *(unsigned char *)(a4 + 20) + 1;
                *(short *)(a4 + 0x1C) = 0;
            } else {
                FUN_0c03f346(a4, p, a6, a7);
            }
        }
    } else if (s == 2) {
        t = *(int *)0xC474778;
        if ((unsigned int)t < 4) {
            *(float *)(*(int *)(a4 + 0xD8) + 0x70) = *(float *)(*(int *)(a4 + 0xC8 + t * 4) + 0x70);
        }
    } else if (s == 99) {
        *(unsigned char *)(a4 + 20) = 10;
    }
}
