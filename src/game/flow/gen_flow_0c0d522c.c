/* game/flow: functions 0C0D522C-0C0D54D6, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o12E_ushort { char p[0x12E]; unsigned short v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
int FUN_0c0c2ab6(int, int);
int FUN_0c0c2d56(int, int, int);
int FUN_0c0d522c(int a4);
void FUN_0c0d5328(void);

int FUN_0c0d522c(int a4)
{

    register int R1;
    register int R2;
    register int R3;
    register int R5;
    register int R6;
    register float F3;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    v0_2 = a4;
    v0_1 = *(signed char *)((v0_2 + 0x15));
    v0_0 = (v0_1);
    v0_2 = (v0_2);
    if ((v0_1 == 0)) goto L_C0D5242;
    if ((v0_0 == 1)) goto L_C0D5254;
    L_C0D52A4:;
    return v0_0;
    L_C0D5254:;
    (((struct oA8_uchar *)(v0_2))->v) = ((((*(short *)((v0_2 + 0x1C))) & 0x4) >> 1) >> 1);
    v0_1 = *(short *)((v0_2 + 0x1C));
    *(unsigned short *)((v0_2 + 0x1C)) = (v0_1 - 1);
    v0_0 = ((short)(v0_1 - 1));
    if (((int)(short)(v0_1 - 1) > 0)) goto L_C0D52A4;
    FUN_0c0c2d56(v0_2, 0x2, (*(signed char *)((v0_2 + 0x1))));
    (((struct oA8_uchar *)(v0_2))->v) = 0x1;
    FUN_0c0c2ab6(v0_2, (*(signed char *)((((unsigned short)(unsigned char)(*(signed char *)((v0_2 + 0x41C))) * (unsigned short)0x34) + 0xC2738CA))));
    (((struct o48_float *)(v0_2))->v) = 1.0f;
    (((struct o44_float *)(v0_2))->v) = 1.0f;
    (((struct o40_float *)(v0_2))->v) = 1.0f;
    v0_0 = (0x40);
    goto L_C0D52A4;
    L_C0D5242:;
    (((struct o12E_ushort *)(v0_2))->v) = 0x0;
    *(unsigned short *)((v0_2 + 0x1C)) = 0x3C;
    (((struct o15_uchar *)(v0_2))->v) = ((*(signed char *)((v0_2 + 0x15))) + 0x1);
    goto L_C0D5254;
}

void FUN_0c0d5328(void)
{
    
}
