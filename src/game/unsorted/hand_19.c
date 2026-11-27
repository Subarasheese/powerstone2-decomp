/* @runtime _quick_odd_mvn=0C187798 */
/* Hand-written C: FUN_0c118810(object, id), which gives an object the model for an id. Most ids load a whole model
   (FUN_0c03733c) whose part count is in the table at 0C2738B8 (52 bytes per id, +25); some load one part (FUN_0c03744a);
   73 and 119 build a six-part model (three chained parts on two arms, the second arm turned half a circle); unknown ids
   fall back to id 0 with no part. The object keeps its place (moved by the id's offset, 0C29FA2C), its rotation and its
   scale (multiplied by the id's scale, 0C29E82C); every shown part gets the largest of the object's size components. */

typedef struct { float x, y, z; } V3;

int nlAddVector3op(int, int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c037320(int, int);
void FUN_0c03744a(int, int, int, int);

#define PART(i)  (((char **)(e + 0xC4))[i])
#define BANK     (*(int *)0x0C4B40D8)
#define BANK2    (*(int *)0x0C4B410C)
#define INFO(i)  ((signed char *)(0x0C2738B8 + 52 * (i)))

void FUN_0c118810(int a4, int id)
{
    char *e = (char *)a4;
    V3 pos, rot, size, dim;
    float big;
    int n, i;
    char *m;
    int bank = BANK;

    pos = *(V3 *)(e + 40);
    nlAddVector3op((int)&pos, (int)&pos, 0x0C29FA2C + id * 12);
    rot = *(V3 *)(e + 52);
    size = *(V3 *)(e + 76);
    if (id == 7 || id == 8) {
        FUN_0c03733c(a4, 9, bank);
        FUN_0c037320(id, BANK);
        n = INFO(10)[25];
    } else if (id == 35 || id == 106) {
        FUN_0c03733c(a4, id, bank);
        n = FUN_0c037320(id, BANK);
    } else if (id == 73 || id == 119) {
        m = PART(0);
        FUN_0c03744a((int)m, 0, id, bank);
        *m = 1;
        *(short *)(m + 6) = 15;
        *(int *)(m + 124) = -5461;
        *(float *)(m + 108) = 0.0f;
        *(float *)(m + 112) = 35.0f;
        *(float *)(m + 116) = 0.0f;
        *(int *)(m + 120) = 0;
        *(int *)(m + 124) = 0;
        *(int *)(m + 128) = 0;
        m = PART(1);
        FUN_0c03744a((int)m, 1, id, BANK);
        *m = 1;
        *(short *)(m + 6) = 15;
        *(int *)(m + 104) = (int)(PART(0) + 40);
        m = PART(2);
        FUN_0c03744a((int)m, 2, id, BANK);
        *m = 1;
        *(short *)(m + 6) = 15;
        *(int *)(m + 104) = (int)(PART(1) + 40);
        m = PART(3);
        FUN_0c03744a((int)m, 0, id, BANK);
        *m = 1;
        *(short *)(m + 6) = 15;
        *(int *)(m + 124) = 5461;
        *(float *)(m + 108) = 0.0f;
        *(float *)(m + 112) = 35.0f;
        *(float *)(m + 116) = 0.0f;
        *(int *)(m + 120) = 0;
        *(int *)(m + 124) = 0x8000;
        *(int *)(m + 128) = 0;
        m = PART(4);
        FUN_0c03744a((int)m, 1, id, BANK);
        *m = 1;
        *(short *)(m + 6) = 15;
        *(int *)(m + 104) = (int)(PART(3) + 40);
        m = PART(5);
        FUN_0c03744a((int)m, 2, id, BANK);
        *m = 1;
        *(short *)(m + 6) = 15;
        *(int *)(m + 104) = (int)(PART(4) + 40);
        n = 6;
    } else if (id == 75) {
        FUN_0c03744a((int)PART(0), 0, id, bank);
        n = 1;
    } else if (id == 101) {
        FUN_0c03744a((int)PART(0), 0, id, bank);
        FUN_0c03744a((int)PART(1), 1, id, BANK);
        n = 2;
    } else if (id <= 119) {
        FUN_0c03733c(a4, id, bank);
        *(short *)(e + 0xAC) = 15;
        FUN_0c037320(id, BANK);
        n = INFO(id + 1)[25];
    } else if (id == 120) {
        FUN_0c03733c(a4, 81, bank);
        FUN_0c037320(id, BANK);
        n = INFO(82)[25];
    } else {
        if (id == 144)
            FUN_0c03744a((int)PART(0), 9, 17, BANK2);
        else if (id == 145)
            FUN_0c03744a((int)PART(0), 10, 17, BANK2);
        else if (id >= 128 && id <= 143)
            FUN_0c03744a((int)PART(0), id - 128, 16, BANK2);
        else if (id >= 146 && id <= 149)
            FUN_0c03744a((int)PART(0), id - 130, 16, BANK2);
        else if (id >= 150 && id <= 158)
            FUN_0c03744a((int)PART(0), id - 150, 17, BANK2);
        else {
            id = 0;
            n = 0;
            goto common;
        }
        n = 1;
    }
common:
    *(unsigned char *)(e + 0xA8) = 1;
    *(short *)(e + 0xAC) = 31;
    *(unsigned char *)(e + 0xA9) = 33;
    *(V3 *)(e + 40) = pos;
    *(V3 *)(e + 52) = rot;
    *(V3 *)(e + 76) = size;
    *(float *)(e + 64) *= ((float *)(0x0C29E82C + id * 12))[0];
    *(float *)(e + 68) *= ((float *)(0x0C29E82C + id * 12))[1];
    *(float *)(e + 72) *= ((float *)(0x0C29E82C + id * 12))[2];
    dim = *(V3 *)(e + 64);
    if (dim.x > dim.y)
        big = dim.x > dim.z ? dim.x : dim.z;
    else
        big = dim.y > dim.z ? dim.y : dim.z;
    if (n > 0) {
        i = 0;
        do {
            *PART(i) = 1;
            *(short *)(PART(i) + 6) = 4111;
            *(float *)(PART(i) + 36) = big;
        } while (++i < n);
    }
    for (i = n * 4; (unsigned int)i < 80; i += 4)
        **(char **)(e + 0xC4 + i) = 0;
}
