#include <stdio.h>
#include <math.h>
#define Max = 100;

void arrayMake(int a[], int &n) // bài 1 a
{
    do
    {
        printf("Nhap vao luong phan tu n trong mang(101>n>0): ");
        scanf("%d", &n);
    } while (n < 1 || n > 100);
    for (int i = 0; i < n; i++)
    {
        printf("nhap vao phan tu thu %d cua mang: ", i);
        scanf("%d", &a[i]);
    }
    return;
}

void arrayOut(int a[]) // bài 1 b
{
    int n = sizeof(a);
    printf("Mang can dua ra:");
    for (int i = 0; i < n; i++)
    {
        printf(" %d ", a[i]);
    }
    return;
}

// void arrayIndexOut(int a[], int i)
// {
//     return;
// }

bool isOdd(int a) // 1 phần bài 2 (check số lẻ)
{
    return a % 2 != 0;
}

bool isArrayAllEven(int a[]) // bài 2a
{
    int i = 0, l = sizeof(a);

    while (!isOdd(a[i]))
    {
        if (i >= l)
            return true;
        i++;
    }
    return false;
}

bool isArrayAllOdd(int a[]) // bài 2a
{
    int i = 0, l = sizeof(a);

    while (isOdd(a[i]))
    {
        if (i >= l)
            return true;
        i++;
    }
    return false;
}

bool isPrime(int n)  // 1 phần bài 2 (check số nguyên tố)
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

bool isCP(int n) // 1 phần bài 2 (check số chính phương)
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

bool isArrayAllPrime(int a[]) // bài 2b (cả mảng là nguyên tố)
{
    int i = 0, l = sizeof(a);

    while (isPrime(a[i]))
    {
        if (i >= l)
            return true;
        i++;
    }
    return false;
}

bool isArrayAllCP(int a[]) // bài 2b (cả mảng chính phương)
{
    int i = 0, l = sizeof(a);

    while (isCP(a[i]))
    {
        if (i >= l)
            return true;
        i++;
    }
    return false;
}

bool isArrayAscending(int a[]) // bài 2c (mảng giảm dần)
{
    int i = 1, l = sizeof(a);

    while (i<l)
    {
        if (a[i] <a[i-1])
            return false;
        i++;
    }
    return true;
}

bool isArrayDescending(int a[]) // bài 2c (mảng giảm dần)
{
    int i = 1, l = sizeof(a);

    while (i<l)
    {
        if (a[i] >a[i-1])
            return false;
        i++;
    }
    return true;
}
