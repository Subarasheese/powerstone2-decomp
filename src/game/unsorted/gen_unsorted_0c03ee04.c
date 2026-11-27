/* game/unsorted: functions 0C03EE04-0C03EE7C, one cell of the original link order (tools/srcmap.py: code tied by a shared pool,
   a bsr or a branch; a cell is at most one original source file). Generated C, checked by tests. Calls are to the game
   or library function at the address, with the arguments in r4-r7 and fr4-fr11 as set. */

struct o38_float { char p[0x38]; float v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
int nlObjPutSetGlobalAmbience(float);
int nlObjPutSetLightDirectionV(int);
int nlSetLightDirection(int);
extern int nlObjPutSetFadeColor();
int FUN_0c03ee04(int a4);

int FUN_0c03ee04(int a4)
{
    int t0;
    register int t1;
    register int t2;

    if ((unsigned int)0xC542674 >= (unsigned int)0xC542460) {
        t1 = 0xC542674;
        t2 = a4;
        for (;;) {
            if ((((unsigned char)t2 & 0x80) != 0) && (t0 = *(signed char *)((t1 + 0x0)), t0 != 0)) {
                break;
            }
            t1 = (t1 - 76);
            t2 = (t2 << 1);
            if ((unsigned int)t1 < (unsigned int)0xC542460) {
                return (((int (*)(int, int, int, float, float, float))(nlObjPutSetFadeColor))(t1, t2, 0xC542460, 1.0f, 1.0f, 1.0f));
            }
        }
        nlObjPutSetGlobalAmbience(((((struct o38_float *)(t1))->v)));
        nlSetLightDirection((t1 + 0x4));
        t0 = ((int (*)(float, float, float))(nlObjPutSetFadeColor))(((((struct o40_float *)(t1))->v)), ((((struct o44_float *)(t1))->v)), ((((struct o48_float *)(t1))->v)));
        t0 = (nlObjPutSetLightDirectionV((t1 + 0x4)));
    } else {
        t0 = (((int (*)(int, int, int, float, float, float))(nlObjPutSetFadeColor))(0xC542674, a4, 0xC542460, 1.0f, 1.0f, 1.0f));
    }
    return t0;
}
