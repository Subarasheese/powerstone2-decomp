/* Straight-line functions with calls and guards (batch gen_ax): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int ADXSTMF_Create(int, int, int, int);
int ADXSTM_Seek(int, int);
int FUN_0c2c30aa(int, ...);
int gdFsLoadDirFast(int, int, int, int);
int strncpy(int, int, int);
int ADXSTM_OpenFileRange(int a4, int a5, int a6, int a7);

int ADXSTM_OpenFileRange(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t8;

    t0 = gdFsLoadDirFast(a4, 0x0, a6, a7);
    if (t0 == 0) {
        FUN_0c2c30aa(0xC2FFD60);
        t8 = 0x0;
    } else {
        t8 = ADXSTMF_Create(t0, a5, (((a6 << 8) << 2) << 1), a7);
        if (t8 != 0) {
            strncpy((t8 + 0x40), a4, 0x20);
            ADXSTM_Seek(t8, 0x0);
        }
    }
    return t8;
}
