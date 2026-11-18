/* scratch */
struct o114_int { char p[0x114]; int v; };
struct o44_float { char p[0x44]; float v; };
struct o64_ushort { char p[0x64]; unsigned short v; };
struct o88_float { char p[0x88]; float v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c0f485a(int a4, int a5, int a6);

int FUN_0c0f485a(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;
    register float u1;

    t0 = 0x0;
    t1 = a6;
    for (;;) {
        if ((int)t0 >= (int)((((struct oC0_int *)(a4))->v))) {
            break;
        }
        t1 = t0;
        t1 = (t1 << 2);
        t1 = (t1 + (0xC4 + a4));
        t1 = (*(int *)((t1 + 0x0)));
        *(unsigned char *)((t1 + 0x0)) = 0x1;
        *(unsigned short *)((t1 + 0x6)) = 0xF;
        t2 = 0x2;
        t3 = *(signed char *)((0xC2885B4 + t0));
        t2 = (t2 + t1);
        t0 = (t0 + 0x1);
        *(unsigned char *)((t2 + 0x0)) = t3;
    }
    *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x1F;
    { struct mv3 { int w[3]; }; *(struct mv3 *)((((((struct oC4_int *)(a4))->v)) + 0x84)) = *(struct mv3 *)((a4 + 0x40)); }
    t0 = (a4 + 0x40);
    t2 = 0x0;
    t3 = t1;
    for (;;) {
        if ((int)t2 >= (int)((((struct o114_int *)(a4))->v))) {
            break;
        }
        t0 = 0x118;
        t3 = t2;
        t3 = (t3 << 2);
        t0 = (t0 + a4);
        u0 = 1.0f;
        t0 = (t0 + t3);
        t2 = (t2 + 0x1);
        (((struct o64_ushort *)((*(int *)((t0 + 0x0)))))->v) = 0xF;
        u1 = u0;
        u1 = u1 + (0.125f) * (((((struct o44_float *)(a4))->v)));
        u0 = u1;
        t3 = (t3 + (0x118 + a4));
        t0 = (*(int *)((t3 + 0x0)));
        (((struct o88_float *)(t0))->v) = u0;
    }
    return 0x114;
}

