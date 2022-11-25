#include <stdio.h>

int reverse(int n)
{
    int result = 0;
    while (n != 0)
    {
        result = result * 10 + n % 10;
        n = n / 10;
    }
    return result;
}

bool isPalindrome(int n)
{
    return n == reverse(n);
}

int main(int argc, char const *argv[])
{
    int n;
    printf("Nhập vào n: ");
    scanf("%d", &n);

    if (isPalindrome(n))
        printf("%d là số đối xứng, vì đối số %d của nó là chính nó.", n, reverse(n));
    else
        printf("%d không là số đối xứng, vì đối số của nó(%d) khác nó.", n, reverse(n));
    return 0;
}
