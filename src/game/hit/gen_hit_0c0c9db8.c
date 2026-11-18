/* game/hit: functions 0C0C9DB8-0C0CA0C4, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o376C_uint { char p[0x376C]; unsigned int v; };
struct o41C_uchar { char p[0x41C]; unsigned char v; };
struct o41D_uchar { char p[0x41D]; unsigned char v; };
struct o420_ushort { char p[0x420]; unsigned short v; };
struct o424_uchar { char p[0x424]; unsigned char v; };
struct o6C_float { char p[0x6C]; float v; };
struct o70_float { char p[0x70]; float v; };
struct o74_float { char p[0x74]; float v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c0c212c(int);
int FUN_0c0c25c4(int);
int FUN_0c0c2a80(int);
int FUN_0c0c2aa2(int, int);
int FUN_0c0c2ab6(int, int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c0c3e3a(int, int, int);
int FUN_0c0c4770(int);
int FUN_0c0c47a4(int);
int FUN_0c0c4b76(int);
int FUN_0c0c4bcc(int);
int FUN_0c0c52c4(int);
int FUN_0c0c9e1e(int);
int FUN_0c187798(void);
int FUN_0c0c9db8(int a4);
int FUN_0c0c9de8(int a4);
void FUN_0c0c9e1a(void);
int FUN_0c0c9f50(int a4, int a5, int a6, int a7);
int FUN_0c0c9fea(int a4, int a5, int a6, int a7, int a8);

int FUN_0c0c9db8(int a4)
{
    register int t0;

    t0 = *(signed char *)((a4 + 0x1));
    FUN_0c0c2d56(a4, 0x5, t0);
    (((struct o376C_uint *)((((short)(signed char)t0 * (short)0x3938) + 0xC532498)))->v) = a4;
    return 0x376C;
}

int FUN_0c0c9de8(int a4)
{
    register int t0;

    (((struct o12E_ushort *)(a4))->v) = 0x0;
    t0 = (((struct oC4_int *)(a4))->v);
    (((struct o74_float *)(t0))->v) = 0.0f;
    (((struct o70_float *)(t0))->v) = 0.0f;
    (((struct o6C_float *)(t0))->v) = 0.0f;
    t0 = (((struct oC4_int *)(a4))->v);
    (((struct o80_uint *)(t0))->v) = 0x0;
    (((struct o7C_uint *)(t0))->v) = 0x0;
    (((struct o78_uint *)(t0))->v) = 0x0;
    (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
    return 0x15;
}

void FUN_0c0c9e1a(void)
{
    
}

int FUN_0c0c9f50(int a4, int a5, int a6, int a7)
{
    register int t1;

    FUN_0c0c3e3a(a4, a5, a6);
    t1 = *(signed char *)((a4 + 0x41D));
    if ((unsigned int)t1 < (unsigned int)0xC) {
        switch ((t1 << 1)) {
            case 0:
            {
                return FUN_0c0c4770(a4);
            }
            case 2:
            {
                return FUN_0c0c47a4(a4);
            }
            case 4:
            {
                return FUN_0c0c4b76(a4);
            }
            case 6:
            {
                return FUN_0c0c4bcc(a4);
            }
            case 8:
            {
                return FUN_0c0c9db8(a4);
            }
            case 10:
            {
                return FUN_0c0c9e1e(a4);
            }
            case 12:
            {
                return FUN_0c0c52c4(a4);
            }
            case 14:
            case 16:
            {
                return ((int (*)(int, int, int, int))(0xC0C9F38))(a4, a5, a6, a7);
            }
            default:
            {
                return FUN_0c0c2a80(a4);
            }
        }
    }
    return t1;
}

