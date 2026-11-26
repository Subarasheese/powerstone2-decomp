/* scratch */
struct o16_uchar { char p[0x16]; unsigned char v; };
struct o40_float { char p[0x40]; float v; };
struct o44_float { char p[0x44]; float v; };
struct o48_float { char p[0x48]; float v; };
struct o78_uint { char p[0x78]; unsigned int v; };
struct o7C_uint { char p[0x7C]; unsigned int v; };
struct oA8_uchar { char p[0xA8]; unsigned char v; };
struct oC8_int { char p[0xC8]; int v; };
struct oCC_int { char p[0xCC]; int v; };
int FUN_0c148d64(int, int, int);
int FUN_0c187798(int, int, int);
void FUN_0c1490ba(int a4);

void FUN_0c1490ba(int a4)
{
    int t3;

    t3 = *(signed char *)((a4 + 0x16));
    if (t3 == 0) {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        { struct mv3 { int w[3]; }; *(struct mv3 *)((a4 + 0x28)) = *(struct mv3 *)(0xC2029D8 + (*(signed char *)((a4 + 0x2))) * 12); }  /* manual: _quick_odd_mvn r0 12, r1 r4 + 40, r2 0x0C2029D8 + 12 * the byte at r4 + 2 */
        (((struct o48_float *)(a4))->v) = 1.0f;
        (((struct o44_float *)(a4))->v) = 1.0f;
        (((struct o40_float *)(a4))->v) = 1.0f;
        (((struct o7C_uint *)(((((struct oC8_int *)(a4))->v))))->v) = 0;
        (((struct o78_uint *)(((((struct oC8_int *)(a4))->v))))->v) = 0;
        (((struct o78_uint *)(((((struct oCC_int *)(a4))->v))))->v) = 0;
        *(unsigned short *)((a4 + 0x1C)) = 0x1E;
        (((struct o16_uchar *)(a4))->v) = ((*(signed char *)((a4 + 0x16))) + 0x1);
    } else if (t3 != 1) {
        return;
    }
    if (((*(short *)((a4 + 0x1C))) & 4) != 0) {
        (((struct oA8_uchar *)(a4))->v) = 0x0;
    } else {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
    }
    t3 = *(short *)((a4 + 0x1C));
    *(unsigned short *)((a4 + 0x1C)) = (t3 - 1);
    if ((int)(short)(t3 - 1) <= 0) {
        (((struct oA8_uchar *)(a4))->v) = 0x1;
        FUN_0c148d64(a4, 0x3, 0x0);
    }
}
