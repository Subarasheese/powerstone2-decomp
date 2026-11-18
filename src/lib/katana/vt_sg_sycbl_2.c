/* Library code: C that behaves like this game's own bytes. */
/* Shinobi library, SG_SYCBL (the video cable): our own C, written from the disassembly. */

int syCblCheckCable(void);
void kbCfgIni(int a);
char *kbCfgGetId(void);



int syCblCheckBroadcast(void)
{
    char *p;

    kbCfgIni(0);
    p = kbCfgGetId();
    switch (p[12]) {
    case 49: return 1;
    case 50: return 2;
    case 51: return 3;
    default: return 0;
    }
}
