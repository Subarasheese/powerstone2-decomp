/* Library code: C that behaves like this game's own bytes. */
/* motion length, key stream readers, angle deltas (part 2 of 2 of the same module) (0c09b0f8-0c09b7a4) */

/* named globals (symbols.txt) */
extern char g_model_scale_tab[];
struct o0_float { float v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
int math_angle3_delta(int, int, int);
int sys_nop_09b700(void);
struct o54_float { char p[0x54]; float v; };
struct o718C_int { char p[0x718C]; int v; };

int mot_read_vec3_scaled(int a4, int a5);
int mot_read_vec3_float(int a4, int a5);


int math_angle3_delta_scaled(int a4, int a5, int a6, float f4)
{
    register int t0;

    t0 = math_angle3_delta(a4, a5, a6);
    *(unsigned int *)((a4 + 0x0)) = (int)((float)(*(int *)((a4 + 0x0))) * f4);
    *(unsigned int *)((a4 + 0x4)) = (int)((float)(*(int *)((a4 + 0x4))) * f4);
    *(unsigned int *)((a4 + 0x8)) = (int)((float)(*(int *)((a4 + 0x8))) * f4);
    return t0;
}


int math_vec3_sub_scaled(int a4, int a5, int a6, float f4)
{
    *(float *)((a4 + 0x0)) = (((*(float *)((a6 + 0x0))) - (*(float *)((a5 + 0x0)))) * f4);
    (((struct o4_float *)(a4))->v) = ((((((struct o4_float *)(a6))->v)) - ((((struct o4_float *)(a5))->v))) * f4);
    (((struct o8_float *)(a4))->v) = ((((((struct o8_float *)(a6))->v)) - ((((struct o8_float *)(a5))->v))) * f4);
    return 0x8;
}
