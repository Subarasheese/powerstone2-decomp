/* Straight-line functions with calls and guards (batch gen_cv): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c037bf6(int);
int FUN_0c0385e0(int);
int FUN_0c056b68(int, int, int, int);
int FUN_0c05abb2(int, int);
int FUN_0c2b2456(void);
int math_mat_get_translate(int, int);
int thunk_FUN_0c2b2456(void);
int thunk_FUN_0c056b68(int a4, int a5, int a6, int a7);
int FUN_0c056f70(void);
int FUN_0c056f76(void);
int FUN_0c057a36(void);
int thunk_FUN_0c058310(int a4, int a5);
int thunk_FUN_0c05abb2(int a4, int a5);
void FUN_0c05a40c(int a4);
int FUN_0c05a412(void);
void FUN_0c05ab78(int a4);
int FUN_0c05ade4(void);
void FUN_0c05f42a(int a4);
int FUN_0c05f430(void);
int FUN_0c05f76a(void);
int FUN_0c06bfb4(int a4);
int FUN_0c06c4d6(int a4);
int thunk_FUN_0c0385e0(int a4);

int thunk_FUN_0c2b2456(void)
{
    return FUN_0c2b2456();
}

int thunk_FUN_0c056b68(int a4, int a5, int a6, int a7)
{
    return FUN_0c056b68(a4, a5, a6, a7);
}

int FUN_0c056f70(void)
{
    return (*(int *)0xC40FA38);
}

int FUN_0c056f76(void)
{
    return (*(int *)0xC40FA34);
}

int FUN_0c057a36(void)
{
    return (*(int *)0xC40FA9C);
}

int thunk_FUN_0c058310(int a4, int a5)
{
    return math_mat_get_translate(a4, a5);
}

int thunk_FUN_0c05abb2(int a4, int a5)
{
    return FUN_0c05abb2(a4, a5);
}

void FUN_0c05a40c(int a4)
{
    *(unsigned int *)0xC46E1A4 = a4;
}

int FUN_0c05a412(void)
{
    return (*(int *)0xC46E1A4);
}

void FUN_0c05ab78(int a4)
{
    *(unsigned int *)0xC46E198 = a4;
}

int FUN_0c05ade4(void)
{
    return (*(int *)0xC46DFFC);
}

void FUN_0c05f42a(int a4)
{
    *(unsigned char *)0xC46E1CE = a4;
}

int FUN_0c05f430(void)
{
    return (*(signed char *)0xC46E1CE);
}

int FUN_0c05f76a(void)
{
    return (*(signed char *)0xC46E1CD);
}

int FUN_0c06bfb4(int a4)
{
    return FUN_0c037bf6(a4);
}

int FUN_0c06c4d6(int a4)
{
    return FUN_0c037bf6(a4);
}

