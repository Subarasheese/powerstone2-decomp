/* Straight-line functions with calls and guards (batch gen_om): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int memset(int, int, int);
int FUN_0c03bb4c(void);

int FUN_0c03bb4c(void)
{
    register int t1;
    register int t5;
    register int t6;
    register int t7;
    register int t9;
    register int t10;
    register int t11;
    register int t12;
    register int t14;
    register int t15;
    register int t16;
    register int t17;
    register int t18;
    register int t19;
    register int t20;
    register int t21;
    register int t22;
    register int t23;
    register int t24;
    register int t25;
    register int t26;
    register int t27;
    register int t28;
    register int t30;
    register int t31;
    register int t32;
    register int t33;
    register int t34;
    register int t35;
    register int t36;
    register int t37;
    register int t38;
    register int t39;
    register int t41;
    register int t42;
    register int t43;
    register int t44;
    register int t45;
    register int t46;
    register int t47;
    register int t48;
    register int t49;
    register int t50;
    register int t52;
    register int t53;
    register int t54;
    register int t55;
    register int t56;
    register int t57;
    register int t58;
    register int t59;
    register int t60;
    register int t61;
    register int t63;
    register int t64;
    register int t65;
    register int t66;
    register int t67;
    register int t68;
    register int t76;
    register int t77;
    register int t70;
    register int t71;
    register int t79;
    register int t2;
    register int t3;
    register int t4;

    t1 = (memset(0xC3CC420, 0x0, 0x4));
    t5 = 0x70;
    t6 = 0x7A;
    t7 = 0x1;
    for (;;) {
        if (t6 == 0) {
            break;
        }
        t1 = t5;
        t3 = 0xC5429C8;
        t3 = (t3 + 0x4C);
        t4 = t7;
        t4 = (t4 + t3);
        t2 = (*(signed char *)((t4 + 0x0)));
        t6 = (t6 - 1);
        t7 = (t7 + 0x1);
        *(unsigned char *)((0xC3CC420 + t1)) = t2;
        t5 = (t5 + 0x1);
    }
    *(unsigned char *)((t5 + 0xC3CC420)) = 0x0;
    t9 = (t5 + 0x1);
    t10 = 0x0;
    for (;;) {
        t11 = t9;
        t9 = (t9 + 0x1);
        t12 = (0xC542FA0 + t10);
        t10 = (t10 + 0x1);
        *(unsigned char *)((0xC3CC420 + t11)) = (*(signed char *)((t12 + 0x0)));
        if ((int)t10 >= (int)0x5) {
            break;
        }
    }
    t14 = t9;
    t15 = 0x0;
    for (;;) {
        t16 = t14;
        t14 = (t14 + 0x1);
        t17 = (0xC542F9C + t15);
        t15 = (t15 + 0x1);
        t18 = *(signed char *)((t17 + 0x0));
        *(unsigned char *)((0xC3CC420 + t16)) = t18;
        if ((int)t15 >= (int)0x4) {
            break;
        }
    }
    t19 = t16;
    t20 = t14;
    t21 = 0xC;
    for (;;) {
        if (t21 == 0) {
            break;
        }
        t19 = t20;
        t21 = (t21 - 1);
        *(unsigned char *)((0xC3CC420 + t19)) = 0x0;
        t20 = (t20 + 0x1);
    }
    t22 = t19;
    t23 = t2;
    t24 = t18;
    t25 = t17;
    t26 = t20;
    t27 = 0x16;
    t28 = 0x81;
    for (;;) {
        if (t27 == 0) {
            break;
        }
        t22 = t26;
        t24 = 0xC5429C8;
        t24 = (t24 + 0x4C);
        t25 = t28;
        t25 = (t25 + t24);
        t23 = (*(signed char *)((t25 + 0x0)));
        t27 = (t27 - 1);
        t28 = (t28 + 0x1);
        *(unsigned char *)((0xC3CC420 + t22)) = t23;
        t26 = (t26 + 0x1);
    }
    t30 = t22;
    t31 = t26;
    t32 = 0xA;
    for (;;) {
        if (t32 == 0) {
            break;
        }
        t30 = t31;
        t32 = (t32 - 1);
        *(unsigned char *)((0xC3CC420 + t30)) = 0x0;
        t31 = (t31 + 0x1);
    }
    t33 = t30;
    t34 = t23;
    t35 = t24;
    t36 = t25;
    t37 = t31;
    t38 = 0x97;
    t39 = 0x9;
    for (;;) {
        if (t39 == 0) {
            break;
        }
        t33 = t37;
        t35 = 0xC5429C8;
        t35 = (t35 + 0x4C);
        t36 = t38;
        t36 = (t36 + t35);
        t34 = (*(signed char *)((t36 + 0x0)));
        t39 = (t39 - 1);
        t38 = (t38 + 0x1);
        *(unsigned char *)((0xC3CC420 + t33)) = t34;
        t37 = (t37 + 0x1);
    }
    t41 = t33;
    t42 = t37;
    t43 = 0x7;
    for (;;) {
        if (t43 == 0) {
            break;
        }
        t41 = t42;
        t43 = (t43 - 1);
        *(unsigned char *)((0xC3CC420 + t41)) = 0x0;
        t42 = (t42 + 0x1);
    }
    t44 = t41;
    t45 = t34;
    t46 = t35;
    t47 = t36;
    t48 = t42;
    t49 = 0xA1;
    t50 = 0xA;
    for (;;) {
        if (t50 == 0) {
            break;
        }
        t44 = t48;
        t46 = 0xC5429C8;
        t46 = (t46 + 0x4C);
        t47 = t49;
        t47 = (t47 + t46);
        t45 = (*(signed char *)((t47 + 0x0)));
        t50 = (t50 - 1);
        t49 = (t49 + 0x1);
        *(unsigned char *)((0xC3CC420 + t44)) = t45;
        t48 = (t48 + 0x1);
    }
    t52 = t44;
    t53 = t48;
    t54 = 0x6;
    for (;;) {
        if (t54 == 0) {
            break;
        }
        t52 = t53;
        t54 = (t54 - 1);
        *(unsigned char *)((0xC3CC420 + t52)) = 0x0;
        t53 = (t53 + 0x1);
    }
    t55 = t52;
    t56 = t45;
    t57 = t46;
    t58 = t47;
    t59 = t53;
    t60 = 0xAB;
    t61 = 0xD;
    for (;;) {
        if (t61 == 0) {
            break;
        }
        t55 = t59;
        t57 = 0xC5429C8;
        t57 = (t57 + 0x4C);
        t58 = t60;
        t58 = (t58 + t57);
        t56 = (*(signed char *)((t58 + 0x0)));
        t61 = (t61 - 1);
        t60 = (t60 + 0x1);
        *(unsigned char *)((0xC3CC420 + t55)) = t56;
        t59 = (t59 + 0x1);
    }
    t63 = t55;
    t64 = t59;
    t65 = 0x3;
    for (;;) {
        if (t65 == 0) {
            break;
        }
        t63 = t64;
        t65 = (t65 - 1);
        *(unsigned char *)((0xC3CC420 + t63)) = 0x0;
        t64 = (t64 + 0x1);
    }
    t66 = t57;
    t67 = t64;
    t68 = 0x0;
    for (;;) {
        t70 = *(int *)0xC542B80;
        t76 = t66;
        t77 = t70;
        if ((int)t68 < (int)0x7) {
            t71 = t68;
            for (;;) {
                t66 = 0xC1874B0;
                t71 = (t71 + 0x1);
                t70 = ((int)((int)t70 / (int)0xA));
                if ((int)t71 >= (int)0x7) {
                    break;
                }
            }
            t76 = 0xC1874B0;
            t77 = t70;
        }
        t66 = t76;
        t66 = 0xC18760C;
        t68 = (t68 + 0x1);
        t79 = t67;
        t67 = (t67 + 0x1);
        *(unsigned char *)((0xC3CC420 + t79)) = ((int)((int)t77 % (int)0xA));
        if ((int)t68 >= (int)0x8) {
            break;
        }
    }
    return t79;
}
