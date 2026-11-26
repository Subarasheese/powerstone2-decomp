/* game/debug: functions 0C051C48-0C052080, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o4_int { char p[0x4]; int v; };
int dbg_set_cell_size(int, int);
int nlLocate(int, int);
int dbg_printf(int, ...);
int FUN_0c051c48(void);

/* manual: debug screen of the camera values: 15 labels, then the values beside them through dbg_printf (the values go on
   the stack as the format's arguments); 51 cases, 474 of 474 instructions */
int FUN_0c051c48(void)
{
    int i, j, r;
    signed char *b;
    float *f;

    if (*(signed char *)0xC478C03) {
        dbg_set_cell_size(8, 8);
        for (i = 0; i < 15; i++) {
            nlLocate(5, i == 14 ? 38 : 15 + (i >> 1) * 3 + (i & 1));
            dbg_printf(0xC1B8D94 + i * 12);
        }
        b = (signed char *)0xC541100;
        nlLocate(15, 13);
        dbg_printf(0xC1B8E48, b[0], b[1], b[2], b[3], b[4], b[5]);
        nlLocate(15, 14);
        dbg_printf(0xC1B8E5C, b[6], b[7], b[8], b[9]);
        for (i = 0; i < 6; i++) {
            f = (float *)(0xC5411B8 + (i + i / 3) * 12);
            nlLocate(15, 15 + i);
            dbg_printf(0xC1B8E68, (short)f[0], (short)f[1], (short)f[2]);
        }
        for (i = 0; i < 3; i++) {
            for (j = 0; j < 3; j++) {
                nlLocate(15, 21 + i * 3 + j);
                dbg_printf(0xC1B8E74, *(int *)(0xC541298 + i * 4 + j * 24 + (j & 2) * 12));
            }
        }
        for (i = 0; i < 2; i++) {
            nlLocate(15, 30 + i);
            dbg_printf(0xC1B8E78, (short)((float *)0xC541288)[i]);
        }
        for (i = 0; i < 2; i++) {
            f = ((float **)0xC54133C)[i];
            nlLocate(15, 33 + i);
            dbg_printf(0xC1B8E68, (short)f[0], (short)f[1], (short)f[2]);
        }
        nlLocate(15, 36);
        dbg_printf(0xC1B8E7C, *(int *)0xC541110);
        nlLocate(15, 38);
        r = dbg_printf(0xC1B8E74, *(int *)0xC5413E8);
    }
    return r;
}
