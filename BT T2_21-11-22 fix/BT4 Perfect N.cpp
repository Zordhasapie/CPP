#include <stdio.h>

bool check(int n)
{
    int sum = 0; //khai báo tổng các ước mà sẽ tính ở phía dưới
    for (int i = 1; i <= n / 2; i++)
    {
        if (n % i == 0) // kiểm tra xem i có phải ước thực sự của n hay ko
            sum += i; //cộng i vào tổng "sum" nếu i là ước của n
    }
    if (sum == n)
        return true; // tra ve true nếu tổng sum = n (thỏa mãn điều kiện số hoàn hảo)
    return false; // mặc định trả về false nếu ko thỏa mãn (ko cần else, vì khi câu return đc chạy, hàm sẽ kết thúc)
}
int main()
{
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    if (check(n))
        printf("%d la so hoan hao.", n);
    else
        printf("%d khong phai la so hoan hao.", n);
    return 0;
    //đoạn này khỏi chú thích/
}
