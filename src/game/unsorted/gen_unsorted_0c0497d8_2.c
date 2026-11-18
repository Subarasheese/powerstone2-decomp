/* game/unsorted: functions 0C0497D8-0C04A844, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o166_uchar { char p[0x166]; unsigned char v; };
struct o16B_uchar { char p[0x16B]; unsigned char v; };
struct o3714_uchar { char p[0x3714]; unsigned char v; };
struct o3719_uchar { char p[0x3719]; unsigned char v; };
struct o3720_uchar { char p[0x3720]; unsigned char v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
int FUN_0c036de8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0497d8(void);
int FUN_0c0498d8(void);
int FUN_0c049962(void);
int FUN_0c049a10(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c049de4(void);
int FUN_0c04a060(void);
int FUN_0c06780e(int);
int FUN_0c06785c(void);
int FUN_0c0bb244(void);
int FUN_0c187798(void);
int FUN_0c049eac(int a4, int a5, int a6, int a7);
int FUN_0c04a080(int a4, int a5, int a6, int a7);
int FUN_0c04a69a(void);

int FUN_0c049eac(int a4, int a5, int a6, int a7)
{
    int stk[1];
    int t0;

    t0 = *(signed char *)0xC542236;
    if ((t0 != 2) && (t0 != 4)) {
        FUN_0c049de4();
    } else {
        FUN_0c049a10(t0, a5, a6, a7, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4), *(int *)((int)stk + 0 + 8), *(int *)((int)stk + 0 + 12), *(int *)((int)stk + 0 + 16), *(int *)((int)stk + 0 + 20), *(int *)((int)stk + 0 + 24), *(int *)((int)stk + 0 + 28));
    }
    return (unsigned char)(*(signed char *)0xC40F828);
}


