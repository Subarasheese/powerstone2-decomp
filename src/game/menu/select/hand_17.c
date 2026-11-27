/* @runtime _quick_evn_mvn=0C18778C */
/* @runtime _quick_odd_mvn=0C187798 */
/* Hand-written C: FUN_0c10d68c, an object of 16 models (+0xC4: two rows of 8) that follows its parent's state (+0x10).
   State 0 sets the models up (FUN_0c1173dc, colours 0C2A0CA0 / 0C2A0C90, scale 0C29100C) and places them on two curves
   (FUN_0c0588bc from the points at 0C290EC4, the second row shifted by nlAddVector3op); state 2 reloads them (FUN_0c1174e4);
   state 3 grows them over 30 frames, state 5 shrinks them back. When the parent reaches state 5 the object ends. */

typedef struct { int w[4]; } C16;
typedef struct { int w[3]; } V12;

int FUN_0c03f346(int, int, int, int);
int FUN_0c1173dc(int, int, int, int);
int FUN_0c1174e4(int, int, int, int);
int FUN_0c0588bc(int, int, int, int, int, int);
int nlAddVector3op(int, int, int);
int FUN_0c1171f0(int);

#define C8(o)   (*(signed char *)(e + (o)))
#define S16(o)  (*(short *)(e + (o)))
#define MODEL(i) (((char **)(e + 0xC4))[i])
#define IDS     ((int *)0x0C473984)
#define BANK    (*(int *)0x0C4B410C)
#define PTS     ((char *)0x0C290EC4)
#define SCALE   ((float *)0x0C29100C)

void FUN_0c10d68c(int a4, int a5, int a6, int a7)
{
    char *e = (char *)a4;
    char *m;
    int i;

    if (*(signed char *)(*(int *)(e + 0x10) + 0x14) == 5) {
        C8(0x14) = 99;
        FUN_0c03f346(a4, a5, a6, a7);
        return;
    }
    switch (C8(0x14)) {
    case 0:
        C8(0x14)++;
        *(unsigned char *)(e + 0xA8) = 1;
        *(short *)(e + 0xAC) = 31;
        *(unsigned char *)(e + 0xA9) = 33;
        for (i = 0; i < 8; i++) {
            FUN_0c1173dc((int)MODEL(i), IDS[i], 0, BANK);
            *(short *)(MODEL(i) + 6) = 543;
            *(C16 *)(MODEL(i) + 20) = *(C16 *)0x0C2A0CA0;
            *(V12 *)(MODEL(i) + 132) = *(V12 *)SCALE;
        }
        for (i = 0; i < 8; i++) {
            FUN_0c1173dc((int)MODEL(i + 8), IDS[i], 0, BANK);
            *(short *)(MODEL(i + 8) + 6) = 543;
            *(C16 *)(MODEL(i + 8) + 20) = *(C16 *)0x0C2A0C90;
            *(V12 *)(MODEL(i + 8) + 132) = *(V12 *)SCALE;
        }
        for (i = 0; i < 4; i++)
            FUN_0c0588bc((int)(MODEL(i) + 108), (int)(PTS + 12), (int)PTS, i, 3, 0);
        for (i = 0; i < 4; i++)
            FUN_0c0588bc((int)(MODEL(i + 4) + 108), (int)(PTS + 36), (int)(PTS + 24), i, 3, 0);
        for (i = 0; i < 4; i++) {
            FUN_0c0588bc((int)(MODEL(i + 8) + 108), (int)(PTS + 12), (int)PTS, i, 3, 0);
            m = MODEL(i + 8);
            nlAddVector3op((int)(m + 108), (int)(m + 108), (int)(PTS + 60));
        }
        for (i = 0; i < 4; i++) {
            FUN_0c0588bc((int)(MODEL(i + 12) + 108), (int)(PTS + 36), (int)(PTS + 24), i, 3, 0);
            m = MODEL(i + 12);
            nlAddVector3op((int)(m + 108), (int)(m + 108), (int)(PTS + 60));
        }
    case 1:
    case 4:
        if (*(signed char *)(*(int *)(e + 0x10) + 0x14) != 2)
            return;
        break;
    case 2:
        for (i = 0; i < 8; i++) {
            FUN_0c1174e4((int)MODEL(i), IDS[i], 0, BANK);
            *(short *)(MODEL(i) + 6) = 543;
        }
        for (i = 0; i < 8; i++) {
            FUN_0c1174e4((int)MODEL(i + 8), IDS[i], 0, BANK);
            *(short *)(MODEL(i + 8) + 6) = 543;
        }
        break;
    case 3:
        switch (C8(0x15)) {
        case 0:
            C8(0x15)++;
            S16(0x1E) = 0;
        case 1:
            *(V12 *)(e + 76) = *(V12 *)(PTS + 48);
            *(V12 *)(e + 40) = *(V12 *)(e + 76);
            FUN_0c1171f0(a4);
            for (i = 0; i < 16; i++)
                *(float *)(MODEL(i) + 136) = (float)S16(0x1E) * SCALE[1] / 30.0f;
            if (++S16(0x1E) <= 30)
                return;
            break;
        default:
            return;
        }
        break;
    case 5:
        switch (C8(0x15)) {
        case 0:
            C8(0x15)++;
            S16(0x1E) = 0;
        case 1:
            for (i = 0; i < 16; i++)
                if (*(float *)(MODEL(i) + 136) > 0.0f)
                    *(float *)(MODEL(i) + 136) -= SCALE[1] / 30.0f;
            if (++S16(0x1E) > 30) {
                C8(0x14) = 2;
                C8(0x15) = 0;
            }
            return;
        }
        return;
    default:
        return;
    }
    C8(0x14)++;
    C8(0x15) = 0;
}
