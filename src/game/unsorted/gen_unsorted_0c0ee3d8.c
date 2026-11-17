/* game/unsorted: functions 0C0EE3D8-0C0EE44C, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oAC_ushort { char p[0xAC]; unsigned short v; };
int FUN_0c03f346(int, int, int, int);
int FUN_0c0ee3d8(int a4, int a5, int a6, int a7);

int FUN_0c0ee3d8(int a4, int a5, int a6, int a7)
{

    register int R2;
    register int R3;
    register int R5;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    v0_0 = a4;
    v0_2 = *(signed char *)((v0_0 + 0x14));
    v0_1 = (v0_2);
    if ((v0_2 == 0)) goto L_C0EE3E8;
    if ((v0_1 == 1)) goto L_C0EE3FC;
    return FUN_0c03f346(v0_0, R5, a6, a7);
    L_C0EE3FC:;
    v0_2 = *(signed char *)((v0_0 + 0x15));
    v0_1 = (v0_2);
    R5 = (0xB6);
    if ((v0_2 == 0)) goto L_C0EE40E;
    if (!((v0_1 == 1))) goto L_C0EE448;
    v0_2 = *(int *)((v0_0 + 0x38));
    *(unsigned int *)((v0_0 + 0x38)) = (v0_2 - R5);
    v0_2 = (int)(v0_2 - R5) >= (int)0xFFFFE000;
    R5 = (0xFFFFE000);
    if (v0_2) goto L_C0EE448;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) - 1);
    *(unsigned int *)((v0_0 + 0x38)) = R5;
    v0_1 = (0x15);
    goto L_C0EE448;
    L_C0EE448:;
    return v0_1;
    L_C0EE40E:;
    v0_2 = *(int *)((v0_0 + 0x38));
    *(unsigned int *)((v0_0 + 0x38)) = (v0_2 + R5);
    v0_2 = (int)(v0_2 + R5) <= (int)0x2000;
    R5 = (0x2000);
    if (v0_2) goto L_C0EE448;
    (((struct o15_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x15))) + 0x1);
    *(unsigned int *)((v0_0 + 0x38)) = R5;
    v0_1 = (0x15);
    goto L_C0EE448;
    L_C0EE3E8:;
    (((struct o14_uchar *)(v0_0))->v) = ((*(signed char *)((v0_0 + 0x14))) + 0x1);
    (((struct oA8_uchar *)(v0_0))->v) = 0x1;
    (((struct oAC_ushort *)(v0_0))->v) = 0x5;
    goto L_C0EE3FC;
}
