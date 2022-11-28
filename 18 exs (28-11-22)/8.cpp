#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, lastDigits;
    printf("nhap n: ");
    scanf("%d", &n);

    printf("trong %d: \n", n);
    while (n != 0)
    {
        lastDigits = n % 10;
        n = n / 10;
        
        if (lastDigits % 2 != 0)
            printf("co %d la so le \n", lastDigits);
    }

    return 0;
}
