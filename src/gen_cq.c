/* Straight-line functions with calls and guards (batch gen_cq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o1018_float { char p[0x1018]; float v; };
struct o1024_uchar { char p[0x1024]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o2C8_uint { char p[0x2C8]; unsigned int v; };
struct o2CC_uint { char p[0x2CC]; unsigned int v; };
struct o4_int { char p[0x4]; int v; };
struct o8_int { char p[0x8]; int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
int FUN_0c01fce0(int, int, int, int);
int FUN_0c036024(int);
int FUN_0c054c90(int, int, int);
int FUN_0c05b026(int, int, int, int);
int FUN_0c05c2b4(void);
int FUN_0c060fc2(int, int);
int FUN_0c0980e0(int, int, int, int);
int FUN_0c0b49c8(int, int, int, int);
int FUN_0c0b90ca(int, int, int, int);
int FUN_0c1064f0(void);
int FUN_0c1066a4(void);
int FUN_0c164fa8(int, int, int);
int FUN_0c17df90(int, int);
int FUN_0c187a88(int, int, int);
int FUN_0c187b48(int, int, int);
int buDeleteFile(int);
int FUN_0c01e988(void);
int FUN_0c01e992(void);
void FUN_0c020e8a(void);
int FUN_0c0206b4(int a4, int a5, int a6, int a7);
int FUN_0c02b502(int a4);
int FUN_0c02b52c(float f4);
int FUN_0c02d0b4(void);
int FUN_0c0365c8(int a4);
int FUN_0c039edc(int a4);
int FUN_0c03dc1c(int a4);
int FUN_0c03efec(void);
int FUN_0c054a62(int a4, int a5, int a6);
int FUN_0c057384(void);
int FUN_0c05b048(int a4, int a5);
int FUN_0c05b052(int a4, int a5);
int FUN_0c05b05c(int a4, int a5);
int FUN_0c05b0a0(int a4, int a5);
int FUN_0c05b0b4(int a4, int a5);
int FUN_0c05f222(void);
int FUN_0c05c372(void);
int FUN_0c060bd8(void);
int FUN_0c09810e(int a4, int a5, int a6, int a7);
int FUN_0c0ae1ae(int a4, int a5, int a6, int a7);
int FUN_0c0b4af2(int a4, int a5, int a6, int a7);
int FUN_0c0b9138(int a4, int a5, int a6, int a7);
int FUN_0c100650(void);
int FUN_0c115490(void);
int FUN_0c10651c(void);
void FUN_0c115ea4(int a4);
void FUN_0c11fa50(void);
int FUN_0c16516e(int a4, int a5, int a6);
int FUN_0c16f61c(void);
int FUN_0c01c38a(void);
int FUN_0c03cbf2(int a4);

int FUN_0c01e988(void)
{
    return FUN_0c187a88(0xC30AB2E, 0xC83C61C, 0x44);
}

int FUN_0c01e992(void)
{
    return FUN_0c187a88(0xC83C660, 0xC30AA34, 0x44);
}

void FUN_0c020e8a(void)
{
    *(unsigned char *)0xC309858 = ((*(signed char *)0xC309858) + 0x1);
}

int FUN_0c0206b4(int a4, int a5, int a6, int a7)
{
    *(unsigned char *)0xC309858 = ((*(signed char *)0xC309858) + 0x1);
    return FUN_0c01fce0(0xC309858, a5, a6, a7);
}

int FUN_0c02b502(int a4)
{
    (((struct o1024_uchar *)((*(int *)0xC30B70C)))->v) = a4;
    return 0x1024;
}

int FUN_0c02b52c(float f4)
{
    (((struct o1018_float *)((*(int *)0xC30B70C)))->v) = f4;
    return 0x1018;
}

int FUN_0c02d0b4(void)
{
    return FUN_0c187a88(0xC83C6A4, 0xC30A40C, 0x1C);
}

int FUN_0c0365c8(int a4)
{
    int stk[1];

    *(unsigned char *)(((int)stk + 0)) = a4;
    return FUN_0c036024((*(signed char *)(((int)stk + 0))));
}

int FUN_0c039edc(int a4)
{
    *(unsigned int *)(((a4 << 2) + 0xC3C7E00)) = 0x0;
    return 0xC3C7E00;
}

int FUN_0c03dc1c(int a4)
{
    (((struct oA8_uchar *)(a4))->v) = (*(signed char *)0xC3DC265);
    return 0xA8;
}

int FUN_0c03efec(void)
{
    return FUN_0c187b48(0xC540978, 0x0, 0x784);
}

int FUN_0c054a62(int a4, int a5, int a6)
{
    (((struct o2C8_uint *)(a4))->v) = a5;
    (((struct o2CC_uint *)(a4))->v) = a5;
    return FUN_0c054c90(a4, a5, a6);
}

int FUN_0c057384(void)
{
    return FUN_0c17df90(0xC1BFA20, 0xC1BFB18);
}

int FUN_0c05b048(int a4, int a5)
{
    return FUN_0c05b026(a4, a5, ((((struct o0_int *)0xC1C3444)->v)), ((((struct o4_int *)0xC1C3444)->v)));
}

int FUN_0c05b052(int a4, int a5)
{
    return FUN_0c05b026(a4, a5, ((((struct o4_int *)0xC1C3444)->v)), ((((struct o0_int *)0xC1C3444)->v)));
}

int FUN_0c05b05c(int a4, int a5)
{
    return FUN_0c05b026(a4, a5, (*(int *)0xC46DFFC), (*(int *)0xC1C3444));
}

int FUN_0c05b0a0(int a4, int a5)
{
    return FUN_0c05b026(a4, a5, ((((struct o0_int *)0xC1C3448)->v)), ((((struct o4_int *)0xC1C3448)->v)));
}

int FUN_0c05b0b4(int a4, int a5)
{
    return FUN_0c05b026(a4, a5, ((((struct o8_int *)0xC1C3444)->v)), ((((struct o0_int *)0xC1C3444)->v)));
}

int FUN_0c05f222(void)
{
    (((struct o0_uchar *)0xC541F41)->v) = 0x1;
    (((struct o2_uchar *)0xC541F41)->v) = 0x1;
    return 0x1;
}

int FUN_0c05c372(void)
{
    *(unsigned char *)0xC541F41 = ((*(signed char *)0xC541F41) + 0x1);
    return FUN_0c05c2b4();
}

int FUN_0c060bd8(void)
{
    return FUN_0c060fc2((*(signed char *)0xC542237), (*(signed char *)0xC54223C));
}

int FUN_0c09810e(int a4, int a5, int a6, int a7)
{
    *(volatile signed char *)((a4 + 0x3728));
    return FUN_0c0980e0(a4, a5, a6, a7);
}

int FUN_0c0ae1ae(int a4, int a5, int a6, int a7)
{
    *(volatile signed char *)((a4 + 0x3728));
    return ((int (*)(int, int, int, int))(0xC0AE168))(a4, a5, a6, a7);
}

int FUN_0c0b4af2(int a4, int a5, int a6, int a7)
{
    *(volatile signed char *)((a4 + 0x3728));
    return FUN_0c0b49c8(a4, 0x0, a6, a7);
}

int FUN_0c0b9138(int a4, int a5, int a6, int a7)
{
    *(volatile signed char *)((a4 + 0x3728));
    return FUN_0c0b90ca(a4, a5, a6, a7);
}

int FUN_0c100650(void)
{
    (((struct o0_uchar *)0xC541F44)->v) = 0x0;
    (((struct o1_uchar *)0xC541F44)->v) = 0x0;
    return 0x0;
}

int FUN_0c115490(void)
{
    *(unsigned char *)0xC5324AC = 0x0;
    return 0x14;
}

int FUN_0c10651c(void)
{
    FUN_0c1066a4();
    return FUN_0c1064f0();
}

void FUN_0c115ea4(int a4)
{
    *(unsigned int *)0xC47471C = ((*(int *)0xC47471C) - a4);
}

void FUN_0c11fa50(void)
{
    *(unsigned int *)0xC475200 = ((*(int *)0xC475200) + 0x1);
}

int FUN_0c16516e(int a4, int a5, int a6)
{
    int stk[1];

    *(unsigned char *)(((int)stk + 0)) = a4;
    return FUN_0c164fa8((*(signed char *)(((int)stk + 0))), a5, a6);
}

int FUN_0c16f61c(void)
{
    return FUN_0c17df90(0xC203DD0, 0xC203EC8);
}

int FUN_0c01c38a(void)
{
    *(unsigned char *)0xC305046 = 0x2;
    return 0xC305046;
}

int FUN_0c03cbf2(int a4)
{
    return buDeleteFile(a4);
}
