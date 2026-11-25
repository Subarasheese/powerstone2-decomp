/* Straight-line functions with calls and guards (batch gen_aij): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c056e44(int, int);
int FUN_0c05a080(int, int);
int FUN_0c05f22c(int);
int FUN_0c104cc8(int);
int FUN_0c104d70(void);
int FUN_0c104db8(void);
int FUN_0c10527c(int, int, int);
int FUN_0c105304(int, int, int);
int FUN_0c109c1c(int);
int FUN_0c10a4dc(int);
int FUN_0c10a4ea(int);
int FUN_0c10a4f8(int);
int FUN_0c10b6a8();	/* the original has the destination address pushed here: passed on the stack (a one-word structure) */
void FUN_0c115120(int);
int FUN_0c117944(int, ...);
int FUN_0c117a6e(int, ...);
int FUN_0c117d54(void);
int FUN_0c117e76(void);
int FUN_0c118412();
int FUN_0c119ba4();
int FUN_0c11e28e(int);
int FUN_0c11ea4e(int);
int nlRand(void);

#define W(a) (*(int *)(a))
#define SB(o) (((signed char *)a4)[o])
#define SH(o) (((short *)a4)[(o) / 2])
#define PLAYER W((int *)0xC474410 + W(0xC474404))
#define VAL_A(x) (((int *)0xC474104)[x])
#define VAL_B(x) (((int *)0xC29DDD0)[x])
#define OBJ (*(char **)0xC474C40)

