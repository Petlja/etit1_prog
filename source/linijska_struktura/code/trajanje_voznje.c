#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int hPocetak, mPocetak, sPocetak, hKraj, mKraj, sKraj;
    scanf("%d%d%d%d%d%d", &hPocetak, &mPocetak, &sPocetak, &hKraj, &mKraj, &sKraj);
    int SPocetak = hPocetak * 60 * 60 + mPocetak * 60 + sPocetak;
    int SKraj = hKraj * 60 * 60 + mKraj * 60 + sKraj;
    int S = SKraj - SPocetak;
    int sTrajanje = S % 60;
    int mTrajanje = (S / 60) % 60;
    int hTrajanje = (S / (60 * 60));
    printf("%d:%d:%d", hTrajanje, mTrajanje, sTrajanje);
    return 0;
}