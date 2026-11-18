/* Straight-line functions with calls and guards (batch gen_bg): generated from the code and checked by tests. Calls are
   to the game or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o0_int { int v; };
struct o0_uint { unsigned int v; };
struct o4_uint { char p[0x4]; unsigned int v; };
struct o8_uint { char p[0x8]; unsigned int v; };
int FUN_0c18c9fc(void);
int FUN_0c18cf5c(int, int, int, int, int, int);
extern int _builtin_get_imask(void);
extern void _builtin_set_imask(int);
int syChainAddHandler(int, int, int, int);
int syRtcExecServer(void);
int syRtcGetCountForce(void);
int syRtcInit(void);
void ADXCRS_Lock(int a4, int a5);
int FUN_0c183c4c(int a4);

int syRtcInit(void)
{
    (((struct o0_uint *)0xC8B9DD8)->v) = (syRtcGetCountForce());
    (((struct o4_uint *)0xC8B9DD8)->v) = 0x0;
    syRtcExecServer();
    (((struct o8_uint *)0xC8B9DD8)->v) = (syChainAddHandler(0x900, 0xC2B1A34, 0x5C, 0x0));
    return 0x0;
}

void ADXCRS_Lock(int a4, int a5)
{
    register int t1;

    if (((((struct o0_int *)0xC303D84)->v)) == 0) {
        t1 = _builtin_get_imask();
        _builtin_set_imask(0xF);
        (((struct o4_uint *)0xC303D84)->v) = t1;
    }
    (((struct o0_uint *)0xC303D84)->v) = (((((struct o0_int *)0xC303D84)->v)) + 0x1);
}

int FUN_0c183c4c(int a4)
{
    FUN_0c18c9fc();
    return (FUN_0c18cf5c(a4, 0x0, 0x0, 0x0, 0xC206070, 0xC206080));
}
