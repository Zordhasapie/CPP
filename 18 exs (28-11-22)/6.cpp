#include <stdio.h>
#include <math.h>

bool isPrime(int n)
{
    int i = 0;
    if (n >= 2)
    {
        double d = sqrt(n);
        for (i = 2; i <= d; i++)
        {
            if (n % i == 0)
            {
                break;
            }
        }
        if (i > d)
        {
            return true;
        }
    }
    return false;
}

bool isCP(int n)
{
    int i = 1;
    if (n > 1)
    {
        while (i * i < n)
        {
            i++;
        }
        if (i * i == n)
        {
            return true;
        }
    }
    return false;
}

bool isPerfect(int n)
{
    int sum = 0; 
    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0) 
            sum += i;   
    }
    if (sum == n)
        return true; 
    return false;    
}

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
    printf("Nhap N: ");
    scanf("%d", &n);

    if(isPalindrome(n)) printf("%d la so doi xung", n);
    if(isCP(n)) printf("%d la so chinh phuong", n);
    if(isPerfect(n)) printf("%d la so hoan hao", n);
    if(isPrime(n)) printf("%d la so nguyen to", n);

    return 0;
}
