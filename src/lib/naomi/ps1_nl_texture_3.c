/* Library code: C that behaves like this game's own bytes. */
/* same module (helpers) (0c0dd880-0c0ddf30) */

int kmCreateTextureSurface(int, int, int, int);
int kmLoadTexture(int, int, int, int);
void FUN_0c0ddd40(int, int);
struct at_0_int { int field_0; };
struct at_4_int { char pad[0x4]; int field_4; };
int FUN_0c0dde30(void);
int FUN_0c0fca52(int, int);
struct o0_short { short v; };
struct o2_short { char p[0x2]; short v; };
struct o4_int { char p[0x4]; int v; };
struct o8_int { char p[0x8]; int v; };
int nl_texture_surface_words(int);
struct o0_int { int v; };
int FUN_0c0fcb8a(void);

int FUN_0c0dd9f0(int a4, int a5);


int FUN_0c0ddb00(void)
{
    int stk[2];

    FUN_0c0fca52(((int)stk + 0), (((int)stk + 0) + 0x4));
    return (*(int *)(((int)stk + 0)));
}


int FUN_0c0ddb20(void)
{
    int stk[2];

    FUN_0c0fca52((((int)stk + 0) + 0x4), ((int)stk + 0));
    return (*(int *)(((int)stk + 0)));
}


int nl_texture_slot_free(int a4, int a5)
{
    register int t2;

    if ((int)a4 >= 0) {
        t2 = *(int *)0xC7F87CC;
        *(unsigned int *)(((((int)a4 >> 5) << 2) + t2)) = ((*(int *)(((((int)a4 >> 5) << 2) + t2))) & (~((int)0x1 << (int)(0x1F & a4))));
    }
    return t2;
}
