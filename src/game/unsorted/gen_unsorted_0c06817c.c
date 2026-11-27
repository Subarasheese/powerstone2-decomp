/* game/unsorted: functions 0C06817C-0C068AB8, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o2C_float { char p[0x2C]; float v; };
struct o3717_uchar { char p[0x3717]; unsigned char v; };
struct o3718_uchar { char p[0x3718]; unsigned char v; };
struct o371A_uchar { char p[0x371A]; unsigned char v; };
struct o371C_uchar { char p[0x371C]; unsigned char v; };
struct o371D_uchar { char p[0x371D]; unsigned char v; };
struct o374D_uchar { char p[0x374D]; unsigned char v; };
struct o374E_uchar { char p[0x374E]; unsigned char v; };
struct o37B4_float { char p[0x37B4]; float v; };
struct o37B8_float { char p[0x37B8]; float v; };
int FUN_0c042ff8(void);
int FUN_0c067294(int);
int FUN_0c07c5dc(int, int, int, float);
int FUN_0c07cffa(int);
int FUN_0c07d4ec(int);
int FUN_0c07d838(int, int, int, int);
int FUN_0c07d9dc(int, int);
int FUN_0c07ebd0(int);
int FUN_0c07ebe6(int);
int FUN_0c07ec9a(int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c07f18c(int);
int FUN_0c07fea4(int, int);
int FUN_0c080586(int);
int FUN_0c081dfc(int);
int FUN_0c083cf0(int);
int FUN_0c085cac(int, int, int);
int FUN_0c0d01f2(int);
int FUN_0c15363c(int);
int FUN_0c06817c(int a4, float f4);
void FUN_0c06822c(void);
int FUN_0c068832(int a4);

int FUN_0c06817c(int a4, float f4)
{
    register int t0;
    register int t1;

    FUN_0c07c5dc(a4, 0x2, 0x1, f4);
    FUN_0c15363c(a4);
    if ((*(signed char *)((a4 + 0x374D))) != 0) {
        (((struct o374D_uchar *)(a4))->v) = 0x0;
        FUN_0c0d01f2((*(signed char *)((a4 + 0x374E))));
        (((struct o374E_uchar *)(a4))->v) = 0x0;
    }
    if ((*(signed char *)((a4 + 0x2))) != 14) {
        t0 = 0x371A;
        if ((*(signed char *)((a4 + 0x371A))) != 0) {
            (((struct o371A_uchar *)(a4))->v) = 0x0;
            (((struct o371C_uchar *)(a4))->v) = 0x0;
            (((struct o37B8_float *)(a4))->v) = 0.0f;
            FUN_0c067294(a4);
            t1 = *(signed char *)((a4 + 0x2));
            if ((t1 == 8) || ((t1 == 11) || (t1 == 10))) {
                if ((*(signed char *)((a4 + 0x3715))) == 0) {
                    FUN_0c085cac(a4, 0x0, 0x0);
                }
                if ((*(signed char *)((a4 + 0x3715))) == 1) {
                    FUN_0c085cac(a4, 0x1, 0x1);
                }
            }
            t1 = *(signed char *)((a4 + 0x3715));
            t0 = t1;
            if (t1 == 24) {
                t0 = (FUN_0c085cac(a4, 0x0, 0x0));
            }
        }
        t1 = t0;
    } else {
        (((struct o371A_uchar *)(a4))->v) = 0x0;
        (((struct o371C_uchar *)(a4))->v) = 0x0;
        (((struct o37B8_float *)(a4))->v) = 0.0f;
        t1 = 0x37B8;
    }
    return t1;
}

void FUN_0c06822c(void)
{
    
}

