/* Straight-line functions with calls and guards (batch gen_uy): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o30_float { char p[0x30]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oA9_uchar { char p[0xA9]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
struct oC4_int { char p[0xC4]; int v; };
struct oC8_int { char p[0xC8]; int v; };
int FUN_0c03744a(int, int, int, int);
int FUN_0c1171f0(int);
int FUN_0c0fcbee(int a4);

int FUN_0c0fcbee(int a4)
{
    register int t0;
    register int t1;
    register int t44;

    t0 = *(signed char *)((a4 + 0x14));
    t1 = *(int *)((a4 + 0x10));
    if (t0 != 0) {
    } else {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        (((struct oAC_ushort *)(a4))->v) = 0x1F;
        (((struct oA9_uchar *)(a4))->v) = 0x21;
        (((struct o30_float *)(a4))->v) = (1.0f + 1.0f);
        FUN_0c1171f0(a4);
    }
    t44 = t0;
    if ((t0 == 0) || (t0 == 1)) {
        if ((*(int *)((0xC1FB62C + ((*(int *)((0xC1FB5EC + ((*(signed char *)(((t1 + 0x41C) + 0x5))) << 2)))) << 2)))) != -1) {
            *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x1;
            FUN_0c03744a(((((struct oC4_int *)(a4))->v)), 0x0, (*(int *)((((*(int *)((0xC1FB5EC + ((*(signed char *)(((t1 + 0x41C) + 0x5))) << 2)))) << 2) + 0xC1FB62C))), (*(int *)0xC4B410C));
        } else {
            *(unsigned char *)((((((struct oC4_int *)(a4))->v)) + 0x0)) = 0x0;
        }
        if ((*(int *)((0xC1FB66C + ((*(int *)((0xC1FB5EC + ((*(signed char *)(((t1 + 0x41C) + 0x5))) << 2)))) << 2)))) != -1) {
            *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x1;
            FUN_0c03744a(((((struct oC8_int *)(a4))->v)), 0x0, (*(int *)((((*(int *)((0xC1FB5EC + ((*(signed char *)(((t1 + 0x41C) + 0x5))) << 2)))) << 2) + 0xC1FB66C))), (*(int *)0xC4B410C));
        } else {
            *(unsigned char *)((((((struct oC8_int *)(a4))->v)) + 0x0)) = 0x0;
        }
        if ((*(signed char *)((0xA8 + (*(int *)((a4 + 0x10)))))) == 1) {
            (((struct oA8_uchar *)(a4))->v) = 0x1;
        } else {
            (((struct oA8_uchar *)(a4))->v) = 0x0;
        }
        t44 = 0xA8;
    }
    return t44;
}
