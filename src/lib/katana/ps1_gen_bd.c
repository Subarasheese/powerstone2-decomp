/* Library code: C that behaves like this game's own bytes. */
/* Straight-line functions with calls and guards (batch gen_bd): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_float { char p[0x10]; float v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o108_uchar { char p[0x108]; unsigned char v; };
struct o10E8_int { char p[0x10E8]; int v; };
struct o118_uint { char p[0x118]; unsigned int v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_float { char p[0x18]; float v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1AC_int { char p[0x1AC]; int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_short { char p[0x1C]; short v; };
struct o1C_ushort { char p[0x1C]; unsigned short v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o244_uint { char p[0x244]; unsigned int v; };
struct o28_float { char p[0x28]; float v; };
struct o2DC_int { char p[0x2DC]; int v; };
struct o2DC_uint { char p[0x2DC]; unsigned int v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o308_uint { char p[0x308]; unsigned int v; };
struct o30E_uchar { char p[0x30E]; unsigned char v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o40_float { char p[0x40]; float v; };
struct o40_int { char p[0x40]; int v; };
struct o44_float { char p[0x44]; float v; };
struct o44_int { char p[0x44]; int v; };
struct o48_float { char p[0x48]; float v; };
struct o48_uint { char p[0x48]; unsigned int v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_ushort { char p[0x50]; unsigned short v; };
struct o5C_float { char p[0x5C]; float v; };
struct o710B_uchar { char p[0x710B]; unsigned char v; };
struct o719E_short { char p[0x719E]; short v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o71BA_uchar { char p[0x71BA]; unsigned char v; };
struct o71BC_uchar { char p[0x71BC]; unsigned char v; };
struct o7207_uchar { char p[0x7207]; unsigned char v; };
struct o7237_uchar { char p[0x7237]; unsigned char v; };
struct o7243_uchar { char p[0x7243]; unsigned char v; };
struct o7248_int { char p[0x7248]; int v; };
struct o7248_uint { char p[0x7248]; unsigned int v; };
struct o72BC_uint { char p[0x72BC]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o84_uint { char p[0x84]; unsigned int v; };
struct o88_int { char p[0x88]; int v; };
struct o9C_int { char p[0x9C]; int v; };
struct oC_float { char p[0xC]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_short { char p[0xF2]; short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int opt_page2_obj_in_mask(int);
int FUN_0c0229d8(int, int, int, int);
int FUN_0c022b08(int, int, int);
int hit_offset_point_by_owner(int, int, int);
float FUN_0c02649a(int, int);
int fs_change_dir_ok(void);
int ui_sprite_queue_add(int, int, int, int, int, int);
int FUN_0c040260(int);
int FUN_0c040410(int);
int ai_clear_op_state(void);
int ai_calc_goal_angle(int, float);
int ai_calc_angle_to_goal_point(int);
int ai_angle_to_pad_dir(int);
int obj_create(int, int, int);
int obj_destroy(int, int, int, int);
int item_init_hold_pose(int);
int obj_part_set_model(int, int, int);
int mdl_vtx_iter_begin(int, int);
int mdl_vtx_iter_next(void);
int mdl_vtx_get_uv(int, int);
int mdl_vtx_set_uv(int, int);
int pl_gunrock_step_scale_script(int);
int pl_gunrock_start_motion_reset_slots(int, int, int);
int FUN_0c085606(int);
int pl_kraken_play_attached_keyframes(int);
int pl_hitreact_21_stick_vector(int);
int pl_timer_disable(int);
int pl_start_motion(int, int, int);
int pl_start_motion_owner(int, int, int);
int pl_step_motion(int);
int pl_spawn_hit_effect_with_se(int);
int pl_get_held_item_class(int);
int pl_get_hit_count_of_opponent(int);
int pl_apply_velocity(int);
int pl_apply_acceleration(int);
int pl_apply_motion_translation(int);
int pl_angle_to_opponent(int);
int pl_stick_dir_angle(int);
int pl_set_velocity_from_move_table(int, int);
int pl_landed(int);
int pl_no_ground(int);
int pl_update_walk_motion(int);
int pl_end_action_choose_state(int);
int pl_enter_state_27_28(int, int, int, int, int, int);
int pl_change_state(int, int, int);
int snd_play_char_voice(int, int);
int FUN_0c0a3cd6(int);
int stage_obj_load_layout_pos(int);
int obj_set_mode_owner(int, int, int);
int FUN_0c0ace1c(int, int);
int cam_set_shake_ramp(int, int);
float math_signed_sqrt(float);
float math_cos_angle16(int);
float math_sin_angle16(int);
int snd_send_command(int);
int _divls(void);
int _modls(int);
int _quick_odd_mvn(void);
int FUN_0c0eb5c8(int, int);
int gdFsWaitCompleteReq(int);
int gdFsReopenHn(int, int, int, int);
int FUN_0c0f28b6(int);
int FUN_0c0fe978(int, int, int, int);
int cache_purge_range(int, int, int, int);
int FUN_0c100260(void);
int kdSetCallback(int, int, int);
int FUN_0c1070a0(int);
int FUN_0c1070b8(int);
int FUN_0c107872(int, int);
int FUN_0c10796a(int, int);
int FUN_0c107df0(void);
int FUN_0c107e30(int, int, int, int);
int FUN_0c107ef6(int);
int FUN_0c108474(void);
int FUN_0c10848c(int, int);
int FUN_0c108734(void);
int FUN_0c10874c(int, int);
int mpdrv_dpf(int, int, int, int, int);
int mpdrv_set_bwrite_ns(int, int, int, int, int, int, int);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
extern int _builtin_tas(char *);
int mwRnaErrCallFunc(int, int, int, int);
int strcpy(int, int, int);
int strlen(int);
int thunk_math_mat_get_translate(int, int);
int FUN_0c023050(int a4, int a5, int a6, int a7);
int pl_hitreact_21_phase1(int a4);
int FUN_0c0f2b1c(int a4, int a5);
int FUN_0c05c3be(int a4);
int fx_tick_04015c(int a4, int a5, int a6, int a7);
int pl_gunrock_mode04_phase1(int a4);
int pl_valgas_mode04_phase1(int a4);
int pl_kraken_special_id3_phase1(int a4);
float pl_enter_state_30(int a4);
int ending_fade_obj_update(int a4, int a5, int a6, int a7);
int pl_wangtang_special2_phase3(int a4);
int pl_gunrock_mode01_03_update_v0(int a4);
int pl_valgas_state21_update(int a4);
int gdFsGetTocG(int a4, int a5, int a6, int a7);
int FUN_0c108582(int a4, int a5, int a6, int a7);
int FUN_0c10755a(int a4, int a5, int a6, int a7);
int ai_op19_get_dist_to_target(int a4);
int pl_hitreact_21_phase2(int a4);
int stage_gimmick_05_spawn(int a4);
int opt_page2_tick_bg_scroll(int a4);
int fx_tick_0396bc(int a4, int a5, int a6, int a7);
int pl_wangtang_mode07_phase1(int a4);
float pl_gunrock_start_motion_19(int a4);
int pl_state30_update(int a4);
int FUN_0c0ae520(int a4);
int stage_gimmick_39_spawn(int a4);
int FUN_0c108ac2(int a4, int a5, int a6, int a7);
int ai_op69(int a4, float f4);
int pl_state37_update(int a4);
int pl_state_walk_init(int a4);
int kdSetBlockWriteEx(int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11);
int FUN_0c015ac8(int a4);
int fx_tick_048aa0(int a4, int a5, int a6, int a7);
int FUN_0c0e5a94(int a4, int a5, int a6, int a7);
int fs_change_dir_path(int a4, int a5, int a6);
int gdDcfRead_(int a4, int a5, int a6, int a7);
int FUN_0c0ff90c(int a4, int a5, int a6, int a7);
int FUN_0c016ac2(int a4, int a5, int a6, int a7);
int pl_wangtang_attack_kind68(int a4, int a5, int a6, int a7);



int gdFsGetTocG(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = gdFsReopenHn((*(int *)(((*(int *)0xC346BD8) + 0x14))), 0x0, 0x0, 0x0);
    if (t0 == 0) {
        return 0xFFFFFFF3;
    }
    t1 = _builtin_get_imask();
    _builtin_set_imask(0xF);
    t2 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)(((*(int *)0xC346BD8) + 0xC))) + 0x38)))))(a4, a5, a6, a7);
    if (t2 != 0) {
        *(unsigned int *)((t0 + 0x3C)) = t2;
        (((struct o50_ushort *)(t0))->v) = 0x4;
        *(unsigned int *)(((*(int *)((t0 + 0x0))) + 0x1C)) = t0;
    }
    _builtin_set_imask(((unsigned int)(((t1 & 0xF) << 2) << 2) >> 4));
    t1 = 0xFFFFFFF3;
    if (t2 == 0) {
    } else {
        t1 = (gdFsWaitCompleteReq(t0));
    }
    return t1;
}


int gdDcfRead_(int a4, int a5, int a6, int a7)
{
    int stk[5];

    register int R2;
    register int R3;
    int R6;
    int R13;
    register int T_;
    register int v0_0;
    register int v0_1;
    register int v0_2;
    register int v0_3;
    v0_2 = a4;
    v0_3 = a5;
    R6 = a6;
    v0_0 = a7;
    *(unsigned int *)(((int)stk + 0)) = v0_3;
    *(unsigned int *)(((((int)stk + 0) + 0x4) + 0x0)) = v0_2;
    *(unsigned int *)(((((int)stk + 0) + 0x4) + 0x4)) = (*(int *)(((int)stk + 0)));
    *(unsigned int *)(((((int)stk + 0) + 0x4) + 0xC)) = 0x0;
    R13 = (R6);
    v0_1 = ((((int)stk + 0) + 0x4));
    v0_3 = (((((int)stk + 0) + 0x4) + 0x8));
    R6 = ((0x1FFFFFFF & R6));
    if ((v0_0 != 1)) goto L_C0FE04A;
    v0_2 = (0x11);
    L_C0FE054:;
    *(unsigned int *)((v0_3 + 0x0)) = R6;
    v0_2 = FUN_0c0eb5c8(v0_2, v0_1);
    v0_1 = (v0_2);
    if ((v0_2 == 0)) goto L_C0FE092;
    if (((((int)R13 >> 28) & 0xE) == 10)) goto L_C0FE092;
    v0_3 = (((((*(int *)(((int)stk + 0))) << 8) << 2) << 1));
    if (((0x1F & R13) != 0)) goto L_C0FE08C;
    FUN_0c0fe978(R13, v0_3, R6, v0_0);
    L_C0FE092:;
    v0_0 = (v0_1);
    L_C0FE094:;
    return v0_0;
    L_C0FE08C:;
    cache_purge_range(R13, v0_3, R6, v0_0);
    goto L_C0FE092;
    L_C0FE04A:;
    if ((v0_0 != 0)) goto L_C0FE058;
    v0_2 = (0x10);
    R6 = ((R6 | 0xA0000000));
    goto L_C0FE054;
    L_C0FE058:;
    v0_0 = (0xFFFFFFEE);
    goto L_C0FE094;
}


int FUN_0c0ff90c(int a4, int a5, int a6, int a7)
{
    register int t19;

    t19 = 0xFFFFFFFF;
    if (((*(signed char *)0xFFD80004) & 2) == 0) {
        (((struct o0_uchar *)0xFFD80000)->v) = 0x0;
        (((struct o4_uchar *)0xFFD80000)->v) = ((*(signed char *)0xFFD80004) & 0xFD);
        (((struct o1C_ushort *)0xFFD80000)->v) = a7;
        if (a5 != 0) {
            (((struct o244_uint *)(((int)_builtin_get_vbr())))->v) = 0xC0FF9E0;
            (((struct o0_uint *)0xC8051A8)->v) = a5;
            (((struct o4_uint *)0xC8051A8)->v) = a6;
            (((struct o1C_ushort *)0xFFD80000)->v) = (((((struct o1C_short *)0xFFD80000)->v)) | 0x20);
            *(unsigned short *)0xFFD00004 = (((*(short *)0xFFD00004) & 0xFFFFF0FF) | 0xF00);
            (((struct o1C_ushort *)0xFFD80000)->v) = (((((struct o1C_short *)0xFFD80000)->v)) & 0xFFFFFEFF);
        }
        (((struct o14_uint *)0xFFD80000)->v) = a4;
        (((struct o18_uint *)0xFFD80000)->v) = a4;
        (((struct o4_uchar *)0xFFD80000)->v) = ((*(signed char *)0xFFD80004) | 0x2);
        if (a5 == 0) {
            for (;;) {
                if ((((((struct o1C_short *)0xFFD80000)->v)) & 0x100) != 0) {
                    break;
                }
            }
            (((struct o4_uchar *)0xFFD80000)->v) = ((*(signed char *)0xFFD80004) & 0xFD);
            (((struct o1C_ushort *)0xFFD80000)->v) = (((((struct o1C_short *)0xFFD80000)->v)) & 0xFFFFFEFF);
        }
        t19 = 0x0;
    }
    return t19;
}
