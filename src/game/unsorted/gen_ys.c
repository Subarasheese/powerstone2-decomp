/* Straight-line functions with calls and guards (batch gen_ys): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c1171f0(int);
int nlAddVector3op(int, int, int);
int FUN_0c1193c8(int a4, int a5, int a6, int a7);

int FUN_0c1193c8(int a4, int a5, int a6, int a7)
{
    register int t1;
    register int t2;
    register int t4;

    t1 = *(int *)((a4 + 0x10));
    if ((*(signed char *)((t1 + 0x14))) == 80) {
        (((struct o14_uchar *)(a4))->v) = 0x63;
    }
    t2 = *(signed char *)((a4 + 0x14));
    if (t2 == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0x1F;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x8, 0xD, (*(int *)0xC4B410C));
        t4 = (((struct oC4_int *)(a4))->v);
        { struct mv3 { int w[3]; }; *(struct mv3 *)((0x90 + t4)) = *(struct mv3 *)((t4 + 0x6C)); }
    }
    if ((t2 == 0) || (t2 == 1)) {
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)(((*(int *)((a4 + 0x10))) + 0x28)); }
        FUN_0c1171f0(a4);
        t4 = (((struct oC4_int *)(a4))->v);
        FUN_0c0588bc((t4 + 0x6C), 0xC291DBC, 0xC291DB0, (*(short *)(((0x41C + t1) + 0x8))), ((*(short *)(((0x41C + t1) + 0xE)))), 0x0);
        if (((*(signed char *)(((*(int *)((a4 + 0x10))) + 0x2))) == 1) && (t4 = *(short *)(((0x41C + t1) + 0xE)), t4 == 0)) {
            t4 = (((struct oC4_int *)(a4))->v);
            FUN_0c0588bc((t4 + 0x6C), 0xC291DBC, 0xC291DB0, 0x0, 0x2, 0x0);
        }
        return nlAddVector3op((t4 + 0x6C), (t4 + 0x6C), (0x90 + t4));
    } else {
        if (t2 != 99) {
            return t2;
        }
        return FUN_0c03f346(a4, a5, a6, a7);
    }
}
