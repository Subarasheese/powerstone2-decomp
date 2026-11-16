/* Library code: C that behaves like this game's own bytes. */
/* not identified yet (keep old name) (0c028030-0c028524) */

struct vec3 { float x, y, z; };
struct screen_req { int field_00; struct vec3 pos; float size_x, size_y; char pad_1c[24]; int mode; int field_52; };
int nlSelectMatrixStack(int);
int nlPushMatrix(int);
int nl_sprite_draw(struct screen_req *);
int nlCalcPoint(struct vec3 *, struct vec3 *);
int nlCalcPoint44(struct vec3 *, float *);
int nlPopMatrix(int);
int FUN_0c0283c4(int, int);


int FUN_0c0283f0(int a4)
{
    register int t0;
    register int t1;
    register int t3;

    t0 = *(short *)((a4 + 0x0));
    *(unsigned short *)((a4 + 0x0)) = (t0 - 1);
    t1 = 0x0;
    if ((int)(short)(t0 - 1) < 0) {
        t0 = *(int *)((a4 + 0x10));
        t1 = 0x0;
        t3 = (t0 + 0x10);
        if (((unsigned short)(*(short *)((t0 + 0xA))) & 0xFF00) == 0xFF00) {
            t1 = 0x1;
            t3 = (*(int *)((t0 + 0xC)));
        }
        FUN_0c0283c4(a4, t3);
    }
    return t1;
}
