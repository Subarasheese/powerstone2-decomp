/* Library code: C that behaves like this game's own bytes. */
/* Straight-line functions with calls and guards (batch gen_x): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_float { char p[0x10]; float v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o106_uchar { char p[0x106]; unsigned char v; };
struct o10B_uchar { char p[0x10B]; unsigned char v; };
struct o10F4_int { char p[0x10F4]; int v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_float { char p[0x18]; float v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_uchar { char p[0x1C]; unsigned char v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o1D_uchar { char p[0x1D]; unsigned char v; };
struct o1E_uchar { char p[0x1E]; unsigned char v; };
struct o1F_uchar { char p[0x1F]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o24_float { char p[0x24]; float v; };
struct o274_float { char p[0x274]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_int { char p[0x2C]; int v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o2DC_int { char p[0x2DC]; int v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2EC_int { char p[0x2EC]; int v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o40_int { char p[0x40]; int v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o64_int { char p[0x64]; int v; };
struct o64_uint { char p[0x64]; unsigned int v; };
struct o68_int { char p[0x68]; int v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o6C_uint { char p[0x6C]; unsigned int v; };
struct o70_uint { char p[0x70]; unsigned int v; };
struct o710A_uchar { char p[0x710A]; unsigned char v; };
struct o710B_uchar { char p[0x710B]; unsigned char v; };
struct o710C_uchar { char p[0x710C]; unsigned char v; };
struct o719E_short { char p[0x719E]; short v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o71BA_uchar { char p[0x71BA]; unsigned char v; };
struct o71BB_uchar { char p[0x71BB]; unsigned char v; };
struct o71E4_float { char p[0x71E4]; float v; };
struct o71E8_float { char p[0x71E8]; float v; };
struct o720B_uchar { char p[0x720B]; unsigned char v; };
struct o7228_ushort { char p[0x7228]; unsigned short v; };
struct o7236_uchar { char p[0x7236]; unsigned char v; };
struct o8_float { char p[0x8]; float v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o88_int { char p[0x88]; int v; };
struct o8C_int { char p[0x8C]; int v; };
struct o90_int { char p[0x90]; int v; };
struct o94_int { char p[0x94]; int v; };
struct oA_uchar { char p[0xA]; unsigned char v; };
struct oA0_int { char p[0xA0]; int v; };
struct oA4_int { char p[0xA4]; int v; };
struct oB_uchar { char p[0xB]; unsigned char v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uchar { char p[0xC]; unsigned char v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oE_short { char p[0xE]; short v; };
struct oE_ushort { char p[0xE]; unsigned short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
int ADXPD_ExecHndl(int);
int ADXPD_GetStat(int);
int ADXPD_Reset(int);
int ending_obj_init_basic(int);
int ending_obj_set_sprite(int, int);
int ui_draw_element_sprite(int);
int conv_s16x4_to_f32(int, int);
int hit_load_sphere_world(int, int, int);
int hit_probe_object_vs_slots(int);
int logo_spawn_overlay(float);
int FUN_0c02c2d0(int);
int FUN_0c02c830(int);
int FUN_0c02c91a(int);
int ui_fade_start(int, int, int, int);
int fx_spawn_0457d0(void);
int obj_create(int, int, int);
int obj_part_set_model(int, int, int);
int pl_rel_angle_to_linked(int);
float ai_dist_to_opponent(int);
int ai_roll_chance(void);
int pl_reset_pose(int);
int pl_timer_arm_forever(int);
int pl_start_motion(int, int, int);
int pl_step_motion(int);
int hit_find_interactable_contact(int, int);
int hit_probe_step_max(int, int, float);
int pl_apply_velocity(int);
int pl_apply_acceleration(int);
int pl_angle_to_opponent(int);
int pl_stick_dir_angle(int);
int pl_set_power_form_off(int);
extern int pl_try_char_special_move();
int snd_play_side_se(int, int);
int snd_play_char_voice(int, int);
int obj_set_mode_owner(int, int);
float math_signed_sqrt(float);
float math_cos_angle16(int);
float math_sin_angle16(int);
int nlCalcVector(int, int);
int nlSelectMatrixStack(int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int nlTransposeMatrix(void);
int nlTranslate(float, float, float);
int FUN_0c0e22e0(int, int, float);
int syRtcGetDate(int);
int syRtcAicaGetCount(int);
int snd_send_command(int);
int FUN_0c0e66f4(int, int, int);
int FUN_0c0e69a8(int, int, int);
int _divls(void);
int _modls(int);
int _quick_evn_mvn(int, int, int);
int _quick_odd_mvn(int, int);
int gdFsGetStat(int);
int gdFsGetSysHn(int);
int gdFsGetDrvStat(int);
int gdFsReqDrvStat(int);
int vmsfs_fread1(int, int);
extern int FUN_0c108094();
int mpdrv_setcmd_force(int, int, int, int, int, int);
int FUN_0c1144b8(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c1145f4(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c114f90(int, int, int);
int FUN_0c1150aa(int, int);
int buGetDiskFree(int, int);
int buIsExistFile(int, int);
int buSaveFile(int, int, int, int, int, int);
extern int mwRnaErrCallFunc();
int FUN_0c1048e6(int a4, int a5, int a6, int a7);
int vmu_check_create_obj(void);
int ai_dist_class(int a4);
int nlInvLightVectorUseViewMatrix(void);
int FUN_0c114ef4(int a4, int a5);
int vmu_write_icondata_file(int a4);
int FUN_0c0459d6(int a4, int a5, int a6, int a7);
int pl_set_spawn_position(int a4);
int mot_read_vec3_float(int a4, int a5);
int FUN_0c0a022e(int a4, float f4);
int FUN_0c1080f0(int a4, int a5, int a6, int a7);
int FUN_0c107f44(int a4, int a5, int a6, int a7);
int ADXB_ExecOneAdx(int a4, int a5, int a6, int a7);
int vmu_get_foreign_exec_mask(void);
int vmu_get_savefile_mask(void);
int vmu_get_vmgame_mask(void);
int ending_spawn_obj_typed_b(int a4, int a5, int a6);
int FUN_0c0246b2(int a4, int a5, int a6, int a7);
int fx_spawn_042514(int a4, int a5);
int pl_garuda_mode04_phase0(int a4);
int ai_reaction_check_2(int a4, int a5);
int pl_hitreact_phase4_update(int a4, int a5, int a6, int a7);
int FUN_0c092a58(int a4, int a5, int a6, int a7);
int FUN_0c09dd88(int a4);
int FUN_0c0a2830(int a4);
int cam_request_mode_25(int a4, int a5);
int syRtcGetAndCheckCount(int a4, int a5, int a6, int a7);
int FUN_0c0e6c78(int a4, int a5, int a6);
int vmsfs_c_setfname(int a4, int a5, int a6);
int ending_spawn_obj_t02(int a4);
int FUN_0c02279a(int a4, int a5, int a6, int a7);
int mdl_apply_transform(int a4, int a5, int a6, int a7);
int FUN_0c02c9f6(void);
int FUN_0c053dcc(void);
int pl_stick_zone(int a4);
int FUN_0c0ad7a4(int a4);
int FUN_0c0d32dc(void);
int cam_select_mode0_variant(int a4);
void math_pow_float(int a4, int a5, int a6, int a7, float f4, float f5);
int FUN_0c016d08(void);
int FUN_0c01d9e0(int a4, int a5, float f4);
float FUN_0c022dfc(int a4, int a5);
int stage_point_in_cylinder(int a4, int a5);
int ui_sprite_queue_add(int a4, int a5, int a6, int a7, int a8, int a9);
int FUN_0c02df98(int a4, int a5, float f4, float f5);
int FUN_0c06148a(void);
int pl_wangtang_cue_at_frame(int a4, int a5, int a6, int a7);
int pl_set_effect_at_frame(int a4, int a5, int a6, int a7);
int pl_garuda_cue_at_frame(int a4, int a5, int a6, int a7);
int FUN_0c0f9c20(int a4, int a5, int a6, int a7);
int kdExecGun(void);
int vmsfs_fread(int a4, int a5, int a6);
int FUN_0c10b680(void);


int syRtcGetAndCheckCount(int a4, int a5, int a6, int a7)
{
    int stk[3];
    register int t1;
    register int t2;
    register int t18;
    register int t8;
    register int t9;
    register int t22;
    register int t0;

    *(unsigned int *)(((int)stk + 0)) = (((int)stk + 0) + 0x4);
    t1 = (((int)stk + 0) + 0x4);
    t2 = (((int)stk + 0) + 0x4);
    for (;;) {
        if ((unsigned int)t2 >= (unsigned int)((((int)stk + 0) + 0x4) + 0x8)) {
            break;
        }
        t0 = (syRtcAicaGetCount(t2));
        if (t0 != 0) {
            *(unsigned int *)((t1 + 0x0)) = a4;
        }
        t2 = (t2 + 0x4);
        t1 = (t1 + 0x4);
    }
    t8 = *(int *)(((int)stk + 0));
    t18 = 0x0;
    if ((unsigned int)t8 < (unsigned int)((((int)stk + 0) + 0x4) + 0x4)) {
        t9 = ((((int)stk + 0) + 0x4) + 0x4);
        for (;;) {
            if ((*(int *)((t8 + 0x0))) != (*(int *)((t9 + 0x0)))) {
                break;
            }
            t8 = (t8 + 0x4);
            t9 = (t9 + 0x4);
            if ((unsigned int)t8 >= (unsigned int)((((int)stk + 0) + 0x4) + 0x4)) {
                if (0x0 == 0) {
                    return (*(int *)(((*(int *)(((int)stk + 0))) + 0x0)));
                }
                return a4;
            }
        }
        t18 = 0x1;
    }
    t22 = a4;
    if (t18 == 0) {
        t22 = (*(int *)(((*(int *)(((int)stk + 0))) + 0x0)));
    }
    return t22;
}
