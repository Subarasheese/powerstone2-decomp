/* Library code: C that behaves like this game's own bytes. */

extern float _builtin_sqrtf(float);
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
int nlCalcPoint(int, int);
int nlCalcVector(int, int);
int nlStoreMatrix(int);
int nlLoadMatrix(int, int, int, float, float, float, float);
int nlPopMatrix(int);
int nlPushMatrix(int);
int _quick_odd_mvn(void);
extern float _builtin_fipr(float *, float *);
extern void _builtin_ftrv(float *, float *);
extern void _builtin_ld_ext(float (*)[4]);
extern void _builtin_st_ext(float (*)[4]);
float nlMultiMatrixRevOrder8(int a4);
int math_mat_transform_point(int a4, int a5);
int math_mat_transform_vector(int a4, int a5);
void FUN_0c0e09f0(int a4, int a5, int a6, float f4, float f5, float f6, float f7);
float math_vec3_normalize_fast(int a4);


/* nlMultiMatrixRevOrder8(m): XMTRX = m . XMTRX, the reverse order of nlMultiMatrix8 (m 8-aligned, moved in pairs). The
   original loads m into the front bank, swaps banks and transforms the old matrix's columns; fr0 is left holding m[0] */
float nlMultiMatrixRevOrder8(int a4)
{
    float *m = (float *)a4;
    float old[16];
    float mm[16];
    int i;

    _builtin_st_ext((float (*)[4])old);
    for (i = 0; i < 16; i++) {
        mm[i] = m[i];
    }
    _builtin_ld_ext((float (*)[4])mm);
    for (i = 0; i < 16; i += 4) {
        _builtin_ftrv(&old[i], &old[i]);
    }
    _builtin_ld_ext((float (*)[4])old);
    return mm[0];
}




void FUN_0c0e09f0(int a4, int a5, int a6, float f4, float f5, float f6, float f7)
{
    register int t0;
    register int t1;
    register int t2;
    register float u3;

    if (a4 == 0) {
        if (a5 != 0) {
            nlLoadMatrix(a5, a5, a6, f4, f5, f6, f7);
    return;
        }
        return;
    }
    if (a5 == 0) {
        nlStoreMatrix(a4);
    return;
    }
    t0 = 0x10;
    t1 = a4;
    t2 = a5;
    for (;;) {
        u3 = *(float *)((t2 + 0x0));
        t2 = (t2 + 0x4);
        t0 = (t0 - 0x1);
        *(float *)((t1 + 0x0)) = u3;
        t1 = (t1 + 0x4);
        if (t0 == 0) {
            break;
        }
    }
}
