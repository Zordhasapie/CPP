#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a, b;
    printf("Nhap vao A, B: ");
    scanf("%d %d", &a, &b);

    if (a > b)
        printf("so A(%d) lon nhat", a);
    else if (a < b) printf("so B(%d) lon nhat", b);
    else printf("2 so A(%d), B(%d) bang nhau", a,b);
    return 0;
}
