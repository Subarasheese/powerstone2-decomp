/* scratch */
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o4_short { char p[0x4]; short v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o6_short { char p[0x6]; short v; };
struct o6_ushort { char p[0x6]; unsigned short v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
int FUN_0c18dfd6(void);
int FUN_0c18dfe6(void);
int FUN_0c198134(int, int, int, int);
void FUN_0c1983ca(int a4, int a5);

void FUN_0c1983ca(int a4, int a5)
{
    int stk[40];
    register int t1;
    int t8;

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 0)) = a5;
    (((struct o4_ushort *)0xC8B5D94)->v) = 0x0;
    (((struct o6_ushort *)0xC8B5D94)->v) = 0x0;
    (((struct o8_uint *)0xC8B5D94)->v) = 0x0;
    t1 = 0x0;
    for (;;) {
        if ((int)t1 >= (int)0x3) {
            return;
        }
        (((struct o0_uint *)0xC8B5D94)->v) = 0xFFFFFFFF;
        *(unsigned int *)(((int)stk + 12)) = 0x0;
        *(unsigned int *)(((int)stk + 8)) = 0x0;
        FUN_0c198134(0x11, 0x0, (*(int *)(((int)stk + 0))), (((int)stk + 0) + 0x8));
        (((struct o4_ushort *)0xC8B5D94)->v) = 0x0;
        if (0x0 == 0) {
            for (;;) {
                FUN_0c18dfe6();
                if (((((struct o0_int *)0xC8B5D94)->v)) != -1) {
                    break;
                }
            }
            FUN_0c18dfd6();
            if (((unsigned short)((((struct o4_short *)0xC8B5D94)->v)) == 0x123) && (t8 = (((struct o6_short *)0xC8B5D94)->v), (unsigned short)t8 == 1)) {
                break;
            }
            t1 = (t1 + 0x1);
            continue;
        }
        break;
    }
    *(unsigned int *)(((*(int *)(((int)stk + 4))) + 0x0)) = ((((struct o8_int *)0xC8B5D94)->v));
}

