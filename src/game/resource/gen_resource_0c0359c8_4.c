/* game/resource: functions 0C0359C8-0C03731E, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c02f7a0(void);
int FUN_0c035ec2(int, int, int, int, int, int);
int FUN_0c035fb4(void);
int res_pl_textures_release_all(void);
int FUN_0c0365f0(int);
int FUN_0c036606(void);
int FUN_0c0367e0(void);
int FUN_0c03681e(void);
int FUN_0c036864(int);
int FUN_0c036908(void);
int FUN_0c03697c(void);
int FUN_0c0369b8(void);
int FUN_0c0369f0(void);
int FUN_0c036a04(void);
int FUN_0c036b28(int);
int FUN_0c036b46(int);
int FUN_0c036c04(void);
int FUN_0c036c38(void);
int FUN_0c036c70(void);
int FUN_0c036cac(void);
int FUN_0c036dc4(void);
void FUN_0c036de8(int a4);

void FUN_0c036de8(int a4)
{
    int stk[3];
    register int t0;
    register int t4;
    register int t5;
    register int t8;
    register int t9;
    register int t11;
    register int t17;
    register int t49;
    register int t92;
    register int t96;
    register int t108;
    register int t112;
    register int t126;
    register int t133;
    register int t183;
    register int t215;
    register int t221;
    register int t227;
    register int t234;
    register int t235;
    register int t238;
    register int t239;
    register int t242;
    register int t145;
    register int t176;

    t0 = *(signed char *)0xC5429A8;
    if ((unsigned int)a4 >= (unsigned int)0x25) {
        return;
    }
    switch ((a4 << 1)) {
        case 0:
        {
            res_pl_textures_release_all();
            FUN_0c03681e();
            t4 = ((int (*)(void))(0xC0367C2))();
            t5 = ((int (*)(void))(0xC035F2A))();
            FUN_0c036c04();
            FUN_0c036c38();
            t8 = ((int (*)(void))(0xC036902))();
            t9 = ((int (*)(void))(0xC036914))();
            t11 = 0x8;
            if ((*(signed char *)0xC5429A8) == 0) {
                t11 = 0x7;
            }
            FUN_0c036b28(t11);
            FUN_0c035ec2(0x0, 0x0, 0x0, 0x0, *(int *)((int)stk + 0), *(int *)((int)stk + 0 + 4));
            FUN_0c03697c();
            t17 = 0x8;
            if ((*(signed char *)0xC5429A8) == 0) {
                t17 = 0x7;
            }
            FUN_0c036b46(t17);
            FUN_0c036908();
            FUN_0c035fb4();
            FUN_0c0367e0();
            FUN_0c036c70();
    return;
        }
        case 2:
        {
            FUN_0c036c04();
            res_pl_textures_release_all();
            FUN_0c03681e();
    return;
        }
        case 4:
        {
            FUN_0c0369b8();
            FUN_0c02f7a0();
            FUN_0c036c04();
            FUN_0c036c38();
            res_pl_textures_release_all();
            FUN_0c03681e();
            FUN_0c036c70();
            FUN_0c036cac();
            FUN_0c036b46(0x1);
    return;
        }
        case 6:
        {
            FUN_0c02f7a0();
            FUN_0c036c04();
            FUN_0c03681e();
            res_pl_textures_release_all();
            FUN_0c036b46(0x0);
    return;
        }
        case 8:
        {
            FUN_0c036c04();
            FUN_0c036c38();
            FUN_0c03681e();
            FUN_0c036c70();
            FUN_0c036cac();
            FUN_0c036b46(0x2);
            FUN_0c036c70();
            FUN_0c036cac();
            FUN_0c036dc4();
    return;
        }
        case 10:
        {
            FUN_0c0369f0();
            FUN_0c036b28(0x0);
            FUN_0c036b28(0x1);
            t49 = 0x4;
            if ((*(signed char *)0xC5429A8) == 0) {
                t49 = 0x3;
            }
            FUN_0c036b28(t49);
            FUN_0c036b28(0xC);
            FUN_0c036606();
    return;
        }
        case 12:
        {
            FUN_0c0369f0();
            FUN_0c036c04();
            FUN_0c036c38();
            FUN_0c03681e();
            FUN_0c036c70();
            FUN_0c036cac();
            FUN_0c036606();
            FUN_0c036c70();
            FUN_0c036cac();
            FUN_0c036b46(0xC);
    return;
        }
        case 14:
        {
            FUN_0c036c04();
            FUN_0c036c38();
            FUN_0c03681e();
            FUN_0c036864((*(signed char *)0xC542237));
    return;
        }
        case 16:
        {
            FUN_0c0369b8();
            FUN_0c0369f0();
            FUN_0c036c04();
            FUN_0c036c38();
            FUN_0c03681e();
            FUN_0c036c70();
            FUN_0c036cac();
            FUN_0c036606();
            FUN_0c036c70();
            FUN_0c036cac();
            FUN_0c036864((*(signed char *)0xC542237));
    return;
        }
        case 18:
        {
            FUN_0c036c04();
            FUN_0c03681e();
            res_pl_textures_release_all();
            FUN_0c036b46(0x12);
    return;
        }
        case 20:
        {
            FUN_0c036c04();
            FUN_0c03681e();
            res_pl_textures_release_all();
            FUN_0c036b46(0x11);
    return;
        }
        case 22:
        {
            return;
        }
        case 24:
        {
            FUN_0c036c04();
            FUN_0c03681e();
            FUN_0c036b46(0xC);
    return;
        }
        case 26:
        {
            FUN_0c036c04();
            FUN_0c036b46(0xF);
    return;
        }
        case 28:
        {
            FUN_0c036c04();
            FUN_0c036b46(0x13);
    return;
        }
        case 30:
        {
            FUN_0c036c04();
            FUN_0c03681e();
            res_pl_textures_release_all();
            FUN_0c036b46(0x10);
    return;
        }
        case 32:
        {
            FUN_0c036c38();
            t92 = 0x18;
            if ((*(signed char *)0xC5429A8) == 0) {
                t92 = 0x17;
            }
            FUN_0c036b46(t92);
    return;
        }
        case 34:
        {
            FUN_0c036c38();
            t96 = 0x1A;
            if ((*(signed char *)0xC5429A8) == 0) {
                t96 = 0x19;
            }
            FUN_0c036b46(t96);
    return;
        }
        case 36:
        {
            FUN_0c036c04();
            FUN_0c03681e();
            res_pl_textures_release_all();
            FUN_0c036b46(0x14);
    return;
        }
        case 38:
        {
            FUN_0c0369b8();
            FUN_0c036c04();
            FUN_0c036c38();
            FUN_0c03681e();
            FUN_0c036b46(0xB);
            if ((*(signed char *)0xC5429A8) == 0) {
                FUN_0c036b46(0x1B);
    return;
            }
            t108 = 0x2A;
            if ((*(signed char *)0xC5429A8) == 1) {
                t108 = 0x1C;
            }
            FUN_0c036b46(t108);
    return;
        }
        case 40:
        {
            FUN_0c0369b8();
            FUN_0c02f7a0();
            t112 = ((int (*)(void))(0xC036C34))();
            FUN_0c036c38();
            res_pl_textures_release_all();
            FUN_0c03681e();
            FUN_0c036b46(0x1);
            FUN_0c036b46(0xB);
            if ((*(signed char *)0xC5429A8) != 0) {
                if ((*(signed char *)0xC5429A8) != 1) {
                    FUN_0c036b46(0x29);
    return;
                }
                FUN_0c036b46(0x6);
    return;
            }
            FUN_0c036b46(0x5);
    return;
        }
        case 42:
        {
            FUN_0c0369f0();
            FUN_0c036c04();
            res_pl_textures_release_all();
            FUN_0c0365f0(0x0);
            t126 = 0x4;
            if ((*(signed char *)0xC5429A8) == 0) {
                t126 = 0x3;
            }
            FUN_0c036b46(t126);
    return;
        }
        case 44:
        {
            FUN_0c036b46(0x1F);
    return;
        }
        case 46:
        {
            FUN_0c036b46(0x20);
    return;
        }
        case 48:
        {
            FUN_0c0369b8();
            FUN_0c036c04();
            FUN_0c036c38();
            FUN_0c03681e();
            t133 = 0xA;
            if ((*(signed char *)0xC5429A8) == 0) {
                t133 = 0x9;
            }
            FUN_0c036b46(t133);
    return;
        }
        case 50:
        {
            FUN_0c036b46(0x1);
            if ((*(signed char *)0xC5429A8) == 0) {
                FUN_0c036b28(0x5);
                FUN_0c036b28(0x1D);
                FUN_0c036b28(0x21);
                FUN_0c036b46(0xD);
    return;
            }
            if ((*(signed char *)0xC5429A8) == 1) {
                FUN_0c036b28(0x6);
                t145 = 0x1E;
            } else {
                FUN_0c036b28(0x29);
                t145 = 0x2B;
            }
            FUN_0c036b28(t145);
            FUN_0c036b28(0x22);
            FUN_0c036b46(0xE);
    return;
        }
        case 52:
        {
            if (t0 == 0) {
                FUN_0c036b28(0xD);
                FUN_0c036b28(0x1D);
                FUN_0c036b28(0x21);
                FUN_0c036b46(0x5);
    return;
            }
            if (t0 == 1) {
                FUN_0c036b28(0xE);
                FUN_0c036b28(0x1E);
                FUN_0c036b28(0x22);
                FUN_0c036b46(0x6);
    return;
            }
            FUN_0c036b28(0xE);
            FUN_0c036b28(0x2B);
            FUN_0c036b28(0x22);
            FUN_0c036b46(0x29);
    return;
        }
        case 54:
        {
            FUN_0c03681e();
            if ((*(signed char *)0xC5429A8) == 0) {
                FUN_0c036b28(0x3);
                FUN_0c036b28(0xD);
                FUN_0c036b28(0x21);
                FUN_0c036b28(0x5);
                FUN_0c036b46(0x1D);
            } else {
                if ((*(signed char *)0xC5429A8) == 1) {
                    FUN_0c036b28(0x4);
                    FUN_0c036b28(0xE);
                    FUN_0c036b28(0x22);
                    FUN_0c036b28(0x6);
                    t176 = 0x1E;
                } else {
                    FUN_0c036b28(0x4);
                    FUN_0c036b28(0xE);
                    FUN_0c036b28(0x22);
                    FUN_0c036b28(0x29);
                    t176 = 0x2B;
                }
                FUN_0c036b46(t176);
            }
            FUN_0c036b46(0xB);
    return;
        }
        case 56:
        {
            FUN_0c036b28(0x1);
            t183 = 0x22;
            if ((*(signed char *)0xC5429A8) == 0) {
                t183 = 0x21;
            }
            FUN_0c036b46(t183);
    return;
        }
        case 58:
        {
            FUN_0c036c04();
            FUN_0c03681e();
            res_pl_textures_release_all();
            FUN_0c036b46(0x15);
    return;
        }
        case 60:
        {
            FUN_0c0369f0();
            FUN_0c0369b8();
            res_pl_textures_release_all();
            FUN_0c03681e();
            FUN_0c036b28(0x1);
            FUN_0c036b28(0x25);
            FUN_0c036b28(0x26);
            FUN_0c036b28(0x28);
            if ((*(signed char *)0xC5429A8) == 0) {
                FUN_0c036b28(0x5);
                FUN_0c036b28(0xD);
                FUN_0c036b28(0x21);
            } else {
                if ((*(signed char *)0xC5429A8) == 1) {
                    FUN_0c036b28(0x6);
                } else {
                    FUN_0c036b28(0x29);
                }
                FUN_0c036b28(0xE);
                FUN_0c036b28(0x22);
            }
            FUN_0c036b46(0xB);
            FUN_0c036b46(0x24);
    return;
        }
        case 62:
        {
            FUN_0c036c04();
            FUN_0c036c38();
            FUN_0c03681e();
            res_pl_textures_release_all();
            t215 = ((int (*)(void))(0xC0369D2))();
            FUN_0c036a04();
            FUN_0c036b46(0x25);
    return;
        }
        case 64:
        {
            FUN_0c036c04();
            FUN_0c036c38();
            FUN_0c03681e();
            res_pl_textures_release_all();
            t221 = ((int (*)(void))(0xC0369D2))();
            FUN_0c036a04();
            FUN_0c036b46(0x26);
    return;
        }
        case 66:
        {
            FUN_0c036c04();
            FUN_0c036c38();
            FUN_0c03681e();
            res_pl_textures_release_all();
            t227 = ((int (*)(void))(0xC0369D2))();
            FUN_0c036a04();
            FUN_0c036b46(0x28);
    return;
        }
        case 68:
        {
            FUN_0c036c04();
            FUN_0c036c38();
            FUN_0c03681e();
            FUN_0c036b46(0x27);
    return;
        }
        case 70:
        {
            res_pl_textures_release_all();
            FUN_0c03681e();
            t234 = ((int (*)(void))(0xC0367C2))();
            t235 = ((int (*)(void))(0xC035F2A))();
            FUN_0c036c04();
            FUN_0c036c38();
            t238 = ((int (*)(void))(0xC036902))();
            t239 = ((int (*)(void))(0xC036914))();
            FUN_0c036b28(0x27);
            t242 = 0x8;
            if ((*(signed char *)0xC5429A8) == 0) {
                t242 = 0x7;
            }
            FUN_0c036b28(t242);
    return;
        }
        default:
        {
            FUN_0c036c04();
            FUN_0c03681e();
            res_pl_textures_release_all();
            FUN_0c036b46(0x23);
    return;
        }
    }
}
