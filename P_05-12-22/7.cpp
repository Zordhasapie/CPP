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

int count_X(int x, int arr[], int n)
{
    int i = 0, count = 0;
    while (i < n)
    {
        if (arr[i] == x)
            count++;
        i++;
    }
    return count;
}

int bai_1()
{
    int a[MAX], n;
    arrayMake(a, n);
    arrayOut(a, n);
    return 0;
}

int bai_2()
{
    int arr[MAX], n, x;
    arrayMake(arr, n);
    printf("nhap vao X muon tim: ");
    scanf("%d", &x);

    int count = count_X(x, arr, n);
    if (count != 0)
        printf("co %d phan tu trong mang co gia tri la X(%d)", count, x);
    else
    {
        printf("khong tim thay gia tri cua x(%d) trong mang, hien thi mang...", x);
        arrayOut(arr, n);
    }
    return 0;
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

int bai_3()
{
    int arr[MAX], n;
    arrayMake(arr, n);
    sortA(arr, n);
    arrayOut(arr, n);
    return 0;
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

int bai_4()
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

int bai_5()
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

void push_X_to_Index(int x, int arr[], int index, int n)
{
    for (int i = n - 1; i > index; i--)
    {
        arr[i + 1] = arr[i];
    }
    arr[index] = x;
    return;
}

int bai_6()
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

void menu()
{
    int choice;
    printf("WELCOME\n");
    printf("bai 1 - 6 tuong ung nhap 1 - 6\n");
    printf("make a choice: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        bai_1();
        break;
    case 2:
        bai_2();
        break;
    case 3:
        bai_3();
        break;
    case 4:
        bai_4();
        break;
    case 5:
        bai_5();
        break;
    case 6:
        bai_6();
        break;
    default:
        printf("WRONG CHOOSE, AGAIN!!!!");
        menu();
    }
    return;
}

int main(int argc, char const *argv[])
{
    menu();
    return 0;
}
