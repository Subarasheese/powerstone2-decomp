/* Hand-written: _div64, the long division of the C runtime's decimal conversion. The dividend (8 bytes at the fourth argument)
   and the divisor (8 bytes at the second) are widened to 12 bytes with four zero bytes in front; 66 rounds shift the 16-byte
   quotient left (FUN_0c1a3150), compare (FUN_0c1a3600) and either count one into the quotient's byte 11 or subtract
   (FUN_0c1a2a68), then shift the remainder. Two more shifts of the quotient (FUN_0c1a3aa4), a sticky bit (0x20 in byte 12)
   when the remainder is not zero, the exponent at the first argument becomes the third argument minus it, and a non-zero
   quotient is shifted until bit 7 of its byte 4 is set, one less exponent each time. The 9 bytes from byte 4 go back over the
   divisor. The generator's draw never finished: the shifts that end that loop are calls. */
void *memset(void *dst, int val, unsigned int n);
int FUN_0c187a88(int a4, int a5, int a6, int a7);
int FUN_0c1a3150(int a4, int a5);
int FUN_0c1a3600(int a4, int a5, int a6, int a7);
int FUN_0c1a2a68(int a4, int a5, int a6);
int FUN_0c1a3aa4(int a4, int a5);

int _div64(short *exp, int div, short base, int num)
{
    unsigned char q[16];
    unsigned char d[12];
    unsigned char n[12];
    unsigned char *p;
    int i;

    memset(n, 0, 4);
    FUN_0c187a88((int)n + 4, num, 8, num);
    memset(d, 0, 4);
    FUN_0c187a88((int)d + 4, div, 8, num);
    memset(q, 0, 16);
    for (i = 66; i != 0; i--) {
        FUN_0c1a3150((int)q, 12);
        if (FUN_0c1a3600(0, (int)n, (int)d, 12) >= 0) {
            q[11]++;
        } else {
            FUN_0c1a2a68((int)n, (int)d, 12);
        }
        FUN_0c1a3150((int)n, 12);
    }
    for (i = 2; i != 0; i--) {
        FUN_0c1a3aa4((int)q, 16);
    }
    if (n[0] || n[1] || n[2] || n[3] || n[4] || n[5] || n[6] || n[7] || n[8] || n[9] || n[10] || n[11]) {
        q[12] |= 0x20;
    }
    *exp = base - *exp;
    if (q[4] || q[5] || q[6] || q[7] || q[8] || q[9] || q[10] || q[11] || q[12]) {
        p = q + 4;
        while ((*p & 0x80) == 0) {
            FUN_0c1a3150((int)p, 9);
            (*exp)--;
        }
    }
    return FUN_0c187a88(div, (int)q + 4, 9, 12);
}
