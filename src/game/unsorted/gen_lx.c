/* Straight-line functions with calls and guards (batch gen_lx): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_float { float v; };
struct o0_int { int v; };
struct o0_uchar { unsigned char v; };
struct o0_uint { unsigned int v; };
struct o10_float { char p[0x10]; float v; };
struct o14_float { char p[0x14]; float v; };
struct o18_float { char p[0x18]; float v; };
struct o18_int { char p[0x18]; int v; };
struct o18_uint { char p[0x18]; unsigned int v; };
struct o1C_float { char p[0x1C]; float v; };
struct o20_float { char p[0x20]; float v; };
struct o24_float { char p[0x24]; float v; };
struct o24_int { char p[0x24]; int v; };
struct o24_uint { char p[0x24]; unsigned int v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o34_float { char p[0x34]; float v; };
struct o38_float { char p[0x38]; float v; };
struct o3C_float { char p[0x3C]; float v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oC_float { char p[0xC]; float v; };
struct oC_int { char p[0xC]; int v; };
struct oC_uint { char p[0xC]; unsigned int v; };
int nlObjPut(int);
int nlObjPutSetFadeColor(float, float, float);
int nlObjPutTrnsl(int, float);
int nlSelectMatrixStack(int);
int nlUnitMatrix(void);
int FUN_0c057402(void);

#define VF(o) (*(float *)(0xC40FA58 + (o)))
#define VW(o) (*(unsigned int *)(0xC40FA58 + (o)))
#define BLK(d, o) { struct mv3 { int w[3]; }; *(struct mv3 *)(d) = *(struct mv3 *)(0xC40FA58 + (o)); }

/* manual: the quad draw of the fade/wipe screen (mode byte 0C54244C: 0 full-screen fade, 1 strips, 3 two bars, 2 none); one colour block, one flag block, one copy+put pass shared by the modes, the pass order set per mode; hand cases m0-m5 x flag x counter x tail, 611 of 639 instructions (the rest is the dead unsigned fix-up of the colour bytes) */
int FUN_0c057402(void)
{
    float u0;
    float u1;
    float u2;
    int t1;
    int t2;
    int t3;
    int mode;
    int n;
    int cn;
    int k;
    int qa1;
    int qa0;

    qa1 = 0xC542450;
    qa0 = 0xC54244F;
    nlSelectMatrixStack(0x1);
    nlUnitMatrix();
    t2 = 0x1F;
    if ((*(signed char *)qa0) == 0) {
    } else {
        t3 = *(signed char *)0xC54244E;
        mode = *(signed char *)0xC54244C;
        if (mode == 2) {
            *(volatile signed char *)0xC54244D;
        } else if (mode == 0 || mode == 1 || mode == 3) {
            if ((*(signed char *)0xC54244D) == 0) {
                u0 = ((float)(*(signed char *)qa0) / (float)(signed char)t3);
            } else {
                u1 = -((float)((*(signed char *)qa0) - 1) / (float)(signed char)t3);
                u0 = (u1 + 1.0f);
            }
            if (mode == 3) {
                VF(0) = (u0 + -0.5f);
                VF(0x18) = -0.5f;
                VF(0xC) = -0.5f;
                VF(0x24) = -1.0f;
                VF(0x10) = 0.5f;
                VF(4) = 0.5f;
                VF(0x28) = -0.5f;
                VF(0x1C) = -0.5f;
                u1 = -1.0f;
            } else {
                VF(0xC) = -320.0f;
                VF(0) = -320.0f;
                VF(0x24) = 320.0f;
                VF(0x18) = 320.0f;
                u1 = -100.0f;
                if (mode == 0) {
                    VF(0x1C) = -240.0f;
                    VF(4) = -240.0f;
                    VF(0x28) = 240.0f;
                    VF(0x10) = 240.0f;
                    u1 = -1.0f;
                }
            }
            VF(0x2C) = u1;
            VF(0x20) = u1;
            VF(0x14) = u1;
            VF(8) = u1;
            cn = (mode == 0);
            u1 = -37.5f;
            for (n = 0;; n++) {
                if (n == cn) {
                    for (k = 16; k >= 0; k -= 8) {
                        t3 = *(int *)qa1;
                        VF(0x34 + (16 - k) / 2) = ((float)((t3 >> k) & 0xFF) / 255.0f);
                    }
                    if (mode == 0) {
                        VF(0x30) = 1.0f;
                    }
                    { struct mv4 { int w[4]; }; *(struct mv4 *)(0xC1BFA64) = *(struct mv4 *)(0xC40FA88); }
                    (((struct o0_float *)0xC1BFA34)->v) = 640.0f;
                    (((struct o20_float *)0xC1BFA34)->v) = 640.0f;
                    nlObjPutSetFadeColor(1.0f, 1.0f, 1.0f);
                    if (mode == 0) {
                        nlObjPutTrnsl(0xC1BFA20, u0);
                        break;
                    }
                } else {
                    if (mode == 1) {
                        u2 = (u0 * 3.125f);
                        VF(0x1C) = u1;
                        VF(4) = u1;
                        VF(0x28) = (u2 + u1);
                        VF(0x10) = (u2 + u1);
                    } else if (n == 2) {
                        VF(0xC) = (0.5f - u0);
                        VF(0x24) = 0.5f;
                        VF(0x18) = 0.5f;
                        VF(0) = 0.5f;
                        VF(4) = 0.5f;
                        VF(0x1C) = -0.5f;
                        VF(0x10) = -0.5f;
                        VF(0x28) = -1.0f;
                    }
                    VW(0) |= 0x1;
                    VW(0xC) |= 0x1;
                    VW(0x18) |= 0x1;
                    VW(0x24) |= 0x1;
                    BLK(0xC1BFA90, 0);
                    BLK(0xC1BFAB0, 0xC);
                    BLK(0xC1BFAD0, 0x18);
                    BLK(0xC1BFAF0, 0x24);
                    if (mode != 0) {
                        nlObjPut(0xC1BFA20);
                        if (mode == 1) {
                            u1 = (u1 + 3.125f);
                            if (!(37.5f > u1)) {
                                break;
                            }
                        } else if (n == 2) {
                            break;
                        }
                    }
                }
            }
        }
        if (((*(signed char *)0xC54208F) == 0) && ((t2 = *(signed char *)0xC542092, t2 == 0) && (t1 = *(signed char *)0xC478BFC, t1 == 0))) {
            (((struct o0_uchar *)0xC54244F)->v) = ((*(signed char *)qa0) - 1);
        }
        t2 = 0x1F;
        if ((*(signed char *)qa0) == 0) {
            t1 = 0x1D;
            if ((*(signed char *)0xC54244D) != 0) {
                (((struct o0_uchar *)0xC54244F)->v) = 0x1;
                t1 = 0x1F;
            }
            t2 = t1;
        }
    }
    return t2;
}
