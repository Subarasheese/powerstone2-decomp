/* Hand-written: FUN_0c1a15dc, the MD5 block transform (RFC 1321): the four state words at the first argument absorb the 64-byte
   block at the second. FUN_0c1a20d4 decodes the block into sixteen little-endian words, 64 steps of the four round functions
   mix them in, the state words get the results added (in the order the original stores them), and FUN_0c1a2138 clears the
   decoded words. The original has the 64 steps unrolled (2712 bytes, more than the generator could read); here they are one
   loop over the step table: the additive constants (floor(|sin(i + 1)| * 2^32)), the rotation of each step, and which decoded
   word it takes. */
int FUN_0c1a20d4(int a4, int a5, int a6);
int FUN_0c1a2138(int a4, int a5, int a6);

static const unsigned int md5_k[64] = {
    0xD76AA478U, 0xE8C7B756U, 0x242070DBU, 0xC1BDCEEEU, 0xF57C0FAFU, 0x4787C62AU, 0xA8304613U, 0xFD469501U,
    0x698098D8U, 0x8B44F7AFU, 0xFFFF5BB1U, 0x895CD7BEU, 0x6B901122U, 0xFD987193U, 0xA679438EU, 0x49B40821U,
    0xF61E2562U, 0xC040B340U, 0x265E5A51U, 0xE9B6C7AAU, 0xD62F105DU, 0x02441453U, 0xD8A1E681U, 0xE7D3FBC8U,
    0x21E1CDE6U, 0xC33707D6U, 0xF4D50D87U, 0x455A14EDU, 0xA9E3E905U, 0xFCEFA3F8U, 0x676F02D9U, 0x8D2A4C8AU,
    0xFFFA3942U, 0x8771F681U, 0x6D9D6122U, 0xFDE5380CU, 0xA4BEEA44U, 0x4BDECFA9U, 0xF6BB4B60U, 0xBEBFBC70U,
    0x289B7EC6U, 0xEAA127FAU, 0xD4EF3085U, 0x04881D05U, 0xD9D4D039U, 0xE6DB99E5U, 0x1FA27CF8U, 0xC4AC5665U,
    0xF4292244U, 0x432AFF97U, 0xAB9423A7U, 0xFC93A039U, 0x655B59C3U, 0x8F0CCC92U, 0xFFEFF47DU, 0x85845DD1U,
    0x6FA87E4FU, 0xFE2CE6E0U, 0xA3014314U, 0x4E0811A1U, 0xF7537E82U, 0xBD3AF235U, 0x2AD7D2BBU, 0xEB86D391U
};
static const unsigned char md5_r[16] = { 7, 12, 17, 22, 5, 9, 14, 20, 4, 11, 16, 23, 6, 10, 15, 21 };

void FUN_0c1a15dc(unsigned int *state, int block)
{
    unsigned int x[16];
    unsigned int a, b, c, d, f, t;
    int i, g, s;

    a = state[0];
    b = state[1];
    c = state[2];
    d = state[3];
    FUN_0c1a20d4((int)x, block, 64);
    for (i = 0; i < 64; i++) {
        if (i < 16) {
            f = (b & c) | (~b & d);
            g = i;
        } else if (i < 32) {
            f = (b & d) | (c & ~d);
            g = (5 * i + 1) & 15;
        } else if (i < 48) {
            f = b ^ c ^ d;
            g = (3 * i + 5) & 15;
        } else {
            f = c ^ (b | ~d);
            g = (7 * i) & 15;
        }
        s = md5_r[((i >> 4) << 2) | (i & 3)];
        t = a + f + x[g] + md5_k[i];
        a = d;
        d = c;
        c = b;
        b = b + ((t << s) | (t >> (32 - s)));
    }
    state[0] += a;
    state[1] += b;
    state[2] += c;
    state[3] += d;
    FUN_0c1a2138((int)x, 0, 64);
}
