/* Hand-written: the fog colours. kmSetFogTableColor and kmSetFogVertexColor take a packed ARGB colour by value, a one-word struct
   that SHC passes on the stack (the callee reads @r15); the NAOMI wrappers gfx_set_fog_table_color and gfx_set_fog_vertex_color get the colour in r4,
   keep it in a local and push a copy. The generated C passed it in r5 instead. */

typedef struct { unsigned int argb; } FogColor;

int kmSetFogTableColor(FogColor c);
int kmSetFogVertexColor(FogColor c);

/* the table fog colour */
void gfx_set_fog_table_color(unsigned int argb)
{
    FogColor c;

    c.argb = argb;
    kmSetFogTableColor(c);
}

/* the vertex fog colour */
void gfx_set_fog_vertex_color(unsigned int argb)
{
    FogColor c;

    c.argb = argb;
    kmSetFogVertexColor(c);
}

/* stores the colour; the flag word after it is read and written back as it is (the table colour's version sets bit 0 there) */
int kmSetFogVertexColor(FogColor c)
{
    unsigned int f;

    *(volatile unsigned int *)0xC8D0980 = c.argb;
    f = *(volatile unsigned int *)0xC8D097C;
    *(volatile unsigned int *)0xC8D097C = f;
    return 0;
}
