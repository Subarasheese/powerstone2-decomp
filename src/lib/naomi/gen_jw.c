/* A function proven on cases written by hand (tools/6-agentic/handcase.py). */

struct o0_float { float v; };
struct o4_float { char p[0x4]; float v; };
struct o8_float { char p[0x8]; float v; };
int nlObjPutInit(int a4, int a5, int a6, int a7);

int nlObjPutInit(int a4, int a5, int a6, int a7)
{
    register int t0;
    register int t1;
    register int t2;
    register int t3;
    register float u0;
    register float u1;
    register float u2;
    register float u3;
    register float u4;
    register float u5;
    register float u6;
    register float u7;

    *(float *)0xC8A6C84 = (*(float *)0xC2A61D0);
    *(unsigned int *)0xC868B7C = 0x0;
    u0 = (((struct o0_float *)0xC17E6F8)->v);
    u1 = (((struct o4_float *)0xC17E6F8)->v);
    u2 = (((struct o8_float *)0xC17E6F8)->v);
    t0 = 0x0;
    t1 = a7;
    for (;;) {
        t3 = 0x0;
        for (;;) {
            *(float *)(((((t0 << 8) << 1) + 0xC868B88) + (t3 << 2))) = 0.0f;
            u3 = (((float)t3 * u0) / u2);
            u4 = ((u3 + u1) * (u3 + u1));
            u5 = ((u3 + u1) * (u3 + u1));
            if ((int)t0 < (int)0x2) {
                *(float *)(((((t0 << 8) << 1) + 0xC868B88) + (t3 << 2))) = (((u4 + u5) - 1.0f) * ((u4 + u5) - 1.0f));
            } else {
                t1 = 0x0;
                u3 = 1.0f;
                if ((int)t0 > 0) {
                    u6 = 1.0f;
                    for (;;) {
                        t1 = (t1 + 0x1);
                        u7 = (((u4 + u5) - 1.0f) * ((u4 + u5) - 1.0f));
                        u6 = (u6 * u7);
                        if ((int)t1 >= (int)t0) {
                            break;
                        }
                    }
                    u3 = u6;
                }
                *(float *)(((((t0 << 8) << 1) + 0xC868B88) + (t3 << 2))) = u3;
            }
            t2 = (t3 << 2);
            t3 = (t3 + 0x1);
            if ((int)t3 >= (int)0x80) {
                break;
            }
        }
        t0 = (t0 + 0x1);
        if ((int)t0 >= (int)0x20) {
            break;
        }
    }
    return t2;
}
