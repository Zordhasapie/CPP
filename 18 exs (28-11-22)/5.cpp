#include <stdio.h>
#include <6.cpp>

int main(int argc, char const *argv[])
{
    int n;
    printf("nhap n: ");
    scanf("%d", &n);

    if (n % 2 == 0)
        printf("%d la so chan", n);
    else
        printf("%d la so le", n);
    return 0;
}

