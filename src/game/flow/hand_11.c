/* @runtime _quick_odd_mvn=0C187798 */
/* Hand-written C: FUN_0c0f84c0, an object that flies along a path of keyframes (a table chosen by the object's byte 2 from
   0C28E524). Each key gives the frame it is reached at, flags, a position and two angles. Between keys the object moves at a
   velocity that reaches the next key in time (flag 1), or accelerates to it (no flag 1); its model's vertices wave as it goes. */

typedef struct { float x, y, z; } V3;
typedef struct { int time; int flags; V3 pos; int a; int b; } Key;    /* 28 bytes */

#define C8(o)   (*(signed char *)(e + (o)))
#define S16(o)  (*(short *)(e + (o)))
#define I32(o)  (*(int *)(e + (o)))
#define F32(o)  (*(float *)(e + (o)))
#define KEYS    ((Key **)0x0C28E524)
#define LIMIT   (*(unsigned char *)0x0C541F43)

int FUN_0c03f346(int, int, int, int);
int thunk_FUN_0c05abb2(int, int);
int FUN_0c17c130(int, int, int);
void math_vec3i_add(int, int, int);
int mdl_vtx_iter_begin(int, int);
int mdl_vtx_iter_next(void);
int mdl_vtx_get_pos(int);
int mdl_vtx_set_pos(int);
float math_cos_angle16(int);

void FUN_0c0f84c0(int a4, int a5, int a6, int a7)
{
    char *e = (char *)a4;
    char *m = *(char **)(e + 0xD4);
    Key *key = KEYS[C8(2)];
    Key *k;
    float dt, dt2;
    int ang;
    V3 v;

    if (C8(0x14) == 0) {
        S16(0x1C) = 0;
        S16(0x1E) = 0;
        *(short *)(m + 6) = 1;
        *(V3 *)(e + 0x28) = key[0].pos;
        I32(0x34) = key[0].a;
        I32(0x3C) = key[0].b;
        C8(0x14)++;
    }
    if (LIMIT >= S16(0x22)) {
        FUN_0c03f346(a4, 1, a6, a7);
        return;
    }
    if (++S16(0x1E) >= key[S16(0x1C)].time) {
        k = &key[++S16(0x1C)];
        dt = (float)(k->time - k[-1].time);
        if (k->flags & 2) {
            *(int *)(m + 0x78) = (int)((float)(k->a - I32(0x34)) / dt);
            *(int *)(m + 0x7C) = 0;
            *(int *)(m + 0x80) = 0;
        } else {
            *(int *)(m + 0x78) = (int)((float)(k->a - I32(0x34)) / dt);
            *(int *)(m + 0x7C) = 0;
            *(int *)(m + 0x80) = (int)((float)(k->b - I32(0x3C)) / dt);
        }
        k = &key[S16(0x1C)];
        if (k->flags & 1) {
            F32(0x4C) = (k->pos.x - F32(0x28)) / dt;
            F32(0x50) = (k->pos.y - F32(0x2C)) / dt;
            F32(0x54) = (k->pos.z - F32(0x30)) / dt;
            F32(0x58) = 0.0f;
            F32(0x5C) = 0.0f;
            F32(0x60) = 0.0f;
        } else {
            dt2 = dt * dt;
            F32(0x58) = (k->pos.x - F32(0x28) - dt * F32(0x4C) * 2.0f) / dt2;
            F32(0x5C) = (k->pos.y - F32(0x2C) - dt * F32(0x50) * 2.0f) / dt2;
            F32(0x60) = (k->pos.z - F32(0x30) - dt * F32(0x54) * 2.0f) / dt2;
        }
        if (key[S16(0x1C)].flags & 0x10)
            thunk_FUN_0c05abb2(0, 0);
    }
    FUN_0c17c130((int)(e + 0x4C), (int)(e + 0x4C), (int)(e + 0x58));     /* velocity += acceleration */
    FUN_0c17c130((int)(e + 0x28), (int)(e + 0x28), (int)(e + 0x4C));     /* position += velocity */
    math_vec3i_add((int)(e + 0x34), (int)(e + 0x34), (int)(m + 0x78));   /* angles += turn */
    if (key[S16(0x1C)].flags & 2)
        *(int *)(*(int *)(e + 0xC4) + 0x80) += key[S16(0x1C)].b;
    else
        *(int *)(*(int *)(e + 0xC4) + 0x80) = 0;
    if (key[S16(0x1C)].flags & 4) {
        if (S16(0x1E) & 2)
            F32(0x2C) += 5.0f;
        else
            F32(0x2C) -= 5.0f;
    } else {
        if (S16(0x1E) & 0x40)
            F32(0x2C) += 0.1f;
        else
            F32(0x2C) -= 0.1f;
    }
    if (key[S16(0x1C)].flags & 8) {
        F32(0x40) -= 0.0030303f;
        if (!(F32(0x40) > 0.0f))
            F32(0x40) = 0.0f;
        F32(0x48) = F32(0x40);
        F32(0x44) = F32(0x40);
    }
    ang = S16(0x1E) << 12;
    mdl_vtx_iter_begin(*(int *)(*(int *)(e + 0xD4) + 8), *(int *)(*(int *)(e + 0xD0) + 8));
    while (mdl_vtx_iter_next() == 0) {
        mdl_vtx_get_pos((int)&v);
        v.y += math_cos_angle16(ang) * v.z / 14.0f;
        mdl_vtx_set_pos((int)&v);
        ang += 3640;
    }
    m = *(char **)(e + 0xC8);
    *(int *)(m + 0x80) += 182;
    *m = S16(0x1E) & 1;
}
