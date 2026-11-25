/* Straight-line functions with calls and guards (batch gen_aag): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o130_uchar { char p[0x130]; unsigned char v; };
struct o132_uchar { char p[0x132]; unsigned char v; };
struct o160_float { char p[0x160]; float v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
int FUN_0c059e9a(int, int, int);
int FUN_0c148d64(int, int, int);
int math_mat_get_translate(int, int);
int FUN_0c148d80(int a4);

int FUN_0c148d80(int a4)
{
    int stk[3];
    register int t11;

    if ((*(signed char *)((a4 + 0x132))) != 0) {
        (((struct o132_uchar *)(a4))->v) = 0x0;
        (((struct o130_uchar *)(a4))->v) = 0xA;
        math_mat_get_translate((a4 + 0x64), ((int)stk + 0));
        FUN_0c059e9a((((short)(*(signed char *)((a4 + 0x1))) * (short)0x3938) + 0xC532498), 0xB, ((int)stk + 0));
        if (!(((((struct o160_float *)(a4))->v)) > 0.0f)) {
            FUN_0c148d64(a4, 0x5, 0x0);
            (((struct o130_uchar *)(a4))->v) = 0x0;
            return 0x130;
        }
    }
    if ((int)(*(signed char *)((a4 + 0x130))) > 0) {
        (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) | 0x200);
        (((struct oB4_float *)(a4))->v) = 1.0f;
        (((struct oBC_float *)(a4))->v) = 0.300000012f;
        (((struct oB8_float *)(a4))->v) = 0.300000012f;
        (((struct o130_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x130))) - 1);
        t11 = 0x130;
    } else {
        (((struct oAC_ushort *)(a4))->v) = (((((struct oAC_short *)(a4))->v)) & 0xFDFF);
        t11 = 0xAC;
    }
    return t11;
}
