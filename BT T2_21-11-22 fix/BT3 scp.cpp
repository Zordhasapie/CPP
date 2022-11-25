#include <stdio.h>

bool isCP(int n)
{
    int i = 1;
    if (n > 1)
    {
        while (i * i < n)
        {
            i++;
        }
        if (i * i == n)
        {
            return true;
        }
    }
    return false;
}

int main(int argc, char const *argv[])
{
    int n;
    printf("Nhập N: ");
    scanf("%d", &n);

    // for (int i = 2; i < n; i++)
    // {
    //     if (isCP(i))
    //         printf("%d  ", i);
    // }
    //đoạn vừa rồi để test thôi

    if (isCP(n))
        printf("%d là số chính phương", n);
    else
        printf("%d Không là số chính phương", n);

    return 0;
}
// nghỉ đã

