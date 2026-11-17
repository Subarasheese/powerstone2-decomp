/* Library code: C that behaves like this game's own bytes. */
/* Straight-line functions with calls and guards (batch gen_ds): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int FUN_0c0fae00(int);
int FUN_0c0fad80(int);
int FUN_0c0fac00(int);
struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_int { char p[0x10]; int v; };
struct o108_uchar { char p[0x108]; unsigned char v; };
struct o14_int { char p[0x14]; int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1F_uchar { char p[0x1F]; unsigned char v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o20_ushort { char p[0x20]; unsigned short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o24_float { char p[0x24]; float v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o24_ushort { char p[0x24]; unsigned short v; };
struct o26_short { char p[0x26]; short v; };
struct o26_ushort { char p[0x26]; unsigned short v; };
struct o274_float { char p[0x274]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o28_int { char p[0x28]; int v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o28_ushort { char p[0x28]; unsigned short v; };
struct o2A_ushort { char p[0x2A]; unsigned short v; };
struct o2C_int { char p[0x2C]; int v; };
struct o2C_uint { char p[0x2C]; unsigned int v; };
struct o2C_ushort { char p[0x2C]; unsigned short v; };
struct o2D_uchar { char p[0x2D]; unsigned char v; };
struct o2D4_float { char p[0x2D4]; float v; };
struct o2D9_uchar { char p[0x2D9]; unsigned char v; };
struct o2DC_int { char p[0x2DC]; int v; };
struct o2DC_uint { char p[0x2DC]; unsigned int v; };
struct o2E_ushort { char p[0x2E]; unsigned short v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o2E8_int { char p[0x2E8]; int v; };
struct o2EC_int { char p[0x2EC]; int v; };
struct o2F0_int { char p[0x2F0]; int v; };
struct o2F4_int { char p[0x2F4]; int v; };
struct o2F8_int { char p[0x2F8]; int v; };
struct o2FC_int { char p[0x2FC]; int v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o30_uint { char p[0x30]; unsigned int v; };
struct o300_int { char p[0x300]; int v; };
struct o33_uchar { char p[0x33]; unsigned char v; };
struct o34_uint { char p[0x34]; unsigned int v; };
struct o38_float { char p[0x38]; float v; };
struct o38_short { char p[0x38]; short v; };
struct o38_ushort { char p[0x38]; unsigned short v; };
struct o3A_short { char p[0x3A]; short v; };
struct o3A_ushort { char p[0x3A]; unsigned short v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o40_int { char p[0x40]; int v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o48_ushort { char p[0x48]; unsigned short v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4C_short { char p[0x4C]; short v; };
struct o50_float { char p[0x50]; float v; };
struct o50_ushort { char p[0x50]; unsigned short v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o6_uchar { char p[0x6]; unsigned char v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o71F4_short { char p[0x71F4]; short v; };
struct o71F4_ushort { char p[0x71F4]; unsigned short v; };
struct o7237_uchar { char p[0x7237]; unsigned char v; };
struct o7248_int { char p[0x7248]; int v; };
struct o7248_short { char p[0x7248]; short v; };
struct o7248_uint { char p[0x7248]; unsigned int v; };
struct o7254_float { char p[0x7254]; float v; };
struct o7294_int { char p[0x7294]; int v; };
struct o72A8_int { char p[0x72A8]; int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o94_float { char p[0x94]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_short { char p[0xF0]; short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
struct o3C_int { char p[0x3C]; int v; };
int vmu_get_ready_mask(void);
int vmu_get_savefile_mask(void);
int vmu_get_vmgame_mask(void);
int vmu_get_foreign_exec_mask(void);
int vmu_get_free_space_mask(void);
int FUN_0c0109e4(void);
float FUN_0c02649a(int, int);
int fx_spawn_on_player_part(int, int, int, int, int, int, int, int);
int fx_spawn_hit_effect(int, int, int, int, int, int, int, int, int, int, int, int);
int ai_clear_op_state(void);
int ai_calc_angle_to_goal_point(int);
int ai_calc_dist_to_goal_point(int);
int ai_angle_to_pad_dir(int);
int game_reset_objects(void);
int obj_create(int, int, int);
int obj_destroy(int, int, int, int);
int obj_part_set_model(int, int, int);
int FUN_0c0623a6(int, int, int);
int pl_falcon_attack_kind24_phase0(int);
int pl_start_motion(int, int, int);
int pl_step_motion(int);
int pl_spawn_hit_effect_with_se(int);
int pl_get_hit_count_of_opponent(int);
int hit_find_interactable_contact(int, int);
int pl_apply_velocity(int);
int pl_apply_acceleration(int);
int pl_turn_to_opponent(int, int);
int pl_landed(int);
int obj_set_record_char(int, int);
int pl_enter_state_27_28(int, int, int, int, int, int);
int bgm_stop_all(void);
int FUN_0c0a3762(int, int);
int snd_play_side_se(int, int);
int attract_set_step3_flag(int);
int FUN_0c0d320a(void);
int FUN_0c0d3366(void);
int attract_screen_adx_logo(int, int, int, int);
int FUN_0c0d4094(void);
int attract_title_screen(int, int, int, int);
int attract_screen_urls(void);
extern int FUN_0c0d452e();
float math_signed_sqrt(float);
int math_atan_angle16(float);
float math_cos_angle16(int);
float math_rand_float(void);
float math_sin_angle16(int);
int math_vec3_normalize_fast(int);
int _modlu(void);
int _quick_odd_mvn(void);
int _slow_mvn(int);
int FUN_0c0f05c8(void);
int FUN_0c0f0d04(int, int, int, int);
int FUN_0c0fae08(void);
int FUN_0c10274c(int, int);
int FUN_0c104742(int);
int FUN_0c1048e6(int, int, int, int);
int FUN_0c104962(int, int, int);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int buIsFormat(int);
int check_isopen(void);
int direntry(int, int);
int direntry_dirty(int, int);
int gdFsCreateDirhn(int, int);
int gdFsGetGdDcf(void);
int gdFsReopenHn(int, int, int, int);
int get_vmstime(int, int);
int kmiWriteRegister(int, int);
int nlCalcVector(int, int);
int nlRotateAX(int);
int nlRotateAY(int);
int nlUnitMatrix(void);
int set_vmstime(int, int);
int thunk_math_mat_get_translate(int, int);
int thunk_FUN_0c0d45fe(void);
int vmsfs_unmount(int);
int vmsio_ismount(int);
int vmsio_isready(int);
int pl_falcon_attack_kind24_phase2(int a4);
int gdFsDaReleaseG(int a4, int a5, int a6, int a7);
int FUN_0c018ed0(int a4, int a5);
int FUN_0c08e5b4(int a4);
int gdFsInitG(int a4, int a5, int a6, int a7, int a8);
int FUN_0c01fb0c(int a4, int a5, int a6, int a7);
int FUN_0c096a64(int a4, int a5, int a6, int a7);
int kmActivateFrameBuffer(int a4, int a5, int a6, int a7);
int vmsfs_findfirst_ex(int a4, int a5, int a6);
int FUN_0c01f874(int a4);
int ai_op54(int a4, int a5, int a6, int a7);
int pl_ryoma_mode04_phase1(int a4);
int pl_ryoma_mode07_phase1(int a4);
int FUN_0c102632(int a4, int a5);
int menu_ui_task_05(int a4, int a5, int a6, int a7);
int menu_ui_task_29(int a4, int a5, int a6, int a7);
int fx_spawn_33(int a4, int a5, int a6, int a7);
int fx_tick_03c724(int a4, int a5, int a6, int a7);
int FUN_0c064a1c(int a4);
int FUN_0c09660c(int a4, int a5, int a6, int a7);
int attract_run_sequence(int a4, int a5, int a6, int a7);
int FUN_0c103c40(int a4, int a5, int a6);
int hit_part_pair_overlap(int a4, int a5, int a6, float f4);



int gdFsDaReleaseG(int a4, int a5, int a6, int a7)
{
    register int t1;
    int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;

    t3 = gdFsReopenHn((*(int *)(((*(int *)0xC346BD8) + 0x14))), 0x0, 0x0, 0x0);
    t4 = 0xFFFFFFF3;
    if (t3 != 0) {
        t5 = _builtin_get_imask();
        _builtin_set_imask(0xF);
        t6 = *(int *)0xC346BD8;
        if ((((((struct o3A_short *)(t6))->v)) != 0) && (t4 = (((struct o10_int *)0xC7FE6E8)->v), t1 = (((struct o14_int *)0xC7FE6E8)->v), t4 != t1)) {
            (((struct o3A_ushort *)(t6))->v) = 0x0;
        }
        t4 = *(int *)0xC346BD8;
        if ((((((struct o3A_short *)(t4))->v)) != 0) && (t2 = *(int *)((t4 + 0x2C)), (int)t2 >= (int)0x10001)) {
            t1 = (((struct o8_int *)0xC7FE6E8)->v);
            t2 = (((struct oC_int *)0xC7FE6E8)->v);
            t6 = (((struct o4_int *)0xC7FE6E8)->v);
            if (((((struct o0_int *)0xC7FE6E8)->v)) == 1) {
                t7 = (*(int *)(((*(int *)((t4 + 0xC))) + 0x28)));
            } else {
                t7 = (*(int *)(((*(int *)((t4 + 0xC))) + 0x2C)));
            }
            t8 = ((int (*)(int, int, int, int))(t7))(t6, t1, t2, a7);
            if (t8 != 0) {
                *(unsigned int *)((t3 + 0x3C)) = t8;
                (((struct o50_ushort *)(t3))->v) = 0x4;
                *(unsigned int *)((t3 + 0x4)) = 0xC7FE6F8;
                (((struct o48_ushort *)(t3))->v) = 0x8;
                *(unsigned int *)(((*(int *)((t3 + 0x0))) + 0x1C)) = t3;
                t1 = ((int (*)(void))(((((struct o40_int *)((*(int *)(((*(int *)0xC346BD8) + 0xC)))))->v))))();
            }
            t1 = t8;
        } else {
            t2 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)((t4 + 0xC))) + 0x34)))))(a4, a5, a6, a7);
            if (t2 != 0) {
                *(unsigned int *)((t3 + 0x3C)) = t2;
                (((struct o50_ushort *)(t3))->v) = 0x4;
                (((struct o48_ushort *)(t3))->v) = 0x6;
                *(unsigned int *)(((*(int *)((t3 + 0x0))) + 0x1C)) = t3;
                t4 = ((int (*)(void))(((((struct o40_int *)((*(int *)(((*(int *)0xC346BD8) + 0xC)))))->v))))();
            }
            t1 = t2;
        }
        _builtin_set_imask(((unsigned int)(((t5 & 0xF) << 2) << 2) >> 4));
        t4 = 0x0;
        if (t1 == 0) {
            t4 = 0xFFFFFFF3;
        }
    }
    return t4;
}
