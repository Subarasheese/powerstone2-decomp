/* Straight-line functions with calls and guards (batch gen_bt): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int vmsfs_write_retry(int, int, int);
int direntry(int, int);
int get_fat(int, int);
int search_fat(int, int);
int search_fat_free_xross(int);
int set_fat(int, int);
int thunk_FUN_0c2c067e(int);
int vmsfs_unmount(int);
int vmsio_ismount(int);
int vmsio_isready(int);
int vmsfs_fwrite1(int a4, int a5);
int vmsfs_xwrite1(int a4, int a5);
int vmsfs_findfirst(int a4, int a5, int a6, int a7);
int vmsfs_findnext(int a4, int a5, int a6, int a7);

int vmsfs_fwrite1(int a4, int a5)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;

    t0 = vmsio_isready((*(int *)((a4 + 0x28))));
    if (t0 == 0) {
        vmsfs_unmount((*(int *)((a4 + 0x28))));
        t0 = 0xFFFFFF01;
    } else {
        t1 = vmsio_ismount((*(int *)((a4 + 0x28))));
        t2 = 0xFFFFFF01;
        if (t1 != 0) {
            t1 = 0xFFFFFF01;
            if ((*(signed char *)((((*(int *)((a4 + 0x28))) * 0x148) + 0xC8C460C))) == 0) {
            } else {
                t3 = thunk_FUN_0c2c067e((*(int *)((a4 + 0x28))));
                t4 = 0xFFFFFF03;
                if ((int)t3 < 0) {
                } else {
                    t3 = *(int *)((a4 + 0x28));
                    t5 = search_fat_free_xross(t3);
                    t6 = 0xFFFFFF04;
                    if ((int)t5 >= 0) {
                        t7 = vmsfs_write_retry(t3, t5, a5);
                        if ((int)t7 < 0) {
                            t8 = t7;
                            if (t7 == 0xFFFFFF01) {
                            } else {
                                t7 = t5;
                                for (;;) {
                                    set_fat(t3, t7);
                                    t7 = (search_fat(t3, 0xFFFC));
                                    if ((int)t7 < 0) {
                                        break;
                                    }
                                    t9 = vmsfs_write_retry(t3, t7, a5);
                                    if (t9 == 0) {
                                        set_fat(t3, t7);
                                        if ((*(int *)((a4 + 0x38))) == 0xFFFF) {
                                            *(unsigned int *)((a4 + 0x38)) = (short)t7;
                                        } else {
                                            set_fat(t3, (*(int *)((a4 + 0x3C))));
                                        }
                                        *(unsigned int *)((a4 + 0x3C)) = (short)t7;
                                        *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x1);
                                        return 0x0;
                                    }
                                }
                                t8 = 0xFFFFFF04;
                            }
                            t7 = t8;
                        } else {
                            set_fat(t3, t5);
                            if ((*(int *)((a4 + 0x38))) == 0xFFFF) {
                                *(unsigned int *)((a4 + 0x38)) = (short)t5;
                            } else {
                                set_fat(t3, (*(int *)((a4 + 0x3C))));
                            }
                            *(unsigned int *)((a4 + 0x3C)) = (short)t5;
                            *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x1);
                            t7 = 0x0;
                        }
                        t6 = t7;
                    }
                    t4 = t6;
                }
                t1 = t4;
            }
            t2 = t1;
        }
        t0 = t2;
    }
    return t0;
}

int vmsfs_xwrite1(int a4, int a5)
{
    int t0;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t7;
    register int t9;
    register int t10;

    t3 = *(int *)((a4 + 0x28));
    t4 = vmsio_isready(t3);
    if (t4 == 0) {
        vmsfs_unmount((*(int *)((a4 + 0x28))));
        t4 = 0xFFFFFF01;
    } else {
        t5 = vmsio_ismount((*(int *)((a4 + 0x28))));
        t4 = 0xFFFFFF01;
        if (t5 != 0) {
            t5 = 0xFFFFFF01;
            if ((*(signed char *)((((*(int *)((a4 + 0x28))) * 0x148) + 0xC8C460C))) == 0) {
            } else {
                t7 = thunk_FUN_0c2c067e((*(int *)((a4 + 0x28))));
                t5 = 0xFFFFFF03;
                if ((int)t7 < 0) {
                } else {
                    t7 = *(int *)((a4 + 0x30));
                    t9 = *(int *)((a4 + 0x28));
                    t10 = get_fat(t9, t7);
                    t5 = 0xFFFFFF04;
                    if (((unsigned short)t10 == 0xFFFC) && (t0 = *(int *)((a4 + 0x30)), t5 = *(int *)((((t3 * 0x148) + 0xC8C4604) + 0x1C)), t2 = *(int *)((t5 + 0x38)), (int)t0 < (int)t2)) {
                        t0 = vmsfs_write_retry(t9, t7, a5);
                        t5 = t0;
                        if ((int)t0 < 0) {
                        } else {
                            set_fat(t9, t7);
                            if ((*(int *)((a4 + 0x38))) == 0xFFFF) {
                                *(unsigned int *)((a4 + 0x38)) = (short)t7;
                            } else {
                                set_fat(t9, (*(int *)((a4 + 0x3C))));
                            }
                            *(unsigned int *)((a4 + 0x3C)) = (short)t7;
                            *(unsigned int *)((a4 + 0x30)) = ((*(int *)((a4 + 0x30))) + 0x1);
                            t5 = 0x0;
                        }
                    }
                }
            }
            t4 = t5;
        }
    }
    return t4;
}

int vmsfs_findfirst(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;

    t1 = 0xFFFFFF01;
    if ((*(signed char *)((((a4 * 0x148) + 0xC8C4604) + 0x2))) != 0) {
        t2 = vmsio_isready(a4);
        if (t2 == 0) {
            vmsfs_unmount(a4);
            t2 = 0xFFFFFF01;
        } else {
            t3 = vmsio_ismount(a4);
            t4 = 0xFFFFFF01;
            if ((t3 != 0) && (t0 = *(signed char *)((((a4 * 0x148) + 0xC8C4604) + 0x8)), t0 != 0)) {
                t0 = thunk_FUN_0c2c067e(a4);
                t3 = 0xFFFFFF03;
                if ((int)t0 >= 0) {
                    *(unsigned int *)((((a4 * 0x148) + 0xC8C4604) + 0x18)) = 0x0;
                    t0 = (direntry(a4, 0x0));
                    t5 = 0x0;
                    for (;;) {
                        t6 = *(int *)(((*(int *)((((a4 * 0x148) + 0xC8C4604) + 0x1C))) + 0x30));
                        if ((int)t5 >= (int)t6) {
                            if (0x0 == 0) {
                                return 0xFFFFFF05;
                            }
                            t5 = t0;
                            t0 = a5;
                            t5 = (t5 + 0x4);
                            t7 = t6;
                            t8 = (t0 + 0xC);
                            for (;;) {
                                if ((unsigned int)t0 >= (unsigned int)t8) {
                                    break;
                                }
                                t7 = (*(signed char *)((t5 + 0x0)));
                                t5 = (t5 + 0x1);
                                *(unsigned char *)((t0 + 0x0)) = t7;
                                t0 = (t0 + 0x1);
                            }
                            *(unsigned char *)((t8 + 0x0)) = 0x0;
                            *(unsigned int *)((((a4 * 0x148) + 0xC8C4604) + 0x18)) = ((*(int *)((((a4 * 0x148) + 0xC8C4604) + 0x18))) + 0x1);
                            return 0x0;
                        }
                        t7 = *(signed char *)((t0 + 0x0));
                        if (((unsigned char)t7 != 51) && ((unsigned char)t7 != 0xCC)) {
                            t0 = (t0 + 0x20);
                            t5 = (t5 + 0x1);
                            *(unsigned int *)((((a4 * 0x148) + 0xC8C4604) + 0x18)) = ((*(int *)((((a4 * 0x148) + 0xC8C4604) + 0x18))) + 0x1);
                            continue;
                        }
                        break;
                    }
                    t5 = 0xFFFFFF05;
                    if (0x1 != 0) {
                        t7 = t6;
                        t6 = a5;
                        t8 = (t0 + 0x4);
                        for (;;) {
                            if ((unsigned int)t6 >= (unsigned int)(a5 + 0xC)) {
                                break;
                            }
                            t7 = (*(signed char *)((t8 + 0x0)));
                            t8 = (t8 + 0x1);
                            *(unsigned char *)((t6 + 0x0)) = t7;
                            t6 = (t6 + 0x1);
                        }
                        *(unsigned char *)(((a5 + 0xC) + 0x0)) = 0x0;
                        *(unsigned int *)((((a4 * 0x148) + 0xC8C4604) + 0x18)) = ((*(int *)((((a4 * 0x148) + 0xC8C4604) + 0x18))) + 0x1);
                        t5 = 0x0;
                    }
                    t3 = t5;
                }
                t4 = t3;
            }
            t2 = t4;
        }
        t1 = t2;
    }
    return t1;
}

int vmsfs_findnext(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;

    t1 = 0xFFFFFF01;
    if ((*(signed char *)((((a4 * 0x148) + 0xC8C4604) + 0x2))) != 0) {
        t2 = vmsio_isready(a4);
        if (t2 == 0) {
            vmsfs_unmount(a4);
            t2 = 0xFFFFFF01;
        } else {
            t3 = vmsio_ismount(a4);
            t4 = 0xFFFFFF01;
            if ((t3 != 0) && (t0 = *(signed char *)((((a4 * 0x148) + 0xC8C4604) + 0x8)), t0 != 0)) {
                t0 = thunk_FUN_0c2c067e(a4);
                t3 = 0xFFFFFF03;
                if ((int)t0 >= 0) {
                    t0 = *(int *)((((a4 * 0x148) + 0xC8C4604) + 0x18));
                    t5 = (direntry(a4, (*(int *)((((a4 * 0x148) + 0xC8C4604) + 0x18)))));
                    t6 = t0;
                    for (;;) {
                        t7 = *(int *)(((*(int *)((((a4 * 0x148) + 0xC8C4604) + 0x1C))) + 0x30));
                        if ((int)t6 >= (int)t7) {
                            if (0x0 == 0) {
                                return 0xFFFFFF05;
                            }
                            t6 = t5;
                            t5 = a5;
                            t6 = (t6 + 0x4);
                            t8 = t7;
                            t7 = (t5 + 0xC);
                            for (;;) {
                                if ((unsigned int)t5 >= (unsigned int)t7) {
                                    break;
                                }
                                t8 = (*(signed char *)((t6 + 0x0)));
                                t6 = (t6 + 0x1);
                                *(unsigned char *)((t5 + 0x0)) = t8;
                                t5 = (t5 + 0x1);
                            }
                            *(unsigned char *)((t7 + 0x0)) = 0x0;
                            return 0x0;
                        }
                        t0 = *(int *)((((a4 * 0x148) + 0xC8C4604) + 0x18));
                        *(unsigned int *)((((a4 * 0x148) + 0xC8C4604) + 0x18)) = (t0 + 0x1);
                        t7 = *(signed char *)((t5 + 0x0));
                        if (((unsigned char)t7 != 51) && ((unsigned char)t7 != 0xCC)) {
                            t5 = (t5 + 0x20);
                            t6 = (t6 + 0x1);
                            continue;
                        }
                        break;
                    }
                    t6 = 0xFFFFFF05;
                    if (0x1 != 0) {
                        t7 = (t0 + 0x1);
                        t0 = a5;
                        t8 = (t5 + 0x4);
                        for (;;) {
                            if ((unsigned int)t0 >= (unsigned int)(a5 + 0xC)) {
                                break;
                            }
                            t7 = (*(signed char *)((t8 + 0x0)));
                            t8 = (t8 + 0x1);
                            *(unsigned char *)((t0 + 0x0)) = t7;
                            t0 = (t0 + 0x1);
                        }
                        *(unsigned char *)(((a5 + 0xC) + 0x0)) = 0x0;
                        t6 = 0x0;
                    }
                    t3 = t6;
                }
                t4 = t3;
            }
            t2 = t4;
        }
        t1 = t2;
    }
    return t1;
}
