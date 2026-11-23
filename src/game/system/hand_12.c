/* Hand-written C: FUN_0c02d630, the system start-up. It sets up the display and the matrix stacks, the game's own systems,
   the GD file system (retried until it starts; it gives up after 256 tries or on error -23 / -33, shutting down and halting),
   the clock and the console configuration (mono sound sets g_game_work[44]), then the rest of the game's systems. */

extern void _builtin_set_imask(int);

int FUN_0c177d90(int);
int FUN_0c178450(void);
int nlSysUseLatency2V(void);
int FUN_0c1784d0(void);
int gfx_set_display_mode(int);
int FUN_0c02d54c(void);
int nlSelectMatrixStack(int);
void nlUnitMatrix(void);
int FUN_0c17c6f0(int, float, float, float);
int FUN_0c0359c8(void);
int FUN_0c057384(void);
int FUN_0c16f61c(void);
int pdInitPeripheralEx(int, int, int, int, int);
int FUN_0c02fe7c(void);
int thunk_FUN_0c2b0ad0(int, int, int, int);    /* gdFsInit: max open files, work area, directory records, directory buffer */
int pdExitPeripheral(void);
int FUN_0c2ae9e4(void);
int FUN_0c2b1622(void);
int FUN_0c1789b0(void);
int FUN_0c2b3a98(void);
int gdFsCreateDirhn(int, int);
int syRtcInit(void);
int FUN_0c2b1b16(int);
int syCfgInit(int);
int syCfgGetSoundMode(int);
int FUN_0c2b402e(void);
int FUN_0c0f1ffe(int, int);
int FUN_0c02d944(void);
int FUN_0c056e80(void);
int FUN_0c02d9f2(void);

#define GAME_WORK   ((unsigned char *)0x0C541F3C)
#define ALIGN32(a)  (((a) & ~31) + 32)
#define GDFS_ERR    (*(int *)0x0C33A848)

void FUN_0c02d630(void)
{
    int tries, work, dirbuf, sound;

    FUN_0c177d90(0x100000);
    FUN_0c178450();
    nlSysUseLatency2V();
    FUN_0c1784d0();
    gfx_set_display_mode(0);
    FUN_0c02d54c();
    nlSelectMatrixStack(3);
    nlUnitMatrix();
    FUN_0c17c6f0(7464, 1.33333337f, 0.300000012f, 12000.0f);
    nlSelectMatrixStack(1);
    GAME_WORK[36] = 1;
    GAME_WORK[34] = 0;
    GAME_WORK[35] = 1;
    GAME_WORK[677] = 0;
    FUN_0c0359c8();
    FUN_0c057384();
    FUN_0c16f61c();
    _builtin_set_imask(14);
    tries = 0;
    pdInitPeripheralEx(tries, 0x0C1A8EBC, 0x0C20EA4C, 0x0C315180, 12);
    FUN_0c02fe7c();
    work = ALIGN32(0x0C3232E0);
    dirbuf = ALIGN32(0x0C3246E0);
    while ((GDFS_ERR = thunk_FUN_0c2b0ad0(8, work, 1024, dirbuf)) != 0) {
        tries++;
        if (GDFS_ERR == -23 || GDFS_ERR == -33 || tries > 256) {
            _builtin_set_imask(0);
            pdExitPeripheral();
            FUN_0c2ae9e4();
            FUN_0c2b1622();
            FUN_0c1789b0();
            FUN_0c2b3a98();
            for (;;)
                ;
        }
    }
    *(int *)0x0C33A820 = gdFsCreateDirhn(ALIGN32(0x0C32F780), 1024);
    *(int *)0x0C33A844 = 0;
    *(int *)0x0C33A84C = 0;
    *(int *)0x0C33A850 = 0;
    *(int *)0x0C31F2A8 = 0;
    syRtcInit();
    FUN_0c2b1b16(1);
    syCfgInit(ALIGN32(0x0C31F2C0));
    syCfgGetSoundMode((int)&sound);
    if (sound == 0)
        GAME_WORK[44] = 1;
    else
        GAME_WORK[44] = 0;
    _builtin_set_imask(0);
    FUN_0c2b402e();
    FUN_0c0f1ffe(0x0C02D1E8, 0);
    FUN_0c02d944();
    FUN_0c056e80();
    FUN_0c02d9f2();
}
