/* @runtime _quick_evn_mvn=0C18778C */
/* Hand-written C: FUN_0c056fc8, the debug load meter. Unless it is switched off (0C478C05), it draws stacked bars at the left
   of the screen with one quad (0C1BF888, four vertices of 32 bytes from +0x70, a colour of 16 bytes at +0x44): one bar pair
   per timed task (0C40F8B0, 12 bytes each: two times in microseconds and a colour index into 0C1BF9A0; 0C40FA30 of them), a
   total (0C40FA34), another time (0C40FA38), and five counters (0C40FA44) scaled to 1572864. A frame (16.67 ms) is 0.75 of
   the screen; a bar is clipped at the bottom (-0.375). Each vertex's first word gets bit 0 set before the quad is drawn. */

typedef struct { int w[4]; } Colour;
typedef struct { float x, y; int pad[6]; } Vtx;

int nlSelectMatrixStack(int);
void nlUnitMatrix(void);
int nlObjPutSetFadeColor(float, float, float);
int nlObjPut(int);

#define OBJ     0x0C1BF888
#define VTX     ((Vtx *)(OBJ + 0x70))
#define COLOUR  (*(Colour *)(OBJ + 0x44))
#define COLOURS ((Colour *)0x0C1BF9A0)
#define TOP     0.375f
#define BOTTOM  (-0.375f)

typedef struct { int a, b, colour; } Task;

#define draw(colour_addr) do { \
        Vtx *v_; \
        for (v_ = VTX; v_ < VTX + 4; v_++) \
            *(int *)&v_->x |= 1; \
        COLOUR = *(Colour *)(colour_addr); \
        nlObjPut(OBJ); \
    } while (0)

void FUN_0c056fc8(void)
{
    float prev, y, y2;
    Task *t;
    int i, *c;

    prev = TOP;
    if (*(unsigned char *)0x0C478C05)
        return;
    nlSelectMatrixStack(1);
    nlUnitMatrix();
    nlObjPutSetFadeColor(1.0f, 1.0f, 1.0f);
    VTX[2].x = VTX[0].x = -0.5f;
    VTX[3].x = VTX[1].x = -0.490624994f;
    t = (Task *)0x0C40F8B0;
    for (i = 0; i < *(int *)0x0C40FA30; i++, t++) {
        y = TOP - (float)t->a / 1000.0f / 16.6700001f * 0.75f;
        if (BOTTOM > y)
            y = BOTTOM;
        VTX[1].y = VTX[0].y = y;
        VTX[3].y = VTX[2].y = prev;
        draw(0x0C1BF9B0);
        y2 = TOP - (float)t->b / 1000.0f / 16.6700001f * 0.75f;
        if (BOTTOM > y2)
            y2 = BOTTOM;
        VTX[1].y = VTX[0].y = y2;
        VTX[3].y = VTX[2].y = y;
        prev = y2;
        draw((int)&COLOURS[t->colour]);
    }
    y = TOP - (float)*(int *)0x0C40FA34 / 1000.0f / 16.6700001f * 0.75f;
    if (BOTTOM > y)
        y = BOTTOM;
    VTX[1].y = VTX[0].y = y;
    VTX[3].y = VTX[2].y = prev;
    draw(0x0C1BF9B0);
    VTX[2].x = VTX[0].x = -0.487500012f;
    VTX[3].x = VTX[1].x = -0.478125006f;
    y = TOP - (float)*(int *)0x0C40FA38 / 1000.0f / 16.6700001f * 0.75f;
    if (BOTTOM > y)
        y = BOTTOM;
    VTX[1].y = VTX[0].y = y;
    VTX[3].y = VTX[2].y = TOP;
    draw(0x0C1BF9E0);
    *(int *)0x0C40FA30 = 0;
    VTX[2].x = VTX[0].x = -0.474999994f;
    VTX[3].x = VTX[1].x = -0.465624988f;
    prev = TOP;
    y = TOP;
    for (c = (int *)0x0C40FA44; c < (int *)0x0C40FA58; c++) {
        y = y - (float)*c / 1572864.0f * 0.75f;
        if (BOTTOM > y)
            y = BOTTOM;
        VTX[1].y = VTX[0].y = y;
        VTX[3].y = VTX[2].y = prev;
        draw(0x0C1BF9C0);
        prev = y;
    }
}
