/* Library code: C that behaves like this game's own bytes. */
/* Straight-line functions with calls and guards (batch gen_ej): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o106_uchar { char p[0x106]; unsigned char v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o118_int { char p[0x118]; int v; };
struct o118_uint { char p[0x118]; unsigned int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1F_uchar { char p[0x1F]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o20_uchar { char p[0x20]; unsigned char v; };
struct o24_float { char p[0x24]; float v; };
struct o24_ushort { char p[0x24]; unsigned short v; };
struct o26_ushort { char p[0x26]; unsigned short v; };
struct o274_float { char p[0x274]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2D9_uchar { char p[0x2D9]; unsigned char v; };
struct o2DA_uchar { char p[0x2DA]; unsigned char v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o2E8_int { char p[0x2E8]; int v; };
struct o30_float { char p[0x30]; float v; };
struct o308_uint { char p[0x308]; unsigned int v; };
struct o30D_uchar { char p[0x30D]; unsigned char v; };
struct o30E_uchar { char p[0x30E]; unsigned char v; };
struct o30F_uchar { char p[0x30F]; unsigned char v; };
struct o314_uchar { char p[0x314]; unsigned char v; };
struct o38_float { char p[0x38]; float v; };
struct o38_ushort { char p[0x38]; unsigned short v; };
struct o3A_ushort { char p[0x3A]; unsigned short v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o40_int { char p[0x40]; int v; };
struct o44_float { char p[0x44]; float v; };
struct o44_int { char p[0x44]; int v; };
struct o48_float { char p[0x48]; float v; };
struct o48_short { char p[0x48]; short v; };
struct o48_ushort { char p[0x48]; unsigned short v; };
struct o4A_short { char p[0x4A]; short v; };
struct o4A_ushort { char p[0x4A]; unsigned short v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4C_short { char p[0x4C]; short v; };
struct o5_uchar { char p[0x5]; unsigned char v; };
struct o50_float { char p[0x50]; float v; };
struct o50_ushort { char p[0x50]; unsigned short v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o58_uint { char p[0x58]; unsigned int v; };
struct o5C_uint { char p[0x5C]; unsigned int v; };
struct o6_uchar { char p[0x6]; unsigned char v; };
struct o60_uint { char p[0x60]; unsigned int v; };
struct o64_uint { char p[0x64]; unsigned int v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o6C_uint { char p[0x6C]; unsigned int v; };
struct o7_uchar { char p[0x7]; unsigned char v; };
struct o710A_uchar { char p[0x710A]; unsigned char v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o71E4_float { char p[0x71E4]; float v; };
struct o71F4_short { char p[0x71F4]; short v; };
struct o71F4_ushort { char p[0x71F4]; unsigned short v; };
struct o7C_ushort { char p[0x7C]; unsigned short v; };
struct o7E_ushort { char p[0x7E]; unsigned short v; };
struct o8_float { char p[0x8]; float v; };
struct o8_uchar { char p[0x8]; unsigned char v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o9_uchar { char p[0x9]; unsigned char v; };
struct o98_uint { char p[0x98]; unsigned int v; };
struct o9C_uint { char p[0x9C]; unsigned int v; };
struct oA_uchar { char p[0xA]; unsigned char v; };
struct oA8_uint { char p[0xA8]; unsigned int v; };
struct oB_uchar { char p[0xB]; unsigned char v; };
struct oC_float { char p[0xC]; float v; };
struct oC_uchar { char p[0xC]; unsigned char v; };
struct oD_uchar { char p[0xD]; unsigned char v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF2_short { char p[0xF2]; short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int vmu_check_dispatch(int, int, int, int);
int FUN_0c01f060(int, int);
int vmu_menu_step_notice_by_kind(int, int);
int vmu_menu_state_write_vmgame(int, int);
int vmu_menu_state_rewrite_vmgame(int, int);
int vmu_menu_spawn_message(int);
int FUN_0c01fc44(void);
extern int vmu_menu_update_objs();
int vmu_menu_poll_confirm_cancel(int, int);
int FUN_0c026554(int);
int game_draw_frame(void);
int fx_spawn_034884(int);
int fx_spawn_hit_effect(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c055562(void);
int FUN_0c0555dc(void);
int game_reset_objects(void);
int obj_create(int, int, int);
int obj_create_beside(int, int, int, int, int);
int obj_destroy(int);
int obj_tick_class(int, int, int, int);
int FUN_0c05f2d4(int, int);
int FUN_0c05f952(void);
int res_switch_scene(int);
int obj_part_set_model(int, int, int);
int FUN_0c06b868(int, int);
int obj_force_owner_state27(int, int);
int obj_set_owner_hit_record(int, int);
int pl_start_motion(int, int, int);
int pl_step_motion(int);
int pl_step_motion_owner(int);
int pl_apply_velocity(int);
int pl_apply_motion_translation(int);
int pl_turn_to_opponent(int, int);
int obj_set_record_char(int, int);
int obj_set_record(int, int);
int pl_end_action_choose_state(int, int, int, int, int, int, int, int, int, int, int, int);
int bgm_stop_all(void);
int FUN_0c0a3762(int, int);
int snd_play_char_voice(int, int);
int stage_obj_load_layout_pos(int);
int stage_random_spawn_position(int);
int fx_spawn_23(int, int, int);
int savedata_reset_keep_ranking(void);
int attract_run_sequence(int, int, int, int, int, int, int, int, int, int, int);
int cam_init_records(void);
int cam_update_view_matrices(int, int, int, int, int, int, int, int);
int cam_reset_shake(int, int, int, int);
int gfx_set_background_color(int, int, int);
float math_cos_angle16(int);
float math_sin_angle16(int);
int FUN_0c0e2120(int);
int math_vec3_accumulate(int, int);
int FUN_0c0e2260(int, int, int);
int math_vec3_normalize_fast(int);
int _modls(void);
extern int _quick_odd_mvn();
int FUN_0c0f05c8(void);
int FUN_0c0f0d04(int, int, int, int);
int vib_port_has_vibration(int);
int FUN_0c109800(int);
int FUN_0c10b260(int, int);
int FUN_0c10b3e0(int);
int FUN_0c10b480(int, int);
int FUN_0c113e3c(int, int, int, int, int, int, int, int, int, int);
int FUN_0c113fd2(int, int, int, int, int, int, int, int, int, int);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int gdFsClose(int);
int kdSetSetCondition(void);
int memset(int, int, int);
int nlMultiMatrix(int);
int thunk_math_mat_get_translate(int, int);
int thunk_FUN_0c062d78(void);
int stage_gimmick_17_spawn(void);
int fx_spawn_05(int a4, int a5, int a6);
int fx_update_22(int a4);
int fx_spawn_04015c(int a4);
int pl_jack_special0_update(int a4);
int stage_spawn_type11(int a4);
int nlLookAtUp(int a4, int a5, int a6);
int fx_spawn_03fab4(int a4);
int fx_spawn_0454b4(int a4, int a5);
int pl_ryoma_attack_kind2_phase2(int a4);
int stage_gimmick_40_spawn(int a4);
int fx_spawn_14(int a4, int a5);
void gdFsReqGdRd(int a4, int a5, int a6, int a7);
int FUN_0c0f4202(int a4, int a5, int a6);
int FUN_0c0f09f6(int a4, int a5, int a6, int a7);
int FUN_0c1098e0(int a4);
int FUN_0c11408a(int a4, int a5, int a6);
int FUN_0c113ef4(int a4, int a5, int a6);
int logo_spawn_overlay(float f4);
int fx_spawn_0387ec(int a4);
int stage_spawn_type01(int a4);
int fx_spawn_10(int a4, int a5);
int fx_spawn_32(int a4, int a5);
int FUN_0c01ec9c(int a4, int a5, int a6, int a7);
int FUN_0c033528(int a4);
int vmu_check_step(int a4, int a5, int a6, int a7);
int attract_mode_update(int a4, int a5, int a6, int a7, float f4);
int FUN_0c0109e4(void);



int nlLookAtUp(int a4, int a5, int a6)
{
    int stk[26];

    *(unsigned int *)(((int)stk + 0)) = a6;
    *(float *)(((int)stk + 4)) = ((*(float *)((a4 + 0x0))) - (*(float *)((a5 + 0x0))));
    *(float *)(((int)stk + 8)) = (((((struct o4_float *)(a4))->v)) - ((((struct o4_float *)(a5))->v)));
    *(float *)(((int)stk + 12)) = (((((struct o8_float *)(a4))->v)) - ((((struct o8_float *)(a5))->v)));
    FUN_0c0e2260((*(int *)(((int)stk + 0))), (((int)stk + 0) + 0x4), (((int)stk + 0) + 0x1C));
    FUN_0c0e2260((((int)stk + 0) + 0x4), (((int)stk + 0) + 0x1C), (((int)stk + 0) + 0x10));
    math_vec3_normalize_fast((((int)stk + 0) + 0x1C));
    math_vec3_normalize_fast((((int)stk + 0) + 0x10));
    math_vec3_normalize_fast((((int)stk + 0) + 0x4));
    *(float *)(((int)stk + 40)) = (*(float *)(((int)stk + 28)));
    *(float *)(((int)stk + 56)) = (*(float *)(((int)stk + 32)));
    *(float *)(((int)stk + 72)) = (*(float *)(((int)stk + 36)));
    *(float *)(((int)stk + 88)) = 0.0f;
    *(float *)(((int)stk + 44)) = (*(float *)(((int)stk + 16)));
    *(float *)(((int)stk + 60)) = (*(float *)(((int)stk + 20)));
    *(float *)(((int)stk + 76)) = (*(float *)(((int)stk + 24)));
    *(float *)(((int)stk + 92)) = 0.0f;
    *(float *)(((int)stk + 48)) = (*(float *)(((int)stk + 4)));
    *(float *)(((int)stk + 64)) = (*(float *)(((int)stk + 8)));
    *(float *)(((int)stk + 80)) = (*(float *)(((int)stk + 12)));
    *(float *)(((int)stk + 96)) = 0.0f;
    *(float *)(((int)stk + 52)) = 0.0f;
    *(float *)(((int)stk + 68)) = 0.0f;
    *(float *)(((int)stk + 84)) = 0.0f;
    *(float *)(((int)stk + 100)) = 1.0f;
    nlMultiMatrix((((int)stk + 0) + 0x28));
    return (FUN_0c0e2120(a4));
}


void gdFsReqGdRd(int a4, int a5, int a6, int a7)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    if ((a4 != 0) && (t0 = (((struct o4C_short *)(a4))->v), t0 != 0)) {
        if ((*(int *)(((*(int *)((a4 + 0x0))) + 0x1C))) == 0) {
            t0 = *(int *)((a4 + 0x14));
            t1 = *(int *)((a4 + 0x8));
            t2 = *(int *)((a4 + 0x10));
            if ((int)(t0 + t1) >= (int)(t1 + t2)) {
                *(unsigned int *)((a4 + 0x18)) = 0x0;
                (((struct o50_ushort *)(a4))->v) = 0x1;
            } else {
                t3 = a5;
                if ((int)(a5 + (t0 + t1)) > (int)(t1 + t2)) {
                    t3 = ((t1 + t2) - (t0 + t1));
                }
                if (t3 == 0) {
                    *(unsigned int *)((a4 + 0x18)) = 0x0;
                    (((struct o50_ushort *)(a4))->v) = 0x1;
                } else {
                    t2 = _builtin_get_imask();
                    _builtin_set_imask(0xF);
                    t4 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)(((*(int *)((a4 + 0x0))) + 0xC))) + 0x8)))))((t0 + t1), t3, a6, a7);
                    if (t4 != 0) {
                        *(unsigned int *)(((*(int *)((a4 + 0x0))) + 0x1C)) = a4;
                        *(unsigned int *)((a4 + 0x3C)) = t4;
                        *(unsigned int *)((a4 + 0x1C)) = t3;
                        (((struct o50_ushort *)(a4))->v) = 0x2;
                        (((struct o4A_ushort *)(a4))->v) = 0x1;
                        (((struct o48_ushort *)(a4))->v) = 0x4;
                        *(unsigned int *)((a4 + 0x20)) = 0x0;
                        *(unsigned int *)((a4 + 0x18)) = 0x0;
                        t0 = ((int (*)(void))(((((struct o40_int *)((*(int *)(((*(int *)((a4 + 0x0))) + 0xC)))))->v))))();
                    } else {
                        (((struct o50_ushort *)(a4))->v) = 0x1;
                    }
                    _builtin_set_imask(((unsigned int)(((t2 & 0xF) << 2) << 2) >> 4));
                    
                }
            }
        }
    }
}
