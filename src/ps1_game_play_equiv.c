/* Library code: C that behaves like this game's own bytes. */
/* win counter text (0c0d46e4-0c0d54c0) */

/* named globals (symbols.txt) */
int FUN_0c0d54ac(void);
int game_play_game_over_update(int a4, int a5, int a6, int a7);
int game_play_step(int a4, int a5, int a6, int a7);
int game_check_player_join(int a4, int a5, int a6, int a7);
extern char g_select_ready_mask[];
int memset(int, int, int);
extern int sprintf(char *, const char *, ...);
extern float FUN_0c0d5bc0(void);
extern void ui_draw_text_stub(const char *, int, float, float, float, float);
struct o0_uchar { unsigned char v; };
struct o1_uchar { char p[0x1]; unsigned char v; };
struct o5_uchar { char p[0x5]; unsigned char v; };
int vib_stop_all(void);
int bgm_duck(void);
int bgm_unduck(void);
struct o0_int { int v; };
struct o0_short { short v; };
struct o0_uint { unsigned int v; };
struct o12_uchar { char p[0x12]; unsigned char v; };
struct o14_int { char p[0x14]; int v; };
struct o14_short { char p[0x14]; short v; };
struct o2_uchar { char p[0x2]; unsigned char v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
int game_reset_objects(void);
struct o10_short { char p[0x10]; short v; };
struct o10_ushort { char p[0x10]; unsigned short v; };
struct o12_ushort { char p[0x12]; unsigned short v; };
struct o29_uchar { char p[0x29]; unsigned char v; };
struct o4_int { char p[0x4]; int v; };
struct o4_uchar { char p[0x4]; unsigned char v; };
struct o6_uchar { char p[0x6]; unsigned char v; };
struct o7_uchar { char p[0x7]; unsigned char v; };
struct o8_int { char p[0x8]; int v; };
struct o8_uchar { char p[0x8]; unsigned char v; };
struct o9_uchar { char p[0x9]; unsigned char v; };
struct oA_uchar { char p[0xA]; unsigned char v; };
struct oB_uchar { char p[0xB]; unsigned char v; };
struct oC_uchar { char p[0xC]; unsigned char v; };
struct oC_uint { char p[0xC]; unsigned int v; };
struct oD_uchar { char p[0xD]; unsigned char v; };
int pause_menu_init(int);
int FUN_0c01d328(void);
int pause_menu_update(void);
int FUN_0c01d924(void);
int game_draw_frame(void);
int FUN_0c055562(void);
int FUN_0c0555c4(void);
extern int FUN_0c05f952();
int snd_play_side_se(int, int);
extern int ui_draw_win_counts_both();
int game_play_dispatch_state(void);
int ui_draw_challenger_info(void);
int cam_init_records(void);
int cam_update_view_matrices(int, int, int, int, int, int, int, int);
int thunk_FUN_0c062d78(void);
int FUN_0c0593e0(int);
int obj_tick_class(int);
int menu_scene1_update(void);
int menu_player_select_scene_update(void);
int menu_stage_select_scene_update(void);
int game_frame_update(int, int);
int ui_fade_reset(void);
int fx_spawn_058460(void);
int bgm_stop_streams(void);
int bgm_play_game_over(void);
int snd_play_se_indexed(int);
struct oC_short { char p[0xC]; short v; };
struct oC_ushort { char p[0xC]; unsigned short v; };
int fx_spawn_0586de(void);
int FUN_0c05fc00(void);
int FUN_0c05fc08(void);
int bgm_stop_all(void);
int bgm_play_here(void);
int cam_reset_shake(int, int, int, int);
struct oC_int { char p[0xC]; int v; };

int input_get_active_pads_mask(void);
int input_get_start_pressed_pad(void);
int FUN_0c0d48d6(void);
int thunk_FUN_0c0a3180(void);
int FUN_0c0d48ea(int a4);
int game_play_start_game_over(void);
int game_play_game_over_update(int a4, int a5, int a6, int a7);
int FUN_0c0d54ac(void);



int FUN_0c0d5188(void)
{
    return ((((unsigned char)(*(signed char *)0xC7F2EE4) == 7)) ? 1 : 0);
}
