/* Straight-line functions with calls and guards (batch gen_lh): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o136_uchar { char p[0x136]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o19_uchar { char p[0x19]; unsigned char v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
int FUN_0c03f346(int, int, int);
int FUN_0c064d5a(int, int);
int FUN_0c0e33cc(int, int, int);
int FUN_0c187798(int, int, int);
int FUN_0c0e36b6(int a4);

int FUN_0c0e36b6(int a4)
{
    int stk[3];
    register int t0;
    register int t22;
    register int t23;
    register int t42;
    register int t34;
    int t3;
    register int t30;
    register int t31;
    register int t11;
    register int t14;

    t0 = *(signed char *)0xC54098E;
    t31 = *(signed char *)((a4 + 0x2));
    if ((t31 != (*(int *)(((((t0 << 2) << 2) + 0xC288050) + 0x0)))) && (t3 = *(int *)(((((t0 << 2) << 2) + 0xC288050) + 0x4)), t31 != t3)) {
        t30 = (((t0 << 2) << 2) + 0xC288050);
    } else {
        if ((*(signed char *)((a4 + 0x2))) == (*(int *)(((((t0 << 2) << 2) + 0xC288050) + 0x0)))) {
            FUN_0c187798((((t0 << 2) << 2) + 0xC288050), 0xC1CBC08, 0xC1CBC08);
            FUN_0c187798(0x0, 0x0, t11);
        } else {
            FUN_0c187798((((t0 << 2) << 2) + 0xC288050), 0xC1CBC08, 0xC1CBC08);
            FUN_0c187798(0x0, 0x0, t14);
        }
        *(float *)(((int)stk + 4)) = ((*(float *)(((int)stk + 4))) + (*(float *)0xC0E384C));
        FUN_0c0e33cc(a4, ((int)stk + 0), ((*(short *)0xC540994) - 40));
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct o15_uchar *)(a4))->v) = 0x1;
        (((struct o16_uchar *)(a4))->v) = 0x2;
        (((struct o19_uchar *)(a4))->v) = 0x0;
        *(unsigned int *)((a4 + 0x34)) = 0xFFFFE38F;
        t22 = *(short *)0xC540994;
        *(unsigned short *)((a4 + 0x1E)) = t22;
        *(unsigned short *)((a4 + 0x1C)) = t22;
        t23 = *(signed char *)((a4 + 0x2));
        FUN_0c064d5a(a4, (((((t23 - 1) << 1) + (t23 - 1)) << 2) + 0xC1CBBC0));
        (((struct o136_uchar *)(a4))->v) = 0x0;
        (((struct o12E_ushort *)(a4))->v) = 0xFFFFFFEF;
    }
    t42 = 0x15;
    if ((int)(*(signed char *)0xC54098D) >= (int)0x11) {
        t34 = *(signed char *)((a4 + 0x2));
        switch (t34) {
        case 1:
            *(unsigned int *)0xC540D94 = 0x0;
            break;
        case 2:
            *(unsigned int *)0xC540DD4 = 0x0;
            break;
        case 3:
            *(unsigned int *)0xC540E14 = 0x0;
            break;
        }
        t42 = (FUN_0c03f346(a4, t30, t31));
    }
    return t42;
}
