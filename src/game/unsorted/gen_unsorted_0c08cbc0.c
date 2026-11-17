/* game/unsorted: functions 0C08CBC0-0C08CC50, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o372D_uchar { char p[0x372D]; unsigned char v; };
struct o3735_uchar { char p[0x3735]; unsigned char v; };
struct o3868_int { char p[0x3868]; int v; };
struct o3868_uint { char p[0x3868]; unsigned int v; };
int math_angle_between_points_xz(int, int);
int FUN_0c07e2c4(int);
int FUN_0c08cbc0(int a4, int a5, int a6, int a7);

int FUN_0c08cbc0(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;

    t1 = FUN_0c07e2c4(a4);
    if (t1 == 0) {
        if (((*(signed char *)((a4 + 0x3731))) == 0) && (t0 = *(signed char *)((a4 + 0x372D)), t0 != 0)) {
            (((struct o3868_uint *)(a4))->v) = (unsigned short)((math_angle_between_points_xz((a4 + 0x28), (0x380C + a4))) - (*(int *)((a4 + 0x38))));
            if ((((((struct o3868_int *)(a4))->v)) & 0x8000) != 0) {
                (((struct o3868_uint *)(a4))->v) = (((((struct o3868_int *)(a4))->v)) | 0xFFFF0000);
            }
            if ((int)(*(signed char *)((a4 + 0x372D))) > 0) {
                *(unsigned int *)((a4 + 0x38)) = (unsigned short)((*(int *)((a4 + 0x38))) + ((int)((int)((((struct o3868_int *)(a4))->v)) / (int)(*(signed char *)((a4 + 0x372D))))));
            }
            (((struct o372D_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x372D))) - 1);
        }
        (((struct o3735_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x3735))) + 0x1);
        t0 = ((int (*)(int, int, int, int))((*(int *)((((*(signed char *)((a4 + 0x15))) << 2) + 0xC259640)))))(a4, a5, a6, a7);
        return ((int (*)(int, int, int, int))(0xC08C960))(a4, a5, a6, a7);
    }
    return t1;
}
