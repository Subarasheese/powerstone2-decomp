/* Straight-line functions with calls and guards (batch gen_af): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXCRS_Lock(void);
int ADXCRS_Unlock(void);
int ADXSTM_OpenRange(int, int, int);
int ADXSTM_Start(int);
int FUN_0c2c30aa(int, int, int);
int FUN_0c2b5498(int a4, int a5, int a6);

int FUN_0c2b5498(int a4, int a5, int a6)
{
    register int t0;
    register int t5;
    register int t7;

    if (a4 == 0) {
        FUN_0c2c30aa(0xC2FF1E0, a5, a6);
        t0 = 0xFFFFFFFD;
    } else {
        if ((int)a5 < 0) {
            FUN_0c2c30aa(0xC2FF20C, a5, a6);
            t0 = 0xFFFFFFFD;
        } else {
            if (a6 == 0) {
                FUN_0c2c30aa(0xC2FF23C, a5, a6);
                t0 = 0xFFFFFFFD;
            } else {
                t0 = 0x0;
                if ((*(signed char *)((a4 + 0x1))) == 2) {
                } else {
                    if ((*(int *)((a4 + 0x4))) != 0) {
                        FUN_0c2c30aa(0xC2FF264, a5, a6);
                        t0 = 0xFFFFFFFF;
                    } else {
                        ADXCRS_Lock();
                        *(unsigned int *)((a4 + 0x1C)) = ((*(int *)((a4 + 0xC))) + (*(int *)((a4 + 0x18))));
                        t5 = *(int *)((a4 + 0x10));
                        t0 = *(int *)((a4 + 0x18));
                        t7 = (t5 - t0);
                        if ((int)a5 < (int)(t5 - t0)) {
                            t7 = a5;
                        }
                        *(unsigned int *)((a4 + 0x20)) = t7;
                        *(unsigned int *)((a4 + 0x24)) = 0x0;
                        t5 = ADXSTM_OpenRange((*(int *)((a4 + 0x1C))), (*(int *)((a4 + 0x20))), a6);
                        t0 = 0xFFFFFFFF;
                        if (t5 == 0) {
                        } else {
                            *(unsigned int *)((a4 + 0x4)) = t5;
                            *(unsigned char *)((a4 + 0x1)) = 0x2;
                            ADXSTM_Start((*(int *)((a4 + 0x4))));
                            t0 = (*(int *)((a4 + 0x20)));
                        }
                        ADXCRS_Unlock();
                    }
                }
            }
        }
    }
    return t0;
}
