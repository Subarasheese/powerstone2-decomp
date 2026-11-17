/* Hand-written C (lifted): FUN_0c0cd8b4(fighter, kind, ctx), which fills a CPU fighter's plan with AI ops (FUN_0c0cd5c0)
   from the table of plan shapes at 0C25C2A4 (16 bytes per kind: how many ops of each type, and the odds of the random
   ones, drawn with rand % 100). The original was built without optimisation: every value goes through its frame, so this
   C is a direct lift of its code (registers as variables, the frame as S[], T as the condition flag), not a rewrite. */

int FUN_0c0cd5c0(int, int, int, int);
int FUN_0c0cd888(int);
int FUN_0c179ac0(void);

int FUN_0c0cd8b4(int a4, int a5, int a6)
{
    int r0, r1, r2, r3, r4, r5, r6, r7;
    int T, t_;
    int S[8];

    r0 = r1 = r2 = r3 = r7 = 0;
    T = t_ = 0;
    r4 = a4;
    r5 = a5;
    r6 = a6;
    r0 = 0x0C25C2A5;
    r2 = 0;
    S[7] = r4;
    S[6] = r5;
    S[5] = r6;
    S[0] = r2;
    r3 = S[6];
    r3 <<= 2;
    r3 <<= 2;
    r2 = *(signed char *)(r0 + r3);
    r0 = 0x0C25C2A6;
    S[4] = r2;
    r3 = S[6];
    r3 <<= 2;
    r3 <<= 2;
    r1 = *(signed char *)(r0 + r3);
    T = (r1 & r1) == 0;
    if (T) goto L_0C0CD91A;
    r1 = 0;
    S[3] = r1;
    goto L_0C0CD90A;
L_0C0CD8E2:
    r7 = S[7];
    r5 = 0;
    r6 = S[5];
    r0 = *(signed char *)(r7 + 1);
    r7 = r0;
    r4 = 2;
    r0 = FUN_0c0cd5c0(r4, r5, r6, r7);
    r2 = S[0];
    r2 += 100;
    S[0] = r2;
    r3 = S[4];
    r3 += -1;
    T = (r3 & r3) == 0;
    t_ = T;
    S[4] = r3;
    if (!t_) goto L_0C0CD904;
    r1 = 0;
    S[4] = r1;
L_0C0CD904:
    r3 = S[3];
    r3 += 1;
    S[3] = r3;
L_0C0CD90A:
    r2 = S[6];
    r0 = 0x0C25C2A6;
    r2 <<= 2;
    r2 <<= 2;
    r3 = *(signed char *)(r0 + r2);
    r2 = S[3];
    T = r2 >= r3;
    if (!T) goto L_0C0CD8E2;
L_0C0CD91A:
    r1 = S[6];
    r0 = 0x0C25C2A7;
    r1 <<= 2;
    r1 <<= 2;
    r3 = *(signed char *)(r0 + r1);
    T = (r3 & r3) == 0;
    if (T) goto L_0C0CD986;
    r3 = 0;
    S[3] = r3;
    goto L_0C0CD976;
L_0C0CD94C:
    r7 = S[7];
    r5 = 0;
    r6 = S[5];
    r0 = *(signed char *)(r7 + 1);
    r7 = r0;
    r4 = 1;
    r0 = FUN_0c0cd5c0(r4, r5, r6, r7);
    r2 = S[0];
    r3 = 500;
    r2 += r3;
    S[0] = r2;
    r1 = S[4];
    r1 += -1;
    T = (r1 & r1) == 0;
    t_ = T;
    S[4] = r1;
    if (!t_) goto L_0C0CD970;
    r3 = 0;
    S[4] = r3;
L_0C0CD970:
    r2 = S[3];
    r2 += 1;
    S[3] = r2;
L_0C0CD976:
    r3 = S[6];
    r0 = 0x0C25C2A7;
    r3 <<= 2;
    r3 <<= 2;
    r2 = *(signed char *)(r0 + r3);
    r3 = S[3];
    T = r3 >= r2;
    if (!T) goto L_0C0CD94C;
L_0C0CD986:
    r1 = S[6];
    r0 = 0x0C25C2A8;
    r1 <<= 2;
    r1 <<= 2;
    r3 = *(signed char *)(r0 + r1);
    T = (r3 & r3) == 0;
    if (T) goto L_0C0CD9D4;
    r3 = 0;
    S[3] = r3;
    goto L_0C0CD9C4;
L_0C0CD99A:
    r7 = S[7];
    r5 = 0;
    r6 = S[5];
    r0 = *(signed char *)(r7 + 1);
    r7 = r0;
    r4 = r5;
    r0 = FUN_0c0cd5c0(r4, r5, r6, r7);
    r2 = S[0];
    r3 = 1000;
    r2 += r3;
    S[0] = r2;
    r1 = S[4];
    r1 += -1;
    T = (r1 & r1) == 0;
    t_ = T;
    S[4] = r1;
    if (!t_) goto L_0C0CD9BE;
    r3 = 0;
    S[4] = r3;
L_0C0CD9BE:
    r2 = S[3];
    r2 += 1;
    S[3] = r2;
L_0C0CD9C4:
    r3 = S[6];
    r0 = 0x0C25C2A8;
    r3 <<= 2;
    r3 <<= 2;
    r2 = *(signed char *)(r0 + r3);
    r3 = S[3];
    T = r3 >= r2;
    if (!T) goto L_0C0CD99A;
L_0C0CD9D4:
    r1 = S[6];
    r0 = 0x0C25C2A9;
    r1 <<= 2;
    r1 <<= 2;
    r3 = *(signed char *)(r0 + r1);
    T = (r3 & r3) == 0;
    if (T) goto L_0C0CDA22;
    r3 = 0;
    S[3] = r3;
    goto L_0C0CDA12;
L_0C0CD9E8:
    r7 = S[7];
    r5 = 0;
    r6 = S[5];
    r0 = *(signed char *)(r7 + 1);
    r7 = r0;
    r4 = 3;
    r0 = FUN_0c0cd5c0(r4, r5, r6, r7);
    r2 = S[0];
    r3 = 2000;
    r2 += r3;
    S[0] = r2;
    r1 = S[4];
    r1 += -1;
    T = (r1 & r1) == 0;
    t_ = T;
    S[4] = r1;
    if (!t_) goto L_0C0CDA0C;
    r3 = 0;
    S[4] = r3;
L_0C0CDA0C:
    r2 = S[3];
    r2 += 1;
    S[3] = r2;
L_0C0CDA12:
    r3 = S[6];
    r0 = 0x0C25C2A9;
    r3 <<= 2;
    r3 <<= 2;
    r2 = *(signed char *)(r0 + r3);
    r3 = S[3];
    T = r3 >= r2;
    if (!T) goto L_0C0CD9E8;
L_0C0CDA22:
    r1 = S[6];
    r0 = 0x0C25C2AA;
    r1 <<= 2;
    r1 <<= 2;
    r3 = *(signed char *)(r0 + r1);
    T = (r3 & r3) == 0;
    if (T) goto L_0C0CDA86;
    r3 = 0;
    S[3] = r3;
    goto L_0C0CDA76;
L_0C0CDA4C:
    r7 = S[7];
    r5 = 0;
    r6 = S[5];
    r0 = *(signed char *)(r7 + 1);
    r7 = r0;
    r4 = 4;
    r0 = FUN_0c0cd5c0(r4, r5, r6, r7);
    r2 = S[0];
    r3 = 3000;
    r2 += r3;
    S[0] = r2;
    r1 = S[4];
    r1 += -1;
    T = (r1 & r1) == 0;
    t_ = T;
    S[4] = r1;
    if (!t_) goto L_0C0CDA70;
    r3 = 0;
    S[4] = r3;
L_0C0CDA70:
    r2 = S[3];
    r2 += 1;
    S[3] = r2;
L_0C0CDA76:
    r3 = S[6];
    r0 = 0x0C25C2AA;
    r3 <<= 2;
    r3 <<= 2;
    r2 = *(signed char *)(r0 + r3);
    r3 = S[3];
    T = r3 >= r2;
    if (!T) goto L_0C0CDA4C;
L_0C0CDA86:
    r1 = S[6];
    r0 = 0x0C25C2AB;
    r1 <<= 2;
    r1 <<= 2;
    r3 = *(signed char *)(r0 + r1);
    T = (r3 & r3) == 0;
    if (T) goto L_0C0CDAD4;
    r3 = 0;
    S[3] = r3;
    goto L_0C0CDAC4;
L_0C0CDA9A:
    r7 = S[7];
    r5 = 0;
    r6 = S[5];
    r0 = *(signed char *)(r7 + 1);
    r7 = r0;
    r4 = 5;
    r0 = FUN_0c0cd5c0(r4, r5, r6, r7);
    r2 = S[0];
    r3 = 5000;
    r2 += r3;
    S[0] = r2;
    r1 = S[4];
    r1 += -1;
    T = (r1 & r1) == 0;
    t_ = T;
    S[4] = r1;
    if (!t_) goto L_0C0CDABE;
    r3 = 0;
    S[4] = r3;
L_0C0CDABE:
    r2 = S[3];
    r2 += 1;
    S[3] = r2;
L_0C0CDAC4:
    r3 = S[6];
    r0 = 0x0C25C2AB;
    r3 <<= 2;
    r3 <<= 2;
    r2 = *(signed char *)(r0 + r3);
    r3 = S[3];
    T = r3 >= r2;
    if (!T) goto L_0C0CDA9A;
L_0C0CDAD4:
    r1 = S[6];
    r0 = 0x0C25C2AC;
    r1 <<= 2;
    r1 <<= 2;
    r3 = *(signed char *)(r0 + r1);
    T = (r3 & r3) == 0;
    if (T) goto L_0C0CDB22;
    r3 = 0;
    S[3] = r3;
    goto L_0C0CDB12;
L_0C0CDAE8:
    r7 = S[7];
    r5 = 0;
    r6 = S[5];
    r0 = *(signed char *)(r7 + 1);
    r7 = r0;
    r4 = 6;
    r0 = FUN_0c0cd5c0(r4, r5, r6, r7);
    r2 = S[0];
    r3 = 8000;
    r2 += r3;
    S[0] = r2;
    r1 = S[4];
    r1 += -1;
    T = (r1 & r1) == 0;
    t_ = T;
    S[4] = r1;
    if (!t_) goto L_0C0CDB0C;
    r3 = 0;
    S[4] = r3;
L_0C0CDB0C:
    r2 = S[3];
    r2 += 1;
    S[3] = r2;
L_0C0CDB12:
    r3 = S[6];
    r0 = 0x0C25C2AC;
    r3 <<= 2;
    r3 <<= 2;
    r2 = *(signed char *)(r0 + r3);
    r3 = S[3];
    T = r3 >= r2;
    if (!T) goto L_0C0CDAE8;
L_0C0CDB22:
    r0 = S[6];
    r1 = 0x0C25C2A4;
    r0 <<= 2;
    r0 <<= 2;
    r0 = *(signed char *)(r0 + r1);
    T = r0 == 0;
    if (T) goto L_0C0CDB64;
    T = r0 == 1;
    if (!T) goto L_0C0CDB38;
    
    goto L_0C0CE5EC;
L_0C0CDB38:
    T = r0 == 2;
    if (!T) goto L_0C0CDB40;
    
    goto L_0C0CDE56;
L_0C0CDB40:
    T = r0 == 3;
    if (!T) goto L_0C0CDB48;
    
    goto L_0C0CE1C8;
L_0C0CDB48:
    
    goto L_0C0CE5EC;
L_0C0CDB64:
    r4 = S[7];
    r0 = FUN_0c0cd888(r4);
    r2 = 0x0C25C2AD;
    S[1] = r0;
    S[3] = r0;
    r3 = S[6];
    r3 <<= 2;
    r3 <<= 2;
    r2 += r3;
    r2 = *(signed char *)r2;
    T = r0 > r2;
    if (!T) goto L_0C0CDB88;
    r2 = S[6];
    r0 = 0x0C25C2AD;
    r2 <<= 2;
    r2 <<= 2;
    r3 = *(signed char *)(r0 + r2);
    S[3] = r3;
L_0C0CDB88:
    r2 = 0;
    S[2] = r2;
    goto L_0C0CDBC4;
L_0C0CDB8E:
    r7 = S[7];
    r5 = 0;
    r6 = S[5];
    r0 = *(signed char *)(r7 + 1);
    r7 = r0;
    r4 = 2;
    r0 = FUN_0c0cd5c0(r4, r5, r6, r7);
    r2 = S[0];
    r2 += 100;
    S[0] = r2;
    r3 = S[4];
    r3 += -1;
    T = (r3 & r3) == 0;
    t_ = T;
    S[4] = r3;
    if (!t_) goto L_0C0CDBB0;
    
    goto L_0C0CE5A8;
L_0C0CDBB0:
    r3 = S[1];
    r3 += -1;
    T = (r3 & r3) == 0;
    t_ = T;
    S[1] = r3;
    if (!t_) goto L_0C0CDBBE;
    
    goto L_0C0CE5EC;
L_0C0CDBBE:
    r3 = S[2];
    r3 += 1;
    S[2] = r3;
L_0C0CDBC4:
    r1 = S[2];
    r2 = S[3];
    T = r1 >= r2;
    if (!T) goto L_0C0CDB8E;
    r3 = S[1];
    r0 = 0x0C25C2AE;
    S[3] = r3;
    r2 = S[6];
    r2 <<= 2;
    r2 <<= 2;
    r3 = *(signed char *)(r0 + r2);
    r2 = S[3];
    T = r2 > r3;
    t_ = T;
    r2 = 0;
    if (!t_) goto L_0C0CDBEE;
    r1 = S[6];
    r0 = 0x0C25C2AE;
    r1 <<= 2;
    r1 <<= 2;
    r3 = *(signed char *)(r0 + r1);
    S[3] = r3;
L_0C0CDBEE:
    S[2] = r2;
    goto L_0C0CDC2A;
L_0C0CDBF2:
    r7 = S[7];
    r5 = 0;
    r6 = S[5];
    r0 = *(signed char *)(r7 + 1);
    r7 = r0;
    r4 = 1;
    r0 = FUN_0c0cd5c0(r4, r5, r6, r7);
    r2 = S[0];
    r3 = 500;
    r2 += r3;
    S[0] = r2;
    r1 = S[4];
    r1 += -1;
    T = (r1 & r1) == 0;
    t_ = T;
    S[4] = r1;
    if (!t_) goto L_0C0CDC16;
    
    goto L_0C0CE5A8;
L_0C0CDC16:
    r1 = S[1];
    r1 += -1;
    T = (r1 & r1) == 0;
    t_ = T;
    S[1] = r1;
    if (!t_) goto L_0C0CDC24;
    
    goto L_0C0CE5EC;
L_0C0CDC24:
    r3 = S[2];
    r3 += 1;
    S[2] = r3;
L_0C0CDC2A:
    r1 = S[2];
    r2 = S[3];
    T = r1 >= r2;
    if (!T) goto L_0C0CDBF2;
    r3 = S[1];
    r0 = 0x0C25C2AF;
    S[3] = r3;
    r2 = S[6];
    r2 <<= 2;
    r2 <<= 2;
    r3 = *(signed char *)(r0 + r2);
    r2 = S[3];
    T = r2 > r3;
    t_ = T;
    r2 = 0;
    if (!t_) goto L_0C0CDC54;
    r1 = S[6];
    r0 = 0x0C25C2AF;
    r1 <<= 2;
    r1 <<= 2;
    r3 = *(signed char *)(r0 + r1);
    S[3] = r3;
L_0C0CDC54:
    S[2] = r2;
    goto L_0C0CDCA0;
L_0C0CDC68:
    r7 = S[7];
    r5 = 0;
    r6 = S[5];
    r0 = *(signed char *)(r7 + 1);
    r7 = r0;
    r4 = r5;
    r0 = FUN_0c0cd5c0(r4, r5, r6, r7);
    r2 = S[0];
    r3 = 1000;
    r2 += r3;
    S[0] = r2;
    r1 = S[4];
    r1 += -1;
    T = (r1 & r1) == 0;
    t_ = T;
    S[4] = r1;
    if (!t_) goto L_0C0CDC8C;
    
    goto L_0C0CE5A8;
L_0C0CDC8C:
    r1 = S[1];
    r1 += -1;
    T = (r1 & r1) == 0;
    t_ = T;
    S[1] = r1;
    if (!t_) goto L_0C0CDC9A;
    
    goto L_0C0CE5EC;
L_0C0CDC9A:
    r3 = S[2];
    r3 += 1;
    S[2] = r3;
L_0C0CDCA0:
    r1 = S[2];
    r2 = S[3];
    T = r1 >= r2;
    if (!T) goto L_0C0CDC68;
    r3 = S[1];
    r0 = 0x0C25C2B0;
    S[3] = r3;
    r2 = S[6];
    r2 <<= 2;
    r2 <<= 2;
    r3 = *(signed char *)(r0 + r2);
    r2 = S[3];
    T = r2 > r3;
    t_ = T;
    r2 = 0;
    if (!t_) goto L_0C0CDCCA;
    r1 = S[6];
    r0 = 0x0C25C2B0;
    r1 <<= 2;
    r1 <<= 2;
    r3 = *(signed char *)(r0 + r1);
    S[3] = r3;
L_0C0CDCCA:
    S[2] = r2;
    goto L_0C0CDD06;
L_0C0CDCCE:
    r7 = S[7];
    r5 = 0;
    r6 = S[5];
    r0 = *(signed char *)(r7 + 1);
    r7 = r0;
    r4 = 3;
    r0 = FUN_0c0cd5c0(r4, r5, r6, r7);
    r2 = S[0];
    r3 = 2000;
    r2 += r3;
    S[0] = r2;
    r1 = S[4];
    r1 += -1;
    T = (r1 & r1) == 0;
    t_ = T;
    S[4] = r1;
    if (!t_) goto L_0C0CDCF2;
    
    goto L_0C0CE5A8;
L_0C0CDCF2:
    r1 = S[1];
    r1 += -1;
    T = (r1 & r1) == 0;
    t_ = T;
    S[1] = r1;
    if (!t_) goto L_0C0CDD00;
    
    goto L_0C0CE5EC;
L_0C0CDD00:
    r3 = S[2];
    r3 += 1;
    S[2] = r3;
L_0C0CDD06:
    r1 = S[2];
    r2 = S[3];
    T = r1 >= r2;
    if (!T) goto L_0C0CDCCE;
    r3 = S[1];
    r0 = 0x0C25C2B1;
    S[3] = r3;
    r2 = S[6];
    r2 <<= 2;
    r2 <<= 2;
    r3 = *(signed char *)(r0 + r2);
    r2 = S[3];
    T = r2 > r3;
    t_ = T;
    r2 = 0;
    if (!t_) goto L_0C0CDD30;
    r1 = S[6];
    r0 = 0x0C25C2B1;
    r1 <<= 2;
    r1 <<= 2;
    r3 = *(signed char *)(r0 + r1);
    S[3] = r3;
L_0C0CDD30:
    S[2] = r2;
    goto L_0C0CDD6C;
L_0C0CDD34:
    r7 = S[7];
    r5 = 0;
    r6 = S[5];
    r0 = *(signed char *)(r7 + 1);
    r7 = r0;
    r4 = 4;
    r0 = FUN_0c0cd5c0(r4, r5, r6, r7);
    r2 = S[0];
    r3 = 3000;
    r2 += r3;
    S[0] = r2;
    r1 = S[4];
    r1 += -1;
    T = (r1 & r1) == 0;
    t_ = T;
    S[4] = r1;
    if (!t_) goto L_0C0CDD58;
    
    goto L_0C0CE5A8;
L_0C0CDD58:
    r1 = S[1];
    r1 += -1;
    T = (r1 & r1) == 0;
    t_ = T;
    S[1] = r1;
    if (!t_) goto L_0C0CDD66;
    
    goto L_0C0CE5EC;
L_0C0CDD66:
    r3 = S[2];
    r3 += 1;
    S[2] = r3;
L_0C0CDD6C:
    r1 = S[2];
    r2 = S[3];
    T = r1 >= r2;
    if (!T) goto L_0C0CDD34;
    r3 = S[1];
    r0 = 0x0C25C2B2;
    S[3] = r3;
    r2 = S[6];
    r2 <<= 2;
    r2 <<= 2;
    r3 = *(signed char *)(r0 + r2);
    r2 = S[3];
    T = r2 > r3;
    t_ = T;
    r2 = 0;
    if (!t_) goto L_0C0CDD96;
    r1 = S[6];
    r0 = 0x0C25C2B2;
    r1 <<= 2;
    r1 <<= 2;
    r3 = *(signed char *)(r0 + r1);
    S[3] = r3;
L_0C0CDD96:
    S[2] = r2;
    goto L_0C0CDDE4;
L_0C0CDDAC:
    r7 = S[7];
    r5 = 0;
    r6 = S[5];
    r0 = *(signed char *)(r7 + 1);
    r7 = r0;
    r4 = 5;
    r0 = FUN_0c0cd5c0(r4, r5, r6, r7);
    r2 = S[0];
    r3 = 5000;
    r2 += r3;
    S[0] = r2;
    r1 = S[4];
    r1 += -1;
    T = (r1 & r1) == 0;
    t_ = T;
    S[4] = r1;
    if (!t_) goto L_0C0CDDD0;
    
    goto L_0C0CE5A8;
L_0C0CDDD0:
    r1 = S[1];
    r1 += -1;
    T = (r1 & r1) == 0;
    t_ = T;
    S[1] = r1;
    if (!t_) goto L_0C0CDDDE;
    
    goto L_0C0CE5EC;
L_0C0CDDDE:
    r3 = S[2];
    r3 += 1;
    S[2] = r3;
L_0C0CDDE4:
    r1 = S[2];
    r2 = S[3];
    T = r1 >= r2;
    if (!T) goto L_0C0CDDAC;
    r3 = S[1];
    r0 = 0x0C25C2B3;
    S[3] = r3;
    r2 = S[6];
    r2 <<= 2;
    r2 <<= 2;
    r3 = *(signed char *)(r0 + r2);
    r2 = S[3];
    T = r2 > r3;
    t_ = T;
    r2 = 0;
    if (!t_) goto L_0C0CDE0E;
    r1 = S[6];
    r0 = 0x0C25C2B3;
    r1 <<= 2;
    r1 <<= 2;
    r3 = *(signed char *)(r0 + r1);
    S[3] = r3;
L_0C0CDE0E:
    S[2] = r2;
    goto L_0C0CDE4A;
L_0C0CDE12:
    r7 = S[7];
    r5 = 0;
    r6 = S[5];
    r0 = *(signed char *)(r7 + 1);
    r7 = r0;
    r4 = 6;
    r0 = FUN_0c0cd5c0(r4, r5, r6, r7);
    r2 = S[0];
    r3 = 8000;
    r2 += r3;
    S[0] = r2;
    r1 = S[4];
    r1 += -1;
    T = (r1 & r1) == 0;
    t_ = T;
    S[4] = r1;
    if (!t_) goto L_0C0CDE36;
    
    goto L_0C0CE5A8;
L_0C0CDE36:
    r1 = S[1];
    r1 += -1;
    T = (r1 & r1) == 0;
    t_ = T;
    S[1] = r1;
    if (!t_) goto L_0C0CDE44;
    
    goto L_0C0CE5EC;
L_0C0CDE44:
    r3 = S[2];
    r3 += 1;
    S[2] = r3;
L_0C0CDE4A:
    r1 = S[2];
    r2 = S[3];
    T = r1 >= r2;
    if (!T) goto L_0C0CDE12;
    
    goto L_0C0CE5EC;
L_0C0CDE56:
    r3 = S[4];
    T = (r3 & r3) == 0;
    if (!T) goto L_0C0CDE60;
    
    goto L_0C0CE5EC;
L_0C0CDE60:
    r3 = S[6];
    r0 = 0x0C25C2AD;
    r3 <<= 2;
    r3 <<= 2;
    r2 = *(signed char *)(r0 + r3);
    T = (r2 & r2) == 0;
    if (T) goto L_0C0CDED8;
    r2 = 0x0C179AC0;
    
    r0 = FUN_0c179ac0();
    r1 = S[6];
    r2 = 0x0C25C2AD;
    r1 <<= 2;
    r1 <<= 2;
    r2 += r1;
    r1 = r0;
    r3 = *(signed char *)r2;
    r3 += 1;
    r0 = r3;
    r3 = 0x0C18760C;
    
    r0 = r1 % r0;  /* _modls */
    S[3] = r0;
    r3 = 0;
    goto L_0C0CDECE;
L_0C0CDEA8:
    r7 = S[7];
    r5 = 0;
    r6 = S[5];
    r0 = *(signed char *)(r7 + 1);
    r7 = r0;
    r4 = 2;
    r0 = FUN_0c0cd5c0(r4, r5, r6, r7);
    r2 = S[0];
    r2 += 100;
    S[0] = r2;
    r3 = S[4];
    r3 += -1;
    T = (r3 & r3) == 0;
    t_ = T;
    S[4] = r3;
    if (!t_) goto L_0C0CDECA;
    
    goto L_0C0CE5A8;
L_0C0CDECA:
    r3 = S[2];
    r3 += 1;
L_0C0CDECE:
    r1 = r3;
    S[2] = r3;
    r2 = S[3];
    T = r1 >= r2;
    if (!T) goto L_0C0CDEA8;
L_0C0CDED8:
    r3 = S[4];
    T = (r3 & r3) == 0;
    if (!T) goto L_0C0CDEE2;
    
    goto L_0C0CE5EC;
L_0C0CDEE2:
    r3 = S[6];
    r0 = 0x0C25C2AE;
    r3 <<= 2;
    r3 <<= 2;
    r2 = *(signed char *)(r0 + r3);
    T = (r2 & r2) == 0;
    if (T) goto L_0C0CDF4A;
    r2 = 0x0C179AC0;
    
    r0 = FUN_0c179ac0();
    r1 = S[6];
    r2 = 0x0C25C2AE;
    r1 <<= 2;
    r1 <<= 2;
    r2 += r1;
    r1 = r0;
    r3 = *(signed char *)r2;
    r3 += 1;
    r0 = r3;
    r3 = 0x0C18760C;
    
    r0 = r1 % r0;  /* _modls */
    r3 = 0;
    S[3] = r0;
    S[2] = r3;
    goto L_0C0CDF42;
L_0C0CDF18:
    r7 = S[7];
    r5 = 0;
    r6 = S[5];
    r0 = *(signed char *)(r7 + 1);
    r7 = r0;
    r4 = 1;
    r0 = FUN_0c0cd5c0(r4, r5, r6, r7);
    r2 = S[0];
    r3 = 500;
    r2 += r3;
    S[0] = r2;
    r1 = S[4];
    r1 += -1;
    T = (r1 & r1) == 0;
    t_ = T;
    S[4] = r1;
    if (!t_) goto L_0C0CDF3C;
    
    goto L_0C0CE5A8;
L_0C0CDF3C:
    r1 = S[2];
    r1 += 1;
    S[2] = r1;
L_0C0CDF42:
    r2 = S[2];
    r3 = S[3];
    T = r2 >= r3;
    if (!T) goto L_0C0CDF18;
L_0C0CDF4A:
    r3 = S[4];
    T = (r3 & r3) == 0;
    if (!T) goto L_0C0CDF54;
    
    goto L_0C0CE5EC;
L_0C0CDF54:
    r3 = S[6];
    r0 = 0x0C25C2AF;
    r3 <<= 2;
    r3 <<= 2;
    r2 = *(signed char *)(r0 + r3);
    T = (r2 & r2) == 0;
    if (T) goto L_0C0CDFCE;
    r2 = 0x0C179AC0;
    
    r0 = FUN_0c179ac0();
    r1 = S[6];
    r2 = 0x0C25C2AF;
    r1 <<= 2;
    r1 <<= 2;
    r2 += r1;
    r1 = r0;
    r3 = *(signed char *)r2;
    r3 += 1;
    r0 = r3;
    r3 = 0x0C18760C;
    
    r0 = r1 % r0;  /* _modls */
    r3 = 0;
    S[3] = r0;
    S[2] = r3;
    goto L_0C0CDFC6;
L_0C0CDF9C:
    r7 = S[7];
    r5 = 0;
    r6 = S[5];
    r0 = *(signed char *)(r7 + 1);
    r7 = r0;
    r4 = r5;
    r0 = FUN_0c0cd5c0(r4, r5, r6, r7);
    r2 = S[0];
    r3 = 1000;
    r2 += r3;
    S[0] = r2;
    r1 = S[4];
    r1 += -1;
    T = (r1 & r1) == 0;
    t_ = T;
    S[4] = r1;
    if (!t_) goto L_0C0CDFC0;
    
    goto L_0C0CE5A8;
L_0C0CDFC0:
    r1 = S[2];
    r1 += 1;
    S[2] = r1;
L_0C0CDFC6:
    r2 = S[2];
    r3 = S[3];
    T = r2 >= r3;
    if (!T) goto L_0C0CDF9C;
L_0C0CDFCE:
    r3 = S[4];
    T = (r3 & r3) == 0;
    if (!T) goto L_0C0CDFD8;
    
    goto L_0C0CE5EC;
L_0C0CDFD8:
    r3 = S[6];
    r0 = 0x0C25C2B0;
    r3 <<= 2;
    r3 <<= 2;
    r2 = *(signed char *)(r0 + r3);
    T = (r2 & r2) == 0;
    if (T) goto L_0C0CE040;
    r2 = 0x0C179AC0;
    
    r0 = FUN_0c179ac0();
    r1 = S[6];
    r2 = 0x0C25C2B0;
    r1 <<= 2;
    r1 <<= 2;
    r2 += r1;
    r1 = r0;
    r3 = *(signed char *)r2;
    r3 += 1;
    r0 = r3;
    r3 = 0x0C18760C;
    
    r0 = r1 % r0;  /* _modls */
    r3 = 0;
    S[3] = r0;
    S[2] = r3;
    goto L_0C0CE038;
L_0C0CE00E:
    r7 = S[7];
    r5 = 0;
    r6 = S[5];
    r0 = *(signed char *)(r7 + 1);
    r7 = r0;
    r4 = 3;
    r0 = FUN_0c0cd5c0(r4, r5, r6, r7);
    r2 = S[0];
    r3 = 2000;
    r2 += r3;
    S[0] = r2;
    r1 = S[4];
    r1 += -1;
    T = (r1 & r1) == 0;
    t_ = T;
    S[4] = r1;
    if (!t_) goto L_0C0CE032;
    
    goto L_0C0CE5A8;
L_0C0CE032:
    r1 = S[2];
    r1 += 1;
    S[2] = r1;
L_0C0CE038:
    r2 = S[2];
    r3 = S[3];
    T = r2 >= r3;
    if (!T) goto L_0C0CE00E;
L_0C0CE040:
    r3 = S[4];
    T = (r3 & r3) == 0;
    if (!T) goto L_0C0CE04A;
    
    goto L_0C0CE5EC;
L_0C0CE04A:
    r3 = S[6];
    r0 = 0x0C25C2B1;
    r3 <<= 2;
    r3 <<= 2;
    r2 = *(signed char *)(r0 + r3);
    T = (r2 & r2) == 0;
    if (T) goto L_0C0CE0C6;
    r2 = 0x0C179AC0;
    
    r0 = FUN_0c179ac0();
    r1 = S[6];
    r2 = 0x0C25C2B1;
    r1 <<= 2;
    r1 <<= 2;
    r2 += r1;
    r1 = r0;
    r3 = *(signed char *)r2;
    r3 += 1;
    r0 = r3;
    r3 = 0x0C18760C;
    
    r0 = r1 % r0;  /* _modls */
    r3 = 0;
    S[3] = r0;
    S[2] = r3;
    goto L_0C0CE0BE;
L_0C0CE094:
    r7 = S[7];
    r5 = 0;
    r6 = S[5];
    r0 = *(signed char *)(r7 + 1);
    r7 = r0;
    r4 = 4;
    r0 = FUN_0c0cd5c0(r4, r5, r6, r7);
    r2 = S[0];
    r3 = 3000;
    r2 += r3;
    S[0] = r2;
    r1 = S[4];
    r1 += -1;
    T = (r1 & r1) == 0;
    t_ = T;
    S[4] = r1;
    if (!t_) goto L_0C0CE0B8;
    
    goto L_0C0CE5A8;
L_0C0CE0B8:
    r1 = S[2];
    r1 += 1;
    S[2] = r1;
L_0C0CE0BE:
    r2 = S[2];
    r3 = S[3];
    T = r2 >= r3;
    if (!T) goto L_0C0CE094;
L_0C0CE0C6:
    r3 = S[4];
    T = (r3 & r3) == 0;
    if (!T) goto L_0C0CE0D0;
    
    goto L_0C0CE5EC;
L_0C0CE0D0:
    r3 = S[6];
    r0 = 0x0C25C2B2;
    r3 <<= 2;
    r3 <<= 2;
    r2 = *(signed char *)(r0 + r3);
    T = (r2 & r2) == 0;
    if (T) goto L_0C0CE138;
    r2 = 0x0C179AC0;
    
    r0 = FUN_0c179ac0();
    r1 = S[6];
    r2 = 0x0C25C2B2;
    r1 <<= 2;
    r1 <<= 2;
    r2 += r1;
    r1 = r0;
    r3 = *(signed char *)r2;
    r3 += 1;
    r0 = r3;
    r3 = 0x0C18760C;
    
    r0 = r1 % r0;  /* _modls */
    r3 = 0;
    S[3] = r0;
    S[2] = r3;
    goto L_0C0CE130;
L_0C0CE106:
    r7 = S[7];
    r5 = 0;
    r6 = S[5];
    r0 = *(signed char *)(r7 + 1);
    r7 = r0;
    r4 = 5;
    r0 = FUN_0c0cd5c0(r4, r5, r6, r7);
    r2 = S[0];
    r3 = 5000;
    r2 += r3;
    S[0] = r2;
    r1 = S[4];
    r1 += -1;
    T = (r1 & r1) == 0;
    t_ = T;
    S[4] = r1;
    if (!t_) goto L_0C0CE12A;
    
    goto L_0C0CE5A8;
L_0C0CE12A:
    r1 = S[2];
    r1 += 1;
    S[2] = r1;
L_0C0CE130:
    r2 = S[2];
    r3 = S[3];
    T = r2 >= r3;
    if (!T) goto L_0C0CE106;
L_0C0CE138:
    r3 = S[4];
    T = (r3 & r3) == 0;
    if (!T) goto L_0C0CE142;
    
    goto L_0C0CE5EC;
L_0C0CE142:
    r3 = S[6];
    r0 = 0x0C25C2B3;
    r3 <<= 2;
    r3 <<= 2;
    r2 = *(signed char *)(r0 + r3);
    T = (r2 & r2) == 0;
    if (!T) goto L_0C0CE154;
    
    goto L_0C0CE5EC;
L_0C0CE154:
    r2 = 0x0C179AC0;
    
    r0 = FUN_0c179ac0();
    r1 = S[6];
    r2 = 0x0C25C2B3;
    r1 <<= 2;
    r1 <<= 2;
    r2 += r1;
    r1 = r0;
    r3 = *(signed char *)r2;
    r3 += 1;
    r0 = r3;
    r3 = 0x0C18760C;
    
    r0 = r1 % r0;  /* _modls */
    r3 = 0;
    S[3] = r0;
    S[2] = r3;
    goto L_0C0CE1A6;
L_0C0CE17C:
    r7 = S[7];
    r5 = 0;
    r6 = S[5];
    r0 = *(signed char *)(r7 + 1);
    r7 = r0;
    r4 = 6;
    r0 = FUN_0c0cd5c0(r4, r5, r6, r7);
    r2 = S[0];
    r3 = 8000;
    r2 += r3;
    S[0] = r2;
    r1 = S[4];
    r1 += -1;
    T = (r1 & r1) == 0;
    t_ = T;
    S[4] = r1;
    if (!t_) goto L_0C0CE1A0;
    
    goto L_0C0CE5A8;
L_0C0CE1A0:
    r1 = S[2];
    r1 += 1;
    S[2] = r1;
L_0C0CE1A6:
    r2 = S[2];
    r3 = S[3];
    T = r2 >= r3;
    if (!T) goto L_0C0CE17C;
    
    goto L_0C0CE5EC;
L_0C0CE1C8:
    r1 = S[4];
    T = (r1 & r1) == 0;
    if (!T) goto L_0C0CE1D2;
    
    goto L_0C0CE5EC;
L_0C0CE1D2:
    r3 = S[6];
    r0 = 0x0C25C2AD;
    r3 <<= 2;
    r3 <<= 2;
    r2 = *(signed char *)(r0 + r3);
    T = (r2 & r2) == 0;
    if (T) goto L_0C0CE236;
    r2 = 0x0C179AC0;
    
    r0 = FUN_0c179ac0();
    r1 = S[6];
    r2 = 0x0C25C2AD;
    r1 <<= 2;
    r1 <<= 2;
    r2 += r1;
    r1 = r0;
    r3 = *(signed char *)r2;
    r3 += 1;
    r0 = r3;
    r3 = 0x0C18760C;
    
    r0 = r1 % r0;  /* _modls */
    S[3] = r0;
    r3 = 0;
    goto L_0C0CE22C;
L_0C0CE206:
    r7 = S[7];
    r5 = 0;
    r6 = S[5];
    r0 = *(signed char *)(r7 + 1);
    r7 = r0;
    r4 = 2;
    r0 = FUN_0c0cd5c0(r4, r5, r6, r7);
    r2 = S[0];
    r2 += 100;
    S[0] = r2;
    r3 = S[4];
    r3 += -1;
    T = (r3 & r3) == 0;
    t_ = T;
    S[4] = r3;
    if (!t_) goto L_0C0CE228;
    
    goto L_0C0CE5A8;
L_0C0CE228:
    r3 = S[2];
    r3 += 1;
L_0C0CE22C:
    r1 = r3;
    S[2] = r3;
    r2 = S[3];
    T = r1 >= r2;
    if (!T) goto L_0C0CE206;
L_0C0CE236:
    r3 = S[6];
    r0 = 0x0C25C2AE;
    r3 <<= 2;
    r3 <<= 2;
    r2 = *(signed char *)(r0 + r3);
    T = (r2 & r2) == 0;
    if (T) goto L_0C0CE2A2;
    r2 = 0x0C179AC0;
    
    r0 = FUN_0c179ac0();
    r1 = S[6];
    r2 = 0x0C25C2AE;
    r1 <<= 2;
    r1 <<= 2;
    r2 += r1;
    r1 = r0;
    r3 = *(signed char *)r2;
    r3 += 1;
    r0 = r3;
    r3 = 0x0C18760C;
    
    r0 = r1 % r0;  /* _modls */
    r3 = 0;
    S[3] = r0;
    S[2] = r3;
    goto L_0C0CE296;
L_0C0CE26C:
    r7 = S[7];
    r5 = 0;
    r6 = S[5];
    r0 = *(signed char *)(r7 + 1);
    r7 = r0;
    r4 = 1;
    r0 = FUN_0c0cd5c0(r4, r5, r6, r7);
    r2 = S[0];
    r3 = 500;
    r2 += r3;
    S[0] = r2;
    r1 = S[4];
    r1 += -1;
    T = (r1 & r1) == 0;
    t_ = T;
    S[4] = r1;
    if (!t_) goto L_0C0CE290;
    
    goto L_0C0CE5A8;
L_0C0CE290:
    r1 = S[2];
    r1 += 1;
    S[2] = r1;
L_0C0CE296:
    r2 = S[2];
    r3 = S[3];
    T = r2 >= r3;
    if (!T) goto L_0C0CE26C;
    
    goto L_0C0CE2E0;
L_0C0CE2A2:
    r1 = 0;
    goto L_0C0CE2C0;
L_0C0CE2A6:
    r7 = S[7];
    r5 = 0;
    r6 = S[5];
    r0 = *(signed char *)(r7 + 1);
    r7 = r0;
    r4 = 1;
    r0 = FUN_0c0cd5c0(r4, r5, r6, r7);
    r2 = S[0];
    r3 = 500;
    r2 += r3;
    S[0] = r2;
    r1 = S[2];
    r1 += 1;
L_0C0CE2C0:
    r2 = r1;
    S[2] = r1;
    r3 = S[4];
    T = r2 >= r3;
    if (!T) goto L_0C0CE2A6;
    
    goto L_0C0CE5EC;
L_0C0CE2E0:
    r1 = S[6];
    r0 = 0x0C25C2AF;
    r1 <<= 2;
    r1 <<= 2;
    r3 = *(signed char *)(r0 + r1);
    T = (r3 & r3) == 0;
    if (T) goto L_0C0CE348;
    r3 = 0x0C179AC0;
    
    r0 = FUN_0c179ac0();
    r2 = S[6];
    r1 = 0x0C25C2AF;
    r2 <<= 2;
    r2 <<= 2;
    r1 += r2;
    r2 = 0x0C18760C;
    r3 = *(signed char *)r1;
    r1 = r0;
    r3 += 1;
    r0 = r3;
    r0 = r1 % r0;  /* _modls */
    r3 = 0;
    S[3] = r0;
    S[2] = r3;
    goto L_0C0CE33C;
L_0C0CE312:
    r7 = S[7];
    r5 = 0;
    r6 = S[5];
    r0 = *(signed char *)(r7 + 1);
    r7 = r0;
    r4 = r5;
    r0 = FUN_0c0cd5c0(r4, r5, r6, r7);
    r2 = S[0];
    r3 = 1000;
    r2 += r3;
    S[0] = r2;
    r1 = S[4];
    r1 += -1;
    T = (r1 & r1) == 0;
    t_ = T;
    S[4] = r1;
    if (!t_) goto L_0C0CE336;
    
    goto L_0C0CE5A8;
L_0C0CE336:
    r1 = S[2];
    r1 += 1;
    S[2] = r1;
L_0C0CE33C:
    r2 = S[2];
    r3 = S[3];
    T = r2 >= r3;
    if (!T) goto L_0C0CE312;
    
    goto L_0C0CE374;
L_0C0CE348:
    r1 = 0;
    goto L_0C0CE366;
L_0C0CE34C:
    r7 = S[7];
    r5 = 0;
    r6 = S[5];
    r0 = *(signed char *)(r7 + 1);
    r7 = r0;
    r4 = r5;
    r0 = FUN_0c0cd5c0(r4, r5, r6, r7);
    r2 = S[0];
    r3 = 1000;
    r2 += r3;
    S[0] = r2;
    r1 = S[2];
    r1 += 1;
L_0C0CE366:
    r2 = r1;
    S[2] = r1;
    r3 = S[4];
    T = r2 >= r3;
    if (!T) goto L_0C0CE34C;
    
    goto L_0C0CE5EC;
L_0C0CE374:
    r1 = S[6];
    r0 = 0x0C25C2B0;
    r1 <<= 2;
    r1 <<= 2;
    r3 = *(signed char *)(r0 + r1);
    T = (r3 & r3) == 0;
    if (T) goto L_0C0CE3DC;
    r3 = 0x0C179AC0;
    
    r0 = FUN_0c179ac0();
    r2 = S[6];
    r1 = 0x0C25C2B0;
    r2 <<= 2;
    r2 <<= 2;
    r1 += r2;
    r2 = 0x0C18760C;
    r3 = *(signed char *)r1;
    r1 = r0;
    r3 += 1;
    r0 = r3;
    r0 = r1 % r0;  /* _modls */
    r3 = 0;
    S[3] = r0;
    S[2] = r3;
    goto L_0C0CE3D0;
L_0C0CE3A6:
    r7 = S[7];
    r5 = 0;
    r6 = S[5];
    r0 = *(signed char *)(r7 + 1);
    r7 = r0;
    r4 = 3;
    r0 = FUN_0c0cd5c0(r4, r5, r6, r7);
    r2 = S[0];
    r3 = 2000;
    r2 += r3;
    S[0] = r2;
    r1 = S[4];
    r1 += -1;
    T = (r1 & r1) == 0;
    t_ = T;
    S[4] = r1;
    if (!t_) goto L_0C0CE3CA;
    
    goto L_0C0CE5A8;
L_0C0CE3CA:
    r1 = S[2];
    r1 += 1;
    S[2] = r1;
L_0C0CE3D0:
    r2 = S[2];
    r3 = S[3];
    T = r2 >= r3;
    if (!T) goto L_0C0CE3A6;
    
    goto L_0C0CE41C;
L_0C0CE3DC:
    r1 = 0;
    goto L_0C0CE40E;
L_0C0CE3F4:
    r7 = S[7];
    r5 = 0;
    r6 = S[5];
    r0 = *(signed char *)(r7 + 1);
    r7 = r0;
    r4 = 3;
    r0 = FUN_0c0cd5c0(r4, r5, r6, r7);
    r2 = S[0];
    r3 = 2000;
    r2 += r3;
    S[0] = r2;
    r1 = S[2];
    r1 += 1;
L_0C0CE40E:
    r2 = r1;
    S[2] = r1;
    r3 = S[4];
    T = r2 >= r3;
    if (!T) goto L_0C0CE3F4;
    
    goto L_0C0CE5EC;
L_0C0CE41C:
    r1 = S[6];
    r0 = 0x0C25C2B1;
    r1 <<= 2;
    r1 <<= 2;
    r3 = *(signed char *)(r0 + r1);
    T = (r3 & r3) == 0;
    if (T) goto L_0C0CE484;
    r3 = 0x0C179AC0;
    
    r0 = FUN_0c179ac0();
    r2 = S[6];
    r1 = 0x0C25C2B1;
    r2 <<= 2;
    r2 <<= 2;
    r1 += r2;
    r2 = 0x0C18760C;
    r3 = *(signed char *)r1;
    r1 = r0;
    r3 += 1;
    r0 = r3;
    r0 = r1 % r0;  /* _modls */
    r3 = 0;
    S[3] = r0;
    S[2] = r3;
    goto L_0C0CE478;
L_0C0CE44E:
    r7 = S[7];
    r5 = 0;
    r6 = S[5];
    r0 = *(signed char *)(r7 + 1);
    r7 = r0;
    r4 = 4;
    r0 = FUN_0c0cd5c0(r4, r5, r6, r7);
    r2 = S[0];
    r3 = 3000;
    r2 += r3;
    S[0] = r2;
    r1 = S[4];
    r1 += -1;
    T = (r1 & r1) == 0;
    t_ = T;
    S[4] = r1;
    if (!t_) goto L_0C0CE472;
    
    goto L_0C0CE5A8;
L_0C0CE472:
    r1 = S[2];
    r1 += 1;
    S[2] = r1;
L_0C0CE478:
    r2 = S[2];
    r3 = S[3];
    T = r2 >= r3;
    if (!T) goto L_0C0CE44E;
    
    goto L_0C0CE4B0;
L_0C0CE484:
    r1 = 0;
    goto L_0C0CE4A2;
L_0C0CE488:
    r7 = S[7];
    r5 = 0;
    r6 = S[5];
    r0 = *(signed char *)(r7 + 1);
    r7 = r0;
    r4 = 4;
    r0 = FUN_0c0cd5c0(r4, r5, r6, r7);
    r2 = S[0];
    r3 = 3000;
    r2 += r3;
    S[0] = r2;
    r1 = S[2];
    r1 += 1;
L_0C0CE4A2:
    r2 = r1;
    S[2] = r1;
    r3 = S[4];
    T = r2 >= r3;
    if (!T) goto L_0C0CE488;
    
    goto L_0C0CE5EC;
L_0C0CE4B0:
    r1 = S[6];
    r0 = 0x0C25C2B2;
    r1 <<= 2;
    r1 <<= 2;
    r3 = *(signed char *)(r0 + r1);
    T = (r3 & r3) == 0;
    if (T) goto L_0C0CE52A;
    r3 = 0x0C179AC0;
    
    r0 = FUN_0c179ac0();
    r2 = S[6];
    r1 = 0x0C25C2B2;
    r2 <<= 2;
    r2 <<= 2;
    r1 += r2;
    r2 = 0x0C18760C;
    r3 = *(signed char *)r1;
    r1 = r0;
    r3 += 1;
    r0 = r3;
    r0 = r1 % r0;  /* _modls */
    r3 = 0;
    S[3] = r0;
    S[2] = r3;
    goto L_0C0CE51E;
L_0C0CE4F8:
    r7 = S[7];
    r5 = 0;
    r6 = S[5];
    r0 = *(signed char *)(r7 + 1);
    r7 = r0;
    r4 = 5;
    r0 = FUN_0c0cd5c0(r4, r5, r6, r7);
    r2 = S[0];
    r3 = 5000;
    r2 += r3;
    S[0] = r2;
    r1 = S[4];
    r1 += -1;
    T = (r1 & r1) == 0;
    t_ = T;
    S[4] = r1;
    if (t_) goto L_0C0CE5A8;
    r1 = S[2];
    r1 += 1;
    S[2] = r1;
L_0C0CE51E:
    r2 = S[2];
    r3 = S[3];
    T = r2 >= r3;
    if (!T) goto L_0C0CE4F8;
    
    goto L_0C0CE556;
L_0C0CE52A:
    r1 = 0;
    goto L_0C0CE548;
L_0C0CE52E:
    r7 = S[7];
    r5 = 0;
    r6 = S[5];
    r0 = *(signed char *)(r7 + 1);
    r7 = r0;
    r4 = 5;
    r0 = FUN_0c0cd5c0(r4, r5, r6, r7);
    r2 = S[0];
    r3 = 5000;
    r2 += r3;
    S[0] = r2;
    r1 = S[2];
    r1 += 1;
L_0C0CE548:
    r2 = r1;
    S[2] = r1;
    r3 = S[4];
    T = r2 >= r3;
    if (!T) goto L_0C0CE52E;
    
    goto L_0C0CE5EC;
L_0C0CE556:
    r1 = S[6];
    r0 = 0x0C25C2B3;
    r1 <<= 2;
    r1 <<= 2;
    r3 = *(signed char *)(r0 + r1);
    T = (r3 & r3) == 0;
    if (T) goto L_0C0CE5C2;
    r3 = 0x0C179AC0;
    
    r0 = FUN_0c179ac0();
    r2 = S[6];
    r1 = 0x0C25C2B3;
    r2 <<= 2;
    r2 <<= 2;
    r1 += r2;
    r2 = 0x0C18760C;
    r3 = *(signed char *)r1;
    r1 = r0;
    r3 += 1;
    r0 = r3;
    r0 = r1 % r0;  /* _modls */
    r3 = 0;
    S[3] = r0;
    S[2] = r3;
    goto L_0C0CE5B6;
L_0C0CE588:
    r7 = S[7];
    r5 = 0;
    r6 = S[5];
    r0 = *(signed char *)(r7 + 1);
    r7 = r0;
    r4 = 6;
    r0 = FUN_0c0cd5c0(r4, r5, r6, r7);
    r2 = S[0];
    r3 = 8000;
    r2 += r3;
    S[0] = r2;
    r1 = S[4];
    r1 += -1;
    T = (r1 & r1) == 0;
    t_ = T;
    S[4] = r1;
    if (!t_) goto L_0C0CE5B0;
L_0C0CE5A8:
    r0 = r2;
    return r0;
L_0C0CE5B0:
    r1 = S[2];
    r1 += 1;
    S[2] = r1;
L_0C0CE5B6:
    r2 = S[2];
    r3 = S[3];
    T = r2 >= r3;
    if (!T) goto L_0C0CE588;
    
    goto L_0C0CE5EC;
L_0C0CE5C2:
    r1 = 0;
    goto L_0C0CE5E2;
L_0C0CE5C6:
    r7 = S[7];
    r5 = 0;
    r6 = S[5];
    r0 = *(signed char *)(r7 + 1);
    r3 = 0x0C0CD5C0;
    r7 = r0;
    r4 = 6;
    r0 = FUN_0c0cd5c0(r4, r5, r6, r7);
    r2 = S[0];
    r3 = 8000;
    r2 += r3;
    S[0] = r2;
    r1 = S[2];
    r1 += 1;
L_0C0CE5E2:
    r2 = r1;
    S[2] = r1;
    r3 = S[4];
    T = r2 >= r3;
    if (!T) goto L_0C0CE5C6;
L_0C0CE5EC:
    r0 = S[0];
    
    return r0;

}
