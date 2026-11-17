/* Library code: C that behaves like this game's own bytes. */
/* Straight-line functions with calls and guards (batch gen_bk): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_short { short v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o0_ushort { unsigned short v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o10E8_int { char p[0x10E8]; int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o2_short { char p[0x2]; short v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o26_ushort { char p[0x26]; unsigned short v; };
struct o28_float { char p[0x28]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o38_float { char p[0x38]; float v; };
struct o38_ushort { char p[0x38]; unsigned short v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o4_ushort { char p[0x4]; unsigned short v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o6C_int { char p[0x6C]; int v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o71BA_uchar { char p[0x71BA]; unsigned char v; };
struct o71BC_uchar { char p[0x71BC]; unsigned char v; };
struct o71C8_int { char p[0x71C8]; int v; };
struct o721A_uchar { char p[0x721A]; unsigned char v; };
struct o7228_ushort { char p[0x7228]; unsigned short v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oB_uchar { char p[0xB]; unsigned char v; };
struct oC_uchar { char p[0xC]; unsigned char v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int ADXCRS_Lock(void);
int ADXCRS_Unlock(void);
int ADXERR_CallErrFunc(int, ...);
int ADXSTM_OpenRange(int, int, int);
int keycfg_obj_in_mask(int);
extern int FUN_0c022a5a();
int hit_offset_point_by_owner(int, int, int);
int fx_spawn_on_player_part(int, int, int, int, int, int, int, int);
int ai_clear_op_state(void);
int ai_script_branch(int, int);
int FUN_0c0555dc(void);
int obj_release(int);
int obj_destroy(int);
int pl_garuda_victim_phase0(int);
int pl_garuda_victim_phase1(int);
int pl_garuda_victim_phase2(int);
int pl_garuda_victim_phase3(int);
int pl_garuda_victim_phase4(int);
int pl_garuda_victim_phase5(int);
int pl_garuda_victim_phase6(int);
int pl_garuda_victim_phase8(int);
int pl_garuda_victim_phase9(int, int, int, int);
int obj_force_owner_state27(int, int);
int obj_set_owner_hit_record(int, int);
int pl_timer_disable(int);
int pl_start_motion(int, int, int);
int pl_step_motion(int);
int pl_step_motion_owner(int);
int FUN_0c09c45a(int);
int pl_mash_reduce_counter(int, int);
int pl_apply_velocity(int);
int pl_apply_acceleration(int);
int pl_apply_motion_translation(int);
int pl_landed(int);
int pl_start_idle_motion(int);
int pl_end_action_choose_state(int);
int pl_set_velocity_forward(int, int, float);
int pl_change_state(int, int, int, int);
int bgm_stop_streams(void);
int menu_stage_select_open(int);
int menu_stage_select_state_step(int, int, int, int);
int FUN_0c0a58f4(int);
int FUN_0c0cb252(int);
int cam_set_shake_ramp(int, int);
float math_signed_sqrt(float);
float math_cos_angle16(int);
float math_sin_angle16(int);
int snd_send_command(int);
int FUN_0c0eb640(int, int);
int FUN_0c0f42ec(int, int);
int FUN_0c0f4968(int);
int ADXT_Stop(int, int, int, int);
int FUN_0c0f5898(int, int, int, int);
int kmLoadTexture(int, int, int, int);
int FUN_0c0fe978(int, int);
int cache_purge_range(int, int);
int FUN_0c0ff4b4(int);
int FUN_0c100260(void);
int FUN_0c105a14(int, int, int);
int FUN_0c108474(void);
int FUN_0c10848c(int, int);
extern int _builtin_tas(char *);
int gdFsClose(int);
int kdSetCallback(int, int, int);
int kdSetGetMediaInfoEx(int, int, int, int);
int mpdrv_dpf(int, int, int, int, int);
int mpdrv_set_allstatreq_ns(int);
int mpdrv_set_arctrl_ns(int, int);
int mpdrv_set_bread_ns(int, int, int, int, int);
int mpdrv_set_dkill_ns(int);
int mpdrv_set_dreq_ns(int);
int mpdrv_set_ft4ctrl_ns(int, int);
int mpdrv_set_getcond_ns(int, int);
int mpdrv_set_getlerr_ns(int, int, int, int, int);
int syCfgConvLang(int);
int syCfgGetDefaultLanguage(int, int);
int fx_tick_0375d4(int a4);
int pl_wangtang_special3_phase1(int a4);
int FUN_0c0cb344(int a4, int a5, int a6, int a7);
int pl_enter_state_38(int a4, int a5);
int FUN_0c0f0ae0(void);
int obj_release_all_but_class(int a4);
int pl_garuda_victim_phase7(int a4, int a5, int a6, int a7);
int pl_gunrock_mode04_phase2(int a4);
int pl_valgas_mode04_phase2(int a4);
int ADXT_StartAfs(int a4, int a5, int a6, int a7);
int kdSetBlockReadEx(int a4, int a5, int a6, int a7, int a8, int a9);
int kdSetGetLastErrorEx(int a4, int a5, int a6, int a7, int a8, int a9);
int FUN_0c0232ca(int a4, int a5, int a6, int a7);
int pl_kraken_mode04_phase0(int a4);
int syCfgGetLanguage(int a4, int a5, int a6);
int FUN_0c0f449e(int a4, int a5, int a6);
int FUN_0c1086cc(int a4, int a5, int a6, int a7);
int fx_tick_0416d8(int a4);
int ai_op81_wait_while_target_busy(int a4);
int pl_wangtang_start_motion_fx_17(int a4);
int pl_hitreact_07_update(int a4, int a5, int a6, int a7);
int pl_state_idle_init(int a4, int a5);
int menu_stage_select_step_dispatch(int a4, int a5, int a6, int a7);
int FUN_0c0e1900(int a4);
int FUN_0c0e5cc6(int a4, int a5);
int kdSetDeviceRequestEx(int a4, int a5, int a6, int a7);
int kdSetAllStatusRequestEx(int a4, int a5, int a6, int a7);
int kdSetGetConditionEx(int a4, int a5, int a6, int a7);
int kdSetDeviceKillEx(int a4, int a5, int a6, int a7);
int kdSetARControlEx(int a4, int a5, int a6, int a7);
int kdSetFT4ControlEx(int a4, int a5, int a6, int a7);
int pl_garuda_victim_dispatch(int a4, int a5, int a6, int a7);
int FUN_0c0a5086(void);
int FUN_0c0dd9f0(int a4, int a5);
int ai_op84_get_held_item_kind(int a4);
int pl_gunrock_mode04_phase3(int a4);
int gdDcfTrans32_(int a4, int a5, int a6);
int ai_op65(void);
int ai_op43(int a4);
int FUN_0c019488(int a4);
int ai_op31_jump_if_reg_ne(int a4, int a5);
int ai_op29_jump_if_reg_le(int a4, int a5);
int ai_op_end_frame(void);
float ai_op16_get_dist_from_center(int a4);



int gdDcfTrans32_(int a4, int a5, int a6)
{
    int stk[2];
    register int t0;

    *(unsigned int *)((((int)stk + 0) + 0x0)) = a5;
    *(unsigned int *)((((int)stk + 0) + 0x4)) = a6;
    t0 = FUN_0c0eb640(a4, ((int)stk + 0));
    if ((t0 == 0) && (a6 != 0)) {
        if ((((int)a5 >> 28) & 0xF) != 10) {
            if ((0x1F & a5) == 0) {
                FUN_0c0fe978(a5, a6);
            } else {
                cache_purge_range(a5, a6);
            }
        }
    }
    return t0;
}