/* manual: state / sub step sequence on the object at a4 (states 0-8 and 99); 1288 cases, 701 of 701 instructions */
int FUN_0c10a506(int a4)
{
    int r, x, i, n, id;
    struct { int v; } s;
    char *p;

    r = SB(0x16);
    switch (r) {
    case 0:
        if (FUN_0c11ea4e(0x137) > 0)
            goto next_state;
        return FUN_0c10a4dc(a4);
    case 1:
        r = SB(0x17);
        switch (r) {
        case 0:
            FUN_0c117944(0x55, 0xC532498);
            goto next_sub;
        case 1:
            r = FUN_0c117d54();
            if (r >= 0)
                break;
            FUN_0c117e76();
            goto next_sub;
        case 2:
            goto wait_state;
        }
        break;
    case 2:
        r = SB(0x17);
        switch (r) {
        case 0:
            r = *(signed char *)(0xC532498 + 0x3715);
            if (r != 1)
                break;
            goto next_sub;
        case 1:
            SH(0x22) = 0;
            (*(char **)0xC474B8C)[0x14] = 99;
            W(0xC474B8C) = 0;
            FUN_0c056e44(0x23, 4);
            FUN_0c115120(7);
            for (i = 0x118; i <= 0x11C; i += 4) {
                p = *(char **)(0xC532498 + i);
                *(float *)(p + 0x98) = 8.0f;
                *(float *)(p + 0x94) = 8.0f;
            }
            goto next_sub;
        case 2:
            r = 0x22;
            if ((short)++SH(0x22) <= 60)
                break;
            s.v = 0xC474BA4;
            W(0xC474BA4) = FUN_0c119ba4(0x137, 2, s);
            goto leave;
        }
        break;
    case 3:
        r = SB(0x17);
        switch (r) {
        case 0:
            SB(0x17)++;
            x = PLAYER;
            FUN_0c117a6e(0x58, VAL_A(x), VAL_B(x));
        case 1:
            if (!(FUN_0c104cc8(0x2008) && W(0xC474404) == 0)) {
                if (!(FUN_0c104cc8(0x1004) && W(0xC474404) == W(0xC474714) - 1)) {
                    W(0xC474404) = FUN_0c10527c(W(0xC474404), 0, W(0xC474714) - 1);
                    if (FUN_0c104cc8(0x300F)) {
                        x = PLAYER;
                        FUN_0c117a6e(0x58, VAL_A(x), VAL_B(x));
                    }
                }
            }
            if (FUN_0c104db8())
                goto finish;
            r = FUN_0c104d70();
            if (r)
                goto next_state;
            break;
        }
        break;
    case 4:
        r = SB(0x17);
        switch (r) {
        case 0:
            id = 0x62;
            goto start;
        case 1:
            goto wait_sound;
        case 2:
            r = FUN_0c05f22c(0x3FCF);
            if (r) {
                SB(0x16)++;
                SB(0x17) = 0;
                SH(0x20) = 0;
                s.v = 0xC474C40;
                W(0xC474C40) = FUN_0c10b6a8(1, s);
                ((short *)OBJ)[14] = 1;
                return 1;
            }
            break;
        }
        break;
    case 5:
        if (!(FUN_0c104cc8(0x1008) && ((short *)OBJ)[14] == 1)) {
            if (FUN_0c104cc8(0x2004) && VAL_A(PLAYER) - ((short *)OBJ)[14] <= 0) {
                x = PLAYER;
                FUN_0c117944(0x66, VAL_B(x), VAL_A(x));
                SH(0x20) = 120;
            } else {
                p = OBJ;
                *(short *)(p + 0x1C) = FUN_0c105304(*(short *)(p + 0x1C), 1, VAL_A(PLAYER));
            }
        }
        if (FUN_0c117d54() > 0)
            SH(0x20) = 30;
        if (SH(0x20) == 0) {
            x = PLAYER;
            FUN_0c117944(0x58, VAL_A(x), VAL_B(x));
        } else if (--SH(0x20) < 0) {
            SH(0x20) = 0;
        }
        if (FUN_0c104db8()) {
            OBJ[0x14] = 99;
            W(0xC474C40) = 0;
            x = PLAYER;
            FUN_0c117944(0x58, VAL_A(x), VAL_B(x));
            goto leave;
        }
        r = FUN_0c104d70();
        if (r) {
            SH(0x20) = ((short *)OBJ)[14];
            OBJ[0x14] = 99;
            W(0xC474C40) = 0;
            goto next_state;
        }
        break;
    case 6:
        r = SB(0x17);
        switch (r) {
        case 0:
            SB(0x17)++;
            FUN_0c05a080(0x1A, 0);
            nlRand();
            r = FUN_0c117944(0x61, 0xC532498);
            break;
        case 1:
            goto wait_sound;
        case 2:
            r = FUN_0c05f22c(0x3FCF);
            if (r == 0)
                break;
            p = (char *)0xC47471C;
            W(p) += SH(0x20) * W((char *)0xC29D7D0 + PLAYER * 8);
            if (W(p) > 99999900)
                W(p) = 99999900;
            for (i = 0; i < SH(0x20); i++)
                FUN_0c11e28e(PLAYER);
            if (W(0xC474714) == 1 && VAL_A(W(0xC474410)) < 1)
                return FUN_0c10a4f8(a4);
            goto leave;
        }
        break;
    case 7:
    case 8:
        n = r;
        r = SB(0x17);
        switch (r) {
        case 0:
            id = 0x69;
            goto start;
        case 1:
            goto wait_sound;
        case 2:
            r = FUN_0c05f22c(0x3FCF);
            if (r == 0)
                break;
            if (n == 8)
                goto finish;
            SB(0x14) = 1;
            SB(0x15) = 0;
            return 0x15;
        }
        break;
    case 99:
        FUN_0c056e44(0x23, 5);
        s.v = 0xC474B8C;
        W(0xC474B8C) = FUN_0c118412(5, s);
        p = *(char **)0xC474BA4;
        p[0x14] = 99;
        W(0xC474BA4) = 0;
        return FUN_0c109c1c(a4);
    }
    return r;
start:
    SB(0x17)++;
    return FUN_0c117944(id, 0xC532498);
wait_sound:
    r = FUN_0c117d54();
    if (r >= 0)
        return r;
    SB(0x17)++;
    return FUN_0c117e76();
wait_state:
    r = FUN_0c05f22c(0x3FCF);
    if (r == 0)
        return r;
next_state:
    SB(0x16)++;
    goto clear_sub;
finish:
    SB(0x16) = 99;
clear_sub:
    SB(0x17) = 0;
    return 0x17;
next_sub:
    SB(0x17)++;
    return 0x17;
leave:
    return FUN_0c10a4ea(a4);
}
