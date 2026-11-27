/* Straight-line functions with calls and guards (batch gen_iq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o4C_float { char p[0x4C]; float v; };
struct o54_float { char p[0x54]; float v; };
int ADXSTMF_Create(int, int, int, int);
int FUN_0c037bf6(int);
int FUN_0c085d0c(int);
int FUN_0c2c30aa(int, int, int, int, int, int, int);
int gdFsDaGetInfo(void);
int math_vec3_accumulate(int, int);
int strncpy(int, int, int);
int FUN_0c09601c(int a4);
int ADXSTM_OpenRange(int a4, int a5, int a6);


int ADXSTM_OpenRange(int a4, int a5, int a6)
{
    register int t0;
    register int t3;

    t0 = gdFsDaGetInfo();
    if (t0 == 0) {
        FUN_0c2c30aa(t0, 0x0, 0x0, 0x0, 0xC2FFD1C, a4, a5);
        return 0x0;
    }
    t3 = ADXSTMF_Create(t0, 0x0, (((a5 << 8) << 2) << 1), a6);
    if (t3 != 0) {
        strncpy((t3 + 0x40), 0xC2FFD54, 0x20);
    }
    return t3;
}
