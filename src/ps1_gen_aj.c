/* Library code: C that behaves like this game's own bytes. */
/* Straight-line functions with calls and guards (batch gen_aj): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_short { short v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o0_ushort { unsigned short v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_float { char p[0x10]; float v; };
struct o10_int { char p[0x10]; int v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o10C8_int { char p[0x10C8]; int v; };
struct o118_uint { char p[0x118]; unsigned int v; };
struct o14_float { char p[0x14]; float v; };
struct o14_int { char p[0x14]; int v; };
struct o18_float { char p[0x18]; float v; };
struct o2_short { char p[0x2]; short v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o24_float { char p[0x24]; float v; };
struct o24_int { char p[0x24]; int v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o270_float { char p[0x270]; float v; };
struct o274_float { char p[0x274]; float v; };
struct o278_float { char p[0x278]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o28_int { char p[0x28]; int v; };
struct o2D4_float { char p[0x2D4]; float v; };
struct o2DC_int { char p[0x2DC]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o30_int { char p[0x30]; int v; };
struct o30_uint { char p[0x30]; unsigned int v; };
struct o308_int { char p[0x308]; int v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o710A_uchar { char p[0x710A]; unsigned char v; };
struct o710B_uchar { char p[0x710B]; unsigned char v; };
struct o710C_uchar { char p[0x710C]; unsigned char v; };
struct o719E_short { char p[0x719E]; short v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o71C8_int { char p[0x71C8]; int v; };
struct o71CC_int { char p[0x71CC]; int v; };
struct o71F4_ushort { char p[0x71F4]; unsigned short v; };
struct o71F8_int { char p[0x71F8]; int v; };
struct o71FC_int { char p[0x71FC]; int v; };
struct o7207_uchar { char p[0x7207]; unsigned char v; };
struct o720A_uchar { char p[0x720A]; unsigned char v; };
struct o720E_uchar { char p[0x720E]; unsigned char v; };
struct o7216_uchar { char p[0x7216]; unsigned char v; };
struct o7225_uchar { char p[0x7225]; unsigned char v; };
struct o7232_uchar { char p[0x7232]; unsigned char v; };
struct o7236_uchar { char p[0x7236]; unsigned char v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
struct oFCC_int { char p[0xFCC]; int v; };
struct oFCC_uint { char p[0xFCC]; unsigned int v; };
struct oFD8_int { char p[0xFD8]; int v; };
struct oFD8_uint { char p[0xFD8]; unsigned int v; };
struct oFDC_int { char p[0xFDC]; int v; };
struct oFDC_uint { char p[0xFDC]; unsigned int v; };
int ADXSTM_GetCurOfst(int, int);
int FUN_0c0100b0(int, int);
int ending_obj_init_basic(int);
int ending_obj_set_sprite(int, int);
int FUN_0c01e594(void);
int FUN_0c01e5cc(void);
int vmu_menu_spawn_message(int);
int FUN_0c01f9a0(void);
int vmu_menu_update_objs(int, int, int, int);
int vmu_menu_poll_confirm_cancel(int);
int ui_draw_text_stub(void);
int fx_spawn_03a024(int);
int FUN_0c03a12c(int);
int fx_spawn_with_params(int, float, float, float, float);
int fx_spawn_04aa24(int, int);
int ai_clear_op_state(void);
int obj_create(int, int, int);
int item_init_hold_pose(int);
int FUN_0c05fbee(int);
int res_load_file_raw_c(int);
int res_load_pl_models(int);
int sys_load_file(int, int);
int FUN_0c0612f4(int, int, int);
int math_vec3_sub(int, int, int);
float math_vec3_length(int);
int math_mat_transform_point(int, int);
int res_load_pl_motion_data(int, int);
int FUN_0c062cf4(int, int);
int FUN_0c063318(int);
int FUN_0c0633c0(int);
int FUN_0c0646fe(int);
int FUN_0c08c15a(int);
int FUN_0c08e4bc(int, int, int, int, int, int);
int pl_hitreact_start_vibration(int);
int FUN_0c091eee(void);
int pl_reset_pose(int);
int pl_start_motion(int, int, int);
int pl_step_motion(int);
int pl_vib_start_preset(int, int);
int pl_get_held_item_class(int, int, int);
int hit_find_wall_entry_by_kind(int, int);
int pl_apply_velocity(int);
int pl_apply_acceleration(int);
int pl_end_action_choose_state(int);
int pl_change_state(int, int, int, int, int, int, int, int, int);
int snd_play_se(int);
int menu_find_cursor_task(void);
int obj_set_mode_owner(int, int);
int obj_can_interact(int, int, int, int, int, int, int, int, int, int, int, int);
int fx_spawn_debris_sprites(int, int);
int stage_obj_play_break_se(int);
float FUN_0c0d5bc0(void);
int cam_set_view_matrix(int, float);
int nlObjPutUseViewMatrixTrnsl(int, float);
int FUN_0c0dd6c0(int);
int FUN_0c0dd9e0(int);
int math_atan_angle16(float);
float math_rand_float(void);
float math_sin_reduce_quadrant(int, float);
int nlScale(float, float, float);
int nlTranslate(float, float, float);
int nlUnitMatrix(void);
float FUN_0c0e2240(int, int);
int syRtcDateToCount(void);
int FUN_0c0e50ec(void);
int snd_bank_load(int, int);
int snd_bank_unload(int);
int snd_send_command(int);
int FUN_0c0e6518(int);
int _divlu(void);
int _modls(void);
int _modlu(int);
int _quick_evn_mvn(int, int);
int _quick_odd_mvn(void);
int nl_objasm_draw_obj_opaque(void);
int nl_objasm_draw_obj(int, int, float);
int FUN_0c0eb5a4(void);
int FUN_0c0eb6f4(void);
int FUN_0c0efdee(int);
int FUN_0c0f2292(int);
int vib_port_has_vibration(int);
int ADXT_Stop(void);
int ADXT_GetStat(int);
int FUN_0c0f553a(int);
int kmSetFogDensity(int);
int FUN_0c0fcbc0(int, int, int, int);
int FUN_0c0ff1ac(int, int, int, int);
int FUN_0c0ff4b4(int);
int kdExitSystem(void);
int kdSetBlockWrite(int, ...);
int FUN_0c10486e(int);
int search_fat(int, int, int, int);
int check_fat_xross(int, int);
int set_fat(int, int, int);
int FUN_0c1059ac(int, int, int);
int FUN_0c10687c(int);
int FUN_0c1094a0(int, int);
int FUN_0c1096a2(int);
int FUN_0c10b680(void);
int FUN_0c10e146(int);
int kmiWriteRegister(int, int);
int FUN_0c114b50(int);
extern void _builtin_ld_ext(float (*)[4]);
extern void _builtin_st_ext(float (*)[4]);
int memcpy(int, int, int);
int memset(int, int, int);
int pdVmsLcdIsReady(int);
int thunk_math_mat_get_translate(int, int);
int vsprintf(int, int, int);
int FUN_0c0e4750(int a4, int a5);
int FUN_0c0f2d9e(int a4, int a5);
int FUN_0c10489c(int a4, int a5);
int FUN_0c114c70(int a4);
int FUN_0c0972b2(int a4);
int FUN_0c09939c(void);
int snd_play_char_voice(int a4, int a5);
int cam_update_view_matrices(float f4);
int syRtcMakeAgeOfMoon(void);
int FUN_0c0f2664(void);
int FUN_0c0f6128(int a4);
int mpdrv_dpf(int a4, int a5, int a6, int a7, int a8, int a9, int a10);
int FUN_0c016e02(void);
int FUN_0c01c7c4(int a4);
int FUN_0c01c80a(int a4);
int FUN_0c01c75e(int a4);
int vmu_menu_step_save_done_notice(int a4, int a5, int a6, int a7);
int conv_s16x6_to_f32(int a4, int a5);
int ui_fade_start(int a4, int a5, int a6, int a7);
int FUN_0c04ca94(int a4, int a5, int a6, int a7);
int FUN_0c04cb50(int a4);
int pl_mode10_update(int a4, int a5, int a6, int a7);
int pl_ayame_state22_phase0(int a4);
int FUN_0c08c198(int a4, int a5, int a6, int a7);
int pl_hitreact_finish(int a4);
int pl_start_hit_freeze(int a4);
int bgm_stop_streams(void);
int FUN_0c0a3d16(int a4);
int menu_ui_spawn_38(void);
int FUN_0c0b1652(int a4, int a5, float f4);
int FUN_0c0cf898(int a4, int a5);
int FUN_0c0d0d80(int a4, int a5, int a6, int a7);
int FUN_0c0e6310(int a4);
int sys_get_video_standard(void);
int FUN_0c0f40bc(int a4);
int syCfgGetIndividualID(int a4, int a5, int a6);
int adxf_ExecOne(int a4);
int search_fat_free_xross(int a4, int a5, int a6, int a7);
int FUN_0c110be0(void);
int hit_load_cylinder_world(int a4, int a5, int a6);
int FUN_0c02ced4(int a4, float f4, float f5);
int FUN_0c050a12(int a4);
int FUN_0c05d1ea(int a4);
int res_textures_release(int a4);
int pl_ryoma_mode04_enter(int a4);
int FUN_0c097f5c(int a4, int a5, int a6);
int FUN_0c09898c(int a4);
int pl_find_opponent_in_hit_list(int a4);
int pl_find_opponent_in_target_list(int a4);
int pl_check_dual_button_input(int a4);
int pl_try_char_special_move(int a4, int a5, int a6, int a7);
int snd_play_side_se(int a4, int a5);
void FUN_0c0a3d5c(int a4, int a5);
void FUN_0c0a3dcc(int a4, int a5);
void FUN_0c0a3e64(int a4, int a5);
int FUN_0c0b5420(int a4);
int stage_obj_on_break(int a4);
int FUN_0c0d609e(int a4, int a5);
float math_sin_float(float f4);
int FUN_0c0e6758(int a4, int a5);
int FUN_0c0e64c4(int a4);
int FUN_0c0efe10(int a4);
int buCalcCRC(int a4, int a5, int a6, int a7);
int kmCreateTextureSurface(int a4, int a5, int a6, int a7);
int mpdrv_insertnop(int a4);
int pad_state_clear(void);
int FUN_0c01ef8e(int a4, int a5, int a6, int a7);
int FUN_0c026f36(int a4, int a5, int a6);
int FUN_0c02e050(int a4, float f4, float f5);
int FUN_0c03d2fc(int a4, int a5, int a6);
int FUN_0c042256(int a4, int a5, int a6);
int res_load_file_unpack(int a4);
int FUN_0c063fd2(int a4);
int FUN_0c064014(int a4);
int pl_hitreact_escape_input(int a4);
int FUN_0c09bc6e(int a4, int a5, int a6);
int vib_is_any_active(void);
int pl_get_hit_count_of_opponent(int a4);
int FUN_0c0a01ec(int a4, int a5, int a6);
int FUN_0c0a3308(int a4);
int FUN_0c0bfe76(int a4);
int nlSetLightDirection(int a4);
int FUN_0c0dff60(void);
int FUN_0c0e0820(float f4);
int FUN_0c0ffdba(void);
int vmu_menu_step_notice_wait_ok_flag(int a4, int a5, int a6, int a7);
int ai_op87(int a4);
int FUN_0c05b9a4(int a4);
int FUN_0c063428(int a4);
int FUN_0c0a4070(int a4, int a5);
void FUN_0c0a4030(int a4);
int obj_find_hitting_player(int a4);
int FUN_0c0ccfba(int a4, int a5, int a6, int a7);
int nlobjput_sub(int a4);
int nlPopMatrix(int a4);
int nlobjput_sub_trnsl(int a4, float f4);
int FUN_0c0e6478(int a4);
int FUN_0c10b614(int a4);
int FUN_0c114b10(int a4);
int FUN_0c01d924(void);
int ai_op42_wait_until_idle(int a4);



int FUN_0c0f2d9e(int a4, int a5)
{
    register int t0;

    t0 = pdVmsLcdIsReady(a4);
    if (t0 == 0) {
        return 0xFFFFFFFE;
    }
    t0 = kdSetBlockWrite(0x0, a5, 0x30);
    if ((int)t0 < 0) {
        return 0xFFFFFFFF;
    }
    return 0x0;
}


int mpdrv_dpf(int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
    int stk[14];
    register int t10;
    register int t2;
    register int t5;

    stk[3] = a8;
    stk[4] = a9;
    stk[5] = a10;
    t10 = 0x10C8;
    if (((((struct o10C8_int *)((*(int *)0xC843924)))->v)) != 0) {
        t2 = ((((int)stk + 4) + 0x8) + 0x4);
        if ((0x3 & ((((int)stk + 4) + 0x8) + 0x4)) != 0) {
            t2 = ((((int)stk + 4) + 0x8) + 0x8);
        }
        t5 = *(int *)0xC3476EC;
        t10 = (vsprintf(0xC842728, a8, t2));
        if (t5 != 0) {
            t10 = (((int (*)(int, int, int, int, int, int, int, int, int, int, int))(t5))(0xC842728, a5, a6, a7, *(int *)((int)stk + 4), *(int *)((int)stk + 4 + 4), *(int *)((int)stk + 4 + 8), *(int *)((int)stk + 4 + 12), *(int *)((int)stk + 4 + 16), *(int *)((int)stk + 4 + 20), *(int *)((int)stk + 4 + 24)));
        }
    }
    return t10;
}


int search_fat_free_xross(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;

    for (;;) {
        t0 = search_fat(a4, 0xFFFC, a6, a7);
        if ((int)t0 < 0) {
            break;
        }
        t1 = check_fat_xross(a4, t0);
        if ((int)t1 < 0) {
            set_fat(a4, t0, 0xFFFA);
            continue;
        }
        return t0;
    }
    return 0xFFFFFFFF;
}


int buCalcCRC(int a4, int a5, int a6, int a7)
{
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t1;

    t2 = 0x0;
    t3 = 0x0;
    t4 = a7;
    t5 = a4;
    t6 = 0x0;
    for (;;) {
        if ((unsigned int)t6 >= (unsigned int)a5) {
            break;
        }
        t1 = *(signed char *)((t5 + 0x0));
        t5 = (t5 + 0x1);
        t4 = 0x8;
        t1 = (t1 << 8);
        t2 = (t2 ^ t1);
        for (;;) {
            t3 = t2;
            t3 = (t3 << 1);
            if (((t2) & 0x8000) != 0) {
                t2 = t3;
                t2 = (t2 ^ 0x1021);
            } else {
                t2 = t3;
            }
            t4 = (t4 - 0x1);
            if (t4 == 0) {
                break;
            }
        }
        t6 = (t6 + 0x1);
    }
    return t2;
}
