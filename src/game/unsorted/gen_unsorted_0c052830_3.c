/* game/unsorted: functions 0C052830-0C053CBA, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o1B4_int { char p[0x1B4]; int v; };
struct o1B8_int { char p[0x1B8]; int v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
int FUN_0c052ba8(int, int, int, int);
int thunk_FUN_0c056b68(int);
int FUN_0c052c4a(int, int, int, int, int);
int FUN_0c052c86(int, int, int, int, int);
int nlCalcPoint(int, int);
int nlStoreMatrix(int);
int nlInvertMatrix(int);
int FUN_0c17b1a0(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlUnitMatrix(void);
int nlVoidUnitVector(int);
extern int FUN_0c187798();
int FUN_0c052bd8(int a4, int a5, int a6, int a7);
int FUN_0c052cf8(int a4, int a5, int a6);

int FUN_0c052bd8(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0xA));
    if (t0 != 0) {
        if (t0 != 1) {
            return ((int (*)(int, int, int, int))(0xC052BD4))(a4, a5, a6, a7);
        }
        return thunk_FUN_0c056b68(a4);
    }
    FUN_0c052ba8(a4, a5, a6, a7);
    return thunk_FUN_0c056b68(a4);
}

