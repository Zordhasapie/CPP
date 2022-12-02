#include <stdio.h>
#define MAX 100

void arrayMake(int a[], int &n)
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

void arrayOut(int a[], int n)
{
    printf("Mang can dua ra:");
    for (int i = 0; i < n; i++)
    {
        printf(" %d ", a[i]);
    }
    return;
}

int main(int argc, char const *argv[])
{
    int a[MAX], n;
    arrayMake(a, n);
    arrayOut(a, n);
    return 0;
}
