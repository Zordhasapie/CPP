#include <stdio.h>
#include <array>

int findMax(int arr[],int n)
{
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

int main(int argc, char const *argv[])
{
    int n = 1;
    int arr[100];
    do
    {
        printf("nhap vao N phan tu cua mang");
        scanf("%d", &n);
    } while (n < 1 || n > 100);
    for (int i = 0; i < n; i++)
    {
        printf("nhap vao phan tu thu %d cua mang: ", i);
        scanf("%d", &arr[i]);
    }
    printf("phan tu lon nhat cua mang la: %d", findMax(arr,n));
    return 0;
}
