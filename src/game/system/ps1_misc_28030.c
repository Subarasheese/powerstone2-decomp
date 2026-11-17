/* Library code: C that behaves like this game's own bytes. */
/* not identified yet (keep old name) (0c028030-0c028524) */

struct vec3f { float x, y, z; };
struct draw_req { int word_0; struct vec3f pos; float f16, f20; char pad[24]; int kind_48; int word_52; };
int nlSelectMatrixStack(int);
int nlPushMatrix(int);
int nl_sprite_draw(struct draw_req *);
int nlCalcPoint(struct vec3f *, struct vec3f *);
int nlCalcPoint44(struct vec3f *, float *);
int nlPopMatrix(int);


void FUN_0c0283c4(int a4, int a5)
{
    *(unsigned short *)((a4 + 0x0)) = (*(short *)((a5 + 0x0)));
    *(unsigned int *)((a4 + 0xC)) = (*(int *)((a5 + 0x4)));
    *(unsigned int *)((a4 + 0x10)) = a5;
}
