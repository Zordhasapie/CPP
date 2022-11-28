#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b, c;
    printf("Nhap vao A, B, C: ");
    scanf("%d %d %d", &a, &b, &c);

    // if (a > b)
    //     printf("so A(%d) lon nhat", a);
    // else if (a < b) printf("so B(%d) lon nhat", b);
    // else printf("2 so A(%d), B(%d) bang nhau", a,b);

    if (a > b && a > c)
        printf("so A(%d) lon nhat", a);
    else if (b > a && b > c)
        printf("so B(%d) lon nhat", b);
    else if (c > a && c > b)
        printf("so C(%d) lon nhat", c);
    else
        printf("2 hoac 3 so vua nhap bang nhau, ko co so lon nhat");

    return 0;
}