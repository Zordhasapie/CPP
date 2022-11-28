#include <stdio.h>

int main(int argc, char const *argv[])
{
    int m;

    do
    {
        printf("nhap thang can tim:");
        scanf("%d", &m);
    } while (m < 1 || m > 12);

    switch (m)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("thang %d co 31 ngay", m);
        break;
    case 2:
        printf("thang %d co 28 hoac 29 ngay", m);
        break;
    default:
        printf("thang %d co 30 ngay", m);
        break;
    }
    return 0;
}
