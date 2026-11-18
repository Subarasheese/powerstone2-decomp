/* Library code: C that behaves like this game's own bytes. */
/* Shinobi library, SG_OV (overlay libraries): our own C, written from the disassembly. */

typedef struct {
    int key;
    int refs;
} LibEntry;

typedef struct {
    int count;
    int unused;
    LibEntry ent[1];                /* ent[0] is at +8 */
} LibTable;

int ovLockCs(int *saved);
void ovUnlockCs(int *saved);
LibTable *ovGetLibTbl(void *out);
int ovSearchLibByUuid(int key);



int ovSearchLib(int key)
{
    int out[1];
    LibTable *t = ovGetLibTbl(out);
    int i;

    for (i = 0; i < t->count; i++) {
        if (t->ent[i].key == key)
            return i;
    }
    return -3;
}
