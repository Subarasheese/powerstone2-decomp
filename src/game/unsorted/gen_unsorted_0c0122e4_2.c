/* game/unsorted: functions 0C0122E4-0C013B92, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
int FUN_0c013746(int);
int memset(int, int, int);
extern int strcpy();
int FUN_0c0139bc(void);

int FUN_0c0139bc(void)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;

    memset(0xC3099A6, 0x0, 0x12);
    memset(0xC3099C6, 0x0, 0x80);
    memset(0xC309A46, 0x0, 0x80);
    memset(0xC309AC6, 0x0, 0x40);
    memset(0xC309B06, 0x0, 0x80);
    memset(0xC309B86, 0x0, 0x40);
    (((struct o0_uchar *)0xC30A3EE)->v) = 0x0;
    *(unsigned int *)0xC309BDC = 0x0;
    (((struct o2_uchar *)0xC30A3EE)->v) = 0x0;
    t0 = ((int (*)(int, int))(strcpy))(0xC3099A6, 0xC30AD64);
    t0 = ((int (*)(int, int))(strcpy))(0xC3099C6, 0xC30AD76);
    t0 = ((int (*)(int, int))(strcpy))(0xC309A46, 0xC30ADF6);
    *(unsigned int *)0xC309BDC = (FUN_0c013746(0xC30AF7E));
    t0 = ((int (*)(int, int))(strcpy))(0xC309AC6, 0xC30AE76);
    t0 = FUN_0c013746(0xC30AF7A);
    (((struct o2_uchar *)0xC30A3EE)->v) = t0;
    t1 = 0x0;
    if ((unsigned int)0xC30AEF6 < (unsigned int)0xC30AEFE) {
        t2 = t0;
        t0 = 0xC30A3F0;
        t3 = 0x0;
        t4 = 0xC30AEF6;
        t5 = 0xC30AEF6;
        for (;;) {
            t6 = *(signed char *)((t5 + 0x0));
            t5 = (t5 + 0x1);
            if (((int)t6 >= (int)0x30) && (t0 = 0x39, (int)t6 <= (int)t0)) {
                t2 = t3;
                t3 = (t3 + 0x1);
                *(unsigned char *)((0xC309B06 + t2)) = ((*(signed char *)((t4 + 0x0))));
                if ((int)t3 < (int)0x7) {
                    t4 = (t4 + 0x1);
                    if ((unsigned int)t5 >= (unsigned int)0xC30AEFE) {
                        break;
                    }
                    continue;
                }
                break;
            }
            t4 = (t4 + 0x1);
            if ((unsigned int)t5 >= (unsigned int)0xC30AEFE) {
                break;
            }
        }
        t1 = t3;
    }
    t0 = t1;
    for (;;) {
        t1 = t0;
        t0 = (t0 + 0x1);
        *(unsigned char *)((0xC309B06 + t1)) = 0x20;
        if ((int)t0 >= (int)0xA) {
            break;
        }
    }
    t0 = ((int (*)(int, int, int))(strcpy))(0xC309B10, 0xC30AF0A, 0xA);
    t0 = ((int (*)(int, int))(strcpy))(0xC309B86, 0xC30AEB6);
    (((struct o0_uchar *)0xC30A3EE)->v) = (*(signed char *)0xC30AF88);
    return t0;
}
