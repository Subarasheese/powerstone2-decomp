/* Library code: C that behaves like this game's own bytes. */
/* Straight-line functions with calls and guards (batch gen_el): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

int mpdrv_set_getcond_ns(int, int);
int mpdrv_set_end_ns(void);
int mpdrv_set_dreset_ns(int);
int mpdrv_set_dreq_ns(int);
int mpdrv_set_dkill_ns(int);
int mpdrv_set_allstatreq_ns(int);
struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o106_uchar { char p[0x106]; unsigned char v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o10E4_int { char p[0x10E4]; int v; };
struct o118_uint { char p[0x118]; unsigned int v; };
struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2D9_uchar { char p[0x2D9]; unsigned char v; };
struct o2DA_uchar { char p[0x2DA]; unsigned char v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o30_float { char p[0x30]; float v; };
struct o30_int { char p[0x30]; int v; };
struct o308_uint { char p[0x308]; unsigned int v; };
struct o30D_uchar { char p[0x30D]; unsigned char v; };
struct o30E_uchar { char p[0x30E]; unsigned char v; };
struct o314_uchar { char p[0x314]; unsigned char v; };
struct o38_float { char p[0x38]; float v; };
struct o38_int { char p[0x38]; int v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o40_int { char p[0x40]; int v; };
struct o44_float { char p[0x44]; float v; };
struct o44_int { char p[0x44]; int v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o71A8_uchar { char p[0x71A8]; unsigned char v; };
struct o71A9_uchar { char p[0x71A9]; unsigned char v; };
struct o720A_uchar { char p[0x720A]; unsigned char v; };
struct o7248_int { char p[0x7248]; int v; };
struct o72B2_uchar { char p[0x72B2]; unsigned char v; };
struct o72B3_uchar { char p[0x72B3]; unsigned char v; };
struct o72B4_uchar { char p[0x72B4]; unsigned char v; };
struct o72B5_uchar { char p[0x72B5]; unsigned char v; };
struct o72B6_uchar { char p[0x72B6]; unsigned char v; };
struct o72B7_uchar { char p[0x72B7]; unsigned char v; };
struct o72B8_uchar { char p[0x72B8]; unsigned char v; };
struct o8_float { char p[0x8]; float v; };
struct o90_uint { char p[0x90]; unsigned int v; };
struct o98_float { char p[0x98]; float v; };
struct oA0_uint { char p[0xA0]; unsigned int v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oD_short { char p[0xD]; short v; };
struct oD_ushort { char p[0xD]; unsigned short v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
struct oF0_ushort { char p[0xF0]; unsigned short v; };
struct oF2_ushort { char p[0xF2]; unsigned short v; };
struct oF8_int { char p[0xF8]; int v; };
int ADXPD_GetNumBlk(int);
int FUN_0c0555c4(void);
int FUN_0c0555dc(void);
int obj_create(int, int, int);
int obj_destroy(int);
int res_load_file_unpack(int);
int res_load_file_raw_d(int);
int res_textures_register(int);
int math_mat_transform_point(int, int);
int obj_part_set_model(int, int, int);
int pl_start_motion(int, int, int);
int pl_step_motion(int);
int pl_get_hit_count_of_opponent(int);
int FUN_0c09cee4(int);
int FUN_0c09d818(int, int);
int pl_apply_velocity(int);
int pl_apply_motion_translation(int);
int obj_set_record_char(int, int);
int obj_set_record(int, int);
int pl_end_action_choose_state(int);
int pl_enter_state_27_28(int, int);
int snd_play_char_voice(int, int);
int snd_play_announcer(int, int);
int menu_ui_spawn_32(int);
int menu_ui_spawn_33(void);
int stage_obj_load_layout_pos(int);
int dbg_print_at(int, float, float);
float math_cos_angle16(int);
int math_rand_next(void);
float math_sin_angle16(int);
float FUN_0c0e2220(int, int);
int _divls(void);
int _modls(void);
int _quick_odd_mvn(void);
int vib_port_has_vibration(int);
int FUN_0c0f414e(int, int, int, int);
int FUN_0c0fbfa2(int, int, int, int);
int FUN_0c101148(int, int);
int FUN_0c114598(int, int, int, int);
int FUN_0c1145cc(int, int, int, int);
int check_caps(int);
int kmiWriteRegister(int, int);
int memcpy(int, int, int);
int mpdrv_insertnop(int);
int nlMakeProjConvMat(int);
int nlMultiMatrix(int);
int vmsfs_c_progress(int, int, int, int);
int vmsio_block_read(int, int, int);
int FUN_0c0e1460(int a4);
int fx_spawn_039aa0(int a4, int a5);
int fx_spawn_04b6b8(int a4, int a5, int a6, int a7, float f4);
int stage_spawn_type02(int a4);
int stage_gimmick_11_spawn_b(int a4, int a5);
int fx_spawn_04(int a4, int a5);
int FUN_0c0ce99a(int a4, int a5, int a6, int a7);
int FUN_0c0cb994(int a4, int a5);
int FUN_0c11163a(void);
int FUN_0c1145f4(int a4);
int pl_garuda_move12_update(int a4);
int fx_update_burst_sprites(int a4);
int fx_spawn_039ed8(int a4, int a5);
int fx_spawn_03b384(int a4, int a5);
int fx_spawn_045f9c(int a4);
int res_load_pl_effect(int a4, int a5, int a6, int a7);
int pl_vib_start_preset(int a4, int a5);
int menu_vs_announce_names(int a4, int a5, int a6, int a7);
int nlSetViewport(float f4, float f5, float f6, float f7);
int FUN_0c0fb160(int a4);
int vmsfs_connect(int a4);
int fx_tick_03743c(int a4);
int fx_spawn_0357e0(int a4, int a5);
int FUN_0c08bf90(int a4);
int FUN_0c08ebfa(int a4, int a5);
int menu_ui_task_15_bind_models(int a4, int a5);
int FUN_0c0a3824(int a4, int a5, int a6, int a7);



int FUN_0c11163a(void)
{
    int t0;
    register int t1;
    register int t2;
    register int t3;
    register int t4;
    register int t5;
    register int t6;
    register int t7;
    register int t8;
    register int t9;
    register int t10;
    register int t11;
    register int t12;

    t2 = *(int *)0xC843924;
    t3 = (((struct o10E4_int *)(t2))->v);
    t4 = 0x10E4;
    if ((int)t3 > 0) {
        t4 = (mpdrv_insertnop(((((struct o10E4_int *)(t2))->v))));
    } else {
        t5 = t3;
    }
    t3 = t4;
    t4 = t5;
    t5 = (0x44C + t2);
    t6 = (t2 + 0x28);
    t2 = 0x0;
    for (;;) {
        if ((int)t2 >= (int)0x18) {
            break;
        }
        t4 = 0xF90;
        t3 = (*(int *)0xC843924);
        t4 = (t4 + t3);
        t4 = (t4 + t2);
        t7 = (*(signed char *)((t4 + 0x0)));
        if ((t7 != 0) && (t0 = *(signed char *)((t6 + 0x6)), t3 = t0, t3 == 0)) {
            t3 = (*(signed char *)((t6 + 0x4)));
            t3 = (unsigned char)t3;
            if (t3 != 1) {
                if (t3 != 2) {
                    if (t3 != 3) {
                        if (t3 != 4) {
                            if (t3 != 9) {
                                t8 = t1;
                                t9 = t7;
                                t10 = t4;
                            } else {
                                t11 = *(int *)((t5 + 0x0));
                                t7 = t11;
                                t12 = t11;
                                if ((t7 & 0x1) != 0) {
                                    t12 = 0x1;
                                }
                                t7 = 0xC112AAE;
                                t3 = (mpdrv_set_getcond_ns(t2, t12));
                            }
                            t11 = t8;
                            t8 = t9;
                            t9 = t10;
                        } else {
                            t7 = 0xC112B54;
                            t3 = (mpdrv_set_dkill_ns(t2));
                        }
                        t10 = t11;
                        t11 = t8;
                        t8 = t9;
                    } else {
                        t7 = 0xC112B98;
                        t3 = (mpdrv_set_dreset_ns(t2));
                    }
                    t9 = t10;
                    t10 = t11;
                    t11 = t8;
                } else {
                    t7 = 0xC112BDC;
                    t3 = (mpdrv_set_allstatreq_ns(t2));
                }
                t8 = t9;
                t9 = t10;
                t10 = t11;
            } else {
                t3 = (mpdrv_set_dreq_ns(t2));
            }
            t11 = t8;
            t8 = t9;
            t9 = t10;
        } else {
            t11 = t1;
            t8 = t7;
            t9 = t4;
        }
        t1 = t11;
        t5 = (t5 + 0x78);
        t7 = t8;
        t4 = t9;
        t6 = (t6 + 0x2C);
        t2 = (t2 + 0x1);
    }
    mpdrv_set_end_ns();
    return 0x0;
}
