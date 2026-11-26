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

int FUN_0c09601c(int a4)
{
    register int t6;

    math_vec3_accumulate((a4 + 0x28), (a4 + 0x4C));
    math_vec3_accumulate((a4 + 0x4C), (a4 + 0x58));
    (((struct o4C_float *)(a4))->v) = (((((struct o4C_float *)(a4))->v)) - (((((struct o4C_float *)(a4))->v)) / 10.0f));
    (((struct o54_float *)(a4))->v) = (((((struct o54_float *)(a4))->v)) - (((((struct o54_float *)(a4))->v)) / 10.0f));
    t6 = FUN_0c037bf6(a4);
    if ((unsigned char)t6 != 0) {
        *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + 0x8000);
        return FUN_0c085d0c(a4);
    }
    return (unsigned char)t6;
}

