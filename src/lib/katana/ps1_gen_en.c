/* Library code: C that behaves like this game's own bytes. */
/* Straight-line functions with calls and guards (batch gen_en): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_float { char p[0x10]; float v; };
struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o106_uchar { char p[0x106]; unsigned char v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o118_uint { char p[0x118]; unsigned int v; };
struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o19_uchar { char p[0x19]; unsigned char v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1E0_float { char p[0x1E0]; float v; };
struct o1E4_float { char p[0x1E4]; float v; };
struct o1E8_float { char p[0x1E8]; float v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2DC_int { char p[0x2DC]; int v; };
struct o2DC_uint { char p[0x2DC]; unsigned int v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o308_int { char p[0x308]; int v; };
struct o308_uint { char p[0x308]; unsigned int v; };
struct o38_float { char p[0x38]; float v; };
struct o3A_ushort { char p[0x3A]; unsigned short v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o40_int { char p[0x40]; int v; };
struct o44_float { char p[0x44]; float v; };
struct o48_ushort { char p[0x48]; unsigned short v; };
struct o50_ushort { char p[0x50]; unsigned short v; };
struct o5C_float { char p[0x5C]; float v; };
struct o710B_uchar { char p[0x710B]; unsigned char v; };
struct o710C_uchar { char p[0x710C]; unsigned char v; };
struct o719E_short { char p[0x719E]; short v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o71CC_int { char p[0x71CC]; int v; };
struct o71CC_uint { char p[0x71CC]; unsigned int v; };
struct o7236_uchar { char p[0x7236]; unsigned char v; };
struct o8_float { char p[0x8]; float v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int opt_page1_obj_in_mask(int);
int FUN_0c01b788(int);
int FUN_0c01b898(void);
int FUN_0c01b936(int, int);
int pad_get_start_mask(void);
int opt_page_leave_reset(void);
int fx_spawn_on_player_part(int, int, int, int, int, int, int, int);
int ai_clear_op_state(void);
int ai_calc_goal_angle(int, float);
int ai_angle_to_pad_dir(int);
int game_reset_objects(void);
int obj_create(int, int, int);
int obj_destroy(int);
int FUN_0c0593e0(int);
int obj_tick_class(int);
int FUN_0c05f2d4(int, int);
int res_switch_scene(int);
int FUN_0c0613c4(int);
int FUN_0c061400(int);
int FUN_0c06231c(int, int, int);
int obj_part_set_model(int, int, int);
int FUN_0c0634b4(int);
int FUN_0c0989ea(int);
int FUN_0c0989fc(int);
int FUN_0c098a0e(int);
int FUN_0c098a3c(int);
int FUN_0c098a64(int);
int FUN_0c098ac8(int);
int FUN_0c098b2a(int);
int FUN_0c098b96(void);
int pl_start_motion(int, int, int);
int pl_start_motion_owner(int, int, int);
int pl_step_motion(int);
int pl_step_motion_owner(int);
int pl_spawn_hit_effect_with_se(int);
int FUN_0c09c782(int);
int pl_get_hit_count_of_opponent(int);
int pl_tick_hitstop(int);
int pl_apply_velocity(int);
int pl_apply_acceleration(int);
int pl_apply_motion_translation(int);
int pl_landed(int);
int obj_set_record(int, int);
int pl_end_action_choose_state(int);
int pl_change_state(int, int, int);
int FUN_0c0a2f66(int);
int bgm_stop_streams(void);
int snd_play_side_se(int, int);
int obj_set_mode_owner(int, int, int);
int dbg_print_at(int, float, float);
int FUN_0c0ce910(int, int);
int testmode_check_start_shot1(void);
int FUN_0c0d4136(int, int, int, int);
int attract_fade_step_timer(void);
int FUN_0c0d71f4(int);
int cam_request_mode(int, int, int);
float math_signed_sqrt(float);
int math_atan2_angle16(int, int, int, int, float, float);
float math_cos_angle16(int);
float math_sin_angle16(int);
int _modls(int);
int _quick_odd_mvn(void);
int FUN_0c1012f4(int, int, int);
int FUN_0c108734(void);
int FUN_0c10874c(int, int);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
extern float _builtin_sqrtf(float);
int buIsFormat(int);
int direntry(int, int);
int gdFsReopenHn(int, int, int, int);
int get_fat(int, int);
int sprintf(int, int, ...);
int vmsfs_unmount(int);
int vmsio_ismount(int);
int vmsio_isready(int);
int menu_ui_task_24_bind_models(int a4, int a5);
int stage_gimmick_16_spawn(void);
int stage_gimmick_22_spawn_b(int a4, int a5);
int testmode_game_data_screen(void);
int vmsfs_xwrite1(int a4, int a5);
int fx_spawn_039828(int a4, int a5);
int fx_spawn_039c78(int a4, int a5, int a6, int a7);
int fx_spawn_03af38(int a4, int a5);
int ai_op83(int a4, float f4);
int FUN_0c0638fe(int a4);
int pl_kraken_mode04_phase1(int a4);
int attract_title_screen(int a4, int a5, int a6, int a7);
int gdFsDaPlaySctG(int a4, int a5, int a6, int a7);
int FUN_0c0fa42e(int a4, int a5, int a6, int a7, int a8);
int vmsfs_findfirst(int a4, int a5, int a6, int a7);
int SJRBF_GetChunk(int a4, int a5, int a6, int a7);
int FUN_0c10b260(int a4, int a5);
int opt_game_settings_move_cursor(int a4, int a5);
int fx_spawn_036a6c(int a4, int a5);
int FUN_0c0612f4(int a4, int a5, int a6, int a7);
int pl_mode15_cls05_07_f0(int a4);
int FUN_0c098b9c(int a4);
int fx_spawn_03(int a4, int a5, int a6, float f4);
float FUN_0c0c07bc(int a4, int a5, int a6, int a7, float f4);
float cam_calc_fighter_dir(int a4);
int opt_page1_tick_cursor_pulse(int a4);
int FUN_0c023680(int a4, int a5);
int opt_page4_main(int a4);
int game_check_player_join(int a4, int a5, int a6, int a7);
int FUN_0c023b22(int a4, int a5);
int pl_jack_victim_phase2(int a4);
int stage_gimmick_11_update_b(int a4);
int FUN_0c01e156(int a4, int a5, int a6);



int gdFsDaPlaySctG(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t3;
    register int t4;

    t0 = 0xFFFFFFF3;
    if ((int)a4 >= (int)0xB05E) {
        t1 = gdFsReopenHn((*(int *)(((*(int *)0xC346BD8) + 0x14))), 0x0, 0x0, 0x0);
        t0 = 0xFFFFFFF3;
        if (t1 != 0) {
            t3 = _builtin_get_imask();
            _builtin_set_imask(0xF);
            t4 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)(((*(int *)0xC346BD8) + 0xC))) + 0x2C)))))(a4, a5, a6, a7);
            if (t4 != 0) {
                *(unsigned int *)((t1 + 0x3C)) = t4;
                (((struct o50_ushort *)(t1))->v) = 0x4;
                if ((int)(*(int *)(((*(int *)0xC346BD8) + 0x2C))) >= (int)0x10001) {
                    (((struct o3A_ushort *)((*(int *)0xC346BD8)))->v) = 0x1;
                    (((struct o0_uint *)0xC7FE6E8)->v) = 0x2;
                    (((struct o4_uint *)0xC7FE6E8)->v) = a4;
                    (((struct o8_uint *)0xC7FE6E8)->v) = a5;
                    (((struct oC_uint *)0xC7FE6E8)->v) = a6;
                    *(unsigned int *)((t1 + 0x4)) = 0xC7FE6F8;
                    (((struct o48_ushort *)(t1))->v) = 0x8;
                } else {
                    (((struct o48_ushort *)(t1))->v) = 0x6;
                }
                *(unsigned int *)(((*(int *)((t1 + 0x0))) + 0x1C)) = t1;
                t1 = ((int (*)(void))(((((struct o40_int *)((*(int *)(((*(int *)0xC346BD8) + 0xC)))))->v))))();
            }
            _builtin_set_imask(((unsigned int)(((t3 & 0xF) << 2) << 2) >> 4));
            t1 = 0x0;
            if (t4 == 0) {
                t1 = 0xFFFFFFF3;
            }
            t0 = t1;
        }
    }
    return t0;
}
