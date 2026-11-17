/* game/player: functions 0C0ABC34-0C0ACAEA, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o131_uchar { char p[0x131]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c037bf6(int, int, int);
int FUN_0c07043c(int, float, float, float, float);
int FUN_0c07d774(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c0819c2(int, int);
int FUN_0c0abc6c(int a4, int a5, int a6);
int FUN_0c0abea8(int a4, int a5, int a6);

int FUN_0c0abc6c(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    t0 = FUN_0c037bf6(a4, a5, a6);
    t1 = (unsigned char)t0;
    if ((unsigned char)t0 != 0) {
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x2, 0xD, (t0), 0x2, 0xD);
        *(unsigned int *)((a4 + 0x38)) = (FUN_0c07d774(a4));
        FUN_0c0819c2(a4, 0x4000);
        FUN_0c07043c(a4, ((((struct oC_float *)0xC0ABD50)->v)), ((((struct o8_float *)0xC0ABD50)->v)), ((((struct o4_float *)0xC0ABD50)->v)), ((((struct o0_float *)0xC0ABD50)->v)));
        (((struct o131_uchar *)(a4))->v) = 0x0;
        (((struct o16_uchar *)(a4))->v) = 0x1;
        t1 = 0x16;
    }
    return t1;
}

int FUN_0c0abea8(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    (((struct o374B_uchar *)(a4))->v) = 0x1;
    t0 = FUN_0c037bf6(a4, a5, a6);
    t1 = (unsigned char)t0;
    if ((unsigned char)t0 != 0) {
        t0 = *(signed char *)((a4 + 0x1));
        FUN_0c07e79c(a4, t0, 0x2, 0x13, (t0), 0x2, 0x13);
        *(unsigned int *)((a4 + 0x38)) = (FUN_0c07d774(a4));
        FUN_0c0819c2(a4, 0x4000);
        FUN_0c07043c(a4, ((((struct oC_float *)0xC0ABFC0)->v)), ((((struct o8_float *)0xC0ABFC0)->v)), ((((struct o4_float *)0xC0ABFC0)->v)), ((((struct o0_float *)0xC0ABFC0)->v)));
        (((struct o131_uchar *)(a4))->v) = 0x0;
        *(unsigned short *)((a4 + 0x1C)) = 0x5;
        (((struct o16_uchar *)(a4))->v) = 0x1;
        t1 = 0x16;
    }
    return t1;
}
