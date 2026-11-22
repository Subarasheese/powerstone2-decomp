/* Hand-written: FUN_0c185dc0, the network library's select(nfds, readfds, writefds, exceptfds, timeout). nfds is clamped to
   256 (a negative one too); a timeout outside 0-100000000 seconds or 0-999999 microseconds is error 22 (EINVAL, the error word
   at 0C8A2E68) and -1. Every descriptor of the three sets must map to a socket (FUN_0c185560), else error 9 (EBADF) and -1.
   Each pass reads the timer and checks the descriptors: a socket record is at 0C8A2C60 + 52 * its handle (the current one kept
   at 0C8B57A0); a stream socket (type 1) asks FUN_0c193fc0 for its state, a datagram socket (type 2) has flags in the record.
   Ready descriptors are set in the result copy of the read set (the write set's ready ones too, as the original does) and
   counted. With any ready the result copies go back over the sets given and the count is returned; otherwise the elapsed
   microseconds are charged against the timeout (0 when it runs out) and FUN_0c183140 yields before the next pass. The
   registers the original leaves for FUN_0c183140 and the copies are what the last call before them was given (v5-v7). */
void *memset(void *dst, int val, unsigned int n);
int FUN_0c187a88(int a4, int a5, int a6, int a7);
int FUN_0c185560(int a4);
int FUN_0c193fc0(int a4, int a5, int a6, int a7, int a8);
int FUN_0c1862a0(int a4, int a5);
int syTmrGetCount(void);
int FUN_0c2bbe58(int a4, int a5);
int syTmrCountToMicro(int a4);
int FUN_0c183140(int a4, int a5, int a6, int a7);

#define ERRNO (*(int *)0xC8A2E68)
#define SOCKET (*(int *)0xC8B57A0)
#define BIT(set, i) (((unsigned int *)(set))[(unsigned int)(i) >> 5] & (1 << ((i) & 31)))

int FUN_0c185dc0(int nfds, int rfds, int wfds, int efds, int *tv)
{
    unsigned int rres[8];
    unsigned int wres[8];
    unsigned int eres[8];
    short state;
    short pending;
    short a;
    short b;
    short handle;
    int count;
    int flag;
    int elapsed;
    int start;
    int i;
    int h;
    int s;
    int v5;
    int v6;
    int v7;
    int us;

    ERRNO = 0;
    if (nfds > 256) {
        nfds = 256;
    }
    if (nfds < 0) {
        nfds = 256;
    }
    if (tv != 0) {
        if (tv[0] < 0 || tv[0] > 100000000 || tv[1] < 0 || tv[1] >= 1000000) {
            ERRNO = 22;
            return -1;
        }
    }
    for (i = 0; i < nfds; i++) {
        if (rfds && BIT(rfds, i) && (short)FUN_0c185560(i) < 0) {
            goto bad;
        }
        if (wfds && BIT(wfds, i) && (short)FUN_0c185560(i) < 0) {
            goto bad;
        }
        if (efds && BIT(efds, i) && (short)FUN_0c185560(i) < 0) {
            goto bad;
        }
    }
    FUN_0c187a88((int)rres, rfds, 32, efds);
    FUN_0c187a88((int)wres, wfds, 32, efds);
    FUN_0c187a88((int)eres, efds, 32, efds);
    memset(rres, 0, 32);
    memset(wres, 0, 32);
    memset(eres, 0, 32);
    v5 = 0;
    v6 = 32;
    v7 = efds;
    flag = 0;
    count = 0;
    elapsed = 0;
    for (;;) {
        start = syTmrGetCount();
        for (i = 0; i < nfds; i++) {
            if (rfds && BIT(rfds, i)) {
                h = (short)FUN_0c185560(i);
                if (h < 0) {
                    goto bad;
                }
                s = 0xC8A2C60 + (short)h * 52;
                SOCKET = s;
                if (*(short *)(s + 16) == 1) {
                    handle = *(short *)(s + 2);
                    v5 = (int)&state;
                    v6 = (int)&a;
                    v7 = (int)&b;
                    if ((short)FUN_0c193fc0(handle, v5, v6, v7, (int)&pending) != 0) {
                        goto write_part;
                    }
                    if ((unsigned short)state == 1) {
                        v5 = handle;
                        if (FUN_0c1862a0(i, handle) == 0) {
                            rres[(unsigned int)i >> 5] |= 1 << (i & 31);
                            flag = 1;
                            count++;
                        }
                    }
                    if ((unsigned short)state == 4 && (int)(unsigned short)pending > 0) {
                        rres[(unsigned int)i >> 5] |= 1 << (i & 31);
                        flag = 1;
                        count++;
                    }
                    if (state != 0) {
                        goto write_part;
                    }
                } else if (*(short *)(s + 16) == 2) {
                    if (*(short *)(s + 8) != 1 || *(short *)(s + 10) <= 0) {
                        goto write_part;
                    }
                } else {
                    goto write_part;
                }
                rres[(unsigned int)i >> 5] |= 1 << (i & 31);
                flag = 1;
                count++;
            }
        write_part:
            if (wfds && BIT(wfds, i)) {
                h = (short)FUN_0c185560(i);
                if (h < 0) {
                    goto bad;
                }
                s = 0xC8A2C60 + (short)h * 52;
                SOCKET = s;
                if (*(short *)(s + 16) == 1) {
                    v5 = (int)&state;
                    v6 = (int)&a;
                    v7 = (int)&b;
                    if ((short)FUN_0c193fc0(*(short *)(s + 2), v5, v6, v7, (int)&pending) != 0) {
                        continue;
                    }
                    if ((unsigned short)state != 4) {
                        continue;
                    }
                } else if (*(short *)(s + 16) == 2) {
                    if (*(short *)(s + 12) != 1) {
                        continue;
                    }
                } else {
                    continue;
                }
                rres[(unsigned int)i >> 5] |= 1 << (i & 31);
                flag = 1;
                count++;
            }
        }
        if (flag == 1) {
            if (rfds) {
                FUN_0c187a88(rfds, (int)rres, 32, v7);
            }
            if (wfds) {
                FUN_0c187a88(wfds, (int)wres, 32, v7);
            }
            if (efds) {
                FUN_0c187a88(efds, (int)eres, 32, v7);
            }
            return count;
        }
        if (tv != 0) {
            v5 = syTmrGetCount();
            us = syTmrCountToMicro(FUN_0c2bbe58(start, v5));
            elapsed += us;
            if (tv[1] > 0) {
                tv[1] = tv[1] - us;
                if (!(tv[1] > 0)) {
                    tv[1] = 0;
                }
            }
            if (elapsed >= 1000000) {
                elapsed = 0;
                tv[0]--;
            }
            if (tv[0] == 0 && tv[1] == 0) {
                return 0;
            }
        }
        FUN_0c183140(1, v5, v6, v7);
    }
bad:
    ERRNO = 9;
    return -1;
}
