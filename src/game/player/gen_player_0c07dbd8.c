/* game/player: functions 0C07DBD8-0C07E2A0, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o160_float { char p[0x160]; float v; };
struct o24_short { char p[0x24]; short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o374D_uchar { char p[0x374D]; unsigned char v; };
struct o389C_uchar { char p[0x389C]; unsigned char v; };
struct o389E_ushort { char p[0x389E]; unsigned short v; };
struct o38A0_ushort { char p[0x38A0]; unsigned short v; };
struct o38A2_ushort { char p[0x38A2]; unsigned short v; };
struct o38A4_uchar { char p[0x38A4]; unsigned char v; };
struct o38A6_ushort { char p[0x38A6]; unsigned short v; };
struct o38A8_ushort { char p[0x38A8]; unsigned short v; };
struct o38AA_ushort { char p[0x38AA]; unsigned short v; };
struct o38AC_uchar { char p[0x38AC]; unsigned char v; };
struct o38AE_ushort { char p[0x38AE]; unsigned short v; };
struct o38B0_ushort { char p[0x38B0]; unsigned short v; };
struct o38B2_ushort { char p[0x38B2]; unsigned short v; };
struct o38B4_uchar { char p[0x38B4]; unsigned char v; };
struct o38B6_ushort { char p[0x38B6]; unsigned short v; };
struct o38B8_ushort { char p[0x38B8]; unsigned short v; };
struct o38BA_ushort { char p[0x38BA]; unsigned short v; };
struct oA4_int { char p[0xA4]; int v; };
int math_mat_transform_vector(int, int);
int math_mat_get_translate(int, int);
int thunk_FUN_0c058310(int, int);
int FUN_0c059df2(int, int);
int FUN_0c05aaf6(int);
int FUN_0c064e70(int, int);
int FUN_0c07c4b0(int, int);
int FUN_0c081ee8(int, int);
int FUN_0c0bb68c(int);
extern int FUN_0c0c2d56();
int FUN_0c0c42c4(int);
int FUN_0c11f9c8(int, int, int);
int FUN_0c15877c(int, int);
int FUN_0c15eda8(int, int);
int FUN_0c15fcf8(int, int);
int FUN_0c161c66(int);
int FUN_0c162146(int, int);
int FUN_0c187798(void);
extern float _builtin_sqrtf(float);
int FUN_0c07dbd8(int a4, int a5);
int FUN_0c07dcd8(int a4, int a5, int a6);
int FUN_0c07dd18(int a4, int a5, int a6, int a7, float f4, float f5);

int FUN_0c07dbd8(int a4, int a5)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    if ((a5 != 74) && (a5 != 120)) {
        if (a5 != 36) {
            if (a5 != 62) {
                t1 = a5;
                if (a5 != 65) {
                } else {
                    t2 = 0x38B4;
                    if ((*(signed char *)((a4 + 0x38B4))) == 0) {
                        (((struct o38B4_uchar *)(a4))->v) = a5;
                        (((struct o38B6_ushort *)(a4))->v) = 0x0;
                        (((struct o38B8_ushort *)(a4))->v) = 0x438;
                        (((struct o38BA_ushort *)(a4))->v) = 0x30C;
                        t2 = 0x38BA;
                    }
                    t1 = t2;
                }
                t2 = t1;
            } else {
                t1 = 0x38AC;
                if ((*(signed char *)((a4 + 0x38AC))) == 0) {
                    t3 = FUN_0c162146(a4, 0x0);
                    t4 = t3;
                    if (t3 != 0) {
                        (((struct o38AC_uchar *)(a4))->v) = a5;
                        (((struct o38AE_ushort *)(a4))->v) = ((((struct o24_short *)(t3))->v));
                        (((struct o38B0_ushort *)(a4))->v) = 0x258;
                        (((struct o38B2_ushort *)(a4))->v) = 0x0;
                        t4 = 0x38B2;
                    }
                    t1 = t4;
                }
                t2 = t1;
            }
            t1 = t2;
        } else {
            t2 = 0x38A4;
            if ((*(signed char *)((a4 + 0x38A4))) == 0) {
                t3 = FUN_0c161c66(a4);
                t4 = t3;
                if (t3 != 0) {
                    (((struct o38A4_uchar *)(a4))->v) = a5;
                    (((struct o38A6_ushort *)(a4))->v) = ((((struct o24_short *)(t3))->v));
                    (((struct o38A8_ushort *)(a4))->v) = 0x258;
                    (((struct o38AA_ushort *)(a4))->v) = 0x0;
                    t4 = 0x38AA;
                }
                t2 = t4;
            }
            t1 = t2;
        }
        t2 = t1;
    } else {
        t1 = 0x371C;
        if (((*(signed char *)((a4 + 0x2))) == 14) && (t0 = *(signed char *)((a4 + 0x371C)), t0 != 0)) {
        } else {
            t0 = FUN_0c15eda8(a4, a5);
            t3 = t0;
            if (t0 != 0) {
                (((struct o389C_uchar *)(a4))->v) = a5;
                (((struct o389E_ushort *)(a4))->v) = ((((struct o24_short *)(t0))->v));
                (((struct o38A0_ushort *)(a4))->v) = 0x384;
                (((struct o38A2_ushort *)(a4))->v) = 0x0;
                t3 = 0x38A2;
            }
            t1 = t3;
        }
        t2 = t1;
    }
    return t2;
}

int FUN_0c07dcd8(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    if ((*(signed char *)0xC542361) == 0) {
        t0 = 0x3720;
        if ((*(signed char *)((a4 + 0x3720))) == 0) {
            t1 = *(signed char *)((a4 + 0x1));
            *(unsigned int *)(((((short)t1 * (short)0x98) + 0xC541CDC) + 0x20)) = ((*(int *)(((((short)t1 * (short)0x98) + 0xC541CDC) + 0x20))) + a5);
            t1 = *(signed char *)((a4 + 0x1));
            t0 = (((short)t1 * (short)0x98) + 0xC541CDC);
            if ((unsigned int)(*(int *)(((((short)t1 * (short)0x98) + 0xC541CDC) + 0x20))) > (unsigned int)0x5F5E0FF) {
                t1 = *(signed char *)((a4 + 0x1));
                *(unsigned int *)(((0xC541CDC + ((short)t1 * (short)0x98)) + 0x20)) = 0x5F5E0FF;
                t0 = ((short)t1 * (short)0x98);
            }
        }
        t1 = t0;
    }
    return t1;
}

