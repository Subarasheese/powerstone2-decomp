/* Library code: C that behaves like this game's own bytes. */
/* hit box data converters, per-frame object lists, hit edit draw (0c0203d0-0c022228) */

/* named globals (symbols.txt) */
int FUN_0c021238(int a4, int a5, int a6, int a7);
int hit_list_save_positions(int a4, int a5, int a6, int a7);
int FUN_0c0207ca(int a4, int a5, int a6, int a7);
int FUN_0c02067e(int a4, int a5, int a6, int a7);
extern char g_obj_list_heads[];
int FUN_0c062d78(void);
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
int hit_world_reset(void);
int FUN_0c025706(void);
int FUN_0c025d10(void);
int FUN_0c025f38(void);
int hit_world_calc_displacement(void);
struct o0_int { int v; };
struct o4_int { char p[0x4]; int v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c02078c(void);
int FUN_0c020886(int);
int FUN_0c020998(int);
int hit_load_cylinder_world(int, int, int);
int hit_load_sphere_world(int, int, int);
int hit_get_sphere_entry(int, int, int);
int hit_get_cylinder_entry(int, int, int);
int nlStoreMatrix(int);
int nlPopMatrix(int);
int nlPushMatrix(int);
int nlSetTranslate(int);
int math_vec3_normalize_fast(int, int, int, float, float, float, float);
int math_mat_transform_vector(int, int);
int math_mat_get_translate(int, int);
typedef struct { float x, y, z; } Vec3f;
int FUN_0c08d6ec(int, int);
int FUN_0c08dbc8(int, int);
int FUN_0c08dc24(int, int);
int hit_find_part_entry(int, int, int, int);
float math_signed_sqrt(float);
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o20_short { char p[0x20]; short v; };
struct o22_short { char p[0x22]; short v; };
struct o24_float { char p[0x24]; float v; };
struct o24_short { char p[0x24]; short v; };
struct o26_short { char p[0x26]; short v; };
struct o28_float { char p[0x28]; float v; };
struct o28_short { char p[0x28]; short v; };
struct o2A_short { char p[0x2A]; short v; };
struct o2C_float { char p[0x2C]; float v; };
struct o2C_short { char p[0x2C]; short v; };
struct o2E_short { char p[0x2E]; short v; };
struct o30_float { char p[0x30]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct vec3f { float x, y, z; };
extern void math_mat_transform_point(float *, char *);
typedef struct { int w[6]; } Stk6;

int vec3f_to_vec3s(int a4, int a5);
int vec3s_to_vec3f(int a4, int a5);
int FUN_0c0210f4(int a4, int a5, int a6);

#ifdef NATIVE_PORT
/* The direction from point a to point b, normalized, into out. The SH-4 gets the two vectors by value on the stack (the
   24-byte block of the definition below); on the host a 12-byte struct of floats travels in two SSE registers, which is how
   the callers pass them, so the host definition takes them as the callers declare them. Taking the stack block there read
   whatever the stack held and made the push direction garbage. */
typedef struct { float x, y, z; } PortV3;


#endif

float math_interval_overlap(float f4, float f5, float f6, float f7, float f8, float f9, float f10)
{
    register float u0;
    register float u1;
    register float u2;
    register float u3;

    if ((f4 > f6) && (f7 > f5)) {
        u0 = (f7 - f5);
        if ((f7 - f5) > (f4 - f6)) {
            u0 = (f4 - f6);
        }
        u1 = ((u0 + f6) - f7);
    } else {
        if ((f6 > f4) && (f5 > f7)) {
            u0 = (f5 - f7);
            if ((f5 - f7) > (f6 - f4)) {
                u0 = (f6 - f4);
            }
            u2 = ((u0 + f4) - f5);
        } else {
            u0 = f6;
            if (!(f6 > f4)) {
                u0 = f4;
            }
            u3 = f7;
            if (!(f5 > f7)) {
                u3 = f5;
            }
            u2 = (((((f4 - f5) + f6) - f7) - u0) + u3);
        }
        u1 = u2;
    }
    return u1;
}
