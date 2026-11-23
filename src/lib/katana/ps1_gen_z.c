/* Library code: C that behaves like this game's own bytes. */
/* Straight-line functions with calls and guards (batch gen_z): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int vmsfs_read_retry(int, int, int);
struct o0_float { float v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_float { char p[0x10]; float v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o118_uint { char p[0x118]; unsigned int v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_float { char p[0x18]; float v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1D_uchar { char p[0x1D]; unsigned char v; };
struct o1E_uchar { char p[0x1E]; unsigned char v; };
struct o1F_uchar { char p[0x1F]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2D8_uchar { char p[0x2D8]; unsigned char v; };
struct o2DC_int { char p[0x2DC]; int v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o30_float { char p[0x30]; float v; };
struct o308_float { char p[0x308]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o42_short { char p[0x42]; short v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o5_uchar { char p[0x5]; unsigned char v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o719E_short { char p[0x719E]; short v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o71CC_int { char p[0x71CC]; int v; };
struct o71F0_uchar { char p[0x71F0]; unsigned char v; };
struct o7248_int { char p[0x7248]; int v; };
struct o7248_short { char p[0x7248]; short v; };
struct o7248_uint { char p[0x7248]; unsigned int v; };
struct o7270_float { char p[0x7270]; float v; };
struct o7278_float { char p[0x7278]; float v; };
struct o72AD_uchar { char p[0x72AD]; unsigned char v; };
struct o72AE_uchar { char p[0x72AE]; unsigned char v; };
struct o8_float { char p[0x8]; float v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o90_uint { char p[0x90]; unsigned int v; };
struct o9C_int { char p[0x9C]; int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct o44_short { char p[0x44]; short v; };
int ADXRNA_SetOutPan(int, int, int);
int ui_draw_element_sprite(int);
int vmu_menu_pad_pressed(int);
int hit_find_part_entry(int, int, int, int);
int hit_get_sphere_entry(int, int, int);
int hit_get_cylinder_entry(int, int, int);
int hit_get_box_entry(int, int, int);
int hit_build_part_shape(int, int);
int FUN_0c0246b2(int);
int hit_dispatch_shape_pair(int, int, int, int);
float FUN_0c02649a(int, int);
int ui_sprite_queue_add(int, int, int);
int ui_fade_start(int, int, int, int);
int FUN_0c0421ee(int, int);
int obj_system_init(void);
int obj_create(int, int, int);
int FUN_0c05f2d4(int, int);
int res_load_file_raw_c(int);
int res_textures_release(int);
int res_switch_scene(int);
int math_vec3_add(int, int, int);
float math_vec2_cos_between(float, float, float, float);
int math_mat_transform_point(int, int);
int FUN_0c0624c4(int, int, int);
int mdl_vtx_iter_begin(int, int);
int mdl_vtx_iter_next(void);
int mdl_vtx_get_uv(int, int);
int mdl_vtx_set_uv(int, int);
int FUN_0c08b7d6(int);
int FUN_0c08b96e(int);
int ai_dist_class(int);
int ai_roll_chance(void);
int obj_force_owner_state27(int, int);
int obj_set_owner_hit_record(int, int);
int pl_start_motion(int, int, int);
int pl_start_motion_owner(int, int, int);
int pl_step_motion(int);
int pl_step_motion_owner(int);
int pl_start_hit_freeze(int);
int FUN_0c09c5f4(int);
int pl_get_held_item_class(int, int, int);
int obj_place_linked_ahead(int, int, float);
int hit_find_interactable_contact(int, int);
int pl_tick_hitstop(int);
int pl_apply_velocity(int);
int pl_apply_acceleration(int);
int pl_apply_motion_translation(int);
int pl_angle_to_opponent(int);
int pl_turn_to_opponent(int);
int pl_stick_dir_angle(int);
int FUN_0c0a10b6(int, int, float);
int pl_end_action_choose_state(int);
int bgm_stop_all(void);
int bgm_play_capcom(void);
int FUN_0c0a3762(int, int);
int snd_play_side_se(int, int);
int snd_play_char_voice(int, int);
int FUN_0c0a3d5c(int, int);
int obj_set_mode_owner(int, int);
int fx_spawn_08(int, int);
int cam_request_mode(int, int, int);
extern int FUN_0c0ddc70();
int FUN_0c0ddeb0(void);
float math_signed_sqrt(float);
float math_cos_angle16(int);
float math_sin_angle16(int);
int syRtcAicaGetCount(int);
int snd_driver_upload(int, int);
int snd_bank_load(int, int);
int snd_bank_unload(int);
int snd_stream_setup(int, int, int);
int _divls(void);
extern int _quick_evn_mvn();
extern int _quick_odd_mvn();
int FUN_0c0efdee(int);
int FUN_0c0efe92(int);
int ADXT_Create(int, int, int);
int kmActivateFrameBuffer(int, int, int, int);
extern int FUN_0c0f7b60();
int FUN_0c0f94a0(int, int, int, int);
int gdFsStrcmpi(int, int);
int gdFsGetSearchID(int);
int kdDevGetFD(int, int);
int FUN_0c1012f4(int, int, int);
int get_fat(int, int, int, int);
int ADXSJD_GetNumChan(int);
int FUN_0c108548(int);
int SJRBF_Reset(int);
int kmiWriteRegister(int, int);
int mpdrv_get_timeout(void);
int mpdrv_get_swapmode(void);
int mpdrv_get_nopcount(void);
int mpdrv_get_speed(void);
int mpdrv_get_debugmode(void);
int mpdrv_get_dreqcount(void);
int mpdrv_get_optimize(void);
int mpdrv_rootplay(void);
int mpdrv_gunmode(void);
int FUN_0c111ca6(void);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int gdFsStrcmp(void);
int FUN_0c106a86(int a4);
int pl_mode15_cls05_07_f1_move(int a4);
int FUN_0c08b8fc(int a4);
int FUN_0c09fa84(int a4, int a5, int a6);
float pl_set_velocity_forward(int a4, int a5, float f4);
int snd_init_adx(void);
int nl_texture_surface_words(int a4, int a5, int a6, int a7);
int FUN_0c0f0000(int a4);
int FUN_0c10c01a(void);
int vmu_menu_poll_yes_no(int a4);
int FUN_0c02656e(int a4, int a5);
int FUN_0c041e14(int a4);
int fx_spawn_044250(int a4, int a5);
int fx_spawn_044094(int a4);
int FUN_0c08bd78(int a4);
int FUN_0c097b10(int a4, int a5, int a6, int a7);
int FUN_0c09d818(int a4, int a5);
int FUN_0c0a0074(int a4, int a5, int a6);
float obj_update_distance_cull_b(int a4);
int FUN_0c0c681a(int a4);
int gdFsSearchName(int a4, int a5, int a6);
int FUN_0c10b740(void);
int ending_spawn_obj_t06(int a4);
int ending_spawn_obj_t04(int a4);
int keycfg_queue_table_sprite_scaled(int a4, float f4, float f5);
int fx_spawn_048074(int a4);
int fx_spawn_0488b8(int a4, int a5, int a6, int a7);
int FUN_0c045968(int a4);
int FUN_0c08a7d4(int a4, int a5);
int FUN_0c0a1162(int a4);
int FUN_0c0fcea0(int a4, int a5);
int kdGetDriverMode(int a4);
int FUN_0c1043c6(int a4, int a5, int a6, int a7);
int FUN_0c024764(int a4, int a5, int a6, int a7);
int res_pl_textures_release(int a4);
int obj_part_set_model(int a4, int a5, int a6);
int FUN_0c064534(int a4);
int pl_ryoma_mode04_phase0(int a4);
int FUN_0c087cc4(int a4);
int ai_reaction_check_1(int a4, int a5);
int FUN_0c08bab6(int a4);
int FUN_0c098b2a(int a4, int a5, int a6, int a7);
int FUN_0c0b3614(int a4);
int FUN_0c0d3270(void);
int nlMakeProjConvMat(int a4);
int syRtcGetCountForce(void);
int FUN_0c0de290(int a4, int a5, int a6, int a7);
int kdDevGetLCDInfo(int a4, int a5);
int FUN_0c105190(int a4, int a5);
int FUN_0c10521a(int a4, int a5);
int FUN_0c01da70(int a4, int a5, float f4);
int pl_falcon_attack_kind57_phase1(int a4);
int FUN_0c09c80e(int a4);
int math_exp_float(int a4, int a5, int a6, int a7, float f4);
void math_ln_float(int a4, int a5, int a6, int a7, float f4);
int FUN_0c0fd04e(int a4);
int FUN_0c1084b6(int a4, int a5);
int FUN_0c108776(int a4, int a5, int a6);
int keycfg_commit_screen_to_settings(void);
float math_interval_overlap(float f4, float f5, float f6, float f7, float f8, float f9, float f10);
int stage_point_in_sphere(int a4, int a5);
int FUN_0c0408d0(int a4);
int FUN_0c0da5b2(int a4, int a5, int a6, int a7);



int syRtcGetCountForce(void)
{
    int stk[2];
    register int t0;
    register int t1;
    register int t14;
    register int t3;
    register int t4;
    register int t5;
    int t6;
    register int t7;

    t0 = 0x0;
    for (;;) {
        t1 = syRtcAicaGetCount((((int)stk + 0) + 0x4));
        if (t1 == 0) {
            t0 = 0x1;
        }
        if (t0 != 0) {
            break;
        }
    }
    t14 = 0xFFFFFFFF;
    if (t0 == 0) {
    } else {
        t3 = 0x0;
        for (;;) {
            t4 = 0x0;
            for (;;) {
                t5 = syRtcAicaGetCount(((int)stk + 0));
                if ((t5 == 0) && (t6 = *(int *)(((int)stk + 4)), t7 = *(int *)(((int)stk + 0)), t6 == t7)) {
                    t4 = (t4 + 0x1);
                    *(unsigned int *)(((int)stk + 4)) = (*(int *)(((int)stk + 0)));
                    if ((int)t4 >= (int)0x3) {
                        break;
                    }
                    continue;
                }
                break;
            }
            if (t4 == 3) {
                t3 = 0x1;
            }
            if (t3 != 0) {
                break;
            }
        }
        t14 = (*(int *)(((int)stk + 0)));
    }
    return t14;
}


int kdDevGetLCDInfo(int a4, int a5)
{
    register int t0;

    t0 = kdDevGetFD(a5, 0x4);
    if (t0 == 0) {
        return 0xFFFFFFFF;
    }
    *(unsigned short *)((a4 + 0x0)) = ((unsigned char)(*(signed char *)((t0 + 0x0))) + 0x1);
    *(unsigned short *)((a4 + 0x2)) = (((((unsigned char)(*(signed char *)((t0 + 0x1))) + 0x1) << 2) << 2) << 1);
    *(unsigned short *)((a4 + 0x4)) = (((unsigned int)((unsigned int)(unsigned char)(*(signed char *)((t0 + 0x2))) >> 2) >> 2) & 0xF);
    *(unsigned char *)((a4 + 0x6)) = (((unsigned int)((unsigned int)((unsigned int)(unsigned char)(*(signed char *)(((t0 + 0x3) + 0x0))) >> 2) >> 2) >> 2) & 0x3);
    *(unsigned char *)((a4 + 0x7)) = (((unsigned int)((unsigned int)((unsigned int)(unsigned char)(*(signed char *)(((t0 + 0x3) + 0x0))) >> 2) >> 2) >> 1) & 0x1);
    return 0x0;
}
