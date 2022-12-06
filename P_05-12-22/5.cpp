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
    printf("\n");
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

void remove_All_X(int x, int arr[], int n)
{
    while (indexOf(x, arr, n) != -1)
    {
        for (int i = indexOf(x, arr, n); i < n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
    }
    return;
}

int main(int argc, char const *argv[])
{
    int arr[MAX], n, x;
    arrayMake(arr, n);
    printf("nhap X can xoa: ");
    scanf("%d", &x);
    remove_All_X(x, arr, n);
    printf("Mang sau khi xoa: \n");
    arrayOut(arr, n);
    return 0;
}
