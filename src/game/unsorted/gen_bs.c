/* Straight-line functions with calls and guards (batch gen_bs): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_short { short v; };
struct o0_uchar { unsigned char v; };
struct o0_ushort { unsigned short v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_uchar { char p[0x10]; unsigned char v; };
struct o14_short { char p[0x14]; short v; };
struct o14_ushort { char p[0x14]; unsigned short v; };
struct o18_int { char p[0x18]; int v; };
struct o18_short { char p[0x18]; short v; };
struct o18_ushort { char p[0x18]; unsigned short v; };
struct o1C_int { char p[0x1C]; int v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o2_ushort { char p[0x2]; unsigned short v; };
struct o20_int { char p[0x20]; int v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o28_uchar { char p[0x28]; unsigned char v; };
struct o29_uchar { char p[0x29]; unsigned char v; };
struct o2B_uchar { char p[0x2B]; unsigned char v; };
struct o2C_uchar { char p[0x2C]; unsigned char v; };
struct o2D_uchar { char p[0x2D]; unsigned char v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o30_uchar { char p[0x30]; unsigned char v; };
struct o31_uchar { char p[0x31]; unsigned char v; };
struct o3C_short { char p[0x3C]; short v; };
struct o3C_ushort { char p[0x3C]; unsigned short v; };
struct o3E_ushort { char p[0x3E]; unsigned short v; };
struct o4_int { char p[0x4]; int v; };
struct o4_short { char p[0x4]; short v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o40_ushort { char p[0x40]; unsigned short v; };
struct o42_short { char p[0x42]; short v; };
struct o44_short { char p[0x44]; short v; };
struct o48_int { char p[0x48]; int v; };
struct o54_uint { char p[0x54]; unsigned int v; };
struct o58_uint { char p[0x58]; unsigned int v; };
struct o5C_uint { char p[0x5C]; unsigned int v; };
struct o6_ushort { char p[0x6]; unsigned short v; };
struct o60_ushort { char p[0x60]; unsigned short v; };
struct o64_uint { char p[0x64]; unsigned int v; };
struct o68_ushort { char p[0x68]; unsigned short v; };
struct o6A_ushort { char p[0x6A]; unsigned short v; };
struct o6C_uchar { char p[0x6C]; unsigned char v; };
struct o6D_uchar { char p[0x6D]; unsigned char v; };
struct o71_uchar { char p[0x71]; unsigned char v; };
struct o72_uchar { char p[0x72]; unsigned char v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o88_uint { char p[0x88]; unsigned int v; };
struct oA_short { char p[0xA]; short v; };
struct oA_ushort { char p[0xA]; unsigned short v; };
int ADXSJD_Create(int, int, int);
int ADXT_Destroy(int);
int FUN_0c010448(void);
int FUN_0c013b9c(int);
int FUN_0c018e74(int);
int FUN_0c01cb7c(void);
int FUN_0c01d094(void);
int FUN_0c01d262(void);
int FUN_0c01d26e(int);
int FUN_0c01d27a(void);
extern int FUN_0c01d294();
int FUN_0c01e992(int, int, int);
int FUN_0c01e9e4(void);
int FUN_0c022050(void);
int FUN_0c0220c4(int, int, int);
int FUN_0c0222a4(int, int, int);
int FUN_0c0573c0(int, int, int);
int FUN_0c05b05c(int, int);
int vmsfs_read_retry(int, int, int);
int FUN_0c186740(int, int, int);
int FUN_0c2b488a(int);
int vmsfs_write_retry(int, int, int);
int FUN_0c2c14a8(void);
int FUN_0c2c3148(void);
int FUN_0c2c3394(int);
int FUN_0c2c38aa(int);
int FUN_0c2c38c2(int);
int FUN_0c2f4660(int);
int FUN_0c2fbc38(void);
int SJRBF_Create(int, int, int);
int check_fat_all(int, int, int);
int clear_file(int, int);
int get_fat(int, int, int);
int memset(int, int, int);
int search_dir_by_startfat(int, int, int);
int search_fat(int, int, int);
int search_fat_free(int, int, int);
int search_fat_used(int, int, int);
int set_fat(int, int);
int thunk_FUN_0c2c067e(int, int, int);
int thunk_FUN_0c2c4cb8(int, int, int);
int thunk_FUN_0c2c52e0(int, int);
int thunk_FUN_0c2c59fc(int);
int thunk_FUN_0c2c5bd0(int, int, int);
int vmsfs_unmount(int);
int vmsfs_xfind(int, int);
int vmsio_ismount(int);
int vmsio_isready(int);
int write_dir(int, int, int);
int write_fat(int, int, int);
int FUN_0c2f430c(int a4, int a5, int a6);
int ADXT_Create(int a4, int a5, int a6);
int vmsfs_xdefrag(int a4, int a5, int a6, int a7);
int vmsfs_fdelete_ex(int a4, int a5, int a6);
int FUN_0c0116a0(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);
int adxt_stat_prep(int a4, int a5, int a6, int a7);
int FUN_0c028494(void);
int FUN_0c2c4054(int a4);


int FUN_0c028494(void)
{
    int stk[36];
    register int t0;
    register int t5;
    register int t16;
    register int t14;

    t0 = FUN_0c022050();
    t16 = t0;
    if (t0 != 0) {
        FUN_0c0220c4(((int)stk + 0), (((int)stk + 0) + 0x4), (((int)stk + 0) + 0x8));
        t16 = (FUN_0c0222a4(((int)stk + 0), (((int)stk + 0) + 0x4), (((int)stk + 0) + 0x8)));
    }
    t5 = *(short *)0xC30540C;
    *(unsigned short *)0xC30540C = (t5 - 1);
    if ((int)(short)(t5 - 1) < 0) {
        if ((*(int *)0xC30A3F8) != 0) {
            *(unsigned int *)0xC30A3F8 = 0x0;
        }
        FUN_0c05b05c(0x1E, 0x0);
        *(unsigned char *)0xC30EFA5 = 0x0;
        (((struct o0_uchar *)0xC309858)->v) = 0x4;
        (((struct o3_uchar *)0xC309858)->v) = 0x0;
        (((struct o2_uchar *)0xC309858)->v) = 0x0;
        (((struct o1_uchar *)0xC309858)->v) = 0x0;
        (((struct o10_uchar *)(((int)stk + 0)))->v) = 0x7F;
        *(unsigned int *)(((int)stk + 12)) = ((((int)stk + 0) + 0x10) + 0x1);
        *(unsigned char *)((((((int)stk + 0) + 0x10) + 0x1) + 0x0)) = 0x3;
        *(unsigned char *)(((((int)stk + 0) + 0x10) + 0x2)) = 0x1;
        FUN_0c186740((*(int *)0xC309994), (((int)stk + 0) + 0x10), (*(signed char *)(((*(int *)(((int)stk + 12))) + 0x0))));
        (((struct o6_ushort *)0xC309BCA)->v) = 0x0;
        (((struct o4_ushort *)0xC309BCA)->v) = 0x0;
        (((struct o2_ushort *)0xC309BCA)->v) = 0x0;
        (((struct o0_ushort *)0xC309BCA)->v) = 0x0;
        *(unsigned int *)0xC30A50C = 0x0;
        t14 = 0xC30A510;
        for (;;) {
            *(unsigned char *)((t14 + 0x0)) = 0x0;
            t14 = (t14 + 0x1);
            if ((unsigned int)t14 >= (unsigned int)0xC30A51A) {
                break;
            }
        }
        t16 = (FUN_0c01e992(t14, 0xC30A51A, 0xC30A510));
    }
    return t16;
}

