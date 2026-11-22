/* Hand-fixed generated C: on a null handle mwRnaGetFx reports strMwRnaNullHandleError through the variadic FUN_0c2dc1ae. The
   original pushes the string onto its frame, so the words after it there are its own saved r6 and r5: what the printer finds as
   further arguments. They are passed here, as those words. */

int FUN_0c2dc1ae(int, int, int, int, int, int, int);
struct o6C_int { char p[0x6C]; int v; };
struct o70_int { char p[0x70]; int v; };

int mwRnaGetFx(int a4, int a5, int a6, int a7)
{
    register int t0;

    if (a4 == 0) {
        t0 = FUN_0c2dc1ae(a4, a5, a6, a7, 0xC2FFEE8, a6, a5);
        *(unsigned int *)((a5 + 0x0)) = 0xFFFFFFFF;
        *(unsigned int *)((a6 + 0x0)) = 0xFFFFFFFF;
        return t0;
    }
    *(unsigned int *)((a5 + 0x0)) = ((((struct o6C_int *)(a4))->v));
    *(unsigned int *)((a6 + 0x0)) = ((((struct o70_int *)(a4))->v));
    return 0x70;
}
