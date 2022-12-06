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

void sortA(int arr[], int n)
{
    int i = 0, swaper;
    while (i < n)
    {
        while (arr[i] > arr[i + 1])
        {
            swaper = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = swaper;
            if (i != 0)
                i--;
            // arrayOut(arr,n);
            // Uncomment dòng 42 và chạy để thấy cách thuật toán sắp xếp hoạt động, đây là thuật toán "Bubble Sort"... hoặc tôi nhầm nó với thứ khác, hoặc nó chưa phải tối ưu
        }
        i++;
    }
}

int main(int argc, char const *argv[])
{
    int arr[MAX], n;
    arrayMake(arr,n);
    sortA(arr,n);
    arrayOut(arr,n);
    return 0;
}
