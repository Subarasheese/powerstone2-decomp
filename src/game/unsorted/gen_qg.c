/* Straight-line functions with calls and guards (batch gen_qg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o20_short { char p[0x20]; short v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
int FUN_0c04bcaa(int);
int nlRand(void);
int FUN_0c04cb24(int a4);

int FUN_0c04cb24(int a4)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    if ((*(signed char *)((a4 + 0x14))) == 0) {
        (((struct o14_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x14))) + 0x1);
        (((struct o15_uchar *)(a4))->v) = 0x0;
    }
    t0 = *(signed char *)((a4 + 0x15));
    if (t0 == 0) {
        (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
        *(unsigned short *)((a4 + 0x1C)) = 0x3;
        *(unsigned short *)((a4 + 0x1E)) = 0x14;
        (((struct o20_ushort *)(a4))->v) = 0x0;
    }
    if ((t0 == 0) || (t0 == 1)) {
        t1 = *(short *)((a4 + 0x1C));
        *(unsigned short *)((a4 + 0x1C)) = (t1 - 1);
        t2 = (short)(t1 - 1);
        if ((int)(short)(t1 - 1) <= 0) {
            *(unsigned short *)((a4 + 0x1E)) = (int)((float)(*(short *)((a4 + 0x1E))) * 1.20000005f);
            if ((int)(*(short *)((a4 + 0x1E))) > (int)0x1E) {
                *(unsigned short *)((a4 + 0x1E)) = 0x1E;
            }
            *(unsigned short *)((a4 + 0x1C)) = (*(short *)((a4 + 0x1E)));
            t1 = nlRand();
            t3 = (t1 % 0x20);
            *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + t3);
            FUN_0c04bcaa(((((struct o20_short *)(a4))->v)));
            (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + 0x1);
            (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) & 0x1);
            t2 = 0x20;
        }
        t1 = t2;
        if ((int)(unsigned char)(*(signed char *)0xC541F44) >= (int)0xA) {
            *(unsigned short *)((a4 + 0x1C)) = 0x3;
            *(unsigned short *)((a4 + 0x1E)) = 0x1E;
            (((struct o15_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x15))) + 0x1);
            t1 = 0x15;
        }
        t2 = t1;
    } else {
        t1 = t0;
        if (t0 != 2) {
        } else {
            t0 = *(short *)((a4 + 0x1C));
            *(unsigned short *)((a4 + 0x1C)) = (t0 - 1);
            t3 = (short)(t0 - 1);
            if ((int)(short)(t0 - 1) <= 0) {
                *(unsigned short *)((a4 + 0x1E)) = (int)((float)(*(short *)((a4 + 0x1E))) * 1.20000005f);
                if ((int)(*(short *)((a4 + 0x1E))) > (int)0x32) {
                    *(unsigned short *)((a4 + 0x1E)) = 0x32;
                }
                *(unsigned short *)((a4 + 0x1C)) = (*(short *)((a4 + 0x1E)));
                t0 = nlRand();
                t4 = (t0 % 0x20);
                *(unsigned short *)((a4 + 0x1C)) = ((*(short *)((a4 + 0x1C))) + t4);
                FUN_0c04bcaa(((((struct o20_short *)(a4))->v)));
                (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) + 0x1);
                (((struct o20_ushort *)(a4))->v) = (((((struct o20_short *)(a4))->v)) & 0x1);
                t3 = 0x20;
            }
            t1 = t3;
        }
        t2 = t1;
    }
    return t2;
}
