/* game/menu/select: functions 0C11A4C0-0C11B6EE, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o10_int { char p[0x10]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o28_int { char p[0x28]; int v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o41C_short { char p[0x41C]; short v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC_int { char p[0xC]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c05a080(int, int);
int FUN_0c118810(int, int);
int FUN_0c11a4c0(int, int);
int FUN_0c11a870(int);
float math_cos_angle16(int);
int FUN_0c179ac0(void);
float math_sin_angle16(int);
extern int FUN_0c187798();
int FUN_0c11a89a(int a4, int a5, int a6, int a7);
int FUN_0c11ab30(int a4, int a5, int a6, int a7);
int FUN_0c11af18(int a4, int a5, int a6, int a7);

int FUN_0c11af18(int a4, int a5, int a6, int a7)
{
    int stk[14];
    register int t0;
    register int t5;
    register int t15;
    register int t42;
    register int t43;
    register int t44;
    register int t48;
    register int t61;
    register int t63;
    register int t66;
    register int t73;
    register int t75;
    register float u90;
    register int t95;
    register int t97;
    register float u104;
    register float t106;
    register float u109;
    register int t110;
    register int t112;
    register int t111;
    register int t126;
    register int t127;
    register int t128;
    register int t130;
    register int t134;
    register float u136;
    register float u138;
    register float t140;
    register float u142;
    register int t144;
    register int t159;
    register int t161;
    register int t165;
    register int t168;
    register int t172;
    register int t177;
    register int t178;
    register int t179;
    register int t181;
    register int t185;
    register float u187;
    register float u189;
    register float t191;
    register float u193;
    register int t195;
    register int t208;
    register int t210;
    int t10;
    int t27;
    register int t36;
    register float u84;
    register float u85;
    int t119;
    int t174;

    t0 = (((struct o28_int *)0xC473CD8)->v);
    t5 = 0x3;
    if (t0 != 0) {
        t5 = 0x9;
        if (t0 != 1) {
            if (t0 != 2) {
            } else {
                t5 = 0x0;
            }
        }
    }
    if (((*(short *)(((*(int *)((a4 + 0x10))) + 0x1C))) == ((*(signed char *)((a4 + 0x2))) + 0x1)) && (t10 = *(signed char *)((a4 + 0x14)), (int)t10 < (int)0xA)) {
        (((struct o14_uchar *)(a4))->v) = 0x63;
    }
    t15 = *(signed char *)((a4 + 0x14));
    if (t15 != 0) {
        if (t15 != 1) {
            if (t15 == 2) {
                if ((*(short *)((a4 + 0x1C))) == ((((struct oC_int *)0xC292084)->v))) {
                    FUN_0c05a080(0xE, 0x0);
                }
                t36 = *(short *)((a4 + 0x1C));
                t42 = 0xC292090;
                t43 = t36;
                if (((int)t36 >= (int)((((struct oC_int *)0xC292084)->v))) && (t27 = (((struct o10_int *)0xC292084)->v), (int)t36 <= (int)t27)) {
                    if (((int)((int)(*(short *)((a4 + 0x1C))) % (int)(*(int *)0xC291ED8))) == 0) {
                        FUN_0c11a870(a4);
                    } else {
                        t42 = 0xC292090;
                    }
                    t43 = t36;
                }
                t44 = *(short *)((a4 + 0x1C));
                *(unsigned short *)((a4 + 0x1C)) = (t44 + 0x1);
                if ((short)(t44 + 0x1) == 30) {
                    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x34)) = *(struct mv3 *)(0xC29F12C + 12 * (*(int *)((0xC473CCC + ((*(signed char *)((a4 + 0x2))) << 2))))); }  /* manual: _quick_odd_mvn r0 12, r1 r14 (a4) + 52, r2 0x0C29F12C + 12 * the word at r11 (0x0C473CCC) + 4 * the byte at a4 + 2 */
                    t48 = 0;
                    (((struct o40_float *)(a4))->v) = 0.699999988f;
                    (((struct o44_float *)(a4))->v) = 0.699999988f;
                    (((struct o48_float *)(a4))->v) = 0.699999988f;
                    FUN_0c118810(a4, (*(int *)((0xC473CCC + ((*(signed char *)((a4 + 0x2))) << 2)))));
                }
                *(unsigned short *)((a4 + 0x1E)) = ((*(short *)((a4 + 0x1E))) + 0x200);
                *(unsigned int *)(((int)stk + 8)) = 0xC29FA2C;
                *(unsigned int *)(((int)stk + 12)) = 0xC473CCC;
                if ((int)(*(short *)((a4 + 0x1C))) >= (int)0x1E) {
                    t61 = *(signed char *)((a4 + 0x2));
                    *(unsigned char *)(((int)stk + 16)) = t61;
                    t63 = *(int *)(((*(int *)(((int)stk + 12))) + (t61 << 2)));
                    t66 = *(signed char *)(((int)stk + 16));
                    u84 = ((((struct o4_float *)((0xC291FD0 + (((((((t66 << 1) + t66) + t5) + 0x1) << 1) + ((((t66 << 1) + t66) + t5) + 0x1)) << 2))))->v));
                    u85 = ((((struct o4_float *)(((((t63 << 1) + t63) << 2) + (*(int *)(((int)stk + 8))))))->v));
                } else {
                    t73 = *(int *)(((*(int *)(((int)stk + 12))) + 0xC));
                    t75 = *(signed char *)((a4 + 0x2));
                    u84 = ((((struct o4_float *)((0xC291FD0 + (((((((t75 << 1) + t75) + t5) + 0x1) << 1) + ((((t75 << 1) + t75) + t5) + 0x1)) << 2))))->v));
                    u85 = ((((struct o4_float *)(((((t73 << 1) + t73) << 2) + (*(int *)(((int)stk + 8))))))->v));
                }
                *(float *)(((int)stk + 4)) = (u85 + u84);
                u90 = (u85 + u84);
                u90 = u90 + ((((struct o4_float *)0xC292084)->v)) * (math_sin_angle16((*(short *)((a4 + 0x1E)))));
                (((struct o2C_float *)(a4))->v) = u90;
                if (((((struct o20_short *)(a4))->v)) == 40) {
                    (((struct o20_ushort *)(a4))->v) = 0x0;
                } else {
                    (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + 0x1);
                }
                return 0x20;
            }
            if (t15 == 80) {
                t95 = *(short *)((a4 + 0x1E));
                if (((int)t95 >= 0) && ((int)t95 <= (int)0x1E)) {
                    *(int *)((int)stk + 4) = 0x0;
                    *(int *)((int)stk + 0) = 0x1E;
                    t97 = *(signed char *)((a4 + 0x2));
                    FUN_0c0588bc((a4 + 0x28), ((((((((t97 << 1) + t97) + t5) + 0x2) << 1) + ((((t97 << 1) + t97) + t5) + 0x2)) << 2) + 0xC291FD0), (a4 + 0x4C), (*(short *)((a4 + 0x1E))), 0x1E, 0x0);
                    *(int *)((int)stk + 4) = (a4 + 0x2C);
                    u104 = (((float)(*(short *)((a4 + 0x1E))) * ((((struct o0_float *)0xC11B42C)->v))) / ((((struct o4_float *)0xC11B42C)->v)));
                    t106 = math_sin_angle16(((int)((((u104 * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF));
                    u109 = ((((struct o2C_float *)(a4))->v));
                    u109 = u109 + t106 * ((((struct o8_float *)0xC292084)->v));
                    (((struct o2C_float *)(a4))->v) = u109;
                    t110 = *(short *)((a4 + 0x1E));
                    *(unsigned short *)((a4 + 0x1E)) = (t110 + 0x1);
                    return (t110 + 0x1);
                }
                return FUN_0c03f346(a4, a5, a6, a7);
            }
            t112 = t15;
            if (t15 == 99) {
                *(unsigned short *)((a4 + 0x1E)) = 0x0;
                { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x4C)) = *(struct mv3 *)((a4 + 0x28)); }  /* manual: _quick_odd_mvn r0 12, r1 r14 (a4) + 76, r2 r14 + 40 */
                t111 = 0;
                (((struct o14_uchar *)(a4))->v) = 0x50;
                t112 = 0x14;
            }
            return t112;
        }
        if (((*(short *)((a4 + 0x1C))) == 20) && (t119 = *(signed char *)((a4 + 0x2)), t119 == 0)) {
            FUN_0c05a080(0x2, 0x0);
        }
        t126 = *(short *)((a4 + 0x1C));
        if (((int)t126 >= 0) && ((int)t126 <= (int)0x1E)) {
            *(int *)((int)stk + 4) = 0x0;
            *(int *)((int)stk + 0) = 0x1E;
            t127 = *(short *)((a4 + 0x1C));
            t128 = *(signed char *)((a4 + 0x2));
            *(unsigned int *)(((int)stk + 8)) = (((t128 << 1) + t128) + t5);
            t130 = *(int *)(((int)stk + 8));
            FUN_0c0588bc((a4 + 0x28), (((((t130 + 0x1) << 1) + (t130 + 0x1)) << 2) + 0xC291FD0), (((((((t128 << 1) + t128) + t5) << 1) + (((t128 << 1) + t128) + t5)) << 2) + 0xC291FD0), t127, 0x1E, 0x0);
            *(int *)((int)stk + 4) = (0x2C + a4);
            t134 = (((struct o0_int *)0xC473CD8)->v);
            u136 = *(float *)(((0xC29FA30 + (((t134 << 1) + t134) << 2)) + 0x0));
            *(float *)(((int)stk + 0)) = u136;
            u138 = (((float)(*(short *)((a4 + 0x1C))) * 180.0f) / 30.0f);
            t140 = math_sin_angle16(((int)((((u138 * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF));
            u142 = u136;
            u142 = u142 + t140 * ((((struct o0_float *)0xC292084)->v));
            (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + u142);
            t144 = *(short *)((a4 + 0x1C));
            if (((int)t144 >= 0) && ((int)t144 <= (int)0x1E)) {
                *(int *)((int)stk + 4) = 0x0;
                *(int *)((int)stk + 0) = 0x1E;
                FUN_0c0588bc((a4 + 0x40), (a4 + 0x4C), 0xC2A0C78, (*(short *)((a4 + 0x1C))), 0x1E, 0x0);
            }
        }
        t159 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t159 + 0x1);
        t161 = (short)(t159 + 0x1);
        if ((int)(short)(t159 + 0x1) <= (int)0x1E) {
        } else {
            (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
            *(unsigned short *)((a4 + 0x1C)) = 0x0;
            t161 = 0x0;
        }
        return t161;
    }
    (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x40)) = *(struct mv3 *)(0xC2A0C84); }  /* manual: _quick_odd_mvn r0 12, r1 r14 (a4) + 64, r2 0x0C2A0C84 */
    t165 = 0;
    (((struct o40_float *)(a4))->v) = 0.699999988f;
    (((struct o44_float *)(a4))->v) = 0.699999988f;
    (((struct o48_float *)(a4))->v) = 0.699999988f;
    *(unsigned int *)(((int)stk + 8)) = 0xC473CD8;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x34)) = *(struct mv3 *)(0xC29F12C + 12 * (*(int *)0xC473CD8)); }  /* manual: _quick_odd_mvn r0 12, r1 r14 (a4) + 52, r2 0x0C29F12C + 12 * the word at r11 + 12 (0x0C473CD8) */
    t168 = 0;
    FUN_0c118810(a4, (*(int *)(((*(int *)(((int)stk + 8))) + 0x0))));
    { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x4C)) = *(struct mv3 *)((a4 + 0x40)); }  /* manual: _quick_odd_mvn r0 12, r1 r14 (a4) + 76, r2 r14 + 64 */
    t172 = 0;
    if (((*(short *)((a4 + 0x1C))) == 20) && (t174 = *(signed char *)((a4 + 0x2)), t174 == 0)) {
        FUN_0c05a080(0x2, 0x0);
    }
    t177 = *(short *)((a4 + 0x1C));
    if (((int)t177 >= 0) && ((int)t177 <= (int)0x1E)) {
        *(int *)((int)stk + 4) = 0x0;
        *(int *)((int)stk + 0) = 0x1E;
        t178 = *(short *)((a4 + 0x1C));
        t179 = *(signed char *)((a4 + 0x2));
        *(unsigned int *)(((int)stk + 8)) = (((t179 << 1) + t179) + t5);
        t181 = *(int *)(((int)stk + 8));
        FUN_0c0588bc((a4 + 0x28), (((((t181 + 0x1) << 1) + (t181 + 0x1)) << 2) + 0xC291FD0), (((((((t179 << 1) + t179) + t5) << 1) + (((t179 << 1) + t179) + t5)) << 2) + 0xC291FD0), t178, 0x1E, 0x0);
        *(int *)((int)stk + 4) = (0x2C + a4);
        t185 = (((struct o0_int *)0xC473CD8)->v);
        u187 = *(float *)(((0xC29FA30 + (((t185 << 1) + t185) << 2)) + 0x0));
        *(float *)(((int)stk + 0)) = u187;
        u189 = (((float)(*(short *)((a4 + 0x1C))) * 180.0f) / 30.0f);
        t191 = math_sin_angle16(((int)((((u189 * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF));
        u193 = u187;
        u193 = u193 + t191 * ((((struct o0_float *)0xC292084)->v));
        (((struct o2C_float *)(a4))->v) = (((((struct o2C_float *)(a4))->v)) + u193);
        t195 = *(short *)((a4 + 0x1C));
        if (((int)t195 >= 0) && ((int)t195 <= (int)0x1E)) {
            *(int *)((int)stk + 4) = 0x0;
            *(int *)((int)stk + 0) = 0x1E;
            FUN_0c0588bc((a4 + 0x40), (a4 + 0x4C), 0xC2A0C78, (*(short *)((a4 + 0x1C))), 0x1E, 0x0);
        }
    }
    t208 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t208 + 0x1);
    t210 = (short)(t208 + 0x1);
    if ((int)(short)(t208 + 0x1) <= (int)0x1E) {
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
        t210 = 0x0;
    }
    return t210;
}

