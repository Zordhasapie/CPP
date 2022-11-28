#include <stdio.h>

int main(int argc, char const *argv[])
{
    float g;
    do
    {
        printf("nhap diem tb: ");
        scanf("%f", &g);
    } while (g < 0 || g > 10);

    printf("diem tb vua nhap: %.1f", g);
    return 0;
}
