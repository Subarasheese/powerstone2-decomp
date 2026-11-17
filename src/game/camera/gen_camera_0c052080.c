/* game/camera: functions 0C052080-0C0520F8, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
int memset(int, int, int);
int cam_init_records(void);

int cam_init_records(void)
{
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register int t4;
    register int t6;

    u0 = (((struct o0_float *)0xC052144)->v);
    u1 = (((struct o4_float *)0xC052144)->v);
    u2 = (((struct o8_float *)0xC052144)->v);
    u3 = (((struct oC_float *)0xC052144)->v);
    t4 = 0x0;
    for (;;) {
        memset(((t4 * 0x2F8) + 0xC5410FC), 0x0, 0x2F8);
        *(unsigned char *)((((t4 * 0x2F8) + 0xC5410FC) + 0x0)) = t4;
        (((struct o24_float *)(((t4 * 0x2F8) + 0xC5410FC)))->v) = u3;
        (((struct o28_float *)(((t4 * 0x2F8) + 0xC5410FC)))->v) = u3;
        (((struct o2C_float *)(((t4 * 0x2F8) + 0xC5410FC)))->v) = u1;
        t6 = ((t4 * 0x2F8) + 0xC5410FC);
        t4 = (t4 + 0x1);
        (((struct o30_float *)(t6))->v) = u0;
        (((struct o34_float *)(t6))->v) = u2;
        if ((int)t4 >= (int)0x4) {
            break;
        }
    }
    *(unsigned char *)0xC5421DC = 0x0;
    return 0x34;
}
