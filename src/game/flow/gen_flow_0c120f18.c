/* game/flow: functions 0C120F18-0C1211B0, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o4_int { char p[0x4]; int v; };
int FUN_0c05c5f0(int, float, float);
int FUN_0c187cac(int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c120f18(int a4);
int FUN_0c12105e(int a4, int a5);
int FUN_0c1210e8(void);


int FUN_0c12105e(int a4, int a5)
{
    register int t0;
    register int t1;

    *(unsigned int *)(((a5 + 0x14) + 0x0)) = ((int)((int)a4 / (int)0xE10));
    t0 = (int)((int)a4 % (int)0xE10);
    *(unsigned int *)((a5 + 0x10)) = ((int)((int)(*(int *)(((a5 + 0x14) + 0x0))) % (int)0xA));
    *(unsigned int *)(((a5 + 0x14) + 0x0)) = ((int)((int)(*(int *)(((a5 + 0x14) + 0x0))) / (int)0xA));
    *(unsigned int *)(((a5 + 0xC) + 0x0)) = ((int)((int)t0 / (int)0x3C));
    t1 = (int)((int)t0 % (int)0x3C);
    *(unsigned int *)((a5 + 0x8)) = ((int)((int)(*(int *)(((a5 + 0xC) + 0x0))) % (int)0xA));
    *(unsigned int *)(((a5 + 0xC) + 0x0)) = ((int)((int)(*(int *)(((a5 + 0xC) + 0x0))) / (int)0xA));
    *(unsigned int *)(((a5 + 0x4) + 0x0)) = t1;
    *(unsigned int *)((a5 + 0x0)) = ((int)((int)t1 % (int)0xA));
    t0 = (int)((int)(*(int *)(((a5 + 0x4) + 0x0))) / (int)0xA);
    *(unsigned int *)(((a5 + 0x4) + 0x0)) = t0;
    return t0;
}

int FUN_0c1210e8(void)
{
    int buf[6];
    int *p1 = &buf[1];
    int *p2 = &buf[2];
    int *p3 = &buf[3];
    int *p4 = &buf[4];
    int *p5 = &buf[5];

    FUN_0c12105e((((((struct o4_int *)0xC475200)->v)) + ((((struct o0_int *)0xC475200)->v))), (int)buf);
    FUN_0c187cac(0xC4B107C, 0x0, 0x0, 0x0, 0xC2019F8, *p5, *p4, *p3, *p2, *p1, buf[0]);
    FUN_0c05c5f0(0xC4B107C, 1.0f, (1.0f + 1.0f));
    FUN_0c12105e(((((struct o0_int *)0xC475200)->v)), (int)buf);
    FUN_0c187cac(0xC4B107C, 0x0, 0x0, 0x0, 0xC201A14, *p5, *p4, *p3, *p2, *p1, buf[0]);
    return (FUN_0c05c5f0(0xC4B107C, 1.0f, (*(float *)0xC1211F0)));
}
