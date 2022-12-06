#include <stdio.h>
#define MAX 101

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

void push_X_to_Index(int x, int arr[], int index, int n)
{
    for (int i = n - 1; i > index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = x;
    return;
}

int main(int argc, char const *argv[])
{
    int arr[MAX], n, x, index;
    arrayMake(arr, n);
    printf("nhap vao X: \n");
    scanf("%d", &x);
    printf("chen vao vi tri nao: ");
    scanf("%d", &index);
    printf("truoc khi chen:\n");
    arrayOut(arr, n);
    push_X_to_Index(x, arr, index, n);
    printf("sau khi chen:\n");
    arrayOut(arr, n);
    return 0;
}
