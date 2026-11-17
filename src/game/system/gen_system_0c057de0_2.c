/* game/system: functions 0C057DE0-0C058198, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
int draw_project_point_sprite(int);
int draw_project_point_sprite_z01(int);
int nl_sprite_draw(int, int, int, int);
int FUN_0c058090(int a4, int a5, int a6, int a7);

int FUN_0c058090(int a4, int a5, int a6, int a7)
{
    int stk[20];
    register int t13;
    register int t15;
    register int t16;
    register int t17;
    register int t21;
    register int t24;
    register int t26;
    register float u18;
    register float u19;
    register int t27;

    if ((*(signed char *)0xC54208F) == 0) {
        if (((*(signed char *)0xC542092) == 0) && (t15 = *(signed char *)0xC478BFC, t15 == 0)) {
        } else {
            t15 = (((struct o4_int *)0xC40FAB0)->v);
            (((struct o0_uint *)0xC40FAB0)->v) = t15;
        }
        t13 = 0x156;
    } else {
        t15 = (((struct o4_int *)0xC40FAB0)->v);
        (((struct o0_uint *)0xC40FAB0)->v) = t15;
        t13 = 0x153;
    }
    (((struct o4_uint *)0xC40FAB0)->v) = ((((struct o0_int *)0xC40FAB0)->v));
    t16 = 0xC40FAB4;
    t17 = 0xC541F3C;
    for (;;) {
        if (((((struct o0_int *)0xC40FAB0)->v)) == 0) {
            break;
        }
        t21 = (((struct o0_int *)0xC40FAB0)->v);
        t26 = ((int)stk + 0);
        t15 = 0xC187830;
        t17 = (t21 - 1);
        (((struct o0_uint *)0xC40FAB0)->v) = (t21 - 1);
        t17 = (t17 * 0x58);
        t17 = (t17 + 0xC40FAB8);
        t16 = (*(int *)((t17 + 0x4)));
        t13 = 0x50;
        t24 = (t17 + 0x8);
        for (;;) { t27 = *(int *)t24; t24 = (t24 + 4); if ((unsigned int)(((t17 + 0x8) + 80)) < (unsigned int)t24) break; *(unsigned int *)t26 = t27; t26 = (t26 + 4); }
        t13 = 0x4;
        *(unsigned int *)(((int)stk + 0)) = (*(short *)((t16 + 0x0)));
        u19 = (*(float *)((t16 + t13)));
        t13 = 0x10;
        u18 = (*(float *)((((int)stk + 0) + t13)));
        t13 = 0x10;
        u18 = (u18 * u19);
        *(float *)((((int)stk + 0) + t13)) = u18;
        t13 = 0x8;
        u19 = (*(float *)((t16 + t13)));
        t13 = 0x14;
        u18 = (*(float *)((((int)stk + 0) + t13)));
        t13 = 0x14;
        u18 = (u18 * u19);
        *(float *)((((int)stk + 0) + t13)) = u18;
        t15 = ((((struct o0_int *)0xC40FAB0)->v));
        t15 = (t15 * 0x58);
        t15 = (t15 + 0xC40FAB8);
        t13 = (*(signed char *)((t15 + 0x1)));
        if (t13 == 0) {
            t13 = 0xC;
            u19 = (*(float *)((t16 + t13)));
            t13 = 0x18;
            *(float *)((((int)stk + 0) + t13)) = u19;
            t13 = 0x14;
        } else {
            t13 = 0x14;
            u19 = (*(float *)((t16 + t13)));
            t13 = 0x18;
            *(float *)((((int)stk + 0) + t13)) = u19;
            t13 = 0xC;
        }
        u19 = (*(float *)((t16 + t13)));
        t13 = 0x20;
        *(float *)((((int)stk + 0) + t13)) = u19;
        t13 = 0x10;
        u19 = (*(float *)((t16 + t13)));
        t13 = 0x1C;
        *(float *)((((int)stk + 0) + t13)) = u19;
        t13 = 0x18;
        u19 = (*(float *)((t16 + t13)));
        t13 = 0x24;
        *(float *)((((int)stk + 0) + t13)) = u19;
        t13 = ((((struct o0_int *)0xC40FAB0)->v));
        t13 = (t13 * 0x58);
        t13 = (*(signed char *)((0xC40FAB8 + t13)));
        switch (t13) {
        case 0:
            *(unsigned int *)(((int)stk + 48)) = 0x2;
            *(unsigned int *)(((int)stk + 56)) = 0xFFFFFFFF;
            *(unsigned int *)(((int)stk + 60)) = 0x0;
            t16 = ((int)stk + 0);
            t13 = (nl_sprite_draw(t16, t17, a6, a7));
            break;
        case 1:
            t16 = ((int)stk + 0);
            t13 = (draw_project_point_sprite(t16));
            break;
        case 2:
            t16 = ((int)stk + 0);
            t13 = (draw_project_point_sprite_z01(t16));
            break;
        }
    }
    return t13;
}
