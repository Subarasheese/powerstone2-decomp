/* Library code: C that behaves like this game's own bytes. */
/* Shinobi library, SG_BUP (backup and its fibers): our own C, written from the disassembly. */

typedef struct {
    int created;
    char rest[3448];
} BuFbrServer;                                  /* 0xd7c bytes each */

extern BuFbrServer buFbrServers[2];
extern unsigned int gBuBlockTableA[4];
extern unsigned int gBuBlockTableB[4];

void buFbrDestroyServer(BuFbrServer *s);



void buFbrExit(void)
{
    int i;
    BuFbrServer *s = buFbrServers;

    for (i = 0; i < 2; i++, s++) {
        if (s->created)
            buFbrDestroyServer(s);
    }
}
