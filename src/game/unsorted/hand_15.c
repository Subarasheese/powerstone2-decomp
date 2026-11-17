/* Hand-written C: FUN_0c0298c8, one step of the network connection state machine (state 0C30985C). It brings the modem
   up and waits (states 0-2), brings the line up (3-4), opens the link (5-7) and waits for it (8-9); state 10 waits for the
   carrier, state 11 times out. A failure resets the machine and leaves an error code in 0C309862 (-11, -9). Several states
   run on into the next, as the original's switch does. */

int FUN_0c0573d8(void);
int FUN_0c018e9c(int, int);
int FUN_0c013f2e(void);
int FUN_0c022050(void);
int FUN_0c0220c4(int, int, int);
int FUN_0c0222a4(int, int, int);
int FUN_0c021eb4(void);
int FUN_0c05aab6(int, int);
int FUN_0c021ec4(void);
int FUN_0c018fd2(int);
int FUN_0c01c714(int, int, int);
int FUN_0c0573cc(int, int, int);
int FUN_0c01e9e4(void);
int FUN_0c05b05c(int, int);
int FUN_0c0573c0(int, int, int);
int FUN_0c01cb7c(void);
int FUN_0c02ae12(int);
int FUN_0c186740(int, int, int);
int FUN_0c186380(int);
int FUN_0c01f6f8(void);

#define STATE   (*(unsigned char *)0x0C30985C)
#define TIMER   (*(short *)(0x0C30EF64 + 8))
#define ONLINE  (*(signed char *)0x0C30AF9C)
#define WAIT    (*(short *)0x0C30540C)
#define ERROR   (*(signed char *)0x0C309862)
#define LINK_B  (*(unsigned char *)0x0C30985B)
#define KEY     (*(signed char *)0x0C305401)
#define HANDLE  (*(int *)0x0C309994)

void FUN_0c0298c8(void)
{
    int a, b, c;
    signed char buf[3];
    int k;

    *(int *)0x0C83C6C0 = 1;
    switch (STATE) {
    case 0:
        STATE++;
        LINK_B = 0;
        WAIT = 1;
        FUN_0c0573d8();
        FUN_0c018e9c(33, 0x0C30540C);
        TIMER = 0;
    case 1:
        k = KEY;
        if (k == 1 || k == 13 || ONLINE)
            FUN_0c013f2e();
        if (TIMER++ < 32)
            return;
        STATE++;
    case 2:
        k = KEY;
        if (k == 1 || k == 13 || ONLINE)
            FUN_0c013f2e();
        if (FUN_0c022050()) {
            FUN_0c0220c4((int)&a, (int)&b, (int)&c);
            FUN_0c0222a4((int)&a, (int)&b, (int)&c);
        }
        if (FUN_0c021eb4()) {
            if (WAIT == 0) {
                STATE++;
                FUN_0c05aab6(0, 3);
                return;
            }
        } else if (FUN_0c021ec4() == 0) {
            FUN_0c01c714(0x0C30540C, 1, 2);
            return;
        }
        *(unsigned char *)0x0C309858 = *(unsigned char *)0x0C305400;
        *(unsigned char *)0x0C309859 = *(unsigned char *)0x0C305401;
        *(unsigned char *)0x0C30985A = *(unsigned char *)0x0C305402;
        LINK_B = *(unsigned char *)0x0C305403;
        STATE = 0;
        *(short *)0x0C30A51C = 0;
        WAIT = -1;
        FUN_0c018fd2(33);
        FUN_0c05aab6(0, 4);
        return;
    case 3:
        STATE++;
        TIMER = 0;
    case 4:
        k = KEY;
        if (k == 1 || k == 13 || (ONLINE && (k == 1 || k == 13)))
            FUN_0c013f2e();
        if (ONLINE) {
            FUN_0c0573cc(0xFF000000, 0, 1);
        } else {
            if (++TIMER == 16)
                FUN_0c0573cc(-1, 0, 20);
            if (TIMER < 36)
                return;
        }
        STATE++;
        FUN_0c01e9e4();
        return;
    case 5:
        STATE++;
        FUN_0c05b05c(30, 0);
        *(unsigned char *)0x0C30EFA5 = 0;
        if (ONLINE) {
            *(short *)0x0C30540E = 600;
            FUN_0c0573c0(0xFF000000, 0, 20);
            FUN_0c01cb7c();
            FUN_0c02ae12(ONLINE);
        } else {
            *(short *)0x0C30540E = 10;
        }
    case 6:
        STATE++;
        buf[0] = 127;
        buf[1] = 3;
        buf[2] = 1;
        FUN_0c186740(HANDLE, (int)buf, buf[1]);
        return;
    case 7:
        STATE++;
        WAIT = 60;
        FUN_0c186380(HANDLE);
        return;
    case 8:
        if (--WAIT < 0)
            STATE++;
        return;
    case 9:
        if (FUN_0c01f6f8())
            STATE++;
        return;
    case 10:
        if (ONLINE == 0) {
            if (--WAIT >= 1)
                return;
            *(unsigned char *)0x0C309858 = 15;
            *(unsigned char *)0x0C309859 = 0;
            *(unsigned char *)0x0C30985A = 0;
            LINK_B = 0;
            STATE = 0;
            ERROR = -11;
            return;
        }
        if (FUN_0c021eb4()) {
            STATE++;
            TIMER = 0;
            FUN_0c0573cc(-1, 0, 20);
        }
        return;
    case 11:
        if (++TIMER >= 20) {
            *(unsigned char *)0x0C309858 = 15;
            *(unsigned char *)0x0C309859 = 0;
            *(unsigned char *)0x0C30985A = 0;
            LINK_B = 0;
            STATE = 0;
            ERROR = -9;
            ONLINE = 0;
        }
        return;
    }
}
