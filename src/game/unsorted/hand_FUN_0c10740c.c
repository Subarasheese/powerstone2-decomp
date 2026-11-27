/* Hand-fixed generated C: FUN_0c10740c calls FUN_0c115120 with r4 = 6 and nothing else set; FUN_0c115120's arms read r6 and r7,
   which on this path still hold FUN_0c10740c's own third and fourth arguments (only another path loads them). The generated C
   passed zeros there. */

int FUN_0c11e2d0(int, int, int, int);
int FUN_0c05f22c(int);
int FUN_0c117d54(void);
int FUN_0c117e76();
int FUN_0c117a6e(int, ...);
int FUN_0c05b048(int, int);
int FUN_0c117944(int, ...);
int FUN_0c115120();

#define STEP (*(int *)0xC473D00)
#define LEFT (*(short *)(a4 + 0x1E))
#define NAMES ((int *)0xC473CCC)
struct o0_int { int v; };
struct o4_int { char p[0x4]; int v; };
struct o8_int { char p[0x8]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o1C_int { char p[0x1C]; int v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o94_float { char p[0x94]; float v; };
struct o98_float { char p[0x98]; float v; };

/* manual: result screen task (messages 4D-4F, then the entries one by one); 268 cases, 252 of 252 instructions */
void FUN_0c10740c(signed char *a4, int a5, int a6, int a7)
{
    int i;
    float *p;

    switch (a4[0x15]) {
    case 0:
        a4[0x15]++;
        a4[0x16] = 0;
    case 1:
        switch (a4[0x16]) {
        case 0:
            a4[0x16]++;
            i = *(int *)0xC473CDC == 7 ? 0 : STEP;
            if ((unsigned)i < 3) FUN_0c117944(0x4D + i);
            FUN_0c115120(6);
            for (i = 0; i < 2; i++) {
                p = ((float **)0xC5325B0)[i];
                p[0x26] = p[0x25] = 8.0f;
            }
            break;
        case 1:
            if (FUN_0c117d54() < 0) {
                a4[0x16]++;
                *(short *)(a4 + 0x20) = 0;
            }
            break;
        case 2:
            if (++*(short *)(a4 + 0x20) > 0xD2) {
                a4[0x16]++;
                ((int (*)(signed char *, int, int, int))FUN_0c117e76)(a4, a5, a6, a7);
                FUN_0c05b048(0x78, 1);
            }
            break;
        case 3:
            if (FUN_0c05f22c(0x3FCF)) a4[0x15]++;
        }
        break;
    case 2:
        a4[0x15]++;
        LEFT = STEP;
    case 3:
        a4[0x15]++;
        a4[0x16] = 0;
        FUN_0c11e2d0(NAMES[STEP - LEFT], ((int *)0xC473CC0)[0], ((int *)0xC473CC0)[1], ((int *)0xC473CC0)[2]);
    case 4:
        switch (a4[0x16]) {
        case 0:
            a4[0x16]++;
            FUN_0c117a6e(0x42, ((int *)0xC29DDD0)[NAMES[STEP - LEFT]]);
            break;
        case 1:
            if (FUN_0c117d54() < 0) {
                a4[0x16]++;
                ((int (*)(void))FUN_0c117e76)();
            }
            break;
        case 2:
            if (FUN_0c05f22c(0x3FCF)) {
                *(short *)(*(char **)0xC474BAC + 0x1C) = STEP - LEFT + 1;
                if (LEFT == 0) {
                    a4[0x14]++;
                } else {
                    LEFT--;
                    a4[0x15] = 3;
                }
            }
        }
    }
}
