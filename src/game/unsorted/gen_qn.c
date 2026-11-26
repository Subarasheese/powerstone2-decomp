/* Straight-line functions with calls and guards (batch gen_qn): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o10_float { char p[0x10]; float v; };
struct o15_uchar { char p[0x15]; unsigned char v; };
struct o1A_uchar { char p[0x1A]; unsigned char v; };
struct o1B_uchar { char p[0x1B]; unsigned char v; };
struct o22_short { char p[0x22]; short v; };
struct o22_ushort { char p[0x22]; unsigned short v; };
struct o24_short { char p[0x24]; short v; };
struct o28_float { char p[0x28]; float v; };
struct o2C_float { char p[0x2C]; float v; };
struct o30_float { char p[0x30]; float v; };
struct o4C_float { char p[0x4C]; float v; };
struct o50_float { char p[0x50]; float v; };
struct o54_float { char p[0x54]; float v; };
struct o58_float { char p[0x58]; float v; };
struct o5C_float { char p[0x5C]; float v; };
struct o60_float { char p[0x60]; float v; };
struct o8_float { char p[0x8]; float v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c0c2d56(int, int, int);
int FUN_0c0d2480(int, int);
int math_atan2_angle16(float, float);
int nlAddVector3op(int, int, int);
int FUN_0c0d21ac(int a4, int a5, float f4, float f5, float f6);

/* manual: steps an object along its keyframe path (new segment: velocity or acceleration from the next key; move, turn, countdown); 88 cases, 351 of 351 instructions */
struct v3_qn { int w[3]; };
struct key_qn { int frame; int flags; float pos[3]; };
int FUN_0c0d21ac(int a4, int a5, float f4, float f5, float f6)
{
    char *o = (char *)a4;
    float *pos = (float *)(a4 + 0x28), *vel = (float *)(a4 + 0x4C), *acc = (float *)(a4 + 0x58);
    short *timer = (short *)(a4 + 0x42A);
    struct key_qn *path;
    int i, d, obj;
    float dt, k;
#define IDX (*(signed char *)(a4 + 0x1A))
#define OBJ (*(int *)(a4 + 0x10))

    path = ((struct key_qn **)0xC286EB8)[(signed char)o[0x19]];
    if (++*(short *)(a4 + 0x22) >= path[IDX].frame) {
        if (IDX == 0) {
            *(struct v3_qn *)pos = *(struct v3_qn *)path[IDX].pos;
            for (i = 5; i >= 0; i--)
                vel[i] = 0.0f;
            *timer = 0x3C;
            FUN_0c0d2480(a4, 0);
        }
        o[0x1B] = path[IDX].flags & 4;
        IDX++;
        dt = (float)(path[IDX].frame - path[IDX - 1].frame);
        if (path[IDX].flags & 0x80) {
            o[0xA8] = 0;
            o[0x15] = 1;
            *(short *)(a4 + 0x1C) = 0x78;
            return 0x78;
        }
        if ((path[IDX].flags & 2) && (obj = OBJ) != 0 && *(short *)(a4 + 0x428) == *(short *)(OBJ + 0x24)
            && (*(signed char *)(OBJ + 0x41D) == 0 || *(signed char *)(OBJ + 0x41D) == 1)) {
            *(struct v3_qn *)(OBJ + 0x28) = *(struct v3_qn *)pos;
            FUN_0c0c2d56(OBJ, 2, 0);
            OBJ = 0;
        }
        if (path[IDX].flags & 1) {
            for (i = 0; i < 3; i++)
                vel[i] = (path[IDX].pos[i] - pos[i]) / dt;
            for (i = 0; i < 3; i++)
                acc[i] = 0.0f;
        } else {
            k = 1.0f / (dt * dt);
            for (i = 0; i < 3; i++)
                acc[i] = (path[IDX].pos[i] - pos[i] - dt * vel[i]) * k;
        }
    }
    nlAddVector3op((int)vel, (int)vel, (int)acc);
    nlAddVector3op((int)pos, (int)pos, (int)vel);
    d = (unsigned short)(math_atan2_angle16(vel[0], vel[2]) - *(int *)(a4 + 0x38));
    if (d > 0x8000)
        d -= 0x10000;
    if (d > 0x222)
        d = 0x222;
    else if (d < -0x222)
        d = -0x222;
    *(int *)(a4 + 0x38) += d;
    if (--*timer <= 0) {
        if (o[0x16] != 0) {
            FUN_0c0d2480(a4, 0);
            d = 0x96;
        } else {
            FUN_0c0d2480(a4, 1);
            d = 0x5A;
        }
        return *timer = d;
    }
    return *timer;
#undef IDX
#undef OBJ
}
