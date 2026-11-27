/* game/player: functions 0C0392BC-0C03A56E, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o40_int { char p[0x40]; int v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o44_int { char p[0x44]; int v; };
struct o44_uint { char p[0x44]; unsigned int v; };
struct o68_int { char p[0x68]; int v; };
int FUN_0c039846(int);
int FUN_0c0398f0(int, int, int);
int FUN_0c03999c(int, int, int, int);
int FUN_0c03a0cc(int, int);
int FUN_0c03a178(int, int);
int math_vec3_mul_xyz(int, float, float, float);
int math_mat_get_translate(int, int);
int nlCalcPoint(int, int);
int nlInvertMatrix(int);
int FUN_0c17b1a0(int, int, int);
int nlAddVector3op(int, int, int);
float FUN_0c0e2340(int);
int FUN_0c0e2390(int, int, int);
extern int FUN_0c187798();
float FUN_0c039a12(int a4);
int FUN_0c03a2ce(int a4, int a5, int a6);
int FUN_0c03a536(int a4, int a5, int a6);



int FUN_0c03a536(int a4, int a5, int a6)
{
    register int t0;

    t0 = *(int *)((a5 + 0x8));
    FUN_0c17b1a0((a5 + 0x28), a5, a6);
    FUN_0c03a0cc(a4, t0);
    nlInvertMatrix(0x0);
    FUN_0c03a178(a4, t0);
    return FUN_0c03a2ce(a4, t0, a5);
}
