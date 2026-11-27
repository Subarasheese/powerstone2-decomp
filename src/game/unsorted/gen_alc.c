/* Straight-line functions with calls and guards (batch gen_alc): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o17_uchar { char p[0x17]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o30_float { char p[0x30]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c05f22c(int);
int FUN_0c1171f0(int);
int nlAddVector3op(int, int, int);
int FUN_0c0fb9aa(int a4);

/* manual: object state machine (init, two vertex copies, two 4-state sequencers as one loop over h); the same cases as the lifted C */
int FUN_0c0fb9aa(int a4)
{
    char *p = (char *)a4;
    int s, h, v, ret, x, y, hi, lo, c;
    int buf[4];

    s = *(signed char *)(p + 0x14);
    if (s == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0x1F;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        (((struct o30_float *)(a4))->v) = (1.0f + 1.0f);
        FUN_0c1171f0(a4);
        for (h = 0; h < 2; h++) {
            FUN_0c03744a(*(int *)(p + 0xC4 + 4 * h), 0x0, (*(int *)((((*(short *)0xC541F50) << 2) + 0xC28EADC))) + 3 * h, (*(int *)0xC4B4118));
        }
        for (h = 0; h < 2; h++) {
            c = *(int *)(p + 0xC4 + 4 * h);
            *(unsigned short *)((c + 0x6)) = ((*(short *)((c + 0x6))) | 0x600);
        }
    } else if (s != 1) {
        return s;
    }
    if ((*(signed char *)((0x14 + (*(int *)((a4 + 0x10)))))) == 1) {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x0;
    }
    for (h = 0; h < 2; h++) {
        FUN_0c03744a(*(int *)(p + 0xC4 + 4 * h), 0x0, (*(int *)((((*(short *)0xC541F50) << 2) + 0xC28EADC))) + 3 * h, (*(int *)0xC4B4118));
    }
    for (h = 0; h < 2; h++) {
        nlAddVector3op(*(int *)(p + 0xC4 + 4 * h) + 0x6C, 0xC28E898, (0xC28E8D0 + (((*(short *)0xC541F50) * 3) << 2)));
    }
    x = *(int *)((0xC28E9B4 + ((*(short *)0xC541F50) << 2)));
    *(unsigned char *)(*(int *)(p + 0xC8)) = x;
    *(unsigned char *)(*(int *)(p + 0xC4)) = x;
    if ((int)(*(short *)0xC541F50) >= (int)0x7) {
        *(unsigned char *)(*(int *)(p + 0xC4)) = 0x0;
        *(unsigned char *)(*(int *)(p + 0xC8)) = 0x0;
    }
    if ((int)(*(short *)((a4 + 0x1C))) > (int)0x19) {
        x = 0xC28EABC; y = 0xC28EAAC; hi = 0x32; lo = 0x19;
    } else {
        x = 0xC28EAAC; y = 0xC28EABC; hi = 0x19; lo = 0x0;
    }
    for (h = 0; h < 2; h++) {
        FUN_0c058a6e(*(int *)(p + 0xC4 + 4 * h) + 0x14, x, y, (*(short *)((a4 + 0x1C))), hi, lo);
    }
    c = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (c + 0x1);
    if ((int)(short)(c + 0x1) > (int)0x32) {
        *(unsigned short *)((a4 + 0x1C)) = 0x0;
    }
    ret = 0;
    for (h = 0; h < 2; h++) {
        if (FUN_0c05f22c(0x400 << h) != 0 && *(signed char *)(p + 0x16 + h) == 0) {
            *(unsigned char *)(p + 0x16 + h) = *(signed char *)(p + 0x16 + h) + 0x1;
            { struct mv4 { int w[4]; }; *(struct mv4 *)(*(int *)(p + 0xCC + 4 * h) + 0x14) = *(struct mv4 *)(*(int *)(p + 0xC4 + 4 * h) + 0x14); }
            *(unsigned short *)(p + 0x20 + 2 * h) = 0x0;
        }
        v = *(signed char *)(p + 0x16 + h);
        ret = v;
        if (v == 1 || v == 2) {
            { struct mv4 { int w[4]; }; *(struct mv4 *)(*(int *)(p + 0xC4 + 4 * h) + 0x14) = *(struct mv4 *)(0xC28E8C0); }
            c = *(short *)(p + 0x20 + 2 * h);
            *(unsigned short *)(p + 0x20 + 2 * h) = c + 0x1;
            ret = 0x22;
            if (v == 1) {
                if ((int)(short)(c + 0x1) > (int)0x8) {
                    *(unsigned char *)(p + 0x16 + h) = 0x0;
                    ret = 0x17;
                }
            } else if ((int)(short)(c + 0x1) > (int)0x4) {
                *(unsigned char *)(p + 0x16 + h) = *(signed char *)(p + 0x16 + h) + 0x1;
                *(unsigned short *)(p + 0x20 + 2 * h) = 0x0;
            }
        } else if (v == 3) {
            FUN_0c058a6e((int)buf, 0xC28EAAC, 0xC28EABC, (*(short *)((a4 + 0x1C))), 0x19, 0x0);
            FUN_0c058a6e(*(int *)(p + 0xC4 + 4 * h) + 0x14, (int)buf, 0xC28E8C0, *(short *)(p + 0x20), 0x5, 0x0);
            c = *(short *)(p + 0x20 + 2 * h);
            *(unsigned short *)(p + 0x20 + 2 * h) = c + 0x1;
            ret = 0x22;
            if ((int)(short)(c + 0x1) > (int)0x5) {
                *(unsigned char *)(p + 0x16 + h) = 0x0;
                *(unsigned short *)(p + 0x20 + 2 * h) = 0x0;
            }
        }
    }
    return ret;
}
