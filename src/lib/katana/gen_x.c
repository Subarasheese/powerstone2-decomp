/* Straight-line functions with calls and guards (batch gen_x): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o0_ushort { unsigned short v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o6_uchar { char p[0x6]; unsigned char v; };
struct o7_uchar { char p[0x7]; unsigned char v; };
struct o8_uchar { char p[0x8]; unsigned char v; };
int FUN_0c2cef80(int, int);
int FUN_0c2e7248(int, int);
int FUN_0c2e783e(void);
int FUN_0c2e8268(void);
int FUN_0c2ebeae(void);
int FUN_0c2ed436(void);
int FUN_0c2e673c(void);

int FUN_0c2e673c(void)
{
    int t0;
    register int t1;
    int t2;
    int t3;
    register int t4;
    register int t5;

    t4 = *(signed char *)0xC8D6498;
    if ((unsigned char)t4 != 1) {
        if ((unsigned char)t4 != 2) {
            if ((unsigned char)t4 != 3) {
            } else {
                FUN_0c2e7248(0x3, 0x0);
                (((struct o6_uchar *)0xC8D6524)->v) = 0x0;
            }
        } else {
            FUN_0c2e7248(0x4, 0x0);
            (((struct o6_uchar *)0xC8D6524)->v) = 0x0;
        }
    } else {
        FUN_0c2e7248(0x0, 0x0);
    }
    t4 = *(signed char *)0xC8D6498;
    if (((unsigned char)t4 != 5) && ((unsigned char)t4 != 6)) {
        (((struct o0_uchar *)0xC8D677E)->v) = ((*(signed char *)0xC8D677E) & 0xBF);
        (((struct o2_uchar *)0xC8D6524)->v) = (*(signed char *)0xC8D6443);
        FUN_0c2ed436();
        FUN_0c2e783e();
        FUN_0c2ebeae();
        FUN_0c2e8268();
    }
    t4 = *(signed char *)0xC8D6498;
    t5 = (unsigned char)t4;
    if ((unsigned char)t4 != 6) {
        if (((*(signed char *)0xC8D645B) == (*(signed char *)0xC8D652B)) && (t0 = *(signed char *)0xC8D645F, t1 = *(signed char *)0xC8D652C, t0 == t1)) {
        } else {
            (((struct o7_uchar *)0xC8D6524)->v) = (*(signed char *)0xC8D645B);
            (((struct o8_uchar *)0xC8D6524)->v) = (*(signed char *)0xC8D645F);
            if ((((unsigned char)(*(signed char *)0xC8D677E) & 2) == 0) && (t2 = *(signed char *)0xC8D6498, (unsigned char)t2 != 5)) {
                FUN_0c2e8268();
            }
        }
        if (((unsigned char)(*(signed char *)0xC8D645F) & 16) != 0) {
            FUN_0c2cef80((*(signed char *)0xC8D64A0), (*(signed char *)0xC8D64A1));
            if ((((unsigned char)(*(signed char *)0xC8D677E) & 2) == 0) && (t3 = *(signed char *)0xC8D6498, (unsigned char)t3 != 5)) {
                FUN_0c2e8268();
            }
        }
        (((struct o0_ushort *)0xC8D6524)->v) = 0x0;
        (((struct o1_uchar *)0xC8D677E)->v) = ((*(signed char *)0xC8D677F) & 0xFE);
        t0 = *(signed char *)0xC8D677F;
        (((struct o1_uchar *)0xC8D677E)->v) = (t0 & 0xF7);
        t5 = (t0 & 0xF7);
    }
    *(unsigned char *)0xC8D6498 = 0x0;
    return t5;
}
