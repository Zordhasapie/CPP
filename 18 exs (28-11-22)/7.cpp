#include <stdio.h>

void NamNhuan(int x) {
  if(((x % 4 == 0) && (x % 100 != 0)) || (x % 400 == 0)) {
    printf("%d la nam nhuan nen thang 2 co 29 ngay", x);
  } else {
    printf("%d khong phai nam nhuan nen thang 2 co 28 ngay", x);
  }
}

int main() {
  const int months[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

  int n, leap;
  printf("Nhap vao 1 thang bat ky: ");
  scanf("%d", &n);


	if(n >= 1 && n <= 12) {
    if(n == 2) {
        printf("Nhap nam: ");
        scanf("%d", &leap);
        NamNhuan(leap);
    } else {
		    printf("Thang %d co %d ngay\n", n, months[n - 1]);
    }
	} else {
		printf("Vui long nhap trong khoang (1 - 12)\n");
	}
}
