/* Hand-written C: FUN_0c01ea5e, the first state of the network connection (table 0C20E348): it sets up the protocol
   records (0C305198: link, timers, the PPP magic 0x12345678) and copies the connection settings from the console's
   network configuration (0C3BABB4) into the game's: the user name (0C305109; its last word after a comma or space is the
   login, 0C3051C4), the phone number (0C309963) and the DNS server (0C30997F) from one of two sets (flag 1), the
   addresses (0C3050EC), the host name (0C30AC2C), pulse dialling (0C30A401, flag 0x100) and the dial prefix up to a comma
   in the first five characters (0C30A3FC). Then the next state. */

int strcpy(int, int);
int strncpy(int, int, int);
int strlen(int);          /* strlen */

#define CFG     (*(char **)0x0C3BABB4)
#define REC     ((int *)0x0C305198)
#define USER    ((char *)0x0C305109)
#define PHONE   ((char *)0x0C309963)
#define DNS     ((char *)0x0C30997F)
#define PREFIX  ((char *)0x0C30A3FC)

void FUN_0c01ea5e(void)
{
    char *cfg;
    int n, i, j;

    REC[0] = 0x0C30514C;
    REC[1] = 0x0C305160;
    REC[2] = 0x0C305178;
    REC[3] = 0x0C1A8838;
    REC[4] = 0x0C1A8893;
    REC[5] = (int)USER;
    REC[6] = (int)PHONE;
    REC[7] = (int)DNS;
    REC[9] = 0;
    REC[10] = 0;
    *(short *)(REC[0] + 0) = 4;
    *(short *)(REC[0] + 2) = 0;
    *(short *)(REC[0] + 4) = 2;
    *(short *)(REC[0] + 8) = 0;
    *(short *)(REC[0] + 6) = 0;
    *(int *)(REC[0] + 12) = 0;
    *(int *)(REC[0] + 16) = 0;
    *(short *)(REC[1] + 2) = 0;
    *(short *)(REC[1] + 4) = 120;
    *(short *)(REC[1] + 6) = 0;
    *(short *)(REC[1] + 8) = 30;
    *(int *)(REC[1] + 12) = 0x0C1A88A0;
    *(int *)(REC[1] + 16) = 0;
    *(int *)(REC[1] + 20) = 0;
    *(short *)(REC[2] + 10) = 1500;
    *(int *)(REC[2] + 12) = 0x12345678;
    *(short *)(REC[2] + 16) = 0;
    *(short *)(REC[2] + 18) = 0;
    *(short *)(REC[2] + 20) = 0;
    *(short *)(REC[2] + 8) = 4;
    *(int *)(REC[2] + 24) = 0;
    *(int *)(REC[2] + 28) = 0;
    if (*(int *)CFG & 0x100) {
        *(signed char *)0x0C30A401 = 1;
        *(short *)REC[1] = 1;
    } else {
        *(signed char *)0x0C30A401 = 0;
        *(short *)REC[1] = 0;
    }
    cfg = CFG;
    if ((*(int *)cfg & 1) == 0) {
        strcpy((int)USER, (int)(cfg + 52));
        strncpy((int)PHONE, (int)(CFG + 8), 28);
        PHONE[29] = 0;
        PHONE[28] = 0;
        strncpy((int)DNS, (int)(CFG + 36), 16);
        DNS[16] = 0;
        *(int *)0x0C3050EC = *(int *)(CFG + 172);
        *(int *)0x0C3050F0 = *(int *)(CFG + 176);
    } else {
        strcpy((int)USER, (int)(cfg + 408));
        strncpy((int)PHONE, (int)(CFG + 364), 28);
        PHONE[29] = 0;
        PHONE[28] = 0;
        strncpy((int)DNS, (int)(CFG + 392), 16);
        DNS[16] = 0;
        *(int *)0x0C3050EC = *(int *)(CFG + 528);
        *(int *)0x0C3050F0 = *(int *)(CFG + 532);
    }
    strncpy(0x0C30AC2C, (int)(CFG + 180), 48);
    n = strlen((int)USER) - 1;
    while (n > 0) {
        if (USER[n] == ',' || USER[n] == ' ') {
            n++;
            break;
        }
        n--;
    }
    strcpy(0x0C3051C4, (int)(USER + n));
    *PREFIX = 0;
    for (i = 0; i < 5; i++) {
        if (((unsigned char *)CFG + 52)[i] == ',') {
            for (j = 0; j < i; j++)
                PREFIX[j] = (CFG + 52)[j];
            PREFIX[i] = 0;
            break;
        }
    }
    (*(unsigned char *)0x0C30985A)++;
}
