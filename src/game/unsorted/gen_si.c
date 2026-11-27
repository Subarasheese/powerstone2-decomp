/* Straight-line functions with calls and guards (batch gen_si): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o4_int { char p[0x4]; int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
int nlRand(void);
int FUN_0c167196(int a4, int a5, int a6, int a7);

int FUN_0c167196(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;

    t1 = *(signed char *)((a4 + 0x14));
    if (t1 != 0) {
        if (t1 == 1) {
        } else {
            return FUN_0c03f346(a4, a5, a6, a7);
        }
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x0, 0x53, (*(int *)0xC4B40CC));
        FUN_0c03744a(((((struct oC8_int *)(a4))->v)), 0x1, 0x53, (*(int *)0xC4B40CC));
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0xF;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC4_int *)(a4))->v)) + 0x6)) = 0x21F;
        t1 = (((struct oC4_int *)(a4))->v);
        t2 = nlRand();
        t3 = (t2 % 0x4);
        t2 = (t3 * 0x1E);
        if ((int)(t3 * 0x1E) < 0) {
            t2 = ((t3 * 0x1E) + 0x3);
        }
        (((struct o80_uint *)(t1))->v) = ((int)(((((float)((t2 >> 1) >> 1) * 65536.0f) / 360.0f)) + 0.5f) & 0xFFFF);
        { struct mv4 { int w[4]; }; *(struct mv4 *)((((((struct oC4_int *)(a4))->v)) + 0x14)) = *(struct mv4 *)(0xC2A34CC); }
        *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
        *(unsigned short *)((((((struct oC8_int *)(a4))->v)) + 0x6)) = 0x21F;
        { struct mv4 { int w[4]; }; *(struct mv4 *)((((((struct oC8_int *)(a4))->v)) + 0x14)) = *(struct mv4 *)(0xC2A34CC); }
    }
    if ((int)(*(short *)((a4 + 0x1C))) <= (int)((((struct o0_int *)0xC2A34C4)->v))) {
        FUN_0c0588bc((((((struct oC4_int *)(a4))->v)) + 0x84), 0xC2A34F8, 0xC2A34EC, (*(short *)((a4 + 0x1C))), (((((struct o0_int *)0xC2A34C4)->v))), 0x0);
        FUN_0c0588bc((((((struct oC8_int *)(a4))->v)) + 0x84), 0xC2A3510, 0xC2A3504, (*(short *)((a4 + 0x1C))), (((((struct o0_int *)0xC2A34C4)->v))), 0x0);
    }
    t1 = *(short *)((a4 + 0x1C));
    if (((int)t1 >= (int)((((struct o4_int *)0xC2A34C4)->v))) && (t0 = (((struct o0_int *)0xC2A34C4)->v), (int)t1 <= (int)t0)) {
        FUN_0c058a6e((((((struct oC4_int *)(a4))->v)) + 0x14), 0xC2A34DC, 0xC2A34CC, (*(short *)((a4 + 0x1C))), (((((struct o0_int *)0xC2A34C4)->v))), (((((struct o4_int *)0xC2A34C4)->v))));
        FUN_0c058a6e((((((struct oC8_int *)(a4))->v)) + 0x14), 0xC2A34DC, 0xC2A34CC, (*(short *)((a4 + 0x1C))), (((((struct o0_int *)0xC2A34C4)->v))), (((((struct o4_int *)0xC2A34C4)->v))));
    }
    t0 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t0 + 0x1);
    t1 = (short)(t0 + 0x1);
    if ((int)(short)(t0 + 0x1) > (int)((((struct o0_int *)0xC2A34C4)->v))) {
        (((struct o14_uchar *)(a4))->v) = 0x3;
        t1 = 0x14;
    }
    return t1;
}
