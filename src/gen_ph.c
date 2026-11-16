/* Straight-line functions with calls and guards (batch gen_ph): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
int FUN_0c010220(int, int, int, int);
int FUN_0c0169cc(int, int, int);
int FUN_0c016d00(int, int, int, int);
int FUN_0c017e68(void);
int FUN_0c035c1a(int, int);
int FUN_0c03ea04(int, int);
int FUN_0c03f0aa(void);
int FUN_0c0527e6(void);
int FUN_0c0573c0(int, int, int);
int FUN_0c05bb6c(void);
int FUN_0c05bd22(void);
int FUN_0c0d04b4(int);
int FUN_0c0f98ce(void);
int FUN_0c0f9c66(void);
int FUN_0c0fa55a(void);
int FUN_0c10208a(int, int);
int FUN_0c187b48(int, int, int);
int game_reset_objects(void);
int res_model_register(int);
int FUN_0c0e2dae(int a4);
int FUN_0c0e92f8(int a4);
int FUN_0c11ee40(void);
int FUN_0c0fa57a(int a4);
int FUN_0c036a04(void);
int FUN_0c017160(int a4, int a5, int a6, int a7);
int FUN_0c035bc6(int a4, int a5, int a6, int a7);
int FUN_0c035bf0(int a4, int a5, int a6, int a7);
int FUN_0c05b8cc(int a4, int a5, int a6, int a7);
int FUN_0c036908(int a4, int a5, int a6, int a7);

int FUN_0c0e2dae(int a4)
{
    register int t0;
    register int t1;

    *(unsigned char *)0xC54223C = a4;
    *(unsigned short *)0xC540996 = 0x0;
    t0 = *(signed char *)0xC542237;
    t1 = *(signed char *)0xC54223C;
    FUN_0c0d04b4(((((((t0 << 2) << 1) + t0) << 2) + 0xC286D34) + (((t1 << 1) + t1) << 2)));
    return FUN_0c03ea04(0x2, 0x0);
}

int FUN_0c0e92f8(int a4)
{
    register int t0;
    register int t1;

    *(unsigned char *)0xC54223C = a4;
    *(unsigned short *)0xC540996 = 0x0;
    t0 = *(signed char *)0xC542237;
    t1 = *(signed char *)0xC54223C;
    FUN_0c0d04b4(((((((t0 << 2) << 1) + t0) << 2) + 0xC286D34) + (((t1 << 1) + t1) << 2)));
    return FUN_0c03ea04(0x2, 0x0);
}

int FUN_0c11ee40(void)
{
    (((struct o0_uchar *)0xC4750AC)->v) = ((*(signed char *)0xC4750AC) + 0x1);
    (((struct o1_uchar *)0xC4750AC)->v) = 0x0;
    (((struct o0_uint *)0xC542440)->v) = 0xFF4040F0;
    (((struct o4_uint *)0xC542440)->v) = 0xFF4040F0;
    (((struct o8_uint *)0xC542440)->v) = 0xFF404080;
    FUN_0c0527e6();
    FUN_0c03f0aa();
    game_reset_objects();
    FUN_0c0573c0(0xFFFFFFFF, 0x0, 0x1E);
    return FUN_0c03ea04(0x3, 0x0);
}

int FUN_0c0fa57a(int a4)
{
    (((struct o8_uint *)0xC542440)->v) = 0xFF212B33;
    (((struct o4_uint *)0xC542440)->v) = 0xFF212B33;
    (((struct o0_uint *)0xC542440)->v) = 0xFF212B33;
    FUN_0c03ea04(0x9, 0x0);
    FUN_0c0527e6();
    if (a4 == 0) {
        FUN_0c0f98ce();
        return FUN_0c0f9c66();
    }
    *(unsigned char *)0xC541F44 = 0x1;
    return FUN_0c0fa55a();
}

int FUN_0c036a04(void)
{
    register int t5;

    if ((*(int *)0xC4B41FC) == 0) {
        FUN_0c187b48((*(int *)0xC4B4528), 0x0, 0x100000);
        t5 = FUN_0c035c1a(0x1B6, (*(int *)0xC4B4528));
        *(unsigned int *)0xC4B41FC = 0x1;
    }
    return t5;
}

int FUN_0c017160(int a4, int a5, int a6, int a7)
{
    if ((*(signed char *)(((*(int *)0xC304BA0) + 0x4C))) == 0) {
        if ((*(signed char *)0xC304C24) == 0) {
            if (a4 == 0) {
                return FUN_0c016d00(a4, a5, a6, a7);
            }
            return 0x4C;
        }
        return FUN_0c0169cc(a4, a5, a6);
    }
    return FUN_0c017e68();
}

int FUN_0c035bc6(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = FUN_0c010220(0xCB00000, a4, a6, a7);
    *(unsigned int *)0xC3BD45C = (((0xCB00000 + t0) & 0xFFFFFFE0) + 0x20);
    return t0;
}

int FUN_0c035bf0(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = FUN_0c010220(0xCB00000, a4, a6, a7);
    *(unsigned int *)0xC3BD45C = (((0xCB00000 + t0) & 0xFFFFFFE0) + 0x20);
    return t0;
}

int FUN_0c05b8cc(int a4, int a5, int a6, int a7)
{
    register int t0;

    t0 = *(signed char *)0xC541F41;
    if ((unsigned char)t0 != 0) {
        if ((unsigned char)t0 != 1) {
            if ((unsigned char)t0 != 5) {
                return (unsigned char)t0;
            }
            return FUN_0c05bd22();
        }
        return FUN_0c10208a(a4, a5);
    }
    return FUN_0c05bb6c();
}

int FUN_0c036908(int a4, int a5, int a6, int a7)
{
    FUN_0c035bc6(0x24, a5, a6, a7);
    return res_model_register(0xC241F90);
}
