/* Hand-written: FUN_0c2d01dc, by the mode in bits 2-3 of the status word at +0x90 of the structure 0C8D66E8 points to. Mode 1
   polls FUN_0c2d06d0 (a hit clears the counter at 0C8D25BC and calls FUN_0c2cfda6) and reports 1 once the counter reaches the
   limit at +0x96. Mode 2 asks FUN_0c2cfff8 for an entry (its index into 0C8D25BD; none: FUN_0c2d00f0 and 0). The entry is a
   50-byte record of the table at 0C8D1DD8: a new one (FUN_0c2d079c) gets its count cleared, the time at 0C8D25A8 copied to +46
   and state 'D'. A record in state 'B' reports 1; one whose count reached the limit becomes 'B'. Otherwise FUN_0c2cfd24 gets the
   record's time and the current one, two 4-byte structures by value on the stack (the original copies each with _slow_mvn, which
   the generator could not follow), and the record becomes 'B' once the elapsed minutes (hours * 60 + minutes from 0C8D25AC, plus
   days * 1440 from 0C8D25B0) reach the non-zero limit at +0x98. */
typedef struct { int w[2]; } Stk2;
int FUN_0c2cfd24(Stk2 s);
int FUN_0c2d06d0(void);
int FUN_0c2cfda6(void);
int FUN_0c2cfff8(int a4, int a5);
int FUN_0c2d079c(int a4);
int FUN_0c2d00f0(int a4, int a5);

#define STATE ((int)*(int *)0xC8D66E8)
#define ENTRY() (0xC8D1DD8 + (short)((unsigned char)(*(signed char *)0xC8D25BD) * 50))

int FUN_0c2d01dc(int a4)
{
    int mode;
    int e;
    int t;
    unsigned int lim;
    Stk2 s;

    mode = ((unsigned short)(*(short *)(STATE + 0x90)) & 12) >> 2;
    if (mode == 1) {
        if ((signed char)FUN_0c2d06d0() != 0) {
            *(unsigned char *)0xC8D25BC = 0;
            FUN_0c2cfda6();
        }
        if ((int)(*(signed char *)0xC8D25BC) >= (int)(unsigned short)(*(short *)(STATE + 0x96))) {
            return 1;
        }
        return 0;
    }
    if (mode != 2) {
        return 0;
    }
    if ((signed char)FUN_0c2cfff8(a4, 0xC8D25BD) == 0) {
        FUN_0c2d00f0(a4, 0xC8D25BD);
        return 0;
    }
    if ((signed char)FUN_0c2d079c(*(signed char *)0xC8D25BD) != 0) {
        *(unsigned char *)(ENTRY() + 41) = 0;
        e = ENTRY() + 46;
        *(unsigned char *)(e + 0) = *(unsigned char *)(0xC8D25A8 + 0);
        *(unsigned char *)(e + 1) = *(unsigned char *)(0xC8D25A8 + 1);
        *(unsigned char *)(e + 2) = *(unsigned char *)(0xC8D25A8 + 2);
        *(unsigned char *)(e + 3) = *(unsigned char *)(0xC8D25A8 + 3);
        *(unsigned char *)ENTRY() = 68;
    }
    e = ENTRY();
    if (*(signed char *)e == 66) {
        return 1;
    }
    if ((unsigned char)(*(signed char *)(e + 41)) >= (unsigned short)(*(short *)(STATE + 0x96))) {
        *(unsigned char *)ENTRY() = 66;
        return 1;
    }
    ((unsigned char *)&s.w[1])[0] = *(unsigned char *)(e + 46);
    ((unsigned char *)&s.w[1])[1] = *(unsigned char *)(e + 47);
    ((unsigned char *)&s.w[1])[2] = *(unsigned char *)(e + 48);
    ((unsigned char *)&s.w[1])[3] = *(unsigned char *)(e + 49);
    ((unsigned char *)&s.w[0])[0] = *(unsigned char *)(0xC8D25A8 + 0);
    ((unsigned char *)&s.w[0])[1] = *(unsigned char *)(0xC8D25A8 + 1);
    ((unsigned char *)&s.w[0])[2] = *(unsigned char *)(0xC8D25A8 + 2);
    ((unsigned char *)&s.w[0])[3] = *(unsigned char *)(0xC8D25A8 + 3);
    FUN_0c2cfd24(s);
    t = (short)(*(signed char *)(0xC8D25AC + 1)) * 60 + (*(signed char *)(0xC8D25AC + 2))
        + (short)(*(signed char *)0xC8D25B0) * 1440;
    lim = (unsigned short)(*(short *)(STATE + 0x98));
    if (!((unsigned int)t >= lim)) {
        return 0;
    }
    if ((int)lim > 0) {
        *(unsigned char *)ENTRY() = 66;
        return 1;
    }
    return 0;
}
