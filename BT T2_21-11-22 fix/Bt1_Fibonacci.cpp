#include <stdio.h>
// tổ hợp phím Alt+Shift+F để auto format code cho đẹp nha

int fibo(int n)
{
    int F0 = 1, F1 = 1, Fn = 0;

    // if (n < 0)
    // {
    //     return -1;
    // }
    // else
    if (n < 2)
    {
        return 1;
    }
    else
    {
        for (int i = 2; i < n; i++)
        {
            Fn = F0 + F1;
            F0 = F1;
            F1 = Fn;
            // Đúng ko nhể?
        }
        return Fn;
    }
    return -1;
}

int main()
{
    int n;
    do
    {
        printf("nhập n: ");
        scanf("%d", &n);
        if (n < 0)
        {
            printf("Nhập lại, N phải lớn hơn 0");
        }
    } while (n < 0);
    int Fn = fibo(n);
    if (Fn > 0)
    {
        printf("Số Fibonacci thứ %d là: %d\n", n, Fn);
    }
    return 0;
}

// Chắc ổn rồi nhỉ?
// OK xong