/* Hand-written: kmCreateTextureSurface. After kmtex_CheckTextureFormat accepts the texture, a small VQ texture (format 3 in the
   low half of its first word) is sized by kmtex_ConfirmSmallVQ and set up by FUN_0c2c6d40, any other by FUN_0c2c6c60 with its
   word at +20; both get the flag at 0C8BF108 as 0 or 1 and the texture's +28. The original keeps that address on the stack across
   kmtex_ConfirmSmallVQ (pushed, then popped back into r6), which the generator could not follow. A result of 3 asks for the
   callback (kmyRequestCallback with 3; r5-r7 still hold what the set-up call was given). */
int kmtex_CheckTextureFormat(int a4, int a5, int a6, int a7);
int kmtex_ConfirmSmallVQ(int a4);
int FUN_0c2c6d40(int a4, int a5, int a6);
int FUN_0c2c6c60(int a4, int a5, int a6);
int kmyRequestCallback(int a4, int a5, int a6, int a7);

int kmCreateTextureSurface(int a4, int a5, int a6, int a7)
{
    int r;
    int flag;
    int second;

    r = kmtex_CheckTextureFormat(a4, a5, a6, a7);
    if (r != 0) {
        return r;
    }
    flag = *(int *)0xC8BF108;
    if ((unsigned short)(*(int *)a4) == 3) {
        second = kmtex_ConfirmSmallVQ(a4);
        r = FUN_0c2c6d40(flag != 0, second, a4 + 28);
    } else {
        second = *(int *)(a4 + 20);
        r = FUN_0c2c6c60(flag != 0, second, a4 + 28);
    }
    if (r == 3) {
        kmyRequestCallback(3, second, a4 + 28, a7);
    }
    return r;
}
