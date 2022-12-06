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

void split_Divisor_2(int arr_A[], int arr_B[], int arr_C[], int n)
{
    int i_A = 0, i_B = 0, i_C = 0;
    while (i_A < n)
    {
        if (arr_A[i_A] % 2 != 0)
        {
            arr_B[i_B] = arr_A[i_A];
            i_B++;
        }
        else
        {
            arr_C[i_C] = arr_A[i_A];
            i_C++;
        }

        i_A++;
    }
    return;
}

int main(int argc, char const *argv[])
{
    int arr_A[MAX], arr_B[MAX], arr_C[MAX], n;
    arrayMake(arr_A, n);
    printf("XUAT MANG A: \n");
    arrayOut(arr_A, n);
    printf("XUAT MANG B(so le): \n");
    arrayOut(arr_B, n);
    printf("XUAT MANG C(so chan): \n");
    arrayOut(arr_C, n);
    return 0;
}

