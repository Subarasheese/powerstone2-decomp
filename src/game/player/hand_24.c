/* Hand-written C: FUN_0c06dcfc, a fighter's thrown / knocked-down states (+0x15, 18 of them, each with sub-states +0x16,
   +0x17): flying off (40 up, gravity -2, capped at -30), falling from high up (more than 1000 above the floor), spinning
   while held (1092 a frame), bouncing on landing (FUN_0c07ecc6: on the floor), getting up (FUN_0c085cac with the next
   state), squashing on landing (+0x44 / +0x48 scale from 1 + 1/t), and handing over to the next state (FUN_0c085d0c).
   It marks the fighter as busy (+0x374A = 10) and clears +0x382E each frame. The original keeps 2 and 20 in r5 / r6 from
   its first instruction for later stores, so a callee that takes them and is the first call on a path gets them. */

float math_vec3_accumulate(int, int);
int FUN_0c07ecc6(int, int, int);
int FUN_0c085d0c(int, int, int, int);
int FUN_0c037bf6(int, int, int);
int FUN_0c085cac(int, int, int, int);
int FUN_0c07e868(int, int, int, int);
int FUN_0c07da48(int);
int FUN_0c07e79c(int, int, int, int, int, int, int);
int FUN_0c07ed90(int, int);
int FUN_0c07db58(int, int, int);
void FUN_0c08e382(char *);
int FUN_0c150be8(int, int);
int FUN_0c073eb8(int, int, int);
int FUN_0c0733d2(int);
int FUN_0c06bfd4(int);
int FUN_0c042fe0(void);
int FUN_0c07c5dc(int, int, int, float);
int FUN_0c059e60(int, int);

#define C8(o)   (*(signed char *)(e + (o)))
#define S16(o)  (*(short *)(e + (o)))
#define I32(o)  (*(int *)(e + (o)))
#define F32(o)  (*(float *)(e + (o)))

#define ON_FLOOR()  FUN_0c07ecc6(a4, 0, 0)
#define NEXT()      FUN_0c085d0c(a4, 2, 20, 0)
#define ANIM()      FUN_0c037bf6(a4, 2, 20)
#define SETSTATE(a, b) FUN_0c085cac(a4, (a), (b), 0)
#define MOVE()      (math_vec3_accumulate(a4 + 40, a4 + 76), math_vec3_accumulate(a4 + 76, a4 + 88))
#define STOP()      (F32(96) = F32(88) = F32(84) = F32(76) = 0.0f)

