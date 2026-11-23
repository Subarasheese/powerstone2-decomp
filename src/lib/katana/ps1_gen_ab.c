/* Library code: C that behaves like this game's own bytes. */
/* Straight-line functions with calls and guards (batch gen_ab): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_float { char p[0x10]; float v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o106_uchar { char p[0x106]; unsigned char v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o118_uint { char p[0x118]; unsigned int v; };
struct o14_float { char p[0x14]; float v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o18_float { char p[0x18]; float v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o1B2_short { char p[0x1B2]; short v; };
struct o1B4_short { char p[0x1B4]; short v; };
struct o1B4_ushort { char p[0x1B4]; unsigned short v; };
struct o1B6_short { char p[0x1B6]; short v; };
struct o1B6_ushort { char p[0x1B6]; unsigned short v; };
struct o1C_float { char p[0x1C]; float v; };
struct o1C_uint { char p[0x1C]; unsigned int v; };
struct o1FC_float { char p[0x1FC]; float v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o20_uint { char p[0x20]; unsigned int v; };
struct o24_float { char p[0x24]; float v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_float { char p[0x28]; float v; };
struct o28_uint { char p[0x28]; unsigned int v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2D9_uchar { char p[0x2D9]; unsigned char v; };
struct o2DC_int { char p[0x2DC]; int v; };
struct o2DC_uint { char p[0x2DC]; unsigned int v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o2E4_uint { char p[0x2E4]; unsigned int v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o30_float { char p[0x30]; float v; };
struct o308_uchar { char p[0x308]; unsigned char v; };
struct o34_float { char p[0x34]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o40_float { char p[0x40]; float v; };
struct o40_int { char p[0x40]; int v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o68_float { char p[0x68]; float v; };
struct o68_uchar { char p[0x68]; unsigned char v; };
struct o69_uchar { char p[0x69]; unsigned char v; };
struct o6A_uchar { char p[0x6A]; unsigned char v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o71BC_uchar { char p[0x71BC]; unsigned char v; };
struct o71CC_int { char p[0x71CC]; int v; };
struct o71CC_uint { char p[0x71CC]; unsigned int v; };
struct o71F4_short { char p[0x71F4]; short v; };
struct o71F4_ushort { char p[0x71F4]; unsigned short v; };
struct o71F8_int { char p[0x71F8]; int v; };
struct o7204_uchar { char p[0x7204]; unsigned char v; };
struct o7222_uchar { char p[0x7222]; unsigned char v; };
struct o7236_uchar { char p[0x7236]; unsigned char v; };
struct o723E_uchar { char p[0x723E]; unsigned char v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oF2_short { char p[0xF2]; short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
int ADXF_ExecServer(void);
int ADXRNA_ExecServer(void);
int ADXSJD_ExecServer(void);
int ADXSTM_ExecServer(void);
int save_reset_all_data(void);
int vmu_check_select_port(void);
int vmu_check_show_message(int);
int FUN_0c0124ce(void);
int vmu_check_run_objects(void);
int vmu_check_start_pressed(void);
int ui_draw_element_sprite(int);
int FUN_0c01d9e0(int);
int FUN_0c01da70(int);
int FUN_0c01dada(int);
int FUN_0c01db74(int, int, int, int, float, float, float, float, float, float, float);
int hit_build_part_shape(int, int);
extern int FUN_0c025a0e();
int hit_dispatch_shape_pair(int, int, int, int);
int FUN_0c0555c4(void);
int obj_create(int, int, int);
int item_draw_marker(int, int, int, float, float, float, float);
int math_vec3_sub(int, int, int);
int FUN_0c06231c(int, int, int);
int obj_part_set_model(int, int, int);
int FUN_0c0634b4(int);
int FUN_0c0641a0(int, float, float);
int pl_mode12_phase0(int);
int pl_mode12_phase1(int);
int pl_wait_anim_end_c(int);
int FUN_0c08a842(void);
int ai_dist_class(int);
int ai_pick_reaction(int, int);
int FUN_0c097f5c(int, int, int);
int pl_start_motion(int, int, int);
int pl_start_motion_owner(int, int, int);
int pl_step_motion(int);
int pl_get_held_item_class(int, int, int);
int FUN_0c09c782(int);
int obj_place_linked_ahead(int, int, float);
int pl_apply_velocity(int);
int pl_angle_to_opponent(int);
int pl_landed(int);
int FUN_0c0a022e(int, float);
int pl_change_state(int, int, int);
int FUN_0c0a2f5c(void);
int snd_play_side_se(int, int);
int obj_set_mode_owner(int, int);
int obj_can_interact(int, int, int);
int stage_type01_calc_throw_vec(int);
int FUN_0c0b146e(int, int);
int dbg_print_at(int, float, float);
int nlObjPutUseViewMatrix(int);
int nlSetLightColor(float, float, float);
float math_signed_sqrt(float);
int math_atan_angle16(float);
float math_rand_float(void);
int dbg_set_cell_size(int, int);
int dbg_set_cursor_cell(int, int);
int dbg_set_text_color(int);
int dbg_printf(int, ...);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlScale(float, float, float);
int nlTranslateV(int);
int nlUnitMatrix(void);
int nl_sprite_draw(int);
int sys_set_interrupt_handler(int, int);
int FUN_0c0e49c0(int, int, int, int);
int nlSynchFunction(int);
int snd_bank_check_slot(int, int);
int snd_bank_place(int, int, int, int);
int snd_send_command(int);
int _divls(void);
int _modls(int);
int _modlu(void);
int _slow_mvn(int);
int FUN_0c0f3ad4(int, int);
int vib_port_has_vibration(int);
int pdVibMxStop(int);
int ADXT_GetStat(int);
int ADXT_SetOutVol(int, int);
int ADXT_GetOutVol(int);
int kmFreeTexture(int);
int FUN_0c0fd160(int, int, int);
int FUN_0c0fd1e0(int, int, int, int);
int FUN_0c0fdda0(int, int, int);
int FUN_0c0ff4b4(int);
int kdSetBlockWrite(int, ...);
int kdDevGetFD(int, int);
int FUN_0c1025e0(int, int, int, int);
int get_fat(int, int, int, int);
int direntry(int, int);
int BCDtoDEC(int);
int FUN_0c107048(int);
int kmi_init_vram_layout(void);
int kmi_init_pvr_hw(void);
int FUN_0c10c01a(void);
int FUN_0c10d0c0(void);
int kmiModuleInitialize(void);
int kmiWriteRegister(int, int);
int kmiCopyToFrameBuffer(int, int, int);
int FUN_0c110be0(void);
int kmi_set_system_config(int, ...);
int mpdrv_exit(void);
int FUN_0c113ef4(int, int, int);
int FUN_0c11408a(int, int, int);
int FUN_0c114182(int, int, int);
extern int _builtin_get_imask(void);
extern void _builtin_prefetch(void *);
extern void _builtin_set_imask(int);
int memcpy(int, int, int);
int memset(int, int, int);
int pdVmsLcdBlt(int, int, int);
int pdVmsLcdIsReady(int);
int strcpy(int, int);
int umemcmp(int, int, int);
int FUN_0c11428e(int a4, int a5, int a6);
int vmu_make_save_image(void);
int FUN_0c02ca74(void);
int FUN_0c03bdb2(int a4);
int ai_select_variant_script(int a4, int a5);
int FUN_0c0b1536(int a4, int a5);
int sys_reset_interrupt_handlers(void);
int FUN_0c108e74(void);
int FUN_0c01cab6(int a4);
int FUN_0c01cb1e(int a4);
int FUN_0c024298(int a4, float f4, float f5, float f6, float f7, float f8);
int pl_mode15_cls05_07_f1_land(int a4);
int pl_state28_sub1_phase0(int a4);
int bgm_duck(void);
int FUN_0c0ac55c(int a4, int a5);
int cam_mode_15(int a4, int a5, int a6, int a7);
int kmSetFogTable(int a4);
int ADXT_ExecServer(void);
int opt_reset_key_config(int a4);
int FUN_0c01e2e4(int a4, int a5, float f4);
int pl_wangtang_attack_kind24_phase0(int a4);
int FUN_0c08cd18(int a4);
int pl_vib_stop(int a4);
int pl_check_power_form_attack_input(int a4, int a5, int a6);
int FUN_0c0ac4d0(void);
int FUN_0c0ad408(int a4);
int cam_request_mode(int a4, int a5, int a6);
int FUN_0c0e69a8(int a4, int a5, int a6);
int FUN_0c0e6a84(int a4, int a5, int a6);
int FUN_0c0f2d38(int a4, int a5, int a6);
int FUN_0c0f5960(void);
void kdExitSystem(void);
int search_fat_dir(int a4, int a5);
int vmsfs_fseek(int a4, int a5, int a6, int a7);
int FUN_0c110462(int a4, int a5);
int FUN_0c115880(int a4, int a5, int a6);
int FUN_0c026c7c(void);
int ui_reset_hud_wins(void);
int ai_calc_dist_to_goal_obj(int a4);
int pl_mode12_update(int a4, int a5, int a6, int a7);
int pl_ryoma_mode07_phase0(int a4);
int FUN_0c08a846(int a4);
int hit_find_interactable_contact(int a4, int a5);
int FUN_0c0a0188(int a4);
int FUN_0c0addde(int a4);
int fx29_advance_kid_frame(int a4);
int FUN_0c0ce404(int a4, int a5, int a6, int a7);
int FUN_0c0cdac0(void);
int FUN_0c0d699e(int a4);
int nl_texture_slot_alloc(int a4, int a5, int a6);
int FUN_0c0dde30(int a4, int a5, int a6, int a7);
int kdDevGetStorageInfo(int a4, int a5);
int check_fat_xross(int a4, int a5, int a6, int a7);
int ending_spawn_obj_t07(void);
int vmu_check_mode_03(int a4);
int FUN_0c01dd08(int a4, int a5, int a6, int a7, float f4, float f5, float f6, float f7, float f8, float f9, float f10);
int stage_point_in_box(int a4, int a5, int a6, int a7);
int FUN_0c025d10(int a4, int a5, int a6);
int ai_calc_angle_to_goal_point(int a4);
int FUN_0c05c452(int a4, int a5, int a6, float f4, float f5, float f6, float f7);
int FUN_0c097fc4(int a4);
int testmode_adjust_option_value(int a4, int a5, int a6);
int FUN_0c0d6460(int a4);
int FUN_0c0de820(int a4);
int FUN_0c0e56a0(int a4, int a5, int a6);
float FUN_0c0fddd4(int a4, int a5, float f4, float f5, float f6, float f7, float f8, float f9, float f10, float f11);
int kmLoadTexture(int a4, int a5, int a6, int a7);
int get_vmstime(int a4, int a5);
int FUN_0c0161d8(void);
int ai_update_slot(int a4, int a5, int a6, int a7);
int pl_stick_dir_angle(int a4);



int FUN_0c0f2d38(int a4, int a5, int a6)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = pdVmsLcdIsReady(a4);
    t1 = 0xFFFFFFFE;
    if (t0 == 0) {
    } else {
        t0 = *(signed char *)((a4 + 0xC15A68C));
        pdVmsLcdBlt((((((((unsigned char)t0 << 1) + (unsigned char)t0) << 2) << 2) << 2) + 0xC7FECB4), a5, a6);
        t2 = kdSetBlockWrite(0x0, (((((((unsigned char)t0 << 1) + (unsigned char)t0) << 2) << 2) << 2) + 0xC7FECB4), 0x30);
        t0 = 0x0;
        if ((int)t2 < 0) {
            t0 = 0xFFFFFFFF;
        }
        t1 = t0;
    }
    return t1;
}


int vmsfs_fseek(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;

    t0 = *(int *)((a4 + 0x28));
    (((struct o40_uint *)(a4))->v) = (*(int *)((a4 + 0x38)));
    if ((unsigned int)0x0 < (unsigned int)a5) {
        t1 = 0x0;
        for (;;) {
            if (((((struct o40_int *)(a4))->v)) == 0xFFFA) {
                break;
            }
            if ((*(int *)((a4 + 0x34))) == 0) {
                return 0xFFFF0000;
            }
            t2 = 0x40;
            t1 = (t1 + 0x1);
            t2 = (t2 + a4);
            *(unsigned int *)((t2 + 0x0)) = (unsigned short)(get_fat(t0, ((((struct o40_int *)(a4))->v)), a6, a7));
            *(unsigned int *)((a4 + 0x34)) = ((*(int *)((a4 + 0x34))) - 1);
            if ((unsigned int)t1 >= (unsigned int)a5) {
                return (*(int *)((a4 + 0x34)));
            }
        }
        t0 = 0xFFFF0000;
        if ((*(int *)((a4 + 0x34))) == 0) {
            t0 = 0x0;
        }
        t1 = t0;
    } else {
        t1 = (*(int *)((a4 + 0x34)));
    }
    return t1;
}


int kdDevGetStorageInfo(int a4, int a5)
{
    register int t0;

    t0 = kdDevGetFD(a5, 0x2);
    if (t0 == 0) {
        return 0xFFFFFFFF;
    }
    *(unsigned short *)((a4 + 0x0)) = ((unsigned char)(*(signed char *)((t0 + 0x0))) + 0x1);
    *(unsigned short *)((a4 + 0x2)) = (((((unsigned char)(*(signed char *)((t0 + 0x1))) + 0x1) << 2) << 2) << 1);
    *(unsigned short *)((a4 + 0x4)) = (((unsigned int)((unsigned int)(unsigned char)(*(signed char *)(((t0 + 0x2) + 0x0))) >> 2) >> 2) & 0xF);
    *(unsigned short *)((a4 + 0x6)) = ((unsigned char)(*(signed char *)(((t0 + 0x2) + 0x0))) & 0xF);
    *(unsigned short *)((a4 + 0x8)) = (((unsigned int)(unsigned char)(*(signed char *)((t0 + 0x3))) >> 7) & 0x1);
    return 0x0;
}
