/* Hand-fixed generated C: FUN_0c1983ca's wait loop calls FUN_0c18dfe6 once (r4 still 0x11 from the request) and from then on
   FUN_0c18dfee with 1, until the reply word at 0C8B5D94 is no longer -1; the generated C called FUN_0c18dfe6 every time. */

int FUN_0c198134(int, int, int, int);
int FUN_0c18dfe6(int);
int FUN_0c18dfee(int);
int FUN_0c18dfd6(void);
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o4_short { char p[0x4]; short v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o6_short { char p[0x6]; short v; };
struct o6_ushort { char p[0x6]; unsigned short v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };

int FUN_0c1983ca(int a4, int a5)
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
            return 0xFFFFFFFF;
        }
        (((struct o0_uint *)0xC8B5D94)->v) = 0xFFFFFFFF;
        *(unsigned int *)(((int)stk + 12)) = 0x0;
        *(unsigned int *)(((int)stk + 8)) = 0x0;
        FUN_0c198134(0x11, 0x0, (*(int *)(((int)stk + 0))), (((int)stk + 0) + 0x8));
        (((struct o4_ushort *)0xC8B5D94)->v) = 0x0;
        if (0x0 == 0) {
            FUN_0c18dfe6(0x11);
            while (((((struct o0_int *)0xC8B5D94)->v)) == -1) {
                FUN_0c18dfee(0x1);
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
    return 0x0;
}
