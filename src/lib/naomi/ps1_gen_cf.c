/* Library code: C that behaves like this game's own bytes. */
/* Straight-line functions with calls and guards (batch gen_cf): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_short { char p[0x10]; short v; };
struct o10_uchar { char p[0x10]; unsigned char v; };
struct o10_ushort { char p[0x10]; unsigned short v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o118_uint { char p[0x118]; unsigned int v; };
struct o12_uchar { char p[0x12]; unsigned char v; };
struct o13_uchar { char p[0x13]; unsigned char v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o1F_uchar { char p[0x1F]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o274_float { char p[0x274]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2D9_uchar { char p[0x2D9]; unsigned char v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o308_int { char p[0x308]; int v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o5_uchar { char p[0x5]; unsigned char v; };
struct o6_uchar { char p[0x6]; unsigned char v; };
struct o7_uchar { char p[0x7]; unsigned char v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o8_short { char p[0x8]; short v; };
struct o8_ushort { char p[0x8]; unsigned short v; };
struct oA_uchar { char p[0xA]; unsigned char v; };
struct oB_uchar { char p[0xB]; unsigned char v; };
struct oC_uchar { char p[0xC]; unsigned char v; };
struct oD_uchar { char p[0xD]; unsigned char v; };
struct oE_uchar { char p[0xE]; unsigned char v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oF_uchar { char p[0xF]; unsigned char v; };
int FUN_0c010134(void);
int FUN_0c010138(void);
int FUN_0c0158e4(void);
int FUN_0c01d31a(void);
int FUN_0c01d7ee(void);
int FUN_0c054114(void);
int FUN_0c05414e(void);
int FUN_0c05590c(int);
int FUN_0c0a2f66(int);
int FUN_0c0a3308(int);
int snd_play_se_indexed(int);
int FUN_0c0a3fce(int);
int FUN_0c0a4030(int);
int FUN_0c0a4070(int, int);
int FUN_0c0a40b0(int);
int FUN_0c0a40e4(int);
int FUN_0c0a413a(int);
int FUN_0c0a416c(int);
int FUN_0c0a502e(void);
int FUN_0c0ad254(int);
int FUN_0c0ad7a4(int);
int FUN_0c0cd0de(int, int, int, int);
int FUN_0c0ce404(int, int, int, int);
int FUN_0c0d48ea(int);
int FUN_0c0d51d2(int);
int math_vec3_accumulate(int, int);
extern float _builtin_sqrtf(float);
int bgm_play_win(void);
extern int bgm_stop_all();
int bgm_stop_streams(void);
int cam_request_mode_06(int, int);
int dbg_print_at(int, float, float);
int dbgedit_update(float, float, float, float, float, float);
int dbgmotion_update(void);
int ending_mode_frame(int, int, int, int);
int fx_spawn_0488b8(int, int, int, int);
int fx_spawn_056e2c(void);
int fx_spawn_0577ca(void);
int fx_spawn_057ab6(void);
int game_poll_start_button(void);
int game_poll_start_button_pl(int);
int math_atan_angle16(float);
float math_rand_float(void);
int obj_set_mode_owner(int, int, int);
int pl_add_gauge_by_percent(int);
int pl_add_gauge_by_value(int);
int pl_add_gauge_random(void);
int pl_apply_acceleration(int);
int pl_apply_velocity(int);
int pl_change_state(int, int, int, int);
int pl_end_action_reset(int);
int pl_get_hit_count_of_opponent(int);
int pl_gunrock_mode08_09_update_v0(int);
int pl_gunrock_mode08_09_update_v1(int);
int pl_step_motion(int);
int res_load_match_sound_banks(int, int, int);
int snd_play_char_voice(int, int);
int snd_play_side_se(int, int);
int sprintf(int, int, ...);
int stage_type01_init_thrown_from_owner(int);
int stage_type01_spawn_ground_fx(int);
int testmode_check_exit_combo(void);
int testmode_draw_text_table(int, int);
int testmode_draw_title_and_footer(int);
int testmode_move_cursor(int, int, int, int);
int FUN_0c0cd58e(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7);
int FUN_0c05436c(void);
int FUN_0c054760(int a4, int a5, int a6, int a7);
int FUN_0c05426a(void);
int game_flow_start_ending(int a4);
int FUN_0c0cd1ea(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9);
int FUN_0c0a5506(void);
int FUN_0c0cd028(int a4, int a5, int a6, int a7);
int FUN_0c0adaa6(int a4);
int FUN_0c0ae3ec(int a4);
int FUN_0c0548e4(void);
int FUN_0c0ae682(int a4);
int FUN_0c077824(int a4);
int FUN_0c0adf60(int a4);
int FUN_0c0ad91c(int a4);
int FUN_0c0adc60(int a4);
int FUN_0c0ad2f2(int a4);
int FUN_0c054886(void);
int FUN_0c0df2e0(float f4);
int FUN_0c0546c6(void);
int FUN_0c0adcf4(int a4);
int FUN_0c054ab8(void);
int FUN_0c0ae224(int a4);
int FUN_0c077db2(int a4, int a5, int a6, int a7);
int FUN_0c0ad744(int a4, int a5, int a6, int a7);
int FUN_0c054870(void);
int FUN_0c0adce2(int a4);
int FUN_0c0546b6(void);
int FUN_0c054af6(void);
int FUN_0c0ae4b2(int a4);
int FUN_0c0add38(int a4);
int FUN_0c0ae3e4(int a4);
int FUN_0c0ae488(int a4);
int FUN_0c097e76(int a4);
void FUN_0c0ae258(void);
int FUN_0c0d51d0(void);


int FUN_0c0df2e0(float f4)
{
    register float u0;
    register int t1;

    if (_builtin_fabsf(f4) > 1.0f) {
        return 0x0;
    }
    u0 = (f4 * f4);
    if (_builtin_sqrtf((1.0f - u0)) != 0.0f) {
        return math_atan_angle16((f4 / _builtin_sqrtf((1.0f - u0))));
    }
    t1 = 0xC000;
    if (f4 > 0.0f) {
        t1 = 0x4000;
    }
    return t1;
}
