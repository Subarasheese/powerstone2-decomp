/* Library code: C that behaves like this game's own bytes. */
/* Straight-line functions with calls and guards (batch gen_p): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int snd_send_command(int);
struct o0_float { float v; };
struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_float { char p[0x10]; float v; };
struct o10_uchar { char p[0x10]; unsigned char v; };
struct o10C4_int { char p[0x10C4]; int v; };
struct o11_uchar { char p[0x11]; unsigned char v; };
struct o118_uint { char p[0x118]; unsigned int v; };
struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o204_uint { char p[0x204]; unsigned int v; };
struct o208_uint { char p[0x208]; unsigned int v; };
struct o20C_uint { char p[0x20C]; unsigned int v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2C_uchar { char p[0x2C]; unsigned char v; };
struct o2D_uchar { char p[0x2D]; unsigned char v; };
struct o2D4_float { char p[0x2D4]; float v; };
struct o2D9_uchar { char p[0x2D9]; unsigned char v; };
struct o2DC_int { char p[0x2DC]; int v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2FC_int { char p[0x2FC]; int v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o30_float { char p[0x30]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o40_float { char p[0x40]; float v; };
struct o40_int { char p[0x40]; int v; };
struct o44_float { char p[0x44]; float v; };
struct o44_uint { char p[0x44]; unsigned int v; };
struct o44_ushort { char p[0x44]; unsigned short v; };
struct o48_float { char p[0x48]; float v; };
struct o48_int { char p[0x48]; int v; };
struct o48_uint { char p[0x48]; unsigned int v; };
struct o48_ushort { char p[0x48]; unsigned short v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4C_int { char p[0x4C]; int v; };
struct o4C_uchar { char p[0x4C]; unsigned char v; };
struct o4C_uint { char p[0x4C]; unsigned int v; };
struct o4D_uchar { char p[0x4D]; unsigned char v; };
struct o50_float { char p[0x50]; float v; };
struct o50_ushort { char p[0x50]; unsigned short v; };
struct o52_short { char p[0x52]; short v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5A_uchar { char p[0x5A]; unsigned char v; };
struct o60_float { char p[0x60]; float v; };
struct o64_float { char p[0x64]; float v; };
struct o68_float { char p[0x68]; float v; };
struct o710A_uchar { char p[0x710A]; unsigned char v; };
struct o710B_uchar { char p[0x710B]; unsigned char v; };
struct o710C_uchar { char p[0x710C]; unsigned char v; };
struct o719E_short { char p[0x719E]; short v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o71B4_uchar { char p[0x71B4]; unsigned char v; };
struct o71BB_uchar { char p[0x71BB]; unsigned char v; };
struct o71C8_int { char p[0x71C8]; int v; };
struct o71EC_uchar { char p[0x71EC]; unsigned char v; };
struct o71F3_uchar { char p[0x71F3]; unsigned char v; };
struct o7210_uchar { char p[0x7210]; unsigned char v; };
struct o7216_uchar { char p[0x7216]; unsigned char v; };
struct o721F_uchar { char p[0x721F]; unsigned char v; };
struct o7238_uchar { char p[0x7238]; unsigned char v; };
struct o8_float { char p[0x8]; float v; };
struct o90_uint { char p[0x90]; unsigned int v; };
struct o98_float { char p[0x98]; float v; };
struct o9C_int { char p[0x9C]; int v; };
struct oC_float { char p[0xC]; float v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int ADXCRS_Lock(void);
int ADXCRS_Unlock(void);
int ADXERR_CallErrFunc(int, ...);
int ADXRNA_Destroy(int);
int ADXSTM_GetFad(int, int);
int ADXSTM_GetFsizeSct(int, int);
int ADXSTM_OpenRange(int, int, int);
int vmu_get_ready_mask(void);
int vmu_get_savefile_mask(void);
int vmu_get_vmgame_mask(void);
int vmu_get_free_space_mask(void);
int FUN_0c0109e4(void);
int ui_draw_element_sprite(int);
int vmu_menu_pad_pressed(int);
int conv_s16x5_to_f32(int, int);
int fx_spawn_032fd4(int, int);
int fx_spawn_04463c(int);
int obj_create(int, int, int);
int FUN_0c059bf8(int);
int FUN_0c05cb46(int, int, int);
int obj_part_set_model(int, int, int);
int FUN_0c0624c4(int, int, int);
int FUN_0c0645ee(int);
int pl_falcon_aim_at_target(int);
int pl_update_frame(int);
int FUN_0c09788c(int);
int pl_timer_arm_forever(int);
int pl_start_motion(int, int, int);
int pl_step_motion(int);
int pl_blend_motion_pose(int);
int pl_start_hit_freeze(int);
int pl_reset_combo_counter(int);
int math_angle_between_points_xz(int, int);
int pl_stick_dir_angle(int);
int obj_set_record_char(int, int);
int snd_play_side_se(int, int);
int snd_play_char_voice(int, int);
int obj_can_interact(int, int, int);
int FUN_0c0cc7fc(int);
int dbg_print_at(int, float, float);
int cam_publish_active_position(int);
float math_signed_sqrt(float);
float math_cos_angle16(int);
float math_sin_angle16(int);
int _modls(void);
int _quick_odd_mvn(int);
int _slow_mvn(int);
int FUN_0c0ed9d4(int, int, int);
int FUN_0c0ed9e8(int, int, int);
int FUN_0c0eee64(int);
int gdFsReopenHn(int, int, int, int);
int FUN_0c0f1c44(int);
int FUN_0c0f4968(int);
int ADXT_Stop(void);
int FUN_0c0ff8aa(void);
int FUN_0c0ff8b4(int, int);
int vmsfs_unmount(int);
int FUN_0c104962(int, int, int);
int search_exec_file(int, int);
int get_fat(int, int);
int direntry(int, int);
int FUN_0c105e60(int);
int FUN_0c10660e(int);
int FUN_0c106636(int);
int FUN_0c10a8a0(int, int);
int FUN_0c10a8de(int, int);
int FUN_0c112672(int);
int FUN_0c1126ba(int, int);
int FUN_0c1128ee(int, int, int);
int mpdrv_clear_deviceinfo(int);
int vmsio_isready(int);
int vmsio_ismount(int);
int fmMngClearBuf(int, int);
int FUN_0c1136ee(int);
int FUN_0c115270(int, int);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int buIsFormat(int);
int memset(int, int, int);
int fmMngMcpy(void);
int pl_change_state(int a4, int a5, int a6, int a7);
int FUN_0c104006(int a4, int a5, int a6);
int FUN_0c1152a4(int a4);
int fx_spawn_035444(int a4);
int fx_spawn_036598(int a4, int a5);
int fx_spawn_041820(int a4);
int FUN_0c04ae50(int a4, int a5, int a6, float f4, float f5, float f6);
int fx_spawn_04a4c4(int a4);
int FUN_0c092ace(int a4);
int ADXT_Destroy(int a4, int a5, int a6, int a7);
int FUN_0c112718(int a4, int a5, int a6, int a7);
int pl_mode10_enter(int a4);
int gdFsWaitCompleteReq(int a4, int a5, int a6, int a7);
int vmu_menu_scan_port_masks(int a4, int a5, int a6, int a7);
int FUN_0c028ea0(int a4, int a5, int a6, int a7, float f4);
int fx_spawn_04a294(int a4);
int FUN_0c0623a6(int a4, int a5, int a6);
int FUN_0c0a43b8(int a4);
int testmode_move_cursor(int a4, int a5, int a6, int a7);
int gdFsReqDrvStatG(int a4, int a5, int a6, int a7);
int check_file_correct(int a4, int a5);
int FUN_0c109800(int a4);
int FUN_0c0207ca(int a4, int a5, int a6, int a7);
int hit_get_box_entry(int a4, int a5, int a6, int a7);
int hit_get_cylinder_entry(int a4, int a5, int a6, int a7);
int FUN_0c044868(int a4, int a5);
float pl_hitreact_21_stick_vector(int a4);
int item_director_phase1(int a4, int a5, int a6, int a7);
int item_director_spawn_queued(int a4);
int FUN_0c0d2d22(int a4);
int ADXF_ReadSj(int a4, int a5, int a6);
int ADXT_StartFname(int a4, int a5);
int opt_page1_spawn_bg_scroll(int a4);
int opt_page3_spawn_bg_scroll(int a4);
int FUN_0c01fe52(int a4);
int FUN_0c023c72(int a4, int a5);
int FUN_0c033390(int a4, int a5, int a6, int a7);
int FUN_0c03ebf4(int a4);
int pl_falcon_attack_kind68_phase1(int a4);
int FUN_0c09bb9e(int a4, int a5);
int fx_trail_set_part_lengths(int a4, int a5, int a6, float f4);
int FUN_0c0c99c0(int a4, int a5, int a6, float f4);
int FUN_0c0d6104(int a4);
int snd_send_port_command(int a4, int a5, int a6);
int fmMngFormat(int a4, int a5, int a6);
int FUN_0c01e4ea(int a4, float f4);
int FUN_0c023d04(int a4, int a5);



int gdFsWaitCompleteReq(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    int t3;
    register int t4;

    t1 = t0;
    t0 = (*(int *)((a4 + 0x18)));
    t2 = (FUN_0c0ff8aa());
    for (;;) {
        t4 = ((int (*)(int, int, int, int))(((((struct o48_int *)((*(int *)(((*(int *)((a4 + 0x0))) + 0x3C)))))->v))))(t1, a5, a6, a7);
        t1 = a4;
        t3 = FUN_0c0f1c44(t1);
        t1 = t3;
        if (t3 != 0) {
            if (t3 != 1) {
                if ((t3 != 2) && ((t3 != 3) && (t3 != 4))) {
                    break;
                }
                if (t0 != (*(int *)((a4 + 0x18)))) {
                    t2 = (FUN_0c0ff8aa());
                    t0 = (*(int *)((a4 + 0x18)));
                } else {
                    t4 = t1;
                }
                t1 = t4;
                t4 = FUN_0c0ff8aa();
                t1 = t2;
                t1 = (FUN_0c0ff8b4(t1, t4));
                if ((unsigned int)t1 > (unsigned int)0xEE6B28) {
                    return 0xFFFFFFEB;
                }
                continue;
            }
            return 0x0;
        }
        return 0xFFFFFFE0;
    }
    t0 = 0xFFFFFFE7;
    if ((t3 == 5) || (t3 == 64)) {
        t0 = ((((struct o52_short *)(a4))->v));
    }
    return t0;
}






