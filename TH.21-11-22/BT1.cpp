#include <stdio.h>

bool isOdd(int n)
{
    return n % 2 != 0;
}

void output(int n)
{
    if (isOdd(n))
        printf("%d\n", n);
    else
        printf("%d\n", n + 1);
    return;
}

int main(int argc, char const *argv[])
{
    int n;
    do
    {
        printf("Nhap n: ");
        scanf("%d", &n);
        if (n < 1)
            printf("n phai lon hon 0\n");
    } while (n < 1);

    output(n);
    return 0;
}