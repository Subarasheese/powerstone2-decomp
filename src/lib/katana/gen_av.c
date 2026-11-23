/* Straight-line functions with calls and guards (batch gen_av): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int vmsfs_read_retry(int, int, int);
int get_fat(int, int);
int read_dir(int a4);

int read_dir(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;

    t0 = *(int *)((((a4 * 0x148) + 0xC8C4604) + 0x1C));
    t1 = *(int *)((t0 + 0x18));
    t2 = *(int *)((t0 + 0x14));
    t0 = *(int *)((((a4 * 0x148) + 0xC8C4604) + 0x28));
    t3 = 0x0;
    if ((int)t1 > 0) {
        t4 = 0x0;
        t5 = t2;
        t2 = t0;
        for (;;) {
            t0 = vmsfs_read_retry(a4, (unsigned short)t5, t2);
            if ((int)t0 < 0) {
                break;
            }
            t6 = get_fat(a4, (unsigned short)t5);
            if ((unsigned short)t6 != 0xFFFA) {
                t4 = (t4 + 0x1);
                t5 = t6;
                t2 = (t2 + 0x200);
                if ((int)t4 >= (int)t1) {
                    return 0x0;
                }
                continue;
            }
            return 0x0;
        }
        t3 = t0;
    }
    return t3;
}
