/* Straight-line functions with calls and guards (batch gen_dq): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c2c1016(int);
int FUN_0c2c14a8(void);
int clear_file(int, int);
int direntry(int, int);
int get_fat(int, int, int, int);
int open_file_handle(void);
int search_dir(int, int, int);
int search_exec_file(int, int);
int search_free_dir(int);
int search_subst_fat_top(int);
int set_fat(int, int);
int set_vmstime(int, int);
int thunk_FUN_0c2c067e(int, int, int, int);
int vmsfs_unmount(int);
int vmsio_ismount(int);
int vmsio_isready(int);
int write_fat_1(int);
int vmsfs_xcreate(int a4, int a5, int a6, int a7);
int vmsfs_fcreate(int a4, int a5, int a6, int a7);
int write_fat(int a4, int a5, int a6, int a7);

int vmsfs_xcreate(int a4, int a5, int a6, int a7)
{
    int stk[15];

    register int R1;
    register int R2;
    register int R3;
    register int R8;
    register float F0;
    register float F15;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    v0_2 = a4;
    v0_5 = a5;
    v0_3 = a6;
    v0_4 = a7;
    *(unsigned int *)(((int)stk + 8)) = v0_3;
    *(unsigned int *)(((int)stk + 4)) = v0_4;
    *(unsigned int *)(((int)stk + 12)) = (v0_2 * 0x148);
    *(unsigned int *)(((int)stk + 0)) = ((v0_2 * 0x148) + 0xC8C4604);
    *(unsigned int *)(((*(int *)(((int)stk + 4))) + 0x0)) = 0x0;
    v0_0 = (0x0);
    v0_1 = (v0_5);
    v0_2 = (v0_2);
    if (((*(signed char *)(((*(int *)(((int)stk + 0))) + 0x2))) == 0)) goto L_C2BF05C;
    v0_6 = (vmsio_isready(v0_2)) != 0;
    if (v0_6) goto L_C2BF046;
    vmsfs_unmount(v0_2);
    L_C2BF05C:;
    v0_0 = (0xFFFFFF01);
    L_C2BF156:;
    return v0_0;
    L_C2BF046:;
    v0_6 = (vmsio_ismount(v0_2)) == 0;
    if (v0_6) goto L_C2BF05C;
    if (((*(signed char *)((((*(int *)(((int)stk + 12))) + 0xC8C4604) + 0x8))) != 0)) goto L_C2BF062;
    goto L_C2BF05C;
    L_C2BF062:;
    v0_5 = (int)(thunk_FUN_0c2c067e(v0_2, v0_5, v0_3, v0_4)) >= 0;
    if (v0_5) goto L_C2BF072;
    v0_0 = (0xFFFFFF03);
    goto L_C2BF156;
    L_C2BF072:;
    if (((*(int *)(((*(int *)(((*(int *)(((int)stk + 0))) + 0x1C))) + 0x38))) == 0)) goto L_C2BF0F8;
    v0_5 = (int)(FUN_0c2c14a8()) < 0;
    if (v0_5) goto L_C2BF0F8;
    v0_5 = (int)(search_dir(v0_2, v0_1, (((int)stk + 0) + 0x10))) < 0;
    if (v0_5) goto L_C2BF0C8;
    v0_0 = (0xFFFFFF06);
    goto L_C2BF156;
    L_C2BF0C8:;
    v0_5 = (int)(search_exec_file(v0_2, (((int)stk + 0) + 0x10))) < 0;
    if (v0_5) goto L_C2BF0DC;
    v0_0 = (0xFFFFFF09);
    goto L_C2BF156;
    L_C2BF0DC:;
    v0_3 = (unsigned short)(get_fat(v0_2, 0x0, v0_3, v0_4)) != 0xFFFC;
    if (v0_3) goto L_C2BF0F8;
    v0_4 = search_free_dir(v0_2);
    v0_3 = (v0_4);
    if (!(((int)v0_4 >= 0))) goto L_C2BF0F8;
    direntry(v0_2, v0_3);
    v0_5 = open_file_handle();
    v0_4 = (v0_5);
    if ((v0_5 != 0)) goto L_C2BF118;
    v0_0 = (0xFFFFFF07);
    goto L_C2BF156;
    L_C2BF0F8:;
    v0_0 = (0xFFFFFF08);
    goto L_C2BF156;
    L_C2BF118:;
    *(unsigned int *)((v0_4 + 0x8)) = 0x1;
    *(unsigned int *)((v0_4 + 0x4)) = 0x2;
    *(unsigned int *)((v0_4 + 0x2C)) = v0_3;
    *(unsigned int *)((v0_4 + 0x38)) = 0xFFFF;
    *(unsigned int *)((v0_4 + 0x30)) = v0_0;
    *(unsigned int *)((v0_4 + 0x28)) = v0_2;
    *(unsigned short *)((v0_4 + 0x2)) = 0x1;
    *(unsigned char *)((v0_4 + 0x1)) = v0_0;
    v0_2 = ((v0_4 + 0x10));
    L_C2BF13E:;
    if (((*(signed char *)((v0_1 + 0x0))) != 0)) goto L_C2BF138;
    *(unsigned char *)((v0_2 + 0x0)) = v0_0;
    set_vmstime((v0_4 + 0x20), (*(int *)(((int)stk + 8))));
    *(unsigned int *)(((*(int *)(((int)stk + 4))) + 0x0)) = v0_4;
    v0_0 = (0x0);
    goto L_C2BF156;
    L_C2BF138:;
    *(unsigned char *)((v0_2 + 0x0)) = (*(signed char *)((v0_1 + 0x0)));
    v0_1 = ((v0_1 + 0x1));
    v0_2 = ((v0_2 + 0x1));
    goto L_C2BF13E;
}

int vmsfs_fcreate(int a4, int a5, int a6, int a7)
{
    int stk[13];

    register int R2;
    register int R3;
    register int R8;
    register float F0;
    register float F15;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    register int v0_4;
    register int v0_5;
    register int v0_6;
    v0_3 = a4;
    v0_4 = a5;
    v0_5 = a6;
    v0_6 = a7;
    *(unsigned int *)(((int)stk + 4)) = v0_5;
    *(unsigned int *)(((int)stk + 0)) = v0_6;
    *(unsigned int *)((v0_6 + 0x0)) = 0x0;
    v0_0 = (0x0);
    v0_1 = (v0_4);
    v0_2 = (v0_3);
    if (((*(signed char *)(((v0_3 * 0x148) + 0xC8C4606))) == 0)) goto L_C2BF1BA;
    v0_3 = (vmsio_isready(v0_2)) != 0;
    if (v0_3) goto L_C2BF1A2;
    vmsfs_unmount(v0_2);
    L_C2BF1BA:;
    v0_0 = (0xFFFFFF01);
    L_C2BF29E:;
    return v0_0;
    L_C2BF1A2:;
    v0_3 = (vmsio_ismount(v0_2)) == 0;
    if (v0_3) goto L_C2BF1BA;
    if (((*(signed char *)(((v0_2 * 0x148) + 0xC8C460C))) != 0)) goto L_C2BF1FC;
    goto L_C2BF1BA;
    L_C2BF1FC:;
    v0_3 = (int)(thunk_FUN_0c2c067e(v0_2, v0_4, v0_5, v0_6)) >= 0;
    if (v0_3) goto L_C2BF20C;
    v0_0 = (0xFFFFFF03);
    goto L_C2BF29E;
    L_C2BF20C:;
    v0_3 = (int)(FUN_0c2c14a8()) < 0;
    if (v0_3) goto L_C2BF244;
    v0_3 = (int)(search_dir(v0_2, v0_1, (((int)stk + 0) + 0x8))) < 0;
    if (v0_3) goto L_C2BF238;
    v0_4 = clear_file(v0_2, v0_1);
    v0_3 = (v0_4);
    if (((int)v0_4 >= 0)) goto L_C2BF238;
    v0_0 = (v0_3);
    goto L_C2BF29E;
    L_C2BF238:;
    v0_4 = search_free_dir(v0_2);
    v0_3 = (v0_4);
    if (!(((int)v0_4 >= 0))) goto L_C2BF244;
    direntry(v0_2, v0_3);
    v0_5 = open_file_handle();
    v0_4 = (v0_5);
    if ((v0_5 != 0)) goto L_C2BF264;
    v0_0 = (0xFFFFFF07);
    goto L_C2BF29E;
    L_C2BF244:;
    v0_0 = (0xFFFFFF08);
    goto L_C2BF29E;
    L_C2BF264:;
    *(unsigned int *)((v0_4 + 0x8)) = v0_0;
    *(unsigned int *)((v0_4 + 0x4)) = 0x1;
    *(unsigned int *)((v0_4 + 0x2C)) = v0_3;
    *(unsigned int *)((v0_4 + 0x38)) = 0xFFFF;
    *(unsigned int *)((v0_4 + 0x30)) = v0_0;
    *(unsigned int *)((v0_4 + 0x28)) = v0_2;
    *(unsigned short *)((v0_4 + 0x2)) = v0_0;
    *(unsigned char *)((v0_4 + 0x1)) = v0_0;
    v0_3 = ((v0_4 + 0x10));
    L_C2BF286:;
    if (((*(signed char *)((v0_1 + 0x0))) != 0)) goto L_C2BF280;
    *(unsigned char *)((v0_3 + 0x0)) = v0_0;
    set_vmstime((v0_4 + 0x20), (*(int *)(((int)stk + 4))));
    *(unsigned int *)(((*(int *)(((int)stk + 0))) + 0x0)) = v0_4;
    v0_0 = (0x0);
    goto L_C2BF29E;
    L_C2BF280:;
    *(unsigned char *)((v0_3 + 0x0)) = (*(signed char *)((v0_1 + 0x0)));
    v0_1 = ((v0_1 + 0x1));
    v0_3 = ((v0_3 + 0x1));
    goto L_C2BF286;
}

int write_fat(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    t0 = 0x0;
    for (;;) {
        t1 = write_fat_1(a4);
        if (t1 != 0xFFFFFF01) {
            if (t1 != 0xFFFFFF40) {
                break;
            }
            t0 = (search_subst_fat_top(a4));
            if ((int)t0 < 0) {
                return 0xFFFFFF40;
            }
            *(unsigned int *)(((*(int *)((((a4 * 0x148) + 0xC8C4604) + 0x1C))) + 0xC)) = t0;
            t1 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)0xC8C4600) + 0x10)))))((*(int *)((((a4 * 0x148) + 0xC8C4604) + 0x20))), 0x46, t0, a7);
            t0 = 0x0;
            for (;;) {
                if ((int)t0 >= (int)(*(int *)(((*(int *)((((a4 * 0x148) + 0xC8C4604) + 0x1C))) + 0x10)))) {
                    break;
                }
                set_fat(a4, ((*(int *)(((*(int *)((((a4 * 0x148) + 0xC8C4604) + 0x1C))) + 0xC))) + t0));
                t0 = (t0 + 0x1);
            }
            t0 = 0x1;
            continue;
        }
        return 0xFFFFFF01;
    }
    
    if (t0 != 0) {
        FUN_0c2c1016(a4);
    }
    return 0x0;
}
