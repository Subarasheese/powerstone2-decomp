/* Library code: C that behaves like this game's own bytes. */
/* motion length, key stream readers, angle deltas (part 2 of 2 of the same module) (0c09b0f8-0c09b7a4) */

/* named globals (symbols.txt) */
extern char g_model_scale_tab[];
#define SLOT ((signed char)player[0x71F1])
#define SEG_REC(b) (player + 768 + (short)(SLOT * 3520) + (short)((signed char)(b) * 176))
#define WORD_AT(p) (*(int *)(p))
#define FLOAT_AT(p) (*(float *)(p))
void mot_read_vec3_scaled(char *dst, char *src);
void mot_read_vec3_float(char *dst, char *src);
void math_angle3_delta_scaled(char *dst, char *a, char *b, float f);
void math_vec3_sub_scaled(char *dst, char *a, char *b, float s);
void math_vec3i_add(char *dst, char *a, char *b);
void math_vec3_add(char *dst, char *a, char *b);
void math_vec3_sub(char *dst, char *a, char *b);

int math_angle_delta16(int a4, int a5);


int math_angle_delta16(int a4, int a5)
{
    register int t0;
    register int t1;

    if ((int)((unsigned short)a4 - (unsigned short)a5) >= 0) {
        t0 = ((unsigned short)a4 - (unsigned short)a5);
        if ((0x8000 & ((unsigned short)a4 - (unsigned short)a5)) != 0) {
            t0 = (((unsigned short)a4 - (unsigned short)a5) - 0x10000);
        }
        t1 = t0;
    } else {
        t0 = ((unsigned short)a4 - (unsigned short)a5);
        if ((0x8000 & ((unsigned short)a4 - (unsigned short)a5)) == 0) {
            t0 = (((unsigned short)a4 - (unsigned short)a5) + 0x10000);
        }
        t1 = t0;
    }
    return t1;
}


int math_angle3_delta(int a4, int a5, int a6)
{
    register int t8;

    *(unsigned int *)((a4 + 0x0)) = (math_angle_delta16((*(int *)((a5 + 0x0))), (*(int *)((a6 + 0x0)))));
    *(unsigned int *)((a4 + 0x4)) = (math_angle_delta16((*(int *)((a5 + 0x4))), (*(int *)((a6 + 0x4)))));
    t8 = math_angle_delta16((*(int *)((a5 + 0x8))), (*(int *)((a6 + 0x8))));
    *(unsigned int *)((a4 + 0x8)) = t8;
    return t8;
}
