/* Library code: C that behaves like this game's own bytes. */
/* Straight-line functions with calls and guards (batch gen_b): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int vmsfs_xwrite1(int, int);
int vmsfs_fclose(int, int);
struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o106_uchar { char p[0x106]; unsigned char v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o118_uint { char p[0x118]; unsigned int v; };
struct o14_float { char p[0x14]; float v; };
struct o14_int { char p[0x14]; int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_int { char p[0x1C]; int v; };
struct o20_float { char p[0x20]; float v; };
struct o20_int { char p[0x20]; int v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2D9_uchar { char p[0x2D9]; unsigned char v; };
struct o2DC_int { char p[0x2DC]; int v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o30_int { char p[0x30]; int v; };
struct o308_int { char p[0x308]; int v; };
struct o308_uint { char p[0x308]; unsigned int v; };
struct o34_int { char p[0x34]; int v; };
struct o34_ushort { char p[0x34]; unsigned short v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o3E_ushort { char p[0x3E]; unsigned short v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o64_float { char p[0x64]; float v; };
struct o68_float { char p[0x68]; float v; };
struct o7207_uchar { char p[0x7207]; unsigned char v; };
struct o720C_short { char p[0x720C]; short v; };
struct o7225_uchar { char p[0x7225]; unsigned char v; };
struct o7228_ushort { char p[0x7228]; unsigned short v; };
struct o7248_uint { char p[0x7248]; unsigned int v; };
struct o7254_float { char p[0x7254]; float v; };
struct o7258_float { char p[0x7258]; float v; };
struct o72A8_int { char p[0x72A8]; int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
struct oF8_int { char p[0xF8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
int save_reset_all_data(void);
int vmu_check_step(int, int, int, int, int, int, int, int, int, int, int);
int ending_exec_command(int);
int FUN_0c01b4d6(int);
float math_interval_overlap(float, float, float, float);
int game_draw_frame(void);
int FUN_0c055562(void);
int FUN_0c0555c4(void);
int game_reset_objects(void);
int obj_create(int, int, int);
int FUN_0c05f2d4(int, int);
int FUN_0c05f952(void);
int obj_part_set_model(int, int, int);
int FUN_0c08c864(int);
int FUN_0c08e3bc(int, int);
int FUN_0c08e3f2(int, int);
int FUN_0c095472(void);
int pl_reset_combo_counter(int);
int pl_stick_dir_angle(int);
int FUN_0c0a2f66(int);
int bgm_stop_streams(void);
int bgm_set_volume(int, int);
int bgm_play_hen_00(void);
int bgm_play_hen_01(void);
int snd_play_se_indexed(int);
int cam_init_records(void);
int cam_update_view_matrices(int, int, int, int, int, int, int, int);
int cam_request_mode(int, int, int);
int gfx_set_background_color(int, int, int);
float math_signed_sqrt(float);
int math_atan_angle16(float);
float math_cos_angle16(int);
float math_sin_angle16(int);
int snd_send_command(int);
int _quick_odd_mvn(int);
int FUN_0c0ed9d4(int, int, int);
int gdFsReadWG(int, int, int);
int FUN_0c0fcea0(int, int);
int FUN_0c0fddce(int);
int gdFsGet1DirEnt(int, int);
int vmsfs_unmount(int);
int FUN_0c10274c(int, int, int, int);
int vmsfs_xcreate(int, int, int, int);
int direntry(int, int);
int FUN_0c10563c(int, int, int, int, int, int);
int kmiReadRegister(int);
int kmiCopyToFrameBuffer(int, int, int);
int kmiCopyFromFrameBuffer(int, int, int);
int vmsio_isready(int);
int vmsio_ismount(int);
int fmMngMcpy4(int, int, int);
int fmMngNum2Bit(int, int, int);
int FUN_0c11568c(int, int);
int buIsFormat(int);
int buUnmount(int);
int memset(int, int, int);
int fmMngMcpy(void);
void vmu_unmount_current(int a4, int a5, int a6, int a7);
int FUN_0c023a52(int a4, int a5, int a6, int a7);
float FUN_0c05d254(int a4);
float pl_jack_mode12_phase0(int a4, float f4, float f5);
int stage_gimmick_23_spawn_b(int a4, int a5);
int stage_gimmick_24_spawn_b(int a4, int a5);
int vmsfs_save_exec_file(int a4, int a5, int a6, int a7, int a8, int a9);
int FUN_0c113890(int a4);
int fx_spawn_034dd0(int a4, int a5);
int fx_spawn_03dfd0(int a4, int a5);
int FUN_0c055686(void);
int FUN_0c085782(int a4);
int FUN_0c0ed7e4(int a4);
int gdFsGetDirEnt(int a4, int a5, int a6, int a7);
int vmsfs_findnext(int a4, int a5, int a6, int a7);
int ending_spawn_obj_typed(int a4, int a5, int a6, int a7);
int ending_script_update(int a4);
int FUN_0c08a6e4(int a4);
int FUN_0c09c5f4(int a4);
int FUN_0c0fb236(int a4);
int FUN_0c0fd560(int a4, int a5, int a6);
int FUN_0c10d114(void);
int FUN_0c01ab4c(int a4);
int FUN_0c01b144(int a4, int a5);
int FUN_0c08e4bc(int a4);
int game_play_state_07(void);
int FUN_0c0e6518(int a4);
int vmu_check_task(void);
int FUN_0c0226da(int a4, int a5, int a6, int a7);
int ai_script_branch(int a4, int a5);
int FUN_0c0a18f8(int a4, int a5, int a6, int a7);
int FUN_0c10dabe(int a4, int a5, int a6);


int gdFsGetDirEnt(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t27;
    register int t3;
    register int t4;
    register int t5;
    register int t7;
    register int t12;
    register int t15;
    register int t6;
    register int t8;
    int t9;
    int t17;
    register int t23;
    int t24;
    register int t25;
    int t26;

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned int *)(((int)stk + 0)) = a5;
    t27 = 0x0;
    if ((*(int *)((a6 + 0x8))) != a5) {
        *(unsigned int *)((a6 + 0x8)) = (*(int *)(((int)stk + 0)));
        t3 = *(int *)((a6 + 0x4));
        *(unsigned int *)(((int)stk + 8)) = ((*(int *)(((int)stk + 4))) + 0x800);
        t4 = a7;
        t5 = (a6 + 0x10);
        t7 = 0x0;
        for (;;) {
            if ((int)t4 <= 0) {
                *(unsigned int *)((a6 + 0x0)) = t7;
                if ((t7 == t3) && ((t4 != 0) && ((t4 != 0x800) || ((t8 = *(int *)(((int)stk + 8)), (unsigned int)t6 < (unsigned int)t8) && (t9 = *(signed char *)((t6 + 0x0)), t9 != 0))))) {
                    *(unsigned int *)((a6 + 0x8)) = 0x0;
                    return 0xFFFFFFF4;
                }
                return 0x0;
            }
            t12 = gdFsReadWG((*(int *)(((int)stk + 0))), 0x1, (*(int *)(((int)stk + 4))));
            if (t12 != 0) {
                break;
            }
            t6 = (*(int *)(((int)stk + 4)));
            if ((int)t7 < (int)t3) {
                for (;;) {
                    t15 = gdFsGet1DirEnt(t6, t5);
                    if (t15 != 0) {
                        if ((t7 == 0) && (t17 = *(int *)((t5 + 0x4)), t17 != t4)) {
                            t4 = (*(int *)((t5 + 0x4)));
                        }
                        t6 = (t6 + t15);
                        t5 = (t5 + 0x2C);
                        t7 = (t7 + 0x1);
                        if (((unsigned int)t6 < (unsigned int)(*(int *)(((int)stk + 8)))) && ((int)t7 < (int)t3)) continue;
                        break;
                    }
                    break;
                }
                if ((int)t7 < (int)t3) {
                    t4 = (t4 - 0x800);
                    *(unsigned int *)(((int)stk + 0)) = ((*(int *)(((int)stk + 0))) + 0x1);
                    continue;
                }
                *(unsigned int *)((a6 + 0x0)) = t7;
                if ((t7 == t3) && ((t4 != 0) && ((t4 != 0x800) || ((t23 = *(int *)(((int)stk + 8)), (unsigned int)t6 < (unsigned int)t23) && (t24 = *(signed char *)((t6 + 0x0)), t24 != 0))))) {
                    *(unsigned int *)((a6 + 0x8)) = 0x0;
                    return 0xFFFFFFF4;
                }
                return 0x0;
            }
            *(unsigned int *)((a6 + 0x0)) = t7;
            if ((t7 == t3) && ((t4 != 0) && ((t4 != 0x800) || ((t25 = *(int *)(((int)stk + 8)), (unsigned int)t6 < (unsigned int)t25) && (t26 = *(signed char *)((t6 + 0x0)), t26 != 0))))) {
                *(unsigned int *)((a6 + 0x8)) = 0x0;
                return 0xFFFFFFF4;
            }
            return 0x0;
        }
        *(unsigned int *)((a6 + 0x8)) = 0x0;
        t27 = t12;
    }
    return t27;
}
