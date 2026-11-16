/* Library code: C that behaves like this game's own bytes. */
/* float/int vector and matrix helpers (0c0620a4-0c06231c) */

struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
extern float math_vec3_length();
int nlPopMatrix(int);
int nlPushMatrix(void);
void nlGetTranslate(int a4);


int math_mat_get_translate(int a4, int a5)
{
    nlPushMatrix();
    nlGetTranslate(a5);
    return nlPopMatrix(0x1);
}
