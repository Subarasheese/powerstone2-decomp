/* game/unsorted: functions 0C01599C-0C015B58, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o4A_uchar { char p[0x4A]; unsigned char v; };
struct o4B_uchar { char p[0x4B]; unsigned char v; };
struct o4F_uchar { char p[0x4F]; unsigned char v; };
struct o50_uchar { char p[0x50]; unsigned char v; };
struct o53_uchar { char p[0x53]; unsigned char v; };
int FUN_0c017a2e(void);
int FUN_0c017e38(void);
int FUN_0c01cc56(int, int);
int FUN_0c01cd2c(int);
int memset(int, int, int);
int strcpy(int, int);
int FUN_0c187d88(int);
int FUN_0c01599c(void);
int FUN_0c0159c4(int a4, int a5, int a6, int a7, int a8);

int FUN_0c01599c(void)
{
    register int t0;

    t0 = FUN_0c01cd2c(0x80);
    if ((short)t0 == 0) {
        if ((unsigned char)(*(signed char *)0xC30EF9E) == 40) {
            return 0x1;
        }
        return 0x0;
    }
    return 0x1;
}

int FUN_0c0159c4(int a4, int a5, int a6, int a7, int a8)
{
    register int t0;
    register int t1;

    *(unsigned int *)0xC304BA0 = 0xC304B48;
    memset(0xC304B48, 0x0, 0x58);
    t0 = *(int *)0xC304BA0;
    *(unsigned int *)((t0 + 0x3C)) = ((*(int *)((t0 + 0x3C))) | (unsigned short)(*(short *)0xC542864));
    (((struct o53_uchar *)((*(int *)0xC304BA0)))->v) = (*(signed char *)0xC30EF9C);
    *(unsigned int *)(((*(int *)0xC304BA0) + 0x8)) = a8;
    t0 = *(int *)0xC304BA0;
    t1 = a7;
    if ((int)a7 > (int)0x7F) {
        t1 = 0x7F;
    }
    *(unsigned int *)((t0 + 0xC)) = a4;
    *(unsigned int *)(((*(int *)0xC304BA0) + 0x10)) = a5;
    *(unsigned int *)(((*(int *)0xC304BA0) + 0x14)) = a6;
    *(unsigned int *)(((*(int *)0xC304BA0) + 0x18)) = t1;
    memset(0xC304D24, 0x0, 0x80);
    memset(0xC304DA4, 0x0, 0x80);
    if ((a8 & 0x80) == 0) {
        t0 = FUN_0c01cc56(0x7, 0xC017D92);
        *(unsigned int *)((t0 + 0x10)) = (*(int *)0xC304BA0);
        (((struct o28_float *)(t0))->v) = (float)a4;
        (((struct o2C_float *)(t0))->v) = (float)a5;
        *(unsigned int *)(((*(int *)0xC304BA0) + 0xC)) = (a4 + 0x8C);
        *(unsigned int *)(((*(int *)0xC304BA0) + 0x10)) = (a5 + 0xE4);
    }
    (((struct o4F_uchar *)((*(int *)0xC304BA0)))->v) = 0x4;
    t0 = *(int *)0xC304BA0;
    t1 = *(int *)((t0 + 0x8));
    if ((t1 & 0xFFFFFF7F) != 3) {
        if ((t1 & 0xFFFFFF7F) != 0) {
            if ((t1 & 0xFFFFFF7F) != 5) {
                if ((t1 & 0xFFFFFF7F) != 6) {
                    if ((t1 & 0xFFFFFF7F) != 4) {
                        if (((t1 & 0xFFFFFF7F) != 1) && ((t1 & 0xFFFFFF7F) != 2)) {
                            (((struct o4A_uchar *)(t0))->v) = 0x1;
                            (((struct o4B_uchar *)((*(int *)0xC304BA0)))->v) = 0x4;
                        } else {
                            (((struct o4A_uchar *)(t0))->v) = 0x2;
                            (((struct o4B_uchar *)((*(int *)0xC304BA0)))->v) = 0x3;
                        }
                    } else {
                        (((struct o4A_uchar *)(t0))->v) = 0x6;
                        (((struct o4B_uchar *)((*(int *)0xC304BA0)))->v) = 0x2;
                    }
                } else {
                    (((struct o4A_uchar *)(t0))->v) = 0x32;
                    (((struct o4B_uchar *)((*(int *)0xC304BA0)))->v) = 0x2;
                }
            } else {
                (((struct o4A_uchar *)(t0))->v) = 0xA;
                (((struct o4B_uchar *)((*(int *)0xC304BA0)))->v) = 0x2;
            }
        } else {
            (((struct o4B_uchar *)((*(int *)0xC304BA0)))->v) = 0x4;
        }
    } else {
        (((struct o4A_uchar *)(t0))->v) = 0x1;
        (((struct o4B_uchar *)((*(int *)0xC304BA0)))->v) = 0x4;
    }
    FUN_0c017a2e();
    memset(0xC304BA4, 0x0, 0x80);
    memset(0xC304C24, 0x0, 0x80);
    strcpy(0xC304BA4, (*(int *)(((*(int *)0xC304BA0) + 0x14))));
    (((struct o50_uchar *)((*(int *)0xC304BA0)))->v) = (FUN_0c187d88(0xC304BA4));
    t0 = FUN_0c017e38();
    *(unsigned char *)0xC30EFA3 = 0x1;
    return t0;
}
