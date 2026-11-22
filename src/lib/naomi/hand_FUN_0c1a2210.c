/* Hand-written: FUN_0c1a2210, the C runtime's conversion of a decimal mantissa and exponent to a float. The 8-byte mantissa at
   the first argument loses its leading zero bytes and bits (FUN_0c1a3198 shifts, the rest is copied into an 8-byte buffer); the
   power of ten of the second argument (_power, the exponent at the frame's first halfword) multiplies (mult64) or divides
   (_div64, a negative exponent) it into 12 bytes, which are rounded (FUN_0c1a357c) and shifted up to bit 31 (FUN_0c1a3150), each
   shift one less exponent. With the bias of 127 the exponent decides: not positive, an underflow (the error code of the mode in
   the third argument goes to 0C8B57A4, the value to zero); 255 or more, an overflow (the same with its own codes). A sticky bit,
   the rounding of FUN_0c1a3438 and FUN_0c1a3254, which packs the float, finish it. The generator's draw never finished: the loop
   over the mantissa's zero bytes ran on through memory, and the shifts that end the normalisation are calls. */
void *memset(void *dst, int val, unsigned int n);
int FUN_0c187a88(int a4, int a5, int a6, int a7);
int FUN_0c1a3198(int a4, int a5, int a6);
int _power(int a4, int a5, int a6);
int mult64(int a4, int a5, int a6, int a7);
int _div64(int a4, int a5, int a6, int a7);
int FUN_0c1a357c(int a4, int a5, int a6);
int FUN_0c1a3150(int a4, int a5);
int FUN_0c1a3438(int a4, int a5);
float FUN_0c1a3254(int a4, int a5);

static void set_error(int mode, int c1, int c2, int c3)
{
    if (mode == 1) {
        *(int *)0xC8B57A4 = c1;
    } else if (mode == 2) {
        *(int *)0xC8B57A4 = c2;
    } else if (mode == 3) {
        *(int *)0xC8B57A4 = c3;
    } else if (mode == 4) {
        *(int *)0xC8B57A4 = 1100;
    }
}

float FUN_0c1a2210(int a4, int a5, int a6, int a7)
{
    short exp[2];
    unsigned char buf[8];
    unsigned char val[12];
    unsigned char *p;
    int scale;
    int zeros;
    int bits;
    int mask;
    int mode;

    mode = (signed char)a6;
    memset(buf, 0, 8);
    scale = 63;
    zeros = 0;
    bits = 0;
    p = (unsigned char *)a4;
    while (*p == 0) {
        scale -= 8;
        zeros++;
        p++;
    }
    mask = 0x80;
    while ((*p & (unsigned char)mask) == 0) {
        bits++;
        mask = (unsigned char)mask >> 1;
    }
    FUN_0c1a3198((int)p, 8 - zeros, bits);
    scale -= bits;
    FUN_0c187a88((int)buf, (int)p, 8 - zeros, a7);
    if (a5 >= 0) {
        _power(a5, (int)exp, (int)val);
        mult64((int)exp, (int)val, scale, (int)buf);
    } else {
        _power(-a5, (int)exp, (int)val);
        _div64((int)exp, (int)val, scale, (int)buf);
    }
    FUN_0c1a357c((int)val, 9, 26);
    exp[0] += 127;
    while ((val[0] & 0x80) == 0) {
        FUN_0c1a3150((int)val, 4);
        exp[0]--;
    }
    if (exp[0] <= 0) {
        set_error(mode, 1220, 1260, 1280);
        memset(val, 0, 4);
        exp[0] = 0;
    }
    if (val[3] & 31) {
        val[3] |= 32;
    }
    if (FUN_0c1a3438((int)val, 24) == 1) {
        exp[0]++;
    }
    if (exp[0] == 0 && (val[0] & 0x80)) {
        exp[0] = 1;
    }
    if (exp[0] >= 255) {
        set_error(mode, 1210, 1250, 1270);
        memset(val, 0, 4);
        exp[0] = 255;
    }
    return FUN_0c1a3254(exp[0], (int)val);
}
