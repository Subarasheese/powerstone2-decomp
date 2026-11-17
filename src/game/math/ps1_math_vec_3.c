/* Library code: C that behaves like this game's own bytes. */
/* float/int vector and matrix helpers (0c0620a4-0c06231c) */

struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
float math_signed_sqrt(float);
struct vec3f { float x, y, z; };
extern int nlPushMatrix(void *m);
extern void nlCalcVector(void *src, void *dst);
extern int nlPopMatrix(int n);


void math_vec3i_add(int a4, int a5, int a6)
{
    *(unsigned int *)((a4 + 0x0)) = ((*(int *)((a5 + 0x0))) + (*(int *)((a6 + 0x0))));
    *(unsigned int *)((a4 + 0x4)) = ((*(int *)((a5 + 0x4))) + (*(int *)((a6 + 0x4))));
    *(unsigned int *)((a4 + 0x8)) = ((*(int *)((a5 + 0x8))) + (*(int *)((a6 + 0x8))));
}


void math_vec3i_sub(int a4, int a5, int a6)
{
    *(unsigned int *)((a4 + 0x0)) = ((*(int *)((a5 + 0x0))) - (*(int *)((a6 + 0x0))));
    *(unsigned int *)((a4 + 0x4)) = ((*(int *)((a5 + 0x4))) - (*(int *)((a6 + 0x4))));
    *(unsigned int *)((a4 + 0x8)) = ((*(int *)((a5 + 0x8))) - (*(int *)((a6 + 0x8))));
}
