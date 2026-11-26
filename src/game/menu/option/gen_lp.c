/* Straight-line functions with calls and guards (batch gen_lp): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct {
    char p0[3];
    signed char mode;                   /* 03 */
    char p4[0x10 - 4];
    unsigned char *info;                /* 10 */
    signed char state;                  /* 14 */
    signed char sub;                    /* 15 */
    char p16[0x1B - 0x16];
    char step;                          /* 1B */
    short count;                        /* 1C */
    char p1e[0x22 - 0x1E];
    short timer;                        /* 22 */
    char p24[0x28 - 0x24];
    float x, y, z;                      /* 28 */
    char p34[0x4C - 0x34];
    float limit, speed;                 /* 4C */
    char p54[0xA8 - 0x54];
    char visible;                       /* A8 */
} Task;

void FUN_0c012c34(Task *t);
int FUN_0c01c62a(Task *t);
int FUN_0c01cd2c(int a4);

/* manual: menu panel task (6 modes, each a state machine; modes 4 and 5 differ in the y table and one flag); 716 cases, 444 of 444 instructions */
void FUN_0c019c66(Task *t)
{
    unsigned char *s = t->info;
    float *tab;

    switch (t->mode) {
    case 0:
        switch (t->state) {
        case 0:
            t->state++;
            t->y = -400.0f;
            t->z = 0.0f;
            break;
        case 1:
            switch (t->sub) {
            case 0:
                if (s[8])
                    t->sub++;
                break;
            case 1:
                switch (s[8]) {
                case 1:
                    t->sub++;
                    t->speed = 10.0f;
                    t->limit = 0.0f;
                    break;
                case 2:
                    t->sub += 2;
                    t->visible = 0;
                    goto count;
                case 3:
                    t->sub += 2;
                    t->visible = 1;
                    goto count;
                default:
                    t->sub += 2;
                }
                break;
            case 2:
                t->y += t->speed;
                if (!(t->limit > t->y)) {
                    t->y = t->limit;
                    t->sub++;
        count:
                    s[9]++;
                }
                break;
            case 3:
                goto rewind;
            }
        }
        break;
    case 1:
        switch (t->state) {
        case 0:
            t->state++;
            t->visible = 0;
            t->y = 0.0f;
            t->z = 0.0f;
            break;
        case 1:
            switch (t->sub) {
            case 0:
                goto start;
            case 1:
                t->sub++;
                if (s[8] != 4) {
                    s[9]++;
                    if (s[8] == 2)
                        t->visible = 1;
                    if (s[8] == 3)
                        goto hide;
                }
                break;
            case 2:
                goto rewind;
            }
        }
        break;
    case 2:
        t->x = s[10] ? 128.0f : -128.0f;
        switch (t->state) {
        case 0:
            t->state++;
            t->visible = 0;
            t->y = -176.0f;
            t->z = 3.0f;
            break;
        case 1:
            FUN_0c012c34(t);
            switch (t->sub) {
            case 0:
        start:
                if (s[8])
                    t->sub++;
                break;
            case 1:
                t->sub++;
                s[9]++;
                if (s[8] == 2)
                    goto show;
                if (s[8] == 3) {
        hide:
                    t->visible = 0;
                } else if (s[8] == 4) {
                    t->state++;
                    t->step = 0;
                    s[9] = 0;
                    t->timer = 0;
                    goto show;
                }
                break;
            case 2:
        rewind:
                if (!s[8])
                    t->sub = 0;
                break;
            }
            break;
        case 2:
            s[9] = FUN_0c01c62a(t);
            break;
        }
        break;
    case 3:
        if (!t->state) {
            t->state++;
    show:
            t->visible = 1;
        }
        break;
    case 4:
        tab = (float *)0x0C20DF54;
        goto panel;
    case 5:
        tab = (float *)0x0C20DF64;
    panel:
        switch (t->state) {
        case 0:
            t->state++;
            t->visible = 1;
            t->count = 20;
        case 1:
            t->y = tab[s[0]];
            FUN_0c012c34(t);
            if (--t->count == 0)
                goto next;
            break;
        case 2:
            t->y = tab[s[0]];
            FUN_0c012c34(t);
            if ((short)FUN_0c01cd2c(0x101) && (tab == (float *)0x0C20DF64 || !*(char *)0x0C30EFA2)) {
                t->state++;
                t->step = 0;
                t->timer = 0;
            }
            break;
        case 3:
            if ((signed char)FUN_0c01c62a(t)) {
        next:
                t->state++;
            }
            break;
        }
        break;
    }
}
