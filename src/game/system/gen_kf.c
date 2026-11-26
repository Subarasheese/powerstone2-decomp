/* Straight-line functions with calls and guards (batch gen_kf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
int FUN_0c0102da(void);
int FUN_0c02c96a(void);
int FUN_0c02e9d4(void);
int FUN_0c0300da(void);
int FUN_0c03036c(void);
int FUN_0c030c94(int);
int FUN_0c03ac42(void);
int FUN_0c03ad28(void);
int FUN_0c03ec80(void);
int FUN_0c0524bc(void);
int ui_sprite_queue_reset(void);
int FUN_0c05a0b8(void);
int FUN_0c05a812(void);
int FUN_0c05b122(int);
extern int FUN_0c05b2da();
int FUN_0c05b30e(int);
int FUN_0c05b494(void);
int FUN_0c05b4ba(void);
int FUN_0c05ba86(void);
int FUN_0c05c158(int, int, int, int);
int FUN_0c05c71c(void);
int FUN_0c05e13a(void);
int FUN_0c05e51c(int);
int FUN_0c05ee64(void);
int FUN_0c05f3d4(void);
int FUN_0c05f436(void);
int FUN_0c05f842(int, int, int);
int FUN_0c100cbc(void);
int FUN_0c121412(int, int, int, int);
int cam_init_records(void);
int game_reset_objects(void);
int thunk_FUN_0c03e600(void);
void FUN_0c05b4e4(void);

/* FUN_0c05b4e4, written by hand from the original (644 bytes; the generated C was 3,608).
   The game-state step: the byte at 0xC541F3C is the state (0: set up, 1: run), the byte after it the sub-state s that picks which
   update runs. Every arm ends in the same two tests (FUN_0c05b2da, then s == 99 -> flag at 0xC542434 else FUN_0c02e9d4). */

/* manual: written by hand, 2026-11-23/24 (build/manual/notes.txt) */
void FUN_0c05b4e4(void)
{
    int s;
    int v;

    switch (*(unsigned char *)0xC541F3C) {
    case 0:
        *(unsigned char *)0xC541F3C = *(unsigned char *)0xC541F3C + 1;
        *(unsigned char *)0xC541F3D = 0;
        FUN_0c05b494();
        cam_init_records();
        thunk_FUN_0c03e600();
        FUN_0c05a0b8();
        game_reset_objects();
        FUN_0c05b122(*(signed char *)0xC541F68);
        ui_sprite_queue_reset();
        FUN_0c03ac42();
    case 1:
        if (*(unsigned char *)0xC541F3D != 7) {
            FUN_0c0300da();
            FUN_0c05e13a();
            FUN_0c05b4ba();
            FUN_0c03ad28();
        } else {
            FUN_0c05a812();
        }
        s = *(unsigned char *)0xC541F3D;
        if (*(signed char *)0xC54208F == 0 && *(signed char *)0xC542092 == 0) {
            switch (*(unsigned char *)0xC541F3D) {
            case 0:
                FUN_0c03036c();
                FUN_0c05c158(0, 0, 0, 0);
                FUN_0c0524bc();
                FUN_0c03ec80();
                if (FUN_0c05b30e(0) != 0) {
                    return;
                }
                break;
            case 2:
                FUN_0c05f3d4();
                if (FUN_0c05b30e(1) != 0) {
                    return;
                }
                v = *(signed char *)0xC5429B4;
                if (v == 0 || v == 4) {
                    FUN_0c030c94(v);
                }
                FUN_0c05ba86();
                FUN_0c0524bc();
                FUN_0c03ec80();
                break;
            case 1:
                FUN_0c05c71c();
                FUN_0c0524bc();
                FUN_0c03ec80();
                if (FUN_0c05b30e(0) != 0) {
                    return;
                }
                break;
            case 3:
                FUN_0c05e51c(0xC541F3D);
                FUN_0c0524bc();
                FUN_0c03ec80();
                break;
            case 4:
                FUN_0c05ee64();
                FUN_0c0524bc();
                FUN_0c03ec80();
                if (*(unsigned char *)0xC541F41 == 6) {
                    if (FUN_0c05b30e(1) != 0) {
                        FUN_0c100cbc();
                        return;
                    }
                } else if (FUN_0c05b30e(1) != 0) {
                    return;
                }
                break;
            case 5:
                FUN_0c121412(0xC541F3D, 0, 0, 0);
                FUN_0c0524bc();
                FUN_0c03ec80();
                if (FUN_0c05b30e(1) != 0) {
                    return;
                }
                break;
            case 6:
                FUN_0c0102da();
                FUN_0c0524bc();
                FUN_0c03ec80();
                if (FUN_0c05b30e(1) != 0) {
                    return;
                }
                break;
            case 7:
                FUN_0c02c96a();
                if (FUN_0c05b30e(1) != 0) {
                    return;
                }
                break;
            case 10:
                FUN_0c05f436();
                if (FUN_0c05b30e(1) != 0) {
                    return;
                }
                break;
            case 99:
                FUN_0c05f842(0xC541F3D, 0, 0);
                break;
            default:
                if (((int (*)(int))(FUN_0c05b2da))(0xC541F3D) != 0) {
                    return;
                }
                goto done;
            }
            if (((int (*)(void))(FUN_0c05b2da))() != 0) {
                return;
            }
        }
    done:
        if (s == 99) {
            *(unsigned int *)0xC542434 = 1;
            return;
        }
        FUN_0c02e9d4();
        return;
    default:
        return;
    }
}
