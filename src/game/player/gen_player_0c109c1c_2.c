/* game/player: functions 0C109C1C-0C10B07E, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
int FUN_0c104cc8(int);
int FUN_0c104d70(void);
int FUN_0c104de4(int, int);
int FUN_0c105384(int, int);
int FUN_0c10a46e(int);
int FUN_0c10a506(int);
extern int FUN_0c10ab7c();
int FUN_0c117944(int, ...);
int FUN_0c118584(int);
int FUN_0c10ae02(int a4, int a5, int a6, int a7);

int FUN_0c10ae02(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = *(signed char *)((a4 + 0x15));
    t1 = *(int *)0xC47473C;
    if (t0 != 0) {
        if (t0 != 1) {
            if (t0 != 2) {
                return t0;
            }
            t0 = *(int *)0xC47473C;
            if (t0 != 0) {
                if (t0 != 1) {
                    if (t0 != 2) {
                        return t0;
                    }
                    return ((int (*)(int, int, int, int))(FUN_0c10ab7c))(a4, a5, a6, a7);
                }
                return FUN_0c10a506(a4);
            }
            return FUN_0c10a46e(a4);
        }
        FUN_0c118584(t1);
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        (((struct o16_uchar *)(a4))->v) = 0x0;
        (((struct o17_uchar *)(a4))->v) = 0x0;
        t0 = *(int *)0xC47473C;
        if (t0 != 0) {
            if (t0 != 1) {
                if (t0 != 2) {
                    return t0;
                }
                return ((int (*)(int))(FUN_0c10ab7c))(a4);
            }
            return FUN_0c10a506(a4);
        }
        return FUN_0c10a46e(a4);
    }
    *(unsigned int *)0xC47473C = (FUN_0c105384(t1, 0x2));
    t0 = FUN_0c104cc8(0x3000);
    if (t0 != 0) {
        FUN_0c117944(((*(int *)((((*(int *)0xC47473C) << 2) + 0xC290BBC)))));
    }
    t0 = FUN_0c104d70();
    if (t0 == 0) {
        t0 = FUN_0c104de4((*(int *)0xC47473C), 0x2);
        t1 = t0;
        if (t0 != 0) {
            if ((*(int *)0xC47473C) == 2) {
                (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
                t0 = 0x15;
            } else {
                *(unsigned int *)0xC47473C = 0x2;
                t0 = (FUN_0c117944(((*(int *)0xC290BC4))));
            }
            t1 = t0;
        }
        t0 = t1;
    } else {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        t0 = 0x15;
    }
    return t0;
}
