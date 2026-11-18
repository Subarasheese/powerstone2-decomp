/* Library code: C that behaves like this game's own bytes. */
/* Straight-line functions with calls and guards (batch gen_an): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

typedef struct { int w[4]; } Stk4;
int FUN_0c1150cc(int, int, int, int);
int FUN_0c10bc80(int, int, int);
int FUN_0c108e74(void);
struct o0_float { float v; };
struct o0_int { int v; };
struct o0_short { short v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o100_uchar { char p[0x100]; unsigned char v; };
struct o108_uchar { char p[0x108]; unsigned char v; };
struct o10A_uchar { char p[0x10A]; unsigned char v; };
struct o10B_uchar { char p[0x10B]; unsigned char v; };
struct o10E8_int { char p[0x10E8]; int v; };
struct o144_uchar { char p[0x144]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o24_float { char p[0x24]; float v; };
struct o24_int { char p[0x24]; int v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_float { char p[0x28]; float v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o2D9_uchar { char p[0x2D9]; unsigned char v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o308_int { char p[0x308]; int v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_short { char p[0x4]; short v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o40_float { char p[0x40]; float v; };
struct o42_uchar { char p[0x42]; unsigned char v; };
struct o43_uchar { char p[0x43]; unsigned char v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4C_uint { char p[0x4C]; unsigned int v; };
struct o5_uchar { char p[0x5]; unsigned char v; };
struct o50_float { char p[0x50]; float v; };
struct o50_int { char p[0x50]; int v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o64_float { char p[0x64]; float v; };
struct o68_float { char p[0x68]; float v; };
struct o71_uchar { char p[0x71]; unsigned char v; };
struct o710A_uchar { char p[0x710A]; unsigned char v; };
struct o710B_uchar { char p[0x710B]; unsigned char v; };
struct o710C_uchar { char p[0x710C]; unsigned char v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o71CC_int { char p[0x71CC]; int v; };
struct o723A_uchar { char p[0x723A]; unsigned char v; };
struct o7298_float { char p[0x7298]; float v; };
struct o7C_float { char p[0x7C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o84_int { char p[0x84]; int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF4_int { char p[0xF4]; int v; };
struct oF4_uint { char p[0xF4]; unsigned int v; };
struct oF8_int { char p[0xF8]; int v; };
struct oF8_uint { char p[0xF8]; unsigned int v; };
struct o40_int { char p[0x40]; int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
int ADXCRS_Lock(void);
int ADXCRS_Unlock(void);
int ADXF_Stop(int);
int ADXPD_EntrySte(int, int, int, int, int);
int ADXPD_Start(int);
int ADXSJD_Start(int);
int opt_reset_system_settings(void);
int ending_script_update(int);
int vmu_menu_pad_pressed(int);
int FUN_0c02078c(void);
int FUN_0c020886(int);
int FUN_0c020998(int);
int hit_list_reset(int);
int fx_init_subblock_effect(int, int, int, int);
int fx_spawn_eight_point_effect(int, int, int, int, float, float, float, float, float, float);
int ai_clear_op_state(void);
int ai_script_branch(void);
int FUN_0c053dcc(void);
int game_stage_intro_start(void);
int game_stage_intro_countdown(void);
int game_state_timer_tick(void);
int game_reset_objects(void);
int obj_create(int, int, int);
int obj_tick_class(int);
int pl_adjust_power_gauge(int);
int FUN_0c05f59c(int, int, int, int);
int res_load_file_raw_c(int);
int pl_garuda_mode04_phase0(int);
int pl_garuda_mode04_phase1(int);
int pl_garuda_mode04_phase2(int);
int pl_garuda_mode04_phase3(int);
int pl_garuda_mode04_phase4(int);
int obj_force_owner_state27(int, int);
int FUN_0c08e382(int);
int obj_set_owner_hit_record(int, int);
int game_update_fighters(float);
int pl_for_each_part_slot(int, int, int, int);
int pl_start_motion(int, int, int);
int pl_step_motion(int);
int pl_step_motion_owner(int);
int math_angle_delta16(int, int);
int pl_apply_motion_translation(int);
int pl_angle_to_opponent(int);
int pl_find_move_input_any(int);
int pl_start_state28_item(int);
int FUN_0c0a022e(int, float);
int pl_change_state(int, int, int);
int snd_play_se(int);
int bgm_start_file(int, int);
int bgm_stop_all(void);
int snd_play_side_se(int, int);
int FUN_0c0a3dcc(int, int);
int FUN_0c0a43b8(int);
int menu_find_cursor_task(void);
int menu_ui_spawn_23(int);
int menu_stage_select_spawn_marker(int);
int menu_ui_spawn_26(void);
int menu_ui_spawn_30(void);
int obj_set_mode_owner(int, int);
int item_director_tick(void);
int FUN_0c0ccb60(void);
int FUN_0c0d708c(int);
int cam_step_keyframe_script(int, int);
int cam_force_mode_10(int, int);
int cam_reset_shake(int, int, int);
int nlobjput_sub_trnsl(int, float);
float math_rand_float(void);
int dbg_print_string(int);
int dbg_set_cursor_cell(int);
int nlCalcVector(int, int);
extern int nlStoreMatrix8();
int nlLoadMatrix8(int);
int nlMultiMatrix8(int);
int nlMultiMatrixRevOrder8(int);
int nlPushMatrix(int);
int nlRotateAX(int);
int nlRotateAxe(int, int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScaleV(int);
int nlTransposeMatrix(void);
int nlTranslateV(int);
int FUN_0c0e22e0(int, int, float);
int math_vec3_normalize_fast(int, int, int, float, float, float, float);
int FUN_0c0e34d0(int);
int snd_bank_load(int, int);
int snd_bank_unload(int);
int snd_send_port_command(int, int, int);
int FUN_0c0e6212(int, int, int);
int _divls(void);
int _modlu(void);
int _quick_odd_mvn(int);
int FUN_0c0ee6f0(int, int);
int FUN_0c0f1c72(int);
int FUN_0c0f2968(int);
int FUN_0c0f2f60(void);
int ADXT_Stop(void);
int ADXT_GetStat(int);
int ADXT_SetOutVol(int, int);
int ADXT_SetLpFlg(int, int);
int FUN_0c0f53ae(void);
int FUN_0c0fde38(int, int, int);
int FUN_0c0fdea0(int);
int FUN_0c100260(void);
int vmsfs_c_getstate(int);
int vmsfs_xcreate(int, int, int, int);
int vmsfs_fcreate(int, int, int, int);
int FUN_0c105a14(int, int, int);
int FUN_0c105e8e(int, int);
int FUN_0c10660e(int);
int FUN_0c10683c(int);
int FUN_0c1081f2(int, int, int, int);
int FUN_0c108b64(void);
int FUN_0c109800(int);
int FUN_0c10b614(int);
int FUN_0c10dbe0(int, int, int, int);
int mpdrv_dpf(int, ...);
int mpdrv_setcmd(int, int, int, int, int);
int mpdrv_set_bread_ns(int, ...);
int mpdrv_set_bwrite(int, ...);
int mpdrv_set_getlerr_ns(int, ...);
int vmsio_ismount(int);
int FUN_0c114584(int, int, int);
int FUN_0c11554e(int, int);
extern void _builtin_ld_ext(float (*)[4]);
extern void _builtin_st_ext(float (*)[4]);
extern int _builtin_tas(char *);
int buGetFileSize(int, int);
int buLoadFile(int, int, int, int);
int memset(int, int, int);
int mwRnaErrCallFunc(int, int, int, int);
int FUN_0c09c45a(int a4, int a5, int a6, int a7);
int pl_spawn_hit_effect_with_se(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9);
int bgm_unduck(void);
int ui_task_create(void);
int menu_ui_spawn_10(int a4);
int FUN_0c0d320a(void);
int FUN_0c0fb54c(int a4);
int FUN_0c112672(int a4);
int fmMngBit2Num(int a4, int a5, int a6);
int ADXB_EvokeExpandSte(int a4, int a5);
int ending_spawn_obj_t0a(int a4);
int ending_spawn_obj_t0b(int a4);
int ending_spawn_obj_t0e(int a4);
int FUN_0c01cb86(int a4);
int vmu_menu_poll_confirm_cancel(int a4, int a5);
int game_mode_handler_4(void);
int pl_mode04_enter(int a4);
int pl_ryoma_mode07_enter(int a4);
int FUN_0c08e3bc(int a4, int a5);
int FUN_0c098a64(int a4);
int bgm_stop_slot(int a4);
int FUN_0c0cc7fc(int a4);
int dbg_print_at(int a4, float f4, float f5);
int attract_draw_press_start(int a4, int a5, int a6, int a7);
int cam_mode_01(int a4);
int FUN_0c0ddf30(void);
int nlRotate(int a4, int a5, int a6, float f4, float f5, float f6, float f7);
int FUN_0c0ee248(int a4);
int FUN_0c0f2808(int a4, int a5);
int syCfgSetSoundMode(int a4, int a5, int a6);
int FUN_0c0f553a(int a4, int a5, int a6, int a7);
int FUN_0c0fdeba(int a4);
int kdDevGetVibrationInfo(int a4, int a5);
int FUN_0c114b78(void);
int FUN_0c1151de(int a4, int a5, int a6, int a7);
int vmu_load_save_file(int a4);
int keycfg_reset_system_settings(void);
int ending_state_run_script(void);
int hit_world_reset(void);
int FUN_0c0421ee(int a4, int a5);
int FUN_0c042222(int a4, int a5);
int pl_part_copy_pose_vectors(int a4);
int FUN_0c09bc3a(int a4, int a5);
int obj_set_record(int a4, int a5);
int menu_pad_any_button(int a4);
int menu_check_start_button(int a4);
int stage_obj_play_break_se(int a4);
int FUN_0c0ccbca(void);
int nlObjPutTrnsl(int a4, float f4);
int nlStoreMatrix(int a4);
float FUN_0c0e2260(int a4, int a5, int a6);
int nl_set_virtual_screen(float f4, float f5);
int FUN_0c0e3510(float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);
int FUN_0c0ed8b0(void);
int FUN_0c0ed92c(void);
int FUN_0c0f24d6(int a4, int a5, int a6);
int FUN_0c0f2f7e(void);
int FUN_0c0f9bb2(void);
int kdSetBlockWrite(Stk4 s);
int FUN_0c106654(int a4, int a5, int a6, int a7);
int FUN_0c108304(int a4, int a5, int a6, int a7);
int kmiBGPlanePutColor(int a4, int a5, int a6);
int FUN_0c10dd58(int a4, int a5, int a6, int a7);
int FUN_0c114598(int a4, int a5, int a6, int a7);
int FUN_0c11568c(int a4, int a5, int a6, int a7);
int FUN_0c0203f6(void);
int FUN_0c045a4e(int a4);
int ai_op8_jump(void);
int fxslot_clear_all(void);
int pl_garuda_mode04_update(int a4);
int FUN_0c08dbc8(int a4, int a5);
int FUN_0c099afe(int a4);
int FUN_0c09c2ce(int a4, int a5, int a6, int a7);
int FUN_0c09eb8c(int a4);
int FUN_0c0a3426(int a4);
void bgm_play_stage_theme(int a4);
void FUN_0c0a413a(int a4);
int FUN_0c0ac640(int a4);
int FUN_0c0c3ab2(int a4, int a5, int a6, int a7);
int nlInvLightVector(void);
void nlLoadMatrix(int a4);
void ADXF_Close(int a4);
int vmsfs_ismount(int a4);
int set_fat(int a4, int a5, int a6, int a7);
int ADXSTM_ExecServer(void);
int FUN_0c107fce(int, int, int, int);
int mpdrv_set_bread(Stk4 s);
int mpdrv_set_getlerr(Stk4 s);
int obj_tick_all(float f4);
int pl_add_gauge_random(void);
int FUN_0c05eed2(void);
int FUN_0c05f68c(int a4, int a5, int a6);
int pl_mode13_enter(int a4);
int pl_mode15_cls14_f0_phase0(int a4);
int pl_falcon_attack_kind68_phase4(int a4);
int pl_hitreact_01_phase2(int a4);
int math_angle3_delta(int a4, int a5, int a6);
int FUN_0c099c30(int a4, int a5, int a6);
int FUN_0c0a3062(int a4);
int bgm_play_rank(void);
int bgm_play_omake(void);
int FUN_0c0a3762(int a4, int a5);
int snd_play_stage_obj_se(int a4, int a5, int a6);
int FUN_0c0ac672(int a4);
int menu_stage_select_spawn_ui(void);
int FUN_0c0d5f3a(int a4);
void FUN_0c0d6190(int a4);
int FUN_0c0e6668(int a4, int a5, int a6);
int FUN_0c0ee210(int a4);
int FUN_0c0f4938(int a4, int a5);
int adxf_CreateAdxFs(void);
int kdDevGetFD(int a4, int a5);
int FUN_0c107e30(int a4, int a5, int a6, int a7);
void FUN_0c10ab3c(int a4, int a5, int a6);
int FUN_0c109890(int a4, int a5);
int FUN_0c10b480(int a4, int a5);
int mpdrv_set_bwrite_ns(int a4, int a5, int a6, int a7, int a8, int a9, int a10);
int ending_obj_init_basic(int a4);
int conv_s16x4_to_f32(int a4, int a5);
int conv_s16x4_to_f32_b(int a4, int a5);
int game_poll_start_button_pl(int a4);
int pl_add_gauge_by_value(int a4);
int FUN_0c0613c4(int a4);
int FUN_0c061400(int a4);
int pl_reset_scale(int a4);
int hit_find_wall_entry_by_kind(int a4, int a5);
int pl_start_item_action(int a4);
void snd_play_announcer(int a4, int a5);
int FUN_0c0ac5c4(int a4, int a5, int a6, int a7);
int FUN_0c0b1508(int a4, int a5, int a6);
int FUN_0c0c688a(int a4, float f4);
int item_director_phase2(int a4, int a5);
int testmode_check_start_shot1(void);
int FUN_0c0d6a28(int a4);
int cam_mode_10(int a4);
int buCreateExecFile(int a4, int a5, int a6, int a7);
int buCreateFile(int a4, int a5, int a6, int a7);
int FUN_0c0fde72(int a4, int a5);
int vmsfs_setdevicetype(int a4);
int search_free_dir(int a4);
int open_file_handle(void);
int FUN_0c107206(void);
int FUN_0c1154dc(int a4, int a5);
int pad_get_type(int a4);



int fmMngBit2Num(int a4, int a5, int a6)
{
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;

    t1 = a4;
    t2 = a5;
    t3 = a6;
    t4 = 0x0;
    t5 = (((a5 << 2) << 2) << 2);
    for (;;) {
        if ((int)t5 <= 0) {
            break;
        }
        t3 = *(signed char *)((t1 + 0x0));
        t1 = (t1 + 0x1);
        t2 = 0x8;
        for (;;) {
            if ((((signed char)t3) & 0x80) == 0) {
                t2 = (t2 - 1);
                t3 = (t3 << 1);
                t4 = (t4 + 0x1);
                if ((int)t2 <= 0) {
                    break;
                }
                continue;
            }
            return t4;
        }
        t5 = (t5 - 1);
    }
    return t4;
}


int nlRotate(int a4, int a5, int a6, float f4, float f5, float f6, float f7)
{
    int stk[4];

    *(unsigned int *)(((int)stk + 0)) = a5;
    *(float *)(((int)stk + 4)) = (*(float *)((a4 + 0x0)));
    *(float *)(((int)stk + 8)) = ((((struct o4_float *)(a4))->v));
    *(float *)(((int)stk + 12)) = ((((struct o8_float *)(a4))->v));
    math_vec3_normalize_fast((((int)stk + 0) + 0x4), a5, a6, f4, f5, f6, f7);
    return (nlRotateAxe((((int)stk + 0) + 0x4), (*(int *)(((int)stk + 0)))));
}


int FUN_0c0fdeba(int a4)
{
    register int t1;
    register int t3;
    register int t5;

    t1 = FUN_0c0fdea0((*(signed char *)((a4 + 0x0))));
    t3 = FUN_0c0fdea0((*(signed char *)(((a4 + 0x1) + 0x0))));
    t5 = FUN_0c0fdea0((*(signed char *)((((a4 + 0x1) + 0x1) + 0x0))));
    return ((((t1 * 0x3C) + t3) * 0x4B) + t5);
}


int kdDevGetVibrationInfo(int a4, int a5)
{
    register int t0;

    t0 = kdDevGetFD(a5, 0x100);
    if (t0 == 0) {
        return 0xFFFFFFFF;
    }
    *(unsigned int *)((a4 + 0x0)) = (unsigned char)(*(signed char *)((t0 + 0x0)));
    *(unsigned int *)((a4 + 0x4)) = (unsigned char)(*(signed char *)((t0 + 0x1)));
    return 0x0;
}





float FUN_0c0e2260(int a4, int a5, int a6)
{
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;
    register float u7;

    u0 = *(float *)((a4 + 0x0));
    u1 = (((struct o4_float *)(a4))->v);
    u2 = (((struct o4_float *)((a4 + 0x4)))->v);
    u3 = *(float *)((a5 + 0x0));
    u4 = (((struct o4_float *)(a5))->v);
    u5 = (((struct o4_float *)((a5 + 0x4)))->v);
    u6 = (-(u1 * u3));
    u6 = u6 + u0 * u4;
    u7 = (-(u0 * u5));
    u7 = u7 + u2 * u3;
    *(float *)((((a6 + 0xC) - 0x4) + 0x0)) = u6;
    u0 = (-(u2 * u4));
    u0 = u0 + u1 * u5;
    *(float *)(((((a6 + 0xC) - 0x4) - 0x4) + 0x0)) = u7;
    *(float *)((((((a6 + 0xC) - 0x4) - 0x4) - 0x4) + 0x0)) = u0;
    return u1;
}


int FUN_0c0f24d6(int a4, int a5, int a6)
{
    register int t0;

    t0 = *(signed char *)((a6 + 0x4));
    if ((unsigned char)t0 != 0xFC) {
        if (((unsigned char)t0 != 0xFF) && (((unsigned char)t0 != 8) && (((unsigned char)t0 != 5) && (((unsigned char)t0 != 6) && ((unsigned char)t0 != 0))))) {
            return 0xFF000000;
        }
        return 0x0;
    }
    return 0xFF0000FC;
}


int kdDevGetFD(int a4, int a5)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    t0 = *(int *)((a4 + 0x0));
    t1 = 0x0;
    t2 = (a4 + 0x4);
    t3 = 0x80000000;
    t4 = (a4 + 0x4);
    for (;;) {
        if ((t3 & t0) != 0) {
            if (a5 == t3) {
                break;
            }
            t2 = (t2 + 0x4);
            t4 = t2;
            t1 = (t1 + 0x1);
            t3 = ((unsigned int)t3 >> 1);
            if ((int)t1 >= (int)0x20) {
                return 0x0;
            }
            continue;
        }
        t1 = (t1 + 0x1);
        t3 = ((unsigned int)t3 >> 1);
        if ((int)t1 >= (int)0x20) {
            return 0x0;
        }
    }
    return t4;
}


void FUN_0c10ab3c(int a4, int a5, int a6)
{
    register int t0;
    register int t1;

    t0 = *(int *)((a6 + 0x4));
    t1 = *(int *)((a6 + 0x8));
    if (t0 == 0) {
        *(unsigned int *)((a4 + 0x0)) = (*(int *)((a6 + 0x8)));
    } else {
        *(unsigned int *)((t0 + 0x8)) = (*(int *)((a6 + 0x8)));
    }
    if ((*(int *)((a6 + 0x8))) == 0) {
        *(unsigned int *)((a5 + 0x0)) = (*(int *)((a6 + 0x4)));
    } else {
        *(unsigned int *)((t1 + 0x4)) = (*(int *)((a6 + 0x4)));
    }
}


int mpdrv_set_bwrite_ns(int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    int stk[4];

    *(unsigned int *)((((int)stk + 8) + 0x0)) = a5;
    *(unsigned int *)((((int)stk + 8) + 0x4)) = ((((a6 << 16) << 8) | (a7 << 16)) | a8);
    *(int *)((int)stk + 4) = a10;
    *(int *)((int)stk + 0) = a9;
    return (mpdrv_setcmd(a4, 0xC, ((int)stk + 8), 0x2, a9));
}


int FUN_0c0fde72(int a4, int a5)
{
    int stk[2];
    register int t1;

    *(unsigned int *)(((int)stk + 4)) = a4;
    *(unsigned short *)(((int)stk + 0)) = a5;
    t1 = FUN_0c0fde38(0x0, (*(int *)(((int)stk + 4))), 0xA);
    if ((unsigned short)(*(short *)(((int)stk + 0))) != (unsigned short)(~t1)) {
        return 0xFFFFFFFF;
    }
    return 0x0;
}


int FUN_0c1154dc(int a4, int a5)
{
    if ((*(int *)((((a5 * 0x124) + (0x210 + a4)) + 0xC))) == 1) {
        FUN_0c11554e(a4, a5);
        *(unsigned int *)((((a5 * 0x124) + (0x210 + a4)) + 0xC)) = 0x2;
        return 0x0;
    }
    return 0xFFFFFFFF;
}
