/* game/unsorted: functions 0C02EC70-0C02F7A0, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o16_uchar { char p[0x16]; unsigned char v; };
struct oDA_short { char p[0xDA]; short v; };
struct oDA_ushort { char p[0xDA]; unsigned short v; };
struct oEC_uint { char p[0xEC]; unsigned int v; };
struct oF0_float { char p[0xF0]; float v; };
struct oF4_float { char p[0xF4]; float v; };
int FUN_0c02f01e(int, int, int);
int FUN_0c02f27a(void);
int nl_sprite_draw(int, int, int, int);
int FUN_0c02f4c2(int a4, int a5, int a6, int a7);

int FUN_0c02f4c2(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;
    register float u0;

    t1 = *(signed char *)0xC3BB3DC;
    if ((*(signed char *)(((((0x1 - t1) * 0xF7C) + 0xC4B10CC) + 0x16))) != 0) {
        *(unsigned short *)(((((0x1 - t1) * 0xF7C) + 0xC4B10CC) + 0x14)) = (*(short *)(((((0x1 - t1) * 0xF7C) + 0xC4B10CC) + 0x12)));
        (((struct o16_uchar *)((((0x1 - t1) * 0xF7C) + 0xC4B10CC)))->v) = 0x0;
    } else {
        if (((*(signed char *)(((((0x1 - t1) * 0xF7C) + 0xC4B10CC) + 0xA))) == 0) && (t0 = *(signed char *)(((((0x1 - t1) * 0xF7C) + 0xC4B10CC) + 0x9)), t0 == 0)) {
            for (;;) {
                if ((int)((((struct oDA_short *)((((0x1 - t1) * 0xF7C) + 0xC4B10CC)))->v)) >= (int)(*(short *)(((((*(short *)(((((0x1 - t1) * 0xF7C) + 0xC4B10CC) + 0x14))) << 1) + ((((0x1 - t1) * 0xF7C) + 0xC4B10CC) + 0x5A)) + 0x0)))) {
                    (((struct oDA_ushort *)((((0x1 - t1) * 0xF7C) + 0xC4B10CC)))->v) = 0x0;
                    if ((int)(*(short *)(((((0x1 - t1) * 0xF7C) + 0xC4B10CC) + 0x14))) < (int)(*(short *)(((((0x1 - t1) * 0xF7C) + 0xC4B10CC) + 0x12)))) {
                        *(unsigned short *)(((((0x1 - t1) * 0xF7C) + 0xC4B10CC) + 0x14)) = ((*(short *)(((((0x1 - t1) * 0xF7C) + 0xC4B10CC) + 0x14))) + 0x1);
                        if ((int)(*(short *)(((((*(short *)(((((0x1 - t1) * 0xF7C) + 0xC4B10CC) + 0x14))) << 1) + ((((0x1 - t1) * 0xF7C) + 0xC4B10CC) + 0x5A)) + 0x0))) > 0) {
                            break;
                        }
                        continue;
                    }
                    break;
                }
                (((struct oDA_ushort *)((((0x1 - t1) * 0xF7C) + 0xC4B10CC)))->v) = (((((struct oDA_short *)((((0x1 - t1) * 0xF7C) + 0xC4B10CC)))->v)) + 0x1);
                if ((int)(*(short *)(((((*(short *)(((((0x1 - t1) * 0xF7C) + 0xC4B10CC) + 0x14))) << 1) + ((((0x1 - t1) * 0xF7C) + 0xC4B10CC) + 0x5A)) + 0x0))) > 0) {
                    break;
                }
            }
        }
        *(unsigned char *)(((((0x1 - t1) * 0xF7C) + 0xC4B10CC) + 0xB)) = 0xFFFFFFFF;
        t0 = *(signed char *)(((((0x1 - t1) * 0xF7C) + 0xC4B10CC) + 0xC));
        if (t0 == -1) {
            *(unsigned char *)(((((0x1 - t1) * 0xF7C) + 0xC4B10CC) + 0xC)) = 0x0;
            *(unsigned char *)(((((0x1 - t1) * 0xF7C) + 0xC4B10CC) + 0xB)) = 0x0;
        } else {
            if ((int)(*(short *)(((((0x1 - t1) * 0xF7C) + 0xC4B10CC) + 0x14))) >= (int)(*(short *)((((((0x1 - t1) * 0xF7C) + 0xC4B10CC) + 0x18) + (t0 << 1))))) {
                t0 = *(signed char *)(((((0x1 - t1) * 0xF7C) + 0xC4B10CC) + 0xC));
                t2 = 0xFFFFFFFF;
                if ((int)((*(short *)(((((0x1 - t1) * 0xF7C) + 0xC4B10CC) + 0x10))) - 1) < (int)t0) {
                } else {
                    *(unsigned char *)(((((0x1 - t1) * 0xF7C) + 0xC4B10CC) + 0xC)) = (t0 + 0x1);
                    t2 = (*(signed char *)(((((0x1 - t1) * 0xF7C) + 0xC4B10CC) + 0xC)));
                }
                *(unsigned char *)(((((0x1 - t1) * 0xF7C) + 0xC4B10CC) + 0xB)) = t2;
            }
        }
    }
    if ((*(signed char *)(((((0x1 - t1) * 0xF7C) + 0xC4B10CC) + 0x8))) == 0) {
        t0 = 0x0;
        for (;;) {
            if ((int)t0 >= (int)(*(short *)(((((0x1 - t1) * 0xF7C) + 0xC4B10CC) + 0x14)))) {
                break;
            }
            (((struct oEC_uint *)((((0x1 - t1) * 0xF7C) + 0xC4B10CC)))->v) = ((*(int *)(((((0x1 - t1) * 0xF7C) + 0xC4B10CC) + 0x0))) + t0);
            u0 = *(float *)((((0x13C + (((0x1 - t1) * 0xF7C) + 0xC4B10CC)) + (t0 << 2)) + 0x0));
            (((struct oF0_float *)((((0x1 - t1) * 0xF7C) + 0xC4B10CC)))->v) = u0;
            u0 = *(float *)((((t0 << 2) + (0x23C + (((0x1 - t1) * 0xF7C) + 0xC4B10CC))) + 0x0));
            (((struct oF4_float *)((((0x1 - t1) * 0xF7C) + 0xC4B10CC)))->v) = u0;
            nl_sprite_draw((0xEC + (((0x1 - t1) * 0xF7C) + 0xC4B10CC)), a5, a6, a7);
            t0 = (t0 + 0x1);
        }
    }
    if ((*(short *)(((((0x1 - t1) * 0xF7C) + 0xC4B10CC) + 0x14))) == (*(short *)(((((0x1 - t1) * 0xF7C) + 0xC4B10CC) + 0x12)))) {
        *(unsigned char *)(((((0x1 - t1) * 0xF7C) + 0xC4B10CC) + 0xB)) = 0xFFFFFFFF;
        t0 = 0xFFFFFFFF;
    } else {
        t0 = (*(short *)(((((0x1 - t1) * 0xF7C) + 0xC4B10CC) + 0x14)));
    }
    t1 = *(signed char *)0xC3BB3DC;
    t2 = *(signed char *)(((((short)t1 * (short)0xF7C) + 0xC4B10CC) + 0x4));
    if (t2 != 0) {
        if (t2 != 1) {
            t2 = t0;
        } else {
            FUN_0c02f01e((((short)t1 * (short)0xF7C) + 0xC4B10CC), t0, a6);
            t2 = 0x0;
        }
        t0 = t2;
    } else {
        FUN_0c02f27a();
        t0 = 0x0;
    }
    return t0;
}
