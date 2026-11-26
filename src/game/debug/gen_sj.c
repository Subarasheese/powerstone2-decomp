/* Straight-line functions with calls and guards (batch gen_sj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o8_float { char p[0x8]; float v; };
int nlRand(void);
int FUN_0c0d06e4(int a4, float f4);

int FUN_0c0d06e4(int a4, float f4)
{
    int stk[10];
    register int t1;
    register float u2;
    register int t4;
    register int t5;
    register float u6;
    register float u7;
    register float u8;
    register int t9;
    register int t10;
    register int t11;
    register float u13;
    register int t14;
    register int t15;
    register float u16;
    register float u17;
    register int t21;
    register int t22;
    register int t24;
    register int t27;
    register int t28;
    register int t30;
    register float u32;
    register float u33;
    register int t40;
    register float u41;
    register int t43;
    register int t44;
    register int t45;
    register float u46;
    register float u47;
    register int t48;
    register float u49;
    register int t50;
    register float u52;
    register int t54;
    register int t55;
    register float u56;
    register float u57;
    register int t61;
    register int t62;
    register int t64;
    register int t66;
    register int t67;
    register float u69;
    register float u70;
    register int t86;
    register int t25;
    register int t26;
    register int t29;
    register float u31;
    register int t65;
    register float u68;
    register float u78;
    register int t79;
    register float u80;

    (((struct o8_float *)(((int)stk + 0)))->v) = (*(float *)((a4 + 0x0)));
    t1 = *(int *)0xC472A3C;
    u2 = (((struct o8_float *)(((int)stk + 0)))->v);
    (((struct o8_float *)(((int)stk + 0)))->v) = (u2 * (float)t1);
    t4 = 0x4;
    t5 = a4;
    u6 = (0.0f + ((u2 * (float)t1)));
    for (;;) {
        u7 = *(float *)((t5 + 0x0));
        t5 = (t5 + 0x4);
        u8 = *(float *)((a4 + t4));
        t9 = t4;
        t10 = (t4 + (((int)stk + 0) + 0x8));
        t4 = (t4 + 0x4);
        *(float *)((t10 + 0x0)) = (u8 - u7);
        t11 = *(int *)((0xC472A3C + t9));
        *(float *)((t10 + 0x0)) = ((u8 - u7) * (float)t11);
        u6 = (u6 + (((u8 - u7) * (float)t11)));
        if ((unsigned int)t4 >= (unsigned int)0x1C) {
            break;
        }
    }
    u13 = (((struct o8_float *)(((int)stk + 0)))->v);
    (((struct o8_float *)(((int)stk + 0)))->v) = (u13 / u6);
    *(unsigned int *)(((int)stk + 0)) = ((((int)stk + 0) + 0x8) + 0x4);
    t14 = ((((int)stk + 0) + 0x8) + 0x4);
    t15 = (((int)stk + 0) + 0x8);
    u16 = ((u8 - u7) * (float)t11);
    u17 = (u13 / u6);
    for (;;) {
        if ((unsigned int)t14 >= (unsigned int)((((int)stk + 0) + 0x8) + 0x1C)) {
            break;
        }
        u17 = (*(float *)((t14 + 0x0)));
        u17 = (u17 / u6);
        *(float *)((t14 + 0x0)) = u17;
        u16 = (*(float *)((t14 + 0x0)));
        u17 = (*(float *)((t15 + 0x0)));
        t15 = (t15 + 0x4);
        u16 = (u16 + u17);
        *(float *)((t14 + 0x0)) = u16;
        t14 = (t14 + 0x4);
    }
    t21 = nlRand();
    t22 = (t21 % 0x400);
    t24 = t22;
    t27 = 0x3FF;
    t28 = 0x0;
    t30 = t29;
    u32 = ((float)t22 + 1.0f);
    u33 = f4;
    for (;;) {
        if ((int)t28 >= (int)0x7) {
            break;
        }
        t24 = t28;
        t24 = (t24 << 2);
        u31 = 0.0f;
        u32 = (*(float *)(((((int)stk + 0) + 0x8) + t24)));
        if (u32 != u31) {
            if ((int)t28 > 0) {
                t25 = t28;
                t26 = t28;
                t25 = (t25 - 1);
                t27 = ((int)stk + 0);
                t26 = (t26 << 2);
                t25 = (t25 << 2);
                t27 = (t27 + 0x8);
                t25 = (t25 + t27);
                t26 = (t26 + t27);
                u32 = (*(float *)((t25 + 0x0)));
                u31 = (*(float *)((t26 + 0x0)));
                if (u31 != u32) {
                } else {
                    t28 = (t28 + 0x1);
                    continue;
                }
            }
            t24 = t28;
            t24 = (t24 << 2);
            u33 = (*(float *)(((((int)stk + 0) + 0x8) + t24)));
            t30 = t28;
            if (!(u33 > (((float)t22 + 1.0f) / 1024.0f))) {
                t28 = (t28 + 0x1);
                continue;
            }
            break;
        }
        t28 = (t28 + 0x1);
    }
    (((struct o8_float *)(((int)stk + 0)))->v) = (*(float *)0xC1C740C);
    *(unsigned int *)(((int)stk + 4)) = (t30 * 0x38);
    t40 = *(int *)((((t30 * 0x38) + 0xC47280C) + 0x4));
    u41 = (((struct o8_float *)(((int)stk + 0)))->v);
    (((struct o8_float *)(((int)stk + 0)))->v) = (u41 * (float)t40);
    t43 = 0x4;
    t44 = (((t30 * 0x38) + 0xC47280C) + 0x8);
    t45 = 0x0;
    u46 = (0.0f + ((u41 * (float)t40)));
    for (;;) {
        u47 = *(float *)((t43 + 0xC1C740C));
        t48 = (t43 + (((int)stk + 0) + 0x8));
        t43 = (t43 + 0x4);
        u49 = *(float *)((t45 + 0xC1C740C));
        *(float *)((t48 + 0x0)) = (u47 - u49);
        t50 = *(int *)((t44 + 0x4));
        t44 = (t44 + 0x8);
        u46 = (u46 + (((u47 - u49) * (float)t50)));
        *(float *)((t48 + 0x0)) = ((u47 - u49) * (float)t50);
        t45 = (t45 + 0x4);
        if ((unsigned int)t43 >= (unsigned int)0x1C) {
            break;
        }
    }
    u52 = (((struct o8_float *)(((int)stk + 0)))->v);
    (((struct o8_float *)(((int)stk + 0)))->v) = (u52 / u46);
    t54 = (*(int *)(((int)stk + 0)));
    t55 = (((int)stk + 0) + 0x8);
    u56 = ((u47 - u49) * (float)t50);
    u57 = (u52 / u46);
    for (;;) {
        if ((unsigned int)t54 >= (unsigned int)((((int)stk + 0) + 0x8) + 0x1C)) {
            break;
        }
        u57 = (*(float *)((t54 + 0x0)));
        u57 = (u57 / u46);
        *(float *)((t54 + 0x0)) = u57;
        u56 = (*(float *)((t54 + 0x0)));
        u57 = (*(float *)((t55 + 0x0)));
        t55 = (t55 + 0x4);
        u56 = (u56 + u57);
        *(float *)((t54 + 0x0)) = u56;
        t54 = (t54 + 0x4);
    }
    t61 = nlRand();
    t62 = (t61 % 0x400);
    t64 = 0x0;
    t66 = t65;
    t67 = 0x1C;
    u69 = ((float)t62 + 1.0f);
    u70 = f4;
    for (;;) {
        if ((int)t64 >= (int)0x7) {
            break;
        }
        t66 = t64;
        t66 = (t66 << 2);
        t66 = (t66 + (((int)stk + 0) + 0x8));
        u69 = 0.0f;
        u68 = (*(float *)((t66 + 0x0)));
        if ((u68 != u69) && (((int)t64 <= 0) || (u78 = *(float *)((t66 + 0x0)), t79 = (u68 == u69), u68 = u78, u80 = *(float *)(((((t64 - 1) << 2) + (((int)stk + 0) + 0x8)) + 0x0)), u69 = u80, u68 != u69))) {
            u70 = (*(float *)((t66 + 0x0)));
            t67 = t64;
            if (!(u70 > (((float)t62 + 1.0f) / 1024.0f))) {
                t64 = (t64 + 0x1);
                continue;
            }
            break;
        }
        t64 = (t64 + 0x1);
    }
    t86 = *(int *)(((int)stk + 4));
    return (*(short *)(((((int)((int)(nlRand()) % (int)(*(int *)((((t86 + 0xC47280C) + ((t67 << 2) << 1)) + 0x4))))) << 1) + (*(int *)((((t86 + 0xC47280C) + ((t67 << 2) << 1)) + 0x0))))));
}
