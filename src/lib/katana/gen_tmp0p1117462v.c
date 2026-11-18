/* scratch */
extern void _builtin_set_imask(int);
void FUN_0c2bb35e(int a4, int a5, int a6, int a7);
void FUN_0c2bb3a8(int a4, int a5, int a6, int a7);

void FUN_0c2bb35e(int a4, int a5, int a6, int a7)
{
    register int t2;
    register int t5;

    _builtin_set_imask(0x6);
    t2 = (*(int *)0xC8C1AC4);
    for (;;) {
        if (t2 == 0) {
            break;
        }
        t5 = ((int (*)(int, int, int, int))((*(int *)((t2 + 0x0)))))((*(int *)((t2 + 0x8))), a5, a6, a7);
        t2 = (*(int *)((t2 + 0x4)));
    }
}

void FUN_0c2bb3a8(int a4, int a5, int a6, int a7)
{
    register int t2;
    register int t5;

    _builtin_set_imask(0x6);
    t2 = (*(int *)0xC8C1ACC);
    for (;;) {
        if (t2 == 0) {
            break;
        }
        t5 = ((int (*)(int, int, int, int))((*(int *)((t2 + 0x0)))))((*(int *)((t2 + 0x8))), a5, a6, a7);
        t2 = (*(int *)((t2 + 0x4)));
    }
}

