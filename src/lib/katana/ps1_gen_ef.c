/* Library code: C that behaves like this game's own bytes. */
/* Straight-line functions with calls and guards (batch gen_ef): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int direntry_dirty(int, int);
int FUN_0c104742(int);
struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_float { char p[0x10]; float v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o10C0_int { char p[0x10C0]; int v; };
struct o10D0_int { char p[0x10D0]; int v; };
struct o10F4_int { char p[0x10F4]; int v; };
struct o118_uint { char p[0x118]; unsigned int v; };
struct o13_uchar { char p[0x13]; unsigned char v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_float { char p[0x18]; float v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o22_short { char p[0x22]; short v; };
struct o23_uchar { char p[0x23]; unsigned char v; };
struct o24_float { char p[0x24]; float v; };
struct o24_uchar { char p[0x24]; unsigned char v; };
struct o25_uchar { char p[0x25]; unsigned char v; };
struct o26_uchar { char p[0x26]; unsigned char v; };
struct o27_uchar { char p[0x27]; unsigned char v; };
struct o28_float { char p[0x28]; float v; };
struct o28_uchar { char p[0x28]; unsigned char v; };
struct o29_uchar { char p[0x29]; unsigned char v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2FC_short { char p[0x2FC]; short v; };
struct o2FE_short { char p[0x2FE]; short v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o308_uint { char p[0x308]; unsigned int v; };
struct o38_float { char p[0x38]; float v; };
struct o3A_ushort { char p[0x3A]; unsigned short v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o40_int { char p[0x40]; int v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o44_float { char p[0x44]; float v; };
struct o44_uint { char p[0x44]; unsigned int v; };
struct o48_float { char p[0x48]; float v; };
struct o48_uint { char p[0x48]; unsigned int v; };
struct o48_ushort { char p[0x48]; unsigned short v; };
struct o4A_ushort { char p[0x4A]; unsigned short v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4C_short { char p[0x4C]; short v; };
struct o4C_uint { char p[0x4C]; unsigned int v; };
struct o4E_short { char p[0x4E]; short v; };
struct o50_float { char p[0x50]; float v; };
struct o50_int { char p[0x50]; int v; };
struct o50_uint { char p[0x50]; unsigned int v; };
struct o50_ushort { char p[0x50]; unsigned short v; };
struct o54_float { char p[0x54]; float v; };
struct o54_uint { char p[0x54]; unsigned int v; };
struct o58_float { char p[0x58]; float v; };
struct o58_uint { char p[0x58]; unsigned int v; };
struct o5C_uint { char p[0x5C]; unsigned int v; };
struct o6_uchar { char p[0x6]; unsigned char v; };
struct o60_uint { char p[0x60]; unsigned int v; };
struct o64_uint { char p[0x64]; unsigned int v; };
struct o68_uint { char p[0x68]; unsigned int v; };
struct o6C_uint { char p[0x6C]; unsigned int v; };
struct o7_uchar { char p[0x7]; unsigned char v; };
struct o70_uint { char p[0x70]; unsigned int v; };
struct o710B_uchar { char p[0x710B]; unsigned char v; };
struct o710C_uchar { char p[0x710C]; unsigned char v; };
struct o7198_short { char p[0x7198]; short v; };
struct o7198_ushort { char p[0x7198]; unsigned short v; };
struct o719A_ushort { char p[0x719A]; unsigned short v; };
struct o719C_uchar { char p[0x719C]; unsigned char v; };
struct o719D_uchar { char p[0x719D]; unsigned char v; };
struct o719E_short { char p[0x719E]; short v; };
struct o719E_ushort { char p[0x719E]; unsigned short v; };
struct o71A0_ushort { char p[0x71A0]; unsigned short v; };
struct o71A2_uchar { char p[0x71A2]; unsigned char v; };
struct o71A4_uchar { char p[0x71A4]; unsigned char v; };
struct o71A5_uchar { char p[0x71A5]; unsigned char v; };
struct o71A6_uchar { char p[0x71A6]; unsigned char v; };
struct o71A7_uchar { char p[0x71A7]; unsigned char v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o71BA_uchar { char p[0x71BA]; unsigned char v; };
struct o71BC_uchar { char p[0x71BC]; unsigned char v; };
struct o71C8_int { char p[0x71C8]; int v; };
struct o71D4_short { char p[0x71D4]; short v; };
struct o71D6_short { char p[0x71D6]; short v; };
struct o71D8_short { char p[0x71D8]; short v; };
struct o722C_float { char p[0x722C]; float v; };
struct o7250_float { char p[0x7250]; float v; };
struct o7254_float { char p[0x7254]; float v; };
struct o7258_float { char p[0x7258]; float v; };
struct o729C_float { char p[0x729C]; float v; };
struct o72B2_uchar { char p[0x72B2]; unsigned char v; };
struct o72B3_uchar { char p[0x72B3]; unsigned char v; };
struct o74_uint { char p[0x74]; unsigned int v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uchar { char p[0x8]; unsigned char v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct o80_uint { char p[0x80]; unsigned int v; };
struct o88_int { char p[0x88]; int v; };
struct o8C_int { char p[0x8C]; int v; };
struct o8C_uint { char p[0x8C]; unsigned int v; };
struct o90_int { char p[0x90]; int v; };
struct o94_int { char p[0x94]; int v; };
struct oA0_int { char p[0xA0]; int v; };
struct oA0_uint { char p[0xA0]; unsigned int v; };
struct oA4_int { char p[0xA4]; int v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oB0_int { char p[0xB0]; int v; };
struct oBC_float { char p[0xBC]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_short { char p[0xEE]; short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_uint { char p[0xF0]; unsigned int v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
struct oF4_uint { char p[0xF4]; unsigned int v; };
struct oF8_uint { char p[0xF8]; unsigned int v; };
struct oFC0_uint { char p[0xFC0]; unsigned int v; };
struct oFC4_int { char p[0xFC4]; int v; };
struct oFC4_uint { char p[0xFC4]; unsigned int v; };
struct oFC8_int { char p[0xFC8]; int v; };
struct oFC8_uint { char p[0xFC8]; unsigned int v; };
int ADXPD_GetStat(int);
int opt_game_settings_init(void);
int opt_game_settings_changed(void);
extern int opt_game_settings_main();
extern int FUN_0c01b4f2();
float FUN_0c02651e(int);
int draw_project_point_sprite(int);
int draw_project_point_sprite_z01(int);
int logo_spawn_overlay(float);
int game_reset_objects(void);
int obj_create(int, int, int);
int obj_create_beside(int, int, int, int, int);
int obj_destroy(int);
int FUN_0c0593e0(int);
int obj_tick_class(int);
int obj_part_set_model(int, int, int);
int pl_timer_disable(int);
int pl_start_motion(int, int, int);
int pl_step_motion(int);
int pl_load_motion_key(int, int);
int pl_load_motion_attack_record(int, int);
int pl_spawn_hit_effect_with_se(int);
int pl_get_hit_count_of_opponent(int);
int hit_find_wall_entry_by_kind(int, int);
int pl_apply_velocity(int);
int pl_apply_acceleration(int);
int pl_apply_motion_translation(int);
int pl_angle_to_opponent(int);
int math_angle_between_points_xz(int, int);
int pl_turn_to_opponent(int, int);
int pl_landed(int);
int snd_play_side_se(int, int);
int snd_play_char_voice(int, int);
int obj_touched_by_slot(int, int);
int obj_can_interact(int, int, int, int, int, int, int, int, int, int, int, int);
int FUN_0c0c9962(int);
int FUN_0c0c9982(int);
int FUN_0c0d6630(int);
float math_signed_sqrt(float);
float math_cos_angle16(int);
int math_rand_next(void);
float math_sin_angle16(int);
int nl_sprite_draw(int);
int _divls(void);
int _modls(void);
int _quick_evn_mvn(int);
extern int _quick_odd_mvn();
int _quick_mvn(int, int, int, int);
int FUN_0c0ed9ac(int, int, int);
int FUN_0c0ed9c0(int, int, int);
int vib_port_has_vibration(int);
int FUN_0c0f4202(int, int);
int FUN_0c104962(int, int, int);
int FUN_0c10c760(void);
int FUN_0c111cb8(void);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int buIsFormat(int);
int check_isopen(void);
int direntry(int, int);
int fmMngClearBuf(int, int);
int fmMngSncmp(int, int, int);
int gdFsReopenHn(int, int, int, int);
int mpdrv_set_dreq_ns(int);
int mpdrv_set_end_ns(void);
int pdVibMxStop(int);
int thunk_math_mat_get_translate(int, int);
int vmsfs_unmount(int);
int vmsio_ismount(int);
int vmsio_isready(int);
int mpdrv_init(int a4, int a5, int a6);
int opt_page1_spawn_cursor_pulse(int a4);
int fx_spawn_03b1ec(int a4, int a5);
int fx_tick_041820(int a4);
float FUN_0c0641a0(int a4, float f4, float f5);
int FUN_0c063a12(int a4, float f4);
int pl_wangtang_mode11_phase0(int a4);
float FUN_0c09f8e0(int a4, int a5, float f4, float f5);
int fx_trail_spawn_segment(int a4);
int FUN_0c01b570(int a4, int a5, int a6, int a7);
int fx_spawn_03d60c(int a4, int a5);
int fx_spawn_04bc94(int a4, int a5, int a6, int a7, float f4);
int pl_mode06_enter(int a4, int a5, int a6, int a7);
int pl_start_motion_owner(int a4, int a5, int a6);
int pl_enter_state_36(int a4, int a5);
int menu_ui_task_34_bind_models(int a4, int a5);
int FUN_0c0d665c(int a4);
int FUN_0c0d7bf0(void);
int gdFsReqRd32(int a4, int a5, int a6);
int vmsfs_frename(int a4, int a5, int a6);
int FUN_0c10cf60(int a4, int a5, int a6, int a7);
int ADXB_ExecOneWav16(int a4, int a5, int a6, int a7);
int fmMngInit(int a4, int a5, int a6);
int FUN_0c02842a(int a4, int a5);
int gdFsDaPlayG(int a4, int a5, int a6, int a7);
int ui_reset_hud_gauges(void);
int pl_vib_update(int a4);



int gdFsReqRd32(int a4, int a5, int a6)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;

    if ((a4 != 0) && (t0 = (((struct o4C_short *)(a4))->v), t0 != 0)) {
        if ((*(int *)(((*(int *)((a4 + 0x0))) + 0x1C))) == 0) {
            if ((0x1F & a6) != 0) {
                return -14;
            } else {
                t0 = *(int *)((a4 + 0x14));
                t1 = *(int *)((a4 + 0x8));
                t2 = *(int *)((a4 + 0x10));
                if ((int)(t0 + t1) >= (int)(t1 + t2)) {
                    *(unsigned int *)((a4 + 0x18)) = 0x0;
                    (((struct o50_ushort *)(a4))->v) = 0x1;
                    return 0;
                } else {
                    t3 = a5;
                    if ((int)(a5 + (t0 + t1)) > (int)(t1 + t2)) {
                        t3 = ((t1 + t2) - (t0 + t1));
                    }
                    if (t3 == 0) {
                        *(unsigned int *)((a4 + 0x18)) = 0x0;
                        (((struct o50_ushort *)(a4))->v) = 0x1;
                        return 0;
                    } else {
                        t2 = _builtin_get_imask();
                        _builtin_set_imask(0xF);
                        t4 = ((int (*)(int, int, int, int))((*(int *)(((*(int *)(((*(int *)((a4 + 0x0))) + 0xC))) + 0x4)))))((t0 + t1), t3, a6, ((((struct o4E_short *)(a4))->v)));
                        if (t4 != 0) {
                            *(unsigned int *)((a4 + 0x3C)) = t4;
                            *(unsigned int *)((a4 + 0x1C)) = t3;
                            (((struct o50_ushort *)(a4))->v) = 0x2;
                            (((struct o4A_ushort *)(a4))->v) = 0x1;
                            (((struct o48_ushort *)(a4))->v) = 0x1;
                            *(unsigned int *)((a4 + 0x18)) = 0x0;
                            *(unsigned int *)(((*(int *)((a4 + 0x0))) + 0x1C)) = a4;
                            t0 = ((int (*)(void))(((((struct o40_int *)((*(int *)(((*(int *)((a4 + 0x0))) + 0xC)))))->v))))();
                        } else {
                            (((struct o50_ushort *)(a4))->v) = 0x1;
                        }
                        _builtin_set_imask(((unsigned int)(((t2 & 0xF) << 2) << 2) >> 4));
                        if (t4 != 0) {
                            return t3;
                        }
                        return 0;
                    }
                }
            }
        } else {
            return 0;
        }
    }
    return -10;
}



