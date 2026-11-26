/* @runtime _quick_evn_mvn=0C18778C */
/* @runtime _quick_odd_mvn=0C187798 */
/* Hand-written C: FUN_0c067a58, the fighters' per-frame input and update. For each of the four fighters (0C532498,
   14648 bytes each) it takes the pad (0C542854, 40 bytes each) by the input mode (0C542235: 0 the attract demo, 1 play,
   2 play while the fighter moves): CPU fighters (+0x3720) run their AI instead, and a held direction also sets the
   matching dash bit (2 -> 8, 1 -> 4); it then counts down the input lock (+0x375C) and the three button-hold timers
   (+0x38DD..). After the common update (FUN_0c0bc154) the fighters are run (FUN_0c068230) and drawn (FUN_0c06bb0c) in
   one of six fixed orders (0C258F84) chosen by the frame, starting at a random place; their positions are saved to
   0C471A68. */

typedef struct { int w[10]; } Pad;
typedef struct { int w[3]; } V12;

int FUN_0c0bbf8e(void);
int FUN_0c043064(void);
int FUN_0c0bc104(int);
void FUN_0c0678a4(int);
void FUN_0c0bc154(void);
int FUN_0c068230(int, int, int, int);
int FUN_0c06bb0c(int, int, int);
int nlRand(void);

#define PL(i)    ((char *)0x0C532498 + (i) * 14648)
#define B8(p, o) (*(signed char *)((p) + (o)))
#define U16(p, o) (*(unsigned short *)((p) + (o)))
#define FRAME    (*(unsigned int *)0x0C542260)
#define ORDER    ((signed char *)0x0C258F84)
#define DRAWN    ((signed char *)0x0C471A98)

#define CLEAR4(p) (U16(p, 1074) = 0, U16(p, 1072) = 0, U16(p, 1070) = 0, U16(p, 1068) = 0)
#define DASH(p, o) do { \
        if (U16(p, o) & 2) U16(p, o) |= 8; \
        if (U16(p, o) & 1) U16(p, o) |= 4; \
    } while (0)
#define MASK4(p, m) (U16(p, 1068) &= (m), U16(p, 1070) &= (m), U16(p, 1072) &= (m), U16(p, 1074) &= (m))

/* manual: fighters' per-frame input and update, input modes 1 and 2 share one body; 8 cases (4 dev, 4 holdout), 726 of 814 instructions */
void FUN_0c067a58(void)
{
    int i, k, n, pi, mask;
    char *p;
    signed char *order;

    mask = 0;
    for (i = 0; i < 4; i++) {
        p = PL(i);
        switch (*(signed char *)0x0C542235) {
        case 0:
            if (B8(p, 2) != 12 && B8(p, 2) != 13)
                FUN_0c0bbf8e();
            *(int *)(p + 1052) = *(int *)(0x0C542854 + i * 40);
            *(char *)(p + 1056) = *(char *)(0x0C542854 + i * 40 + 4);
            *(char *)(p + 1057) = *(char *)(0x0C542854 + i * 40 + 5);
            *(char *)(p + 1058) = *(char *)(0x0C542854 + i * 40 + 6);
            CLEAR4(p);
            *(char *)(p + 14156) = 0;
            U16(p, 1066) = 0;
            break;
        case 1:
        case 2:
            if (*(signed char *)0x0C542235 == 2 && *(float *)(p + 352) == 0.0f) {
                CLEAR4(p);
                *(char *)(p + 14156) = 0;
                U16(p, 1066) = 0;
                break;
            }
            if (B8(p, 14112)) {
                if (B8(p, 2) == 12 || B8(p, 2) == 13 || FUN_0c043064()) {
                    CLEAR4(p);
                    *(char *)(p + 14156) = 0;
                } else if (B8(p, 14100)) {
                    FUN_0c0bc104((int)p);
                }
            } else {
                *(Pad *)(p + 1052) = *(Pad *)(0x0C542854 + i * 40);
                DASH(p, 1068);
                DASH(p, 1070);
                DASH(p, 1072);
                DASH(p, 1074);
                FUN_0c0678a4(i);
            }
            if (*(signed char *)0x0C542235 == 1) {
                MASK4(p, 0x3D00);
                *(char *)(p + 14156) = 0;
            }
            break;
        }
        if (B8(p, 14172)) {
            MASK4(p, 0x3C00);
            *(char *)(p + 14156) = 0;
            B8(p, 14172)--;
        }
        for (k = 14557; k <= 14559; k++)
            if (B8(p, k) > 0 && ++B8(p, k) > 100)
                B8(p, k) = 0;
        if (U16(p, 1072) & 0x200)
            B8(p, 14557) = 1;
        if (U16(p, 1072) & 0x80)
            B8(p, 14558) = 1;
        if (U16(p, 1072) & 0x100)
            B8(p, 14559) = 1;
    }
    FUN_0c0bc154();

    order = ORDER + FRAME % 6 * 4;
    k = nlRand() % 4;
    n = 4;
    do {
        if (B8(PL(order[k]), 14100))
            FUN_0c068230((int)PL(order[k]), 0, 0, 0);
        k = (k + 1) & 3;
    } while (--n);

    order = ORDER + FRAME % 6 * 4;
    k = nlRand() % 4;
    DRAWN[3] = DRAWN[2] = DRAWN[1] = DRAWN[0] = 0;
    n = 4;
    do {
        pi = order[k];
        p = PL(pi);
        if (B8(p, 14100) && B8(p, 20) != 3) {
            FUN_0c06bb0c((int)p, 0, 0);
            mask |= 1 << pi;
            DRAWN[pi]++;
        }
        k = (k + 1) & 3;
    } while (--n);
    for (i = 0; i < 4; i++)
        if ((!(mask & 1 << i) || B8(PL(i), 20) == 3) && DRAWN[i] == 0 && B8(PL(i), 14100))
            FUN_0c06bb0c((int)PL(i), 0, 0);
    for (i = 0; i < 4; i++)
        ((V12 *)0x0C471A68)[i] = *(V12 *)(PL(i) + 40);
}
