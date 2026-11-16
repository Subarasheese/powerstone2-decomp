/* Library code: C that behaves like this game's own bytes. */
/* scene render per frame (cameras, split screen), then HUD (0c02ca74-0c02d774) */

/* named globals (symbols.txt) */
int game_draw_frame(void);
int draw_fighter(int a4, int a5, int a6, int a7);
extern char g_cam_split_flag[];
int dbg_set_cell_size(int, int);
int dbg_set_cursor_cell(int, int);
int dbg_set_text_color(int);
int dbg_printf(int, ...);
float math_mat_row0_length(int, float);
float math_mat_row1_length(int);
float math_mat_row2_length(int, float);
int FUN_0c0e34a0(float);
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
int nlRotateAX(int);
int nlRotateAY(int);
int nlRotateAZ(int);
int nlScale(float, float, float);
int nlTranslate(float, float, float);
struct o20_float { char p[0x20]; float v; };
struct o28_float { char p[0x28]; float v; };
struct o2D4_float { char p[0x2D4]; float v; };
int nlObjPutUseViewMatrixTrnsl(int, float);
int nlUnitMatrix(void);
struct o60_float { char p[0x60]; float v; };
struct o64_float { char p[0x64]; float v; };
struct o68_float { char p[0x68]; float v; };
int FUN_0c05a164(int);
int FUN_0c05a6e8(int);
int draw_set_layer_lighting(int);
int nlSetLightColor(float, float, float);
int nlSelectMatrixStack(int);
struct o0_int { int v; };
struct o4_int { char p[0x4]; int v; };
struct o14_uchar { char p[0x14]; unsigned char v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o8_int { char p[0x8]; int v; };
int FUN_0c02828e(void);
int draw_world(void);
int ui_draw_no_intro_bar(void);
int FUN_0c0dca60(int, int, int, int, int);
int FUN_0c0dcac0(int, int);
int gfx_set_background_color(int, int, int);
int nlLoadMatrix(int);
int nlPerspective(int, float, float, float);
int stage_draw_lights(void);
int FUN_0c0282cc(void);
int draw_object_classes(void);

int FUN_0c02ca74(void);
int FUN_0c02cade(void);
int draw_frame_should_skip(void);


int FUN_0c02cade(void)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;

    t0 = *(int *)0xC4CFA60;
    dbg_set_text_color(0xFFFFFFFF);
    t1 = *(signed char *)0xC4CFA64;
    t2 = (dbg_set_cell_size(0x8, 0x8));
    if (t1 != 0) {
        t1 = 0x28;
        t3 = t0;
        for (;;) {
            t3 = (t3 - 1);
            if ((int)t3 < 0) {
                t3 = 0x27;
            }
            dbg_set_cursor_cell(0x1E, t1);
            *(volatile int *)((0xC4CF9C0 + (t3 << 2)));
            t0 = dbg_printf(0xC149244);
            t1 = (t1 - 1);
            if ((int)t1 <= 0) {
                break;
            }
        }
        t2 = t0;
    }
    return t2;
}
