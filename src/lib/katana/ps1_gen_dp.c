/* Library code: C that behaves like this game's own bytes. */
/* Straight-line functions with calls and guards (batch gen_dp): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_short { short v; };
struct o0_uchar { unsigned char v; };
struct o0_ushort { unsigned short v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o10_float { char p[0x10]; float v; };
struct o10_uchar { char p[0x10]; unsigned char v; };
struct o101_uchar { char p[0x101]; unsigned char v; };
struct o102_uchar { char p[0x102]; unsigned char v; };
struct o105_uchar { char p[0x105]; unsigned char v; };
struct o106_uchar { char p[0x106]; unsigned char v; };
struct o107_uchar { char p[0x107]; unsigned char v; };
struct o10C4_int { char p[0x10C4]; int v; };
struct o10D8_int { char p[0x10D8]; int v; };
struct o118_uint { char p[0x118]; unsigned int v; };
struct o14_float { char p[0x14]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o274_float { char p[0x274]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2E0_int { char p[0x2E0]; int v; };
struct o2E4_int { char p[0x2E4]; int v; };
struct o2E8_int { char p[0x2E8]; int v; };
struct o3_uchar { char p[0x3]; unsigned char v; };
struct o308_uchar { char p[0x308]; unsigned char v; };
struct o30D_uchar { char p[0x30D]; unsigned char v; };
struct o316_uchar { char p[0x316]; unsigned char v; };
struct o317_uchar { char p[0x317]; unsigned char v; };
struct o318_uchar { char p[0x318]; unsigned char v; };
struct o38_float { char p[0x38]; float v; };
struct o38_uchar { char p[0x38]; unsigned char v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o4_int { char p[0x4]; int v; };
struct o40_float { char p[0x40]; float v; };
struct o40_int { char p[0x40]; int v; };
struct o40_uint { char p[0x40]; unsigned int v; };
struct o44_float { char p[0x44]; float v; };
struct o44_int { char p[0x44]; int v; };
struct o44_uint { char p[0x44]; unsigned int v; };
struct o48_float { char p[0x48]; float v; };
struct o48_int { char p[0x48]; int v; };
struct o4C_float { char p[0x4C]; float v; };
struct o4C_int { char p[0x4C]; int v; };
struct o50_float { char p[0x50]; float v; };
struct o50_int { char p[0x50]; int v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o729C_float { char p[0x729C]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o8_int { char p[0x8]; int v; };
struct o88_int { char p[0x88]; int v; };
struct o8C_int { char p[0x8C]; int v; };
struct o90_int { char p[0x90]; int v; };
struct o90_uint { char p[0x90]; unsigned int v; };
struct o94_int { char p[0x94]; int v; };
struct oA_short { char p[0xA]; short v; };
struct oA_ushort { char p[0xA]; unsigned short v; };
struct oA0_int { char p[0xA0]; int v; };
struct oA0_uint { char p[0xA0]; unsigned int v; };
struct oA4_int { char p[0xA4]; int v; };
struct oA4_uint { char p[0xA4]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oEC_short { char p[0xEC]; short v; };
struct oEC_ushort { char p[0xEC]; unsigned short v; };
struct oEE_ushort { char p[0xEE]; unsigned short v; };
int ADXB_GetDecDtLen(int);
int ADXB_GetDecNumSmpl(int);
int ADXB_GetTotalNumSmpl(int);
int ADXB_Reset(int);
int ADXPD_GetStat(int);
int FUN_0c0158e4(void);
int fx_spawn_041820(int);
int fx_spawn_0488b8(int, int, int, int);
int fx_spawn_hit_effect(int, int, int, int);
int FUN_0c0555dc(void);
int FUN_0c05566a(void);
int obj_create(int, int, int);
int obj_destroy(int);
int obj_part_set_model(int, int, int);
int pl_ryoma_attack_kind68_phase1(int);
int pl_ryoma_attack_kind68_phase2(int);
int pl_ryoma_wait_anim_end_b(int);
int pl_wangtang_mode07_phase1(int);
int pl_wangtang_mode07_phase2(int);
int pl_state36_phase0(int);
int pl_state36_phase1(int);
int pl_is_airborne(int);
int pl_try_start_move(int);
int pl_button_jump_pressed(int);
extern int FUN_0c09ff0c();
int obj_set_record_char(int, int);
int pl_check_dual_button_input(int);
int pl_change_state(int, int, int, int);
int snd_play_stage_obj_se(int, int, int);
int FUN_0c0a43b8(int);
int fx_spawn_burst_sprites(int, int, int, int, int);
int stage_spawn_type01(int);
int stage_spawn_type02(int);
int FUN_0c0d5292(void);
float math_cos_angle16(int);
int math_rand_next(void);
float math_rand_float(void);
float math_sin_angle16(int);
int _modlu(void);
int _quick_evn_mvn(void);
int _quick_odd_mvn(int);
int FUN_0c0fcbc0(int, int, int, int);
int FUN_0c1094a0(int, int);
int FUN_0c109584(int, int);
int FUN_0c109800(int);
int FUN_0c10e146(int);
int FUN_0c1126ba(int, int);
int FUN_0c1128ee(int, int, int);
int FUN_0c114342(int);
int FUN_0c115270(int, int);
int SJ_SplitChunk(int, int, int, int);
int memset(int, int, int);
int mpdrv_clear_deviceinfo(int);
int thunk_math_mat_get_translate(int, int);
int fx_spawn_31(int a4);
int fx_spawn_0492a4(int a4);
int pl_state36_update(int a4, int a5, int a6, int a7);
int fx_spawn_033670(int a4);
int fx_spawn_034884(int a4);
int fx_tick_0387ec(int a4);
int stage_gimmick_27_update(int a4);
int fx_spawn_state11_aura(int a4);
int FUN_0c0c9834(int a4, int a5);
int FUN_0c05bcde(int a4, int a5, int a6, int a7);
int FUN_0c106120(int a4, int a5, int a6, int a7);
int pl_ryoma_attack_kind68(int a4, int a5, int a6, int a7);
int FUN_0c1127bc(int a4, int a5, int a6, int a7, int a8);
int FUN_0c0fc4b2(int a4, int a5, int a6, int a7, int a8);
int FUN_0c0fa540(int a4, int a5, int a6, int a7, int a8, int a9);
int pl_wangtang_mode07_update(int a4, int a5, int a6, int a7);
int obj_can_interact(int a4, int a5, int a6, int a7);
int ADXB_ExecOneWav4(int a4, int a5, int a6, int a7);
int FUN_0c0a4604(void);



int FUN_0c1127bc(int a4, int a5, int a6, int a7, int a8)
{
    int stk[1];
    register int t2;
    register int t16;
    int t68;
    register int t62;
    int t63;
    register int t64;

    *(unsigned char *)(((int)stk + 0)) = a4;
    FUN_0c1126ba(a7, a8);
    *(unsigned char *)((a7 + 0x2)) = 0x0;
    *(unsigned char *)((a7 + 0x3)) = 0x0;
    t2 = *(signed char *)(((int)stk + 0));
    if (((unsigned char)(*(signed char *)((a5 + 0x2))) & (unsigned char)t2) != 0) {
        *(unsigned char *)((a7 + 0x4)) = 0x1;
        *(unsigned char *)((a7 + 0x0)) = 0x0;
        *(unsigned int *)((a7 + 0x24)) = ((*(int *)((a7 + 0x24))) + 0x1);
    }
    if (((unsigned char)(*(signed char *)((a5 + 0x3))) & (unsigned char)t2) != 0) {
        *(unsigned char *)((a7 + 0x4)) = 0x4;
        *(unsigned char *)((a7 + 0x0)) = 0x0;
        *(unsigned char *)((a7 + 0x3)) = 0x1;
        *(unsigned int *)((a7 + 0x24)) = 0x0;
    }
    if (((unsigned char)(*(signed char *)((a5 + 0x0))) & (unsigned char)t2) != 0) {
        t16 = *(signed char *)((a7 + 0x7));
        if (t16 == 0) {
            if ((*(signed char *)((a7 + 0x0))) == 0) {
            } else {
                *(unsigned char *)((a7 + 0x4)) = 0x0;
            }
        } else {
            if ((unsigned char)t16 == 1) {
                if ((unsigned char)(*(signed char *)((a7 + 0x8))) == 5) {
                    *(unsigned char *)((a7 + 0x2)) = 0x1;
                    *(unsigned char *)((a7 + 0x0)) = 0x1;
                    *(unsigned char *)((a7 + 0x4)) = 0x0;
                } else {
                    *(unsigned int *)((a7 + 0x24)) = ((*(int *)((a7 + 0x24))) + 0x1);
                    if ((unsigned int)(*(int *)((a7 + 0x24))) <= (unsigned int)((((struct o10D8_int *)((*(int *)0xC843924)))->v))) {
                        *(unsigned char *)((a7 + 0x4)) = 0x1;
                    } else {
                        *(unsigned char *)((a7 + 0x0)) = 0x0;
                        *(unsigned char *)((a7 + 0x4)) = 0xFF;
                        *(unsigned int *)((a7 + 0x24)) = 0x0;
                    }
                }
            } else {
                if ((unsigned char)(*(signed char *)((a7 + 0x7))) == 4) {
                    *(unsigned char *)((a7 + 0x3)) = 0x1;
                    *(unsigned char *)((a7 + 0x0)) = 0x0;
                    *(unsigned char *)((a7 + 0x4)) = 0xFF;
                    *(unsigned int *)((a7 + 0x24)) = 0x0;
                } else {
                    if ((*(signed char *)((a7 + 0x7))) != 0) {
                        *(unsigned char *)((a7 + 0x4)) = 0x0;
                    }
                }
            }
        }
    } else {
        *(unsigned char *)((a7 + 0x4)) = 0xFF;
        *(unsigned char *)((a7 + 0x0)) = 0x0;
    }
    if (((*(signed char *)((a7 + 0x0))) != 0) && ((t62 = *(signed char *)((a7 + 0x7)), t62 != 0) && (t63 = *(int *)0xC843924, t64 = (((struct o10C4_int *)(t63))->v), t64 == 1))) {
        t68 = *(int *)((a8 + 0x0));
        if ((t68 != -1) && (t68 != 0xFFFFFF00)) {
            FUN_0c115270(a8, ((unsigned char)(*(int *)((a8 + 0x0))) + 0x1));
        }
    }
    if ((*(signed char *)((a7 + 0x2))) != 0) {
        (((struct o10_uchar *)(a6))->v) = 0x0;
        FUN_0c1128ee(a6, a7, a8);
    }
    if ((*(signed char *)((a7 + 0x3))) != 0) {
        (((struct o10_uchar *)(a6))->v) = 0x0;
        mpdrv_clear_deviceinfo(a6);
    }
    return 0x0;
}
