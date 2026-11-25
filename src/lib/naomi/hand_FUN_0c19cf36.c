/* @runtime _slow_strcpy=0C187990 */
/* @runtime _quick_strcpy=0C1878F0 */
/* Hand-written: FUN_0c19cf36(a4, a5, a6): two strings (a4, a5), each cut to 127 characters when it has 128 or more, are copied to
   the buffers 0C8B5E44 and 0C8B5EC4; their addresses go to the two words of the structure the word at a6+48 points to. Returns 0. */
int strlen(int);
extern char *_builtin_strcpy(char *, const char *);

int FUN_0c19cf36(int a4, int a5, int a6)
{
    register int out;

    out = *(int *)(a6 + 48);
    if ((unsigned int)strlen(a4) >= 128) {
        *(char *)(a4 + 127) = 0;
    }
    if ((unsigned int)strlen(a5) >= 128) {
        *(char *)(a5 + 127) = 0;
    }
    _builtin_strcpy((char *)0xC8B5E44, (char *)a4);
    _builtin_strcpy((char *)0xC8B5EC4, (char *)a5);
    *(int *)out = 0xC8B5E44;
    *(int *)(out + 4) = 0xC8B5EC4;
    return 0;
}
