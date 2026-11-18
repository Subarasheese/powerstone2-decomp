/* Library code: C that behaves like this game's own bytes. */
/* Small SDK (nl*, km glue, libc) functions, batch e. */

extern float nlAbsSqrt(float x);
extern int vsprintf(void *buf, char *fmt, void *args);
extern int nlPuts(void *buf);
extern int nlLoadMatrix8(void *m);
extern int nlSpriteLoadTextureOnce_Sub(void *p, void *name, int i, int z);
extern int kmSetPaletteData(void *p);
extern int kmDiscardVertexBuffer(void *p);

extern char gPaletteDirty[];
extern char gPaletteData[];
extern short gNlPaletteAllocationBitmap[];
extern float gNlObjectFadeColorCopy[];
extern int gNlObjectModifierModeBits;



void nlInitPalette(char *paletteTable, int paletteCount)
{
    char *paletteEntry;
    short *counter;
    unsigned int remainingEntries;

    *(char **)(gPaletteDirty + 24) = paletteTable;
    *(short *)(gPaletteDirty + 4) = paletteCount;
    paletteEntry = paletteTable;
    remainingEntries = paletteCount;
    while (remainingEntries != 0) {
        *(short *)(paletteEntry + 6) = -1;
        *(short *)paletteEntry = -1;
        *(char *)(paletteEntry + 2) = -1;
        *(short *)(paletteEntry + 4) = 0;
        *(char *)(paletteEntry + 3) = 0;
        paletteEntry += 8;
        remainingEntries--;
    }
    for (counter = gNlPaletteAllocationBitmap; counter < gNlPaletteAllocationBitmap + 4; counter++)
        *counter = 0;
}



void nlObjPutMvSetMode(int modifierMode)
{
    if (modifierMode != 2)
        modifierMode = 1;
    gNlObjectModifierModeBits = modifierMode << 29;
}



void nlsndStreamSetHdFx(char *p, short a, short b)
{
    int i, v;

    v = (a << 4) | b;
    for (i = 0; i < 4; i++)
        p[51 + i * 4] = v;
}



char *strncpy(char *dst, char *src, unsigned int n)
{
    char *d;
    unsigned int i;

    d = dst;
    i = 0;
    while (i < n && *src != 0) {
        *d++ = *src++;
        i++;
    }
    while (i < n) {
        *d++ = 0;
        i++;
    }
    return dst;
}
