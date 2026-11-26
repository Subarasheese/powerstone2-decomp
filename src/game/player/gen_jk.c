/* Straight-line functions with calls and guards (batch gen_jk): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o131_uchar { char p[0x131]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o3715_uchar { char p[0x3715]; unsigned char v; };
struct o374A_uchar { char p[0x374A]; unsigned char v; };
struct o374B_uchar { char p[0x374B]; unsigned char v; };
struct o3768_int { char p[0x3768]; int v; };
struct o3778_int { char p[0x3778]; int v; };
struct o3778_uint { char p[0x3778]; unsigned int v; };
struct o37DC_float { char p[0x37DC]; float v; };
struct o37E0_float { char p[0x37E0]; float v; };
struct o37E4_float { char p[0x37E4]; float v; };
struct o382E_ushort { char p[0x382E]; unsigned short v; };
struct o3830_ushort { char p[0x3830]; unsigned short v; };
struct o4_float { char p[0x4]; float v; };
struct o41D_uchar { char p[0x41D]; unsigned char v; };
struct o50_float { char p[0x50]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
extern int FUN_0c037bf6();
int FUN_0c038362(int);
int FUN_0c070320(int);
int FUN_0c07043c(int, float, float, float, float);
int FUN_0c070690(int, int, int);
int FUN_0c070980(int);
int FUN_0c071ae4(int);
int FUN_0c07309e(int);
int FUN_0c07c4b0(int, int);
int FUN_0c07d1fc(int);
int FUN_0c07d774(int);
int FUN_0c07da48(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c0819c2(int, int);
int FUN_0c081dfc(int, int, int, int);
int FUN_0c085cac(int, int, int);
int FUN_0c085d0c(int);
int FUN_0c0b75ac(int, int, int);
int FUN_0c0b764c(int);
int FUN_0c0b7b7e(int);
int FUN_0c0b7f34(int, int, int, int);
int FUN_0c0b8438(int, int, int);
int FUN_0c0b819e(int, int, int);
int FUN_0c0b7fc0(int, int, int);
int FUN_0c0b8028(int);
int FUN_0c0b811a(int);
int FUN_0c0b817c(int);
int FUN_0c0c30a8(int, int, int);
int math_vec3_accumulate(int, int);
void FUN_0c0b857c(int a4, int a5, int a6, int a7);
int FUN_0c085098(int a4, int a5, int a6, int a7, float f4);

/* FUN_0c0b857c, written by hand from the original (256 bytes; the generated C was 1,562).
   A dispatcher on the byte at +0x3732 of the object a4. Most arms call one function and share a tail (0C0B8644: FUN_0c07da48,
   FUN_0c070320, then 0C0B8650: FUN_0c07ecc6 and, when it returns 2, a tail jump to FUN_0c085cac); several arms leave by a tail jump.
   Arms 8 and 12 jump to 0C0B819E, an unlisted 42-byte entry inside FUN_0c0b817c's range: a switch on the byte at +22 that tail-jumps to
   FUN_0c0b7fc0, FUN_0c0b8028, FUN_0c0b811a or FUN_0c0b817c. The generated C wrote those four functions' bodies inline.
   Needs, besides the unit's own declarations:
       int FUN_0c0b7fc0(int, int, int);  int FUN_0c0b8028(int);  int FUN_0c0b811a(int);  int FUN_0c0b817c(int);
       int FUN_0c0b8438(int, int, int);   (three parameters: its definition takes a5 and a6 and the original passes them on) */

/* manual: written by hand, 2026-11-23/24 (build/manual/notes_FUN_0c0b857c.txt) */
void FUN_0c0b857c(int a4, int a5, int a6, int a7)
{
    int r;

    switch (*(signed char *)(a4 + 0x3732)) {
    case 2:
        FUN_0c0b764c(a4);
        return;
    case 3:
        FUN_0c070690(a4, a5, a6);
        break;
    case 4:
        FUN_0c070980(a4);
        return;
    case 5:
        FUN_0c0b7b7e(a4);
        goto check;
    case 6:
        FUN_0c0b75ac(a4, a5, a6);
        break;
    case 7:
        FUN_0c0b7f34(a4, a5, a6, a7);
        break;
    case 8:
    case 12:
        FUN_0c0b819e(a4, a5, a6);
        return;
    case 9:
        FUN_0c071ae4(a4);
        return;
    case 13:
        FUN_0c0b8438(a4, a5, a6);
        break;
    case 14:
        FUN_0c07309e(a4);
        return;
    default:
        r = ((int (*)(int, int, int))(FUN_0c037bf6))(a4, a5, a6);
        if ((unsigned char)r != 0) {
            FUN_0c085d0c(a4);
            return;
        }
        FUN_0c038362(a4);
        break;
    }
    FUN_0c07da48(a4);
    FUN_0c070320(a4);
check:
    if (FUN_0c07ecc6(a4, 0, 0) == 2) {
        FUN_0c085cac(a4, 6, 0);
    }
}

int FUN_0c085098(int a4, int a5, int a6, int a7, float f4)
{
    register int t3;
    register int t4;
    int t5;

    (((struct o3715_uchar *)(a4))->v) = 0x2D;
    FUN_0c081dfc(a4, a5, a6, a7);
    FUN_0c07c4b0((*(signed char *)((a4 + 0x1))), 0x3);
    t3 = (((struct o3768_int *)(a4))->v);
    if (t3 != 0) {
        t4 = FUN_0c0c30a8(t3, 0x0, a4);
        if ((t4 != 0) && (t5 = *(signed char *)((t3 + 0x41C)), (unsigned char)t5 == 0xCD)) {
            (((struct o3778_uint *)(a4))->v) = t3;
            { struct mv3 { int w[3]; }; *(struct mv3 *)((0x37DC + a4)) = *(struct mv3 *)((((((struct o3778_int *)(a4))->v)) + 0x28)); }
            (((struct o28_float *)(a4))->v) = ((((struct o37DC_float *)(a4))->v));
            (((struct o30_float *)(a4))->v) = (((((struct o37E4_float *)(a4))->v)) + (*(float *)0xC0851D0));
            (((struct o2C_float *)(a4))->v) = ((((struct o37E0_float *)(a4))->v));
            *(unsigned short *)((a4 + 0x1C)) = 0x1E;
            *(unsigned int *)((a4 + 0x38)) = 0x0;
            (((struct o382E_ushort *)(a4))->v) = 0x0;
            (((struct o3830_ushort *)(a4))->v) = 0x0;
            (((struct o374A_uchar *)(a4))->v) = 0x2;
            (((struct o374B_uchar *)(a4))->v) = 0x2;
            (((struct o41D_uchar *)(t3))->v) = 0x4;
            return (FUN_0c07e79c(a4, 0xFFFFFFFF, 0x2, 0x2B, 0xFFFFFFFF, 0x2, 0x2B));
        }
        return FUN_0c085d0c(a4);
    }
    return FUN_0c085d0c(a4);
}
