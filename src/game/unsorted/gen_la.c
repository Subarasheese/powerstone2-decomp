/* Straight-line functions with calls and guards (batch gen_la): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
int FUN_0c03aeec(int, int, int, int);
int FUN_0c03d3b6(int);
int FUN_0c03d44a(int);
int FUN_0c04644c(int a4, int a5, int a6, int a7);

/* manual: 16-state loader step on the byte at 0C40F824: even states wait for bit state/2 of FUN_0c03aeec, odd ones run
   FUN_0c03d44a(state/2) (and FUN_0c03d3b6 when it gives 0); returns the byte at 0C40F825; 131 cases, 242 of 242 instructions */
int FUN_0c04644c(int a4, int a5, int a6, int a7)
{
    signed char *p = (signed char *)0xC40F824;
    int s = (unsigned char)p[0];
    int j, r;

    if (s >= 16) {
        p[1] = 1;
    } else {
        j = s >> 1;
        if (!(s & 1)) {
            r = FUN_0c03aeec(a4, a5, a6, a7);
            if (r == -1) {
                goto out;
            }
            p[0]++;
            if (!(r & (1 << j))) {
                p[0]++;
                goto out;
            }
        }
        r = FUN_0c03d44a(j);
        if (r != -1) {
            if (r == 0) {
                FUN_0c03d3b6(j >> 1);
            }
            p[0] += j & 1 ? 1 : 3;
        }
    }
out:
    return p[1];
}
