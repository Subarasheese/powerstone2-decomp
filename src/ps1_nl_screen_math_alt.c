/* Library code: C that behaves like this game's own bytes. */
/* nl screen/frame buffer wrappers (0c0ddf30-0c0dfe20) */

int math_atan_angle16(float);
float math_sin_angle16(int);
float math_ln_float(int, int, int, int, float);
struct o0_float { float v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
float math_exp_float(int, int, int, int, float);
float math_sin_reduce_quadrant(int *quadrant, float x);


int math_atan2_angle16(float vy, float vx)
{
    if (vy > vx) {
        if (!(-vy > vx)) {
            if (vy == 0.0f) {
                return 0x4000;
            }
            return (0x4000 - math_atan_angle16(vx / vy)) & 0xFFFF;
        }
        if (vx == 0.0f) {
            return 0x8000;
        }
        return (0x8000 + math_atan_angle16(vy / vx)) & 0xFFFF;
    }
    if (!(-vy > vx)) {
        if (vx == 0.0f) {
            return 0;
        }
        return math_atan_angle16(vy / vx);
    }
    if (vy == 0.0f) {
        return 0xC000;
    }
    return (0xC000 - math_atan_angle16(vx / vy)) & 0xFFFF;
}
