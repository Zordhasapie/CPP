#include <stdio.h>

int main() {
  float r, s, c, PI = 3.14;

  printf("Nhap vao ban kinh R: ");
  scanf("%f", &r);
	c = r * 2 * PI;
	s = r * r * PI;
	printf("Chu vi cua hinh tron: %.2f\nDien tich cua hinh tron: %.2f\n", c, s);
}
