/* Hand-written: FUN_0c2d0394, FUN_0c2d01dc's companion, by the mode in bits 0-1 of the status word at +0x90 of the structure
   0C8D66E8 points to. Mode 1 polls FUN_0c2d06d0 (a hit clears the counter at 0C8D25BC); once the counter reaches the limit at
   +0x92, FUN_0c2cfd24 gets the time at 0C8D25B8 and the current one (0C8D25A8). Mode 2 asks FUN_0c2cfff8 for an entry (its index
   into 0C8D25BD; none: FUN_0c2d00f0): a new one (FUN_0c2d079c) gets its count cleared and the current time at +46; for one whose
   count reached the limit, FUN_0c2cfd24 gets its time at +46 (status bit 9) or +42 and the current one. The 4-byte times go by
   value on the stack (the original copies each with _slow_mvn, which the generator could not follow). The result is 1 while the
   elapsed seconds at 0C8D25AC (days in mode 1 from its first byte, in mode 2 from 0C8D25B0; hours * 3600, minutes * 60, seconds)
   are below the limit at +0x94; then the limit becomes the new reference at 0C8D25B0 (minutes and seconds), the elapsed time is
   kept at 0C8D25B4, both go to FUN_0c2cfd24, and the elapsed time is copied to 0C8D25B0. */
typedef struct { int w[2]; } Stk2;
int FUN_0c2cfd24(Stk2 s);
int FUN_0c2d06d0(void);
int FUN_0c2cfff8(int a4, int a5);
int FUN_0c2d079c(int a4);
int FUN_0c2d00f0(int a4, int a5);

#define STATE ((int)*(int *)0xC8D66E8)
#define ENTRY() (0xC8D1DD8 + (short)((unsigned char)(*(signed char *)0xC8D25BD) * 50))
#define AC(i) (*(signed char *)(0xC8D25AC + (i)))
#define B0(i) (*(signed char *)(0xC8D25B0 + (i)))

static void put4(int *w, int src)
{
    ((unsigned char *)w)[0] = *(unsigned char *)(src + 0);
    ((unsigned char *)w)[1] = *(unsigned char *)(src + 1);
    ((unsigned char *)w)[2] = *(unsigned char *)(src + 2);
    ((unsigned char *)w)[3] = *(unsigned char *)(src + 3);
}

static void copy4(int dst, int src)
{
    *(unsigned char *)(dst + 0) = *(unsigned char *)(src + 0);
    *(unsigned char *)(dst + 1) = *(unsigned char *)(src + 1);
    *(unsigned char *)(dst + 2) = *(unsigned char *)(src + 2);
    *(unsigned char *)(dst + 3) = *(unsigned char *)(src + 3);
}

int FUN_0c2d0394(int a4)
{
    int mode;
    int result;
    int e;
    int t;
    Stk2 s;

    result = 0;
    mode = (unsigned short)(*(short *)(STATE + 0x90)) & 3;
    if (mode == 1) {
        if ((signed char)FUN_0c2d06d0() != 0) {
            *(unsigned char *)0xC8D25BC = 0;
        }
        if ((int)(*(signed char *)0xC8D25BC) >= (int)(unsigned short)(*(short *)(STATE + 0x92))) {
            put4(&s.w[1], 0xC8D25B8);
            put4(&s.w[0], 0xC8D25A8);
            FUN_0c2cfd24(s);
            t = (short)AC(2) * 60 + AC(3) + (short)AC(1) * 3600 + AC(0) * 86400;
            if (!((unsigned int)t >= (unsigned short)(*(short *)(STATE + 0x94)))) {
                result = 1;
            }
        }
    } else if (mode == 2) {
        if ((signed char)FUN_0c2cfff8(a4, 0xC8D25BD) == 0) {
            FUN_0c2d00f0(a4, 0xC8D25BD);
        } else if ((signed char)FUN_0c2d079c(*(signed char *)0xC8D25BD) != 0) {
            *(unsigned char *)(ENTRY() + 41) = 0;
            copy4(ENTRY() + 46, 0xC8D25A8);
        } else {
            e = ENTRY();
            if ((unsigned char)(*(signed char *)(e + 41)) >= (unsigned short)(*(short *)(STATE + 0x92))) {
                if ((unsigned short)(*(short *)(STATE + 0x90)) & 0x200) {
                    put4(&s.w[1], e + 46);
                } else {
                    put4(&s.w[1], e + 42);
                }
                put4(&s.w[0], 0xC8D25A8);
                FUN_0c2cfd24(s);
                t = (short)AC(2) * 60 + AC(3) + (short)AC(1) * 3600 + B0(0) * 86400;
                if (!((unsigned int)t >= (unsigned short)(*(short *)(STATE + 0x94)))) {
                    result = 1;
                }
            }
        }
    }
    if ((signed char)result == 1) {
        *(unsigned char *)(0xC8D25B0 + 0) = 0;
        *(unsigned char *)(0xC8D25B0 + 1) = 0;
        *(unsigned char *)(0xC8D25B0 + 2) = (int)(unsigned short)(*(short *)(STATE + 0x94)) / 60;
        *(unsigned char *)(0xC8D25B0 + 3) = *(signed char *)(STATE + 0x94) - (short)B0(2) * 60;
        copy4(0xC8D25B4, 0xC8D25AC);
        put4(&s.w[1], 0xC8D25B4);
        put4(&s.w[0], 0xC8D25B0);
        FUN_0c2cfd24(s);
        copy4(0xC8D25B0, 0xC8D25AC);
    }
    return result;
}
