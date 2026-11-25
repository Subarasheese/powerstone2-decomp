/* @runtime _slow_strcpy=0C187990 */
/* @runtime _quick_strcpy=0C1878F0 */
/* Hand-written C: one step of the network login script (FUN_0c01fe38) and the handle's poll (FUN_0c01fbd2).
   Sending (0C309859 == 0): the script (0C305230, a cursor into it) holds lines with a two-letter command; one command takes
   the rest of the line as the reply to send (it is also what the answer must echo, 0C3051F0), another the text to wait for
   (0C305234); otherwise the login line (user name, the password if any, the host) is sent. Receiving: bytes are read one at
   a time into a line (0C305440, length 0C3054C0) until CR or LF; the line is accepted when it starts with the awaited text or
   echoes what was sent, else the script fails (-10, state 21). It also fails when the receive timer (0C3052C6) runs out.
   The compiler's string copies (_builtin_strcpy) call the runtime's helpers, which run for real on both sides. */

extern char *_builtin_strcpy(char *, const char *);

int FUN_0c1837cc(int, int);
int FUN_0c187d98(int, int, int);      /* strncmp */
int strlen(int);                /* strlen */
int FUN_0c187d24(int, int);           /* strcat */
int FUN_0c18353e(int, int, int);      /* write: bytes written */
int FUN_0c183480(int, int, int);      /* read: bytes read */

#define CONN        (*(int *)0x0C305430)
#define CURSOR      (*(char **)0x0C305230)
#define SENT        ((char *)0x0C3051F0)
#define AWAIT       ((char *)0x0C305234)
#define LINE        ((char *)0x0C305440)
#define LINE_LEN    (*(int *)0x0C3054C0)
#define LAST_LINE   ((char *)0x0C305244)
#define RECEIVING   (*(unsigned char *)0x0C309859)
#define STATE       (*(unsigned char *)0x0C309858)
#define TIMER       (*(short *)0x0C3052C6)
#define CTYPE       ((unsigned char *)0x0C206298)

int FUN_0c01fbd2(void)
{
    return FUN_0c1837cc(CONN, 0x0C305434);
}

static void send_all(char *p)
{
    int len = strlen((int)p);
    int n;

    do {
        n = FUN_0c18353e(CONN, (int)p, len);
        p += n;
        len -= n;
    } while (len != n);
}

void FUN_0c01fe38(void)
{
    char buf[64];
    char ch;
    int i, n;

    *(int *)0x0C83C6C0 = 1;
    FUN_0c01fbd2();
    if (RECEIVING == 0) {
        if (FUN_0c187d98((int)CURSOR, 0x0C1A8920, 2) == 0) {
            CURSOR += 2;
            for (i = 0; *CURSOR != '\n'; i++) {
                buf[i] = *CURSOR;
                CURSOR++;
            }
            CURSOR++;
            buf[i] = 0;
            _builtin_strcpy(SENT, buf);
            FUN_0c187d24((int)buf, 0x0C1A8924);
            send_all(buf);
            return;
        }
        if (FUN_0c187d98((int)CURSOR, 0x0C1A8928, 2) == 0) {
            CURSOR += 2;
            for (i = 0; *CURSOR != '\n'; i++) {
                AWAIT[i] = *CURSOR;
                CURSOR++;
            }
            CURSOR++;
            AWAIT[i] = 0;
            RECEIVING = 1;
            TIMER = 300;
            return;
        }
        if (*(unsigned char *)0x0C3054C4 == 0) {
            if (*(unsigned char *)0x0C30A401)
                _builtin_strcpy(buf, (char *)0x0C1A892C);
            else
                _builtin_strcpy(buf, (char *)0x0C1A8934);
            if (*(unsigned char *)0x0C30A3FC) {
                FUN_0c187d24((int)buf, 0x0C30A3FC);
                FUN_0c187d24((int)buf, 0x0C1A893C);
            }
            FUN_0c187d24((int)buf, 0x0C3098E3);
            FUN_0c187d24((int)buf, 0x0C1A8924);
            send_all(buf);
        }
        STATE++;
        RECEIVING = 0;
        TIMER = 3600;
        LINE_LEN = 0;
        return;
    }
    if (--TIMER <= 0)
        goto fail;
    for (;;) {
        if (FUN_0c183480(CONN, (int)&ch, 1) == 0)
            return;
        if (!(CTYPE[(unsigned char)ch] & 23) && ch != 10 && ch != 13)
            continue;
        if (ch != 10 && ch != 13) {
            LINE[LINE_LEN++] = ch;
            continue;
        }
        LINE[LINE_LEN] = 0;
        if (LINE_LEN != 0)
            _builtin_strcpy(LAST_LINE, LINE);
        LINE_LEN = 0;
        n = strlen((int)AWAIT);
        if (FUN_0c187d98((int)LINE, (int)AWAIT, n) == 0) {
            RECEIVING = 0;
            return;
        }
        n = strlen((int)LINE);
        if (FUN_0c187d98((int)LINE, (int)SENT, n) == 0)
            return;
        break;
    }
fail:
    *(signed char *)0x0C309862 = -10;
    STATE = 21;
}
