/* Library code: C that behaves like this game's own bytes. */
/* nlObjPut family (object put with world or view matrix) (0c0dcae0-0c0dcf10) */

extern int nlStoreMatrix8();
int nlLoadMatrix8(int);
int nlMultiMatrixRevOrder8(int);
int nlInvLightVector(void);
int nlInvLightVectorUseViewMatrix(void);
int nlobjput_sub(int);
int nlobjput_sub_trnsl(int, float);
int nlMakeModelViewProjectMatrix_objput(void);
int nlPushMatrix(int);
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct o0_float { float v; };
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o28_float { char p[0x28]; float v; };
struct oC_float { char p[0xC]; float v; };
struct Vec3f { float x, y, z; };


int nlObjPutUseViewMatrixTrnsl(int a4, float f4)
{
    if (((*(int *)((a4 + 0x4))) & 2) == 0) {
        nlInvLightVectorUseViewMatrix();
    }
    nlMakeModelViewProjectMatrix_objput();
    return nlobjput_sub_trnsl(a4, f4);
}
