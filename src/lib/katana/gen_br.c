/* Straight-line functions with calls and guards (batch gen_br): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o1C_uchar { char p[0x1C]; unsigned char v; };
struct o40_int { char p[0x40]; int v; };
struct o40_uint { char p[0x40]; unsigned int v; };
int vmsfs_read_retry(int, int, int);
int FUN_0c2c14a8(void);
int FUN_0c2f4660(int);
int FUN_0c2fbc38(void);
int check_fat_xross(int, int, int);
int check_file_correct(int, int);
int close_file_handle(int);
int get_fat(int, int, int);
int open_file_handle(void);
int search_dir(int, int, int);
int thunk_FUN_0c2c067e(int, int, int);
int vmsfs_unmount(int);
int vmsio_ismount(int);
int vmsio_isready(int);
int vmsfs_diskfree(int a4, int a5);
int vmsfs_fopen(int a4, int a5, int a6);
int vmsfs_fread1(int a4, int a5);
void FUN_0c2f426c(void);

int vmsfs_diskfree(int a4, int a5)
{
    int stk[2];

    register int R2;
    register int R3;
    register int R6;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    v0_4 = a4;
    v0_2 = a5;
    *(unsigned int *)(((int)stk + 0)) = v0_2;
    *(unsigned int *)(((int)stk + 4)) = (v0_4 * 0x148);
    v0_0 = (((v0_4 * 0x148) + 0xC8C4604));
    v0_1 = (v0_4);
    if (((*(signed char *)((((v0_4 * 0x148) + 0xC8C4604) + 0x2))) == 0)) goto L_C2BED58;
    v0_3 = (vmsio_isready(v0_1)) != 0;
    if (v0_3) goto L_C2BED42;
    vmsfs_unmount(v0_1);
    L_C2BED58:;
    v0_0 = (0xFFFFFF01);
    L_C2BEE12:;
    return v0_0;
    L_C2BED42:;
    v0_3 = (vmsio_ismount(v0_1)) == 0;
    if (v0_3) goto L_C2BED58;
    if (((*(signed char *)((((*(int *)(((int)stk + 4))) + 0xC8C4604) + 0x8))) != 0)) goto L_C2BED5E;
    goto L_C2BED58;
    L_C2BED5E:;
    v0_2 = (int)(thunk_FUN_0c2c067e(v0_1, v0_2, R6)) >= 0;
    if (v0_2) goto L_C2BED6E;
    v0_0 = (0xFFFFFF03);
    goto L_C2BEE12;
    L_C2BED6E:;
    v0_3 = (0x0);
    v0_2 = (0xFFFC);
    v0_4 = (0x0);
    if (((*(int *)(((int)stk + 0))) != 1)) goto L_C2BEDBC;
    v0_4 = (v0_4);
    L_C2BED8E:;
    if (!(((int)v0_4 < (int)(*(int *)(((*(int *)((v0_0 + 0x1C))) + 0x38)))))) goto L_C2BED96;
    v0_3 = (unsigned short)(get_fat(v0_1, v0_4, R6)) != v0_2;
    if (v0_3) goto L_C2BED96;
    v0_4 = ((v0_4 + 0x1));
    goto L_C2BED8E;
    L_C2BED96:;
    v0_3 = (v0_4);
    L_C2BEE10:;
    v0_0 = (v0_3);
    goto L_C2BEE12;
    L_C2BEDBC:;
    if (((*(int *)0xC2FFC30) == 0)) goto L_C2BEDF2;
    v0_4 = (v0_4);
    L_C2BEDE6:;
    if (((int)v0_4 < (int)(*(int *)(((*(int *)((v0_0 + 0x1C))) + 0x30))))) goto L_C2BEDC8;
    goto L_C2BEE10;
    L_C2BEDC8:;
    v0_5 = (unsigned short)(get_fat(v0_1, v0_4, R6)) != v0_2;
    if (v0_5) goto L_C2BEDE4;
    v0_5 = (int)(check_fat_xross(v0_1, v0_4, R6)) < 0;
    if (v0_5) goto L_C2BEDE4;
    v0_3 = ((v0_3 + 0x1));
    L_C2BEDE4:;
    v0_4 = ((v0_4 + 0x1));
    goto L_C2BEDE6;
    L_C2BEDF2:;
    v0_4 = (v0_4);
    L_C2BEE08:;
    if (((int)v0_4 < (int)(*(int *)(((*(int *)((v0_0 + 0x1C))) + 0x30))))) goto L_C2BEDF6;
    goto L_C2BEE10;
    L_C2BEDF6:;
    v0_5 = (unsigned short)(get_fat(v0_1, v0_4, R6)) != v0_2;
    v0_4 = ((v0_4 + 0x1));
    if (v0_5) goto L_C2BEE08;
    v0_3 = ((v0_3 + 0x1));
    goto L_C2BEE08;
}

int vmsfs_fopen(int a4, int a5, int a6)
{
    int stk[12];

    register int R1;
    register int R2;
    register int R3;
    register int R8;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    v0_5 = a4;
    v0_3 = a5;
    v0_4 = a6;
    *(unsigned int *)(((int)stk + 0)) = v0_4;
    *(unsigned int *)((v0_4 + 0x0)) = 0x0;
    v0_2 = (v0_3);
    v0_0 = (0x0);
    v0_1 = (v0_5);
    if (((*(signed char *)(((v0_5 * 0x148) + 0xC8C4606))) == 0)) goto L_C2BEF40;
    v0_5 = (vmsio_isready(v0_1)) != 0;
    if (v0_5) goto L_C2BEF28;
    vmsfs_unmount(v0_1);
    L_C2BEF40:;
    v0_0 = (0xFFFFFF01);
    L_C2BEFF4:;
    return v0_0;
    L_C2BEF28:;
    v0_5 = (vmsio_ismount(v0_1)) == 0;
    if (v0_5) goto L_C2BEF40;
    if (((*(signed char *)(((v0_1 * 0x148) + 0xC8C460C))) != 0)) goto L_C2BEF46;
    goto L_C2BEF40;
    L_C2BEF46:;
    v0_3 = (int)(thunk_FUN_0c2c067e(v0_1, v0_3, v0_4)) >= 0;
    if (v0_3) goto L_C2BEF56;
    v0_0 = (0xFFFFFF03);
    goto L_C2BEFF4;
    L_C2BEF56:;
    v0_3 = (int)(FUN_0c2c14a8()) < 0;
    if (v0_3) goto L_C2BEF80;
    v0_3 = (int)(check_file_correct(v0_1, v0_2)) >= 0;
    if (v0_3) goto L_C2BEF74;
    v0_0 = (0xFFFFFF41);
    goto L_C2BEFF4;
    L_C2BEF74:;
    v0_4 = open_file_handle();
    v0_3 = (v0_4);
    if (!((v0_4 != 0))) goto L_C2BEF80;
    v0_2 = search_dir(v0_1, v0_2, (((int)stk + 0) + 0x4));
    *(unsigned int *)0xC8C9508 = v0_2;
    if (((int)v0_2 >= 0)) goto L_C2BEFD4;
    close_file_handle(v0_3);
    v0_0 = (0xFFFFFF05);
    goto L_C2BEFF4;
    L_C2BEF80:;
    v0_0 = (0xFFFFFF07);
    goto L_C2BEFF4;
    L_C2BEFD4:;
    *(unsigned int *)((v0_3 + 0x4)) = v0_0;
    *(unsigned int *)((v0_3 + 0x34)) = (*(int *)(((int)stk + 44)));
    v0_2 = *(int *)(((int)stk + 16));
    *(unsigned int *)((v0_3 + 0x38)) = v0_2;
    (((struct o40_uint *)(v0_3))->v) = v0_2;
    *(unsigned int *)((v0_3 + 0x28)) = v0_1;
    *(unsigned short *)((v0_3 + 0x2)) = (*(short *)(((int)stk + 12)));
    *(unsigned char *)((v0_3 + 0x1)) = (*(signed char *)(((int)stk + 14)));
    *(unsigned int *)(((*(int *)(((int)stk + 0))) + 0x0)) = v0_3;
    v0_0 = (v0_0);
    goto L_C2BEFF4;
}

int vmsfs_fread1(int a4, int a5)
{
    int stk[1];

    register int R1;
    register int R2;
    register int R3;
    register int R6;
    register int R8;
    register float F0;
    register float F15;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    v0_1 = a4;
    v0_2 = a5;
    *(unsigned int *)(((int)stk + 0)) = v0_2;
    v0_3 = (vmsio_isready((*(int *)((v0_1 + 0x28))))) != 0;
    v0_0 = (v0_1);
    if (v0_3) goto L_C2BF84A;
    vmsfs_unmount((*(int *)((v0_0 + 0x28))));
    L_C2BF864:;
    v0_1 = (0xFFFFFF01);
    L_C2BF90A:;
    return v0_1;
    L_C2BF84A:;
    v0_1 = (vmsio_ismount((*(int *)((v0_0 + 0x28))))) == 0;
    if (v0_1) goto L_C2BF864;
    if (((*(signed char *)((((*(int *)((v0_0 + 0x28))) * 0x148) + 0xC8C460C))) != 0)) goto L_C2BF894;
    goto L_C2BF864;
    L_C2BF894:;
    v0_1 = (int)(thunk_FUN_0c2c067e((*(int *)((v0_0 + 0x28))), v0_2, R6)) >= 0;
    if (v0_1) goto L_C2BF8A4;
    v0_1 = (0xFFFFFF03);
    goto L_C2BF90A;
    L_C2BF8A4:;
    v0_1 = (0x40);
    v0_2 = ((*(int *)((v0_0 + 0x28))));
    if ((((((struct o40_int *)(v0_0))->v)) != 0xFFFA)) goto L_C2BF8BC;
    if (((*(int *)((v0_0 + 0x34))) == 0)) goto L_C2BF8C2;
    v0_1 = (0xFFFF0000);
    goto L_C2BF90A;
    L_C2BF8C2:;
    v0_1 = (0x0);
    goto L_C2BF90A;
    L_C2BF8BC:;
    if (((*(int *)((v0_0 + 0x34))) != 0)) goto L_C2BF8C6;
    goto L_C2BF8C2;
    L_C2BF8C6:;
    if (((*(int *)((v0_0 + v0_1))) == 0xFFFC)) goto L_C2BF8D6;
    if (!(((*(int *)((v0_0 + v0_1))) != 0xFFFF))) goto L_C2BF8D6;
    v0_1 = *(int *)((v0_0 + v0_1));
    v0_3 = vmsfs_read_retry(v0_2, v0_1, (*(int *)(((int)stk + 0))));
    v0_4 = (v0_1);
    v0_1 = (v0_3);
    if (((int)v0_3 >= 0)) goto L_C2BF8F2;
    v0_1 = (v0_1);
    goto L_C2BF90A;
    L_C2BF8D6:;
    v0_1 = (0xFFFFFF41);
    goto L_C2BF90A;
    L_C2BF8F2:;
    (((struct o40_uint *)(v0_0))->v) = (unsigned short)(get_fat(v0_2, v0_4, R6));
    v0_1 = *(int *)((v0_0 + 0x34));
    *(unsigned int *)((v0_0 + 0x34)) = (v0_1 - 1);
    v0_1 = ((v0_1 - 1));
    goto L_C2BF90A;
}

void FUN_0c2f426c(void)
{
    int stk[3];
    register int t0;
    register int t2;
    register int t3;
    register int t5;
    register int t7;
    register int t8;
    int t10;

    t0 = *(signed char *)0xC8DFF7A;
    if (((int)(unsigned char)t0 > 0) && ((int)(unsigned char)t0 < (int)0xE)) {
        (((struct o1C_uchar *)0xC8DFF71)->v) = 0x0;
        if ((int)(unsigned char)(*(signed char *)0xC8DFF7A) < (int)0x6) {
            t2 = *(signed char *)0xC8DFF72;
            *(unsigned char *)(((int)stk + 4)) = t2;
            t3 = *(signed char *)0xC8DFF71;
            t5 = t2;
            if ((int)(unsigned char)t2 < (int)(unsigned char)t3) {
                t5 = (t2 + 0x80);
            }
            t7 = *(signed char *)0xC8DFF70;
            t8 = (0x80 + t7);
            if ((int)(unsigned char)t7 >= (int)(unsigned char)t3) {
                t8 = t7;
            }
            *(unsigned int *)(((int)stk + 0)) = (unsigned char)t8;
            if (((int)(unsigned char)t8 <= (int)(unsigned char)t5) && (t10 = *(int *)(((int)stk + 0)), (int)t10 >= (int)(unsigned char)t3)) {
                if ((unsigned char)(*(signed char *)0xC8DFF7A) != 5) {
                    (((struct o0_uchar *)0xC8DFF71)->v) = t7;
                    return;
                }
                if ((unsigned char)t7 != (unsigned char)(*(signed char *)(((int)stk + 4)))) {
                    return;
                }
                FUN_0c2f4660((unsigned char)t7);
                *(unsigned char *)0xC8D678F = ((*(signed char *)0xC8D678F) | 0x80);
                FUN_0c2fbc38();
    return;
            }
            if ((*(signed char *)0xC8DFFF1) == 0) {
                FUN_0c2f4660(t7);
                *(unsigned char *)0xC8D678F = ((*(signed char *)0xC8D678F) | 0x80);
                FUN_0c2fbc38();
    return;
            }
            return;
        }
        return;
    }
}
