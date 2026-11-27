/* Straight-line functions with calls and guards (batch gen_gb): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[3]; } Stk3;
struct o0_float { float v; };
struct o0_uchar { unsigned char v; };
struct o10_float { char p[0x10]; float v; };
struct o114_int { char p[0x114]; int v; };
struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o132_uchar { char p[0x132]; unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o372D_uchar { char p[0x372D]; unsigned char v; };
struct o3731_uchar { char p[0x3731]; unsigned char v; };
struct o3760_uint { char p[0x3760]; unsigned int v; };
struct o376C_int { char p[0x376C]; int v; };
struct o377C_int { char p[0x377C]; int v; };
struct o377C_uint { char p[0x377C]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o64_ushort { char p[0x64]; unsigned short v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o88_float { char p[0x88]; float v; };
struct oA4_int { char p[0xA4]; int v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_short { char p[0xAC]; short v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oB0_float { char p[0xB0]; float v; };
struct oB4_float { char p[0xB4]; float v; };
struct oB8_float { char p[0xB8]; float v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC0_int { char p[0xC0]; int v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
struct oE4_int { char p[0xE4]; int v; };
int FUN_0c036de8(int);
int FUN_0c037320(int, int);
int FUN_0c03733c(int, int, int);
int FUN_0c03744a(int, int, int, int);
int FUN_0c037498(int, int, int, int);
int FUN_0c03f346(int, int, int, int);
int FUN_0c03f444(int, int, int);
int FUN_0c0497d8(void);
int FUN_0c049962(void);
int FUN_0c049eac(int, int, int, int);
int FUN_0c04a060(void);
int FUN_0c0588bc(int, int, int, int, int, int);
int FUN_0c058a6e(int, int, int, int, int, int);
int FUN_0c064d24(int, int, int, int, int, int, int, int);
int FUN_0c064f80(int);
int FUN_0c06780e(int);
int FUN_0c06785c(void);
int FUN_0c07ce58(int, int);
int FUN_0c07e2f4(int, int);
int FUN_0c07e3ae(int, int);
int FUN_0c07e420(int, int);
int FUN_0c0b21ac(int, int);
int FUN_0c0bbf58(int, Stk3);
int FUN_0c0d04c4(int, int);
int FUN_0c0db380(int);
int FUN_0c1171f0(int);
int FUN_0c148d04(int, int);
int FUN_0c148d64(int, int, int);
int FUN_0c149560(int, int);
int FUN_0c16bd38(int, int, int, int);
int FUN_0c16eea8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c187a88(int, int, int);
int FUN_0c191e44(void);
int FUN_0c191e7c(void);
int FUN_0c1a027c(int);
int math_mat_get_translate(int, int);
int math_mat_transform_vector(int, int, Stk3);
int math_vec3_mul_xyz(int, float, float, float);
int nlAddVector3op(int, int, int);
extern int nlRand();
float nlScalor(int);
int strlen(int);
int thunk_FUN_0c058310(int, int);
int thunk_FUN_0c05abb2(int, int);
void FUN_0c10d2b4(int a4, int a5);
void FUN_0c1101c0(int a4, int a5);
int FUN_0c16ac5c(int a4);
int FUN_0c16f000(int a4, int a5, int a6, int a7);
int FUN_0c0f8ca0(int a4, int a5, int a6, int a7);
int FUN_0c1038e8(int a4);
void FUN_0c13299c(int a4);
int FUN_0c0e8e4c(int a4);
int FUN_0c120504(int a4, int a5, int a6, int a7);
void FUN_0c1358c2(int a4);
int FUN_0c148e48(int a4, int a5);
void FUN_0c04a080(int a4, int a5, int a6, int a7);
void FUN_0c1105d8(int a4, int a5);
int FUN_0c1496a4(int a4, int a5);
int FUN_0c083384(int a4, int a5);
int FUN_0c085eac(int a4, int a5);
int FUN_0c0dbb38(int a4, int a5, int a6, int a7);
int FUN_0c13f5dc(int a4, int a5);
int FUN_0c149000(int a4);
int FUN_0c0e60b0(int a4, float f4);
int FUN_0c1325a4(int a4);
int FUN_0c0dffcc(int a4, int a5, int a6, int a7);
void FUN_0c160c7c(int a4, int a5, int a6, int a7);
int FUN_0c19c948(int a4);
int FUN_0c0f485a(int a4, int a5, int a6);
int FUN_0c112d40(int a4, int a5, int a6, int a7);
int FUN_0c118708(int a4, int a5, int a6, int a7);
int FUN_0c16c016(int a4);


int FUN_0c19c948(int a4)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;

    t2 = *(int *)((a4 + 0x30));
    t3 = 0x0;
    if (((*(int *)((t2 + 0x0))) != 0) && (t0 = *(int *)((t2 + 0x4)), t0 != 0)) {
        t0 = FUN_0c1a027c(0x0);
        t4 = 0x0;
        if (t0 == 0) {
        } else {
            t5 = *(int *)((t0 + 0x0));
            FUN_0c191e44();
            t6 = FUN_0c191e7c();
            *(unsigned short *)0xC8B5DB6 = ((t6 & 0x1F) + 0x10);
            *(unsigned char *)((t5 + 0x0)) = (*(signed char *)0xC8B5DB6);
            t7 = ((t6 & 0x1F) + 0x10);
            t6 = 0x0;
            t8 = (t5 + 0x1);
            for (;;) {
                if ((int)t6 >= (int)(unsigned short)(*(short *)0xC8B5DB6)) {
                    break;
                }
                t5 = t8;
                t8 = (t8 + 0x1);
                t7 = (FUN_0c191e7c());
                t6 = (t6 + 0x1);
                *(unsigned char *)(((t5) + 0x0)) = t7;
            }
            t5 = strlen((*(int *)((t2 + 0x0))));
            if ((int)t5 > 0) {
                t6 = *(int *)((t2 + 0x0));
                for (t1 = 0; ; t1++) { *(unsigned char *)(t8 + t1) = *(unsigned char *)(t6 + t1); if (*(unsigned char *)(t6 + t1) == 0) break; }
                *(unsigned char *)(((t8 + t5) + 0x0)) = 0x0;
                *(unsigned char *)((((t8 + t5) + 0x1) + 0x0)) = 0x0;
            }
            *(unsigned short *)((t0 + 0x4)) = ((*(short *)((t0 + 0x4))) + ((t5 + (*(short *)0xC8B5DB6)) + 0x2));
            t1 = *(short *)((t0 + 0x4));
            t2 = (unsigned short)t1;
            if ((unsigned int)(unsigned short)t1 > (unsigned int)0x80) {
                t2 = 0x80;
            }
            FUN_0c187a88(0xC8B5DB8, (*(int *)((t0 + 0x0))), t2);
            t4 = t0;
        }
        t3 = t4;
    }
    return t3;
}


