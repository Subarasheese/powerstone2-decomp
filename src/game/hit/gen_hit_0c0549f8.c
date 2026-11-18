/* game/hit: functions 0C0549F8-0C054E90, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o2C8_int { char p[0x2C8]; int v; };
struct o2C8_uint { char p[0x2C8]; unsigned int v; };
struct o2CC_int { char p[0x2CC]; int v; };
struct o48_int { char p[0x48]; int v; };
struct o48_uint { char p[0x48]; unsigned int v; };
struct o4C_int { char p[0x4C]; int v; };
struct o4C_uint { char p[0x4C]; unsigned int v; };
struct o4_float { char p[0x4]; float v; };
struct o50_int { char p[0x50]; int v; };
struct o50_uint { char p[0x50]; unsigned int v; };
struct o54_int { char p[0x54]; int v; };
struct o54_uint { char p[0x54]; unsigned int v; };
struct o58_int { char p[0x58]; int v; };
struct o58_uint { char p[0x58]; unsigned int v; };
struct o5C_int { char p[0x5C]; int v; };
struct o5C_uint { char p[0x5C]; unsigned int v; };
struct oC_float { char p[0xC]; float v; };
int FUN_0c0522e2(int, int);
int FUN_0c052364(int, int);
int FUN_0c054a62(int, int);
int FUN_0c054c90(int);
extern int FUN_0c187798();
int FUN_0c0549f8(int a4);
int FUN_0c054a6c(int a4, int a5, int a6);
void FUN_0c054e7e(int a4, int a5, int a6);

int FUN_0c0549f8(int a4)
{
    register int t1;

    *(unsigned char *)((a4 + 0x5)) = ((*(signed char *)((a4 + 0x5))) + 0x1);
    *(unsigned char *)((a4 + 0xA)) = 0x0;
    *(unsigned char *)((a4 + 0xB)) = 0x0;
    t1 = *(signed char *)((a4 + 0x6));
    if (t1 != -1) {
        if (t1 != -2) {
            return FUN_0c054a62(a4, (*(int *)(((((*(signed char *)(((a4 + 0x2) + 0x5))) << 2) + (*(int *)((0xC241B34 + ((*(signed char *)(((a4 + 0x2) + 0x4))) << 2))))) + 0x0))));
        }
        return FUN_0c054a62(a4, ((((struct o2C8_int *)(a4))->v)));
    }
    return FUN_0c054a62(a4, (0x248 + a4));
}


void FUN_0c054e7e(int a4, int a5, int a6)
{
    register int t0;

    t0 = *(int *)((a4 + 0x1C));
    *(unsigned int *)((a4 + 0x1C)) = (t0 - 1);
    if ((int)(t0 - 1) <= 0) {
        FUN_0c054a6c(a4, a5, a6);
    return;
    }
}
