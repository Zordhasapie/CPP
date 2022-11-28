#include <stdio.h>

int main() {
  float a, b;

  printf("Nhap vao 2 so a va b: ");
  scanf("%f %f", &a, &b);

  if(a == 0) {
    if(b == 0) {
      printf("Phuong trinh vo so nghiem\n");
    } else {
      printf("Phuong trinh vo nghiem\n");
    }
  } else {
    printf("Phuong trinh co nghiem duy nhat x = %.2f\n", (-b / a));
  }
}
