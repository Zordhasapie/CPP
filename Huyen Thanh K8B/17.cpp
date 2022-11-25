#include <stdio.h>
#include <array>

int findMaxIndex(int arr[], int n)
{
    int maxIndex = 0, max = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            maxIndex = i;
        }
    }
    return maxIndex;
    ;
}

int main(int argc, char const *argv[])
{
    int n = 1;
    int arr[100];
    do
    {
        printf("nhap vao N phan tu cua mang: ");
        scanf("%d", &n);
    } while (n < 1 || n > 100);
    for (int i = 0; i < n; i++)
    {
        printf("nhap vao phan tu thu %d cua mang: ", i);
        scanf("%d", &arr[i]);
    }
    int maxIndex = findMaxIndex(arr, n);
    printf("Mang da nhap: ");
    for (int i = 0; i < n; i++)
        printf(" %d ", arr[i]);
    printf("\n");

    printf("phan tu lon nhat cua mang la: %d \n", arr[maxIndex]);
    
    printf("nhap so de chen thay the phan tu lon nhat cua mang: ");
    scanf("%d", &arr[maxIndex]);

    printf("mang sau khi chen: ");
    for (int i = 0; i < n; i++)
        printf(" %d ", arr[i]);
    return 0;
}
