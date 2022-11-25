#include <stdio.h>
#include <math.h>
bool isPrime(int n)
{
    int i = 0;
    if (n >= 2)
    {
        double d = sqrt(n);
        for (i = 2; i <= d; i++)
        {
            if (n % i == 0)
            {
                break;
            }
        }
        if (i > d)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int n;
    printf("Nhập vào N: ");
    scanf("%d", &n);
    
    // for (int i = 2; i < n; i++){
    //     if(isPrime(i)){
    //         printf("%d  ", i);
    //         if (i%10==0)printf("\n");
    //     }
    // }
    printf("%d", n);
    if (isPrime(n)) printf(" là số nguyên tố");
    if (!isPrime(n)) printf(" không là số nguyên tố");
    return 0;
}
// số nguyên tố là số chỉ chia hết cho 1 và chính nó!
// thuật toán để kiểm tra có phải số nguyên tố hay ko: chia lần lượt N cho tất cả các số từ 2 cho đến căn 2 của N,
// nếu ko số nào chia hết thì N là số nguyên tố, ngược lại là hợp số!
// lâu ko làm snt quên mẹ rồi
// chạy bừa đê.
//ok có vẻ chuẩn, test nặng hơn tí nhể?
//đéo chuẩn tí nào cả :v
// xong, hết bug :v
//test phát nữa cho chắc
 //OK!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!

//Tất cả những phần sau // các b ko cần viết nha

// ban ngày code thì cứ 3p lại "Sáng ơi!" 5p lại "Sáng ơi". Cáu thực sự!