void FUN_0c06dcfc(int a4)
{
    char *e = (char *)a4;
    float s;

    *(unsigned char *)(e + 14154) = 10;
    S16(14382) = 0;
    switch ((unsigned char)C8(0x15)) {
    case 0:
        switch (C8(0x16)) {
        case 0:
            if (--S16(0x1C) == 0 || ON_FLOOR() == 0) {
                FUN_0c07e868(a4, 6, 20, 0);
                F32(80) = 40.0f;
                F32(92) = -2.0f;
                C8(0x16)++;
            }
            FUN_0c07da48(a4);
            ANIM();
            math_vec3_accumulate(a4 + 40, a4 + 76);
            return;
        case 1:
            ANIM();
            MOVE();
            if (-30.0f > F32(80))
                F32(80) = -30.0f;
            return;
        }
        return;
    case 1:
        switch (C8(0x16)) {
        case 0:
            switch (C8(0x17)) {
            case 0:
                if (F32(360) + 1000.0f > F32(44)) {
                    FUN_0c07e79c(a4, -1, 3, 15, -1, 3, 15);
                    F32(80) = -10.0f;
                    F32(92) = -0.0740740746f;
                    C8(0x17)++;
                }
                goto anim_move;
            case 1:
                if (ON_FLOOR()) {
                    STOP();
                    SETSTATE(6, 0);
                }
                ANIM();
                MOVE();
                FUN_0c07ed90(a4, 0);
                return;
            }
            return;
        case 1:
            switch (C8(0x17)) {
            case 0:
                if (ON_FLOOR() == 0)
                    goto anim_move;
                STOP();
                FUN_0c07db58(a4, 2, 20);
                FUN_0c08e382(e);
                if (C8(309) != 2)
                    FUN_0c150be8(a4 + 40, I32(56));
                FUN_0c07e79c(a4, -1, 4, 42, -1, 4, 42);
                FUN_0c073eb8(a4, C8(1), *(int *)0x0C25AD1C + 420);
                FUN_0c0733d2(a4);
                goto landed;
            case 1:
                if ((unsigned char)ANIM())
                    SETSTATE(14, 0);
                return;
            }
            return;
        }
        return;
    case 2:
        switch (C8(0x17)) {
        case 0:
            *(unsigned char *)(e + 14155) = 1;
            ANIM();
            I32(56) += 1092;
            I32(14416) += 1092;
            if (--S16(0x1C) < 0 || I32(14416) >= 0x8000) {
                *(unsigned char *)(e + 14155) = 0;
                F32(44) = F32(360) + -2.0f;
                C8(0x17)++;
            }
            return;
        case 1:
            NEXT();
            return;
        }
        return;
    case 3:
        if (++S16(0x1C) < 20) {
            *(unsigned char *)(e + 14155) = 1;
        } else {
            if (0.0f > F32(80) && ON_FLOOR())
                F32(80) = 0.0f;
            F32(44) += F32(80);
            F32(80) = F32(92);
        }
        if (S16(0x1C) > 60) {
            NEXT();
            return;
        }
        FUN_0c06bfd4(a4);
        ANIM();
        math_vec3_accumulate(a4 + 40, a4 + 76);
        return;
    case 4:
    case 5:
        switch (C8(0x17)) {
        case 0:
            if (F32(80) > 0.0f)
                *(unsigned char *)(e + 14155) = 1;
            goto fall;
        case 1:
            goto up;
        }
        return;
    case 6:
        switch (C8(0x17)) {
        case 0:
fall:
            if (0.0f > F32(80) && ON_FLOOR()) {
                STOP();
                FUN_0c07e868(a4, 8, 0, 0);
                C8(0x17)++;
            }
            goto anim_move;
        case 1:
up:
            if ((unsigned char)ANIM())
                NEXT();
            return;
        }
        return;
    case 7:
        switch (C8(0x16)) {
        case 0:
            goto squash;
        case 1:
            *(unsigned char *)(e + 14166) = 1;
            return;
        }
        return;
    case 8:
        ANIM();
        math_vec3_accumulate(a4 + 40, a4 + 76);
        return;
    case 9:
    case 10:
        ANIM();
        return;
    case 11:
        switch (C8(0x17)) {
        case 0:
            if (--S16(0x1C) > 0)
                return;
            C8(0x17)++;
            return;
        case 1:
            if (ON_FLOOR() == 0)
                goto anim_move;
            STOP();
            FUN_0c07db58(a4, 2, 20);
            FUN_0c08e382(e);
            if (C8(309) != 2)
                FUN_0c150be8(a4 + 40, I32(56));
            FUN_0c07e79c(a4, -1, 4, 42, -1, 4, 42);
            FUN_0c073eb8(a4, C8(1), *(int *)0x0C25AD1C + 420);
            FUN_0c0733d2(a4);
            if (FUN_0c042fe0())
                FUN_0c07c5dc(a4, C8(14157), 1, 0.0f);
landed:
            if (F32(352) > 0.0f)
                FUN_0c059e60(a4, 5);
            C8(0x17)++;
            goto anim_move;
        case 2:
            if ((unsigned char)ANIM())
                SETSTATE(14, 0);
            return;
        }
        return;
    case 12:
        switch (C8(0x17)) {
        case 0:
            *(unsigned char *)(e + 14155) = 2;
            S16(14384) = 0;
            *(unsigned char *)(e + 14166) = 1;
            F32(40) = 0.0f;
            F32(44) = -19800.0f;
            F32(48) = -750.0f;
            if (--S16(0x1C) > 0)
                return;
            S16(0x1C) = 0;
            C8(0x17)++;
            return;
        case 1:
            if (++S16(0x1C) < 20)
                *(unsigned char *)(e + 14155) = 2;
            ANIM();
            MOVE();
            if (ON_FLOOR() == 0)
                return;
            if (F32(352) > 0.0f) {
                NEXT();
                return;
            }
            STOP();
            FUN_0c07db58(a4, 2, 20);
            FUN_0c08e382(e);
            if (C8(309) != 2)
                FUN_0c150be8(a4 + 40, I32(56));
            SETSTATE(14, 0);
            return;
        }
        return;
    case 13:
        switch (C8(0x17)) {
        case 0:
            if (--S16(0x1C) > 0)
                return;
            SETSTATE(5, 7);
            return;
        case 1:
            if (--S16(0x1C) > 0)
                return;
            MOVE();
            if (ON_FLOOR() == 0)
                return;
            SETSTATE(14, 0);
            if (!(F32(352) > 0.0f))
                return;
            FUN_0c059e60(a4, 5);
            return;
        }
        return;
    case 14:
        NEXT();
        return;
    case 15:
        *(unsigned char *)(e + 14155) = 2;
        switch (C8(0x17)) {
        case 0:
            ANIM();
            math_vec3_accumulate(a4 + 40, a4 + 76);
            if (++S16(0x1C) > 120)
                C8(0x17)++;
            return;
        }
        return;
    case 16:
        S16(14384) = S16(302) ^ 15;
        *(unsigned char *)(e + 14155) = 1;
        ANIM();
        MOVE();
        if (S16(0x1C) == 0) {
            if (F32(80) > 0.0f)
                return;
            if (ON_FLOOR() == 0)
                return;
            SETSTATE(6, 0);
            return;
        }
        S16(0x1C)--;
        return;
    case 17:
        switch (C8(0x16)) {
        case 0:
squash:
            s = (float)S16(0x1C);
            F32(68) = F32(14220) * (1.0f / s + 1.0f);
            F32(72) = F32(64) = F32(14220) * (float)S16(0x1C) * 0.0250000004f;
            I32(56) += 2730;
            if (--S16(0x1C) == 0)
                C8(0x16)++;
            return;
        case 1:
            *(unsigned char *)(e + 14166) = 1;
            return;
        }
        return;
    default:
        NEXT();
        return;
    }
anim_move:
    ANIM();
    MOVE();
}
