/* Hand-written C: the file loader (sys_load_file_adx), which reads a whole file through ADXF and waits for it vsync by vsync.
   Globals by address: 0C304400 the last load result, 0C304408 a spin counter, 0C30440C the spins since the last vsync (past
   0x600000 the loader re-enables interrupts, as if a vsync was lost), 0C31F2A4 the vsync count, 0C4B1078 a flag that turns off
   the reset check. */

extern void _builtin_set_imask(int);

int sys_vsync_handler_install(int);     /* takes r4-r7 (passes r6, r7 on); called with what the loader holds in r4 */
int ADXF_Open(int, int);
int ADXF_GetFsizeSct(int);
int ADXF_GetFsizeByte(int);
int ADXF_ReadNw(int, int, int);
int ADXF_Stop(int);
int ADXF_Close(int);
int FUN_0c06148a(void);                 /* 0C02D176: the reset combination is held */
int FUN_0c05b2b0(void);
int FUN_0c02d88a(void);
int FUN_0c05ac14(void);
int FUN_0c2b5938(int);                  /* the ADXF handle's state: 3 done, 4 error */

#define LOAD_RESULT (*(int *)0x0C304400)
#define SPIN_TOTAL  (*(int *)0x0C304408)
#define SPIN_VSYNC  (*(int *)0x0C30440C)
#define VSYNC_COUNT (*(volatile int *)0x0C31F2A4)
#define NO_RESET    (*(int *)0x0C4B1078)

int sys_load_file_adx(int name, int buf, int *size)
{
    int h, sct, vs, st;

    sys_vsync_handler_install(name);
    h = ADXF_Open(name, 0);
    if (h == 0) {
        LOAD_RESULT = 1;
        return 1;
    }
    sct = ADXF_GetFsizeSct(h);
    if (sct * 2048 > 0x200000) {
        LOAD_RESULT = 3;
        return 3;
    }
    *size = ADXF_GetFsizeByte(h);
    ADXF_ReadNw(h, sct, buf);
    vs = VSYNC_COUNT;
    st = h;
    for (;;) {
        sys_vsync_handler_install(st);
        SPIN_VSYNC = 0;
        while (vs == VSYNC_COUNT) {
            SPIN_TOTAL++;
            if (++SPIN_VSYNC >= 0x600000) {
                _builtin_set_imask(0);
                SPIN_VSYNC = 0;
            }
        }
        vs = VSYNC_COUNT;
        if (NO_RESET == 0 && FUN_0c06148a() != 0) {
            ADXF_Stop(h);
            ADXF_Close(h);
            FUN_0c05b2b0();
            FUN_0c02d88a();
            for (;;)
                ;
        }
        FUN_0c05ac14();
        st = FUN_0c2b5938(h);
        if (st == 4) {
            ADXF_Stop(h);
            ADXF_Close(h);
            LOAD_RESULT = 2;
            return 2;
        }
        if (st == 3) {
            ADXF_Close(h);
            LOAD_RESULT = 0;
            return 0;
        }
    }
}
