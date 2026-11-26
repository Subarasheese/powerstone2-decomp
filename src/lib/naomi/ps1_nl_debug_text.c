/* Library code: C that behaves like this game's own bytes. */
/* debug text printing (dbg_set_cursor_cell (0c0dfe20-0c0e0790) */

/* named globals (symbols.txt) */
extern char g_dbg_cell_h[];
extern char g_dbg_cell_w[];
extern char g_dbg_cursor_x[];
extern char g_dbg_cursor_y[];
extern char g_dbg_text_color[];
extern char g_dbg_text_flags[];
struct o0_uint { unsigned int v; };
struct o0_ushort { unsigned short v; };
struct o10_float { char p[0x10]; float v; };
struct o10_uint { char p[0x10]; unsigned int v; };
struct o14_uint { char p[0x14]; unsigned int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_float { char p[0x8]; float v; };
struct o8_uint { char p[0x8]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };
struct oC_uint { char p[0xC]; unsigned int v; };
int kmCreateTextureSurface(int, int, int, int);
int kmLoadTexture(int, int, int, int);
struct o14_int { char p[0x14]; int v; };
struct o24_int { char p[0x24]; int v; };
struct o28_int { char p[0x28]; int v; };
struct o8_int { char p[0x8]; int v; };
struct oC_int { char p[0xC]; int v; };
extern void _builtin_prefetch(void *);
struct HexTables { const char *names[2]; };
struct FmtState { char pad[3]; unsigned char flags; char pad2[4]; int field_8; int field_12; };
struct o0_int { int v; };
struct o10_int { char p[0x10]; int v; };
struct o4_int { char p[0x4]; int v; };

int FUN_0c0dff60(void);
int FUN_0c0dffb0(void);


int nlPrnIndentOn(void)
{
    register int t0;

    t0 = *(int *)g_dbg_text_flags;
    *(unsigned int *)g_dbg_text_flags = (t0 | 0x1);
    return (t0 | 0x1);
}


void dbg_set_cell_size(int a4, int a5)
{
    (((struct o0_uint *)g_dbg_cell_w)->v) = a4;
    (((struct o4_uint *)g_dbg_cell_w)->v) = a5;
}
