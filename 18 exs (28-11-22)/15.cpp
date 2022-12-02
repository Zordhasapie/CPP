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

int indexOf(int x, int arr[], int n)
{
    int i = 0;
    while (i < n)
    {
        if (arr[i] == x)
            return i;
        i++;
    }
    return -1;
}

int main(int argc, char const *argv[])
{
    int arr[MAX], n, x;
    arrayMake(arr, n);
    printf("Nhap so can tim: ");
    scanf("%d", &x);

    if (indexOf(x, arr, n) != -1)
        printf("so %d can tim o vi tri thu %d trong mang.", x, indexOf(x, arr, n));
    else
    {
        printf("ko tim thay %d trong mang, dang dua ra mang", x);
        arrayOut(arr, n);
    }

    return 0;
}
