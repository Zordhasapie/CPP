#include <stdio.h>
#include <math.h>

int main() {
  float a, b, c, d, x1, x2;

  printf("Nhap vao 3 so a, b va c: ");
  scanf("%f %f %f", &a, &b, &c);

	d = (b * b) - (4 * a * c);

	if(d > 0) {
		x1 = (-b + sqrt(d)) / (2 * a);
		x2 = (-b - sqrt(d)) / (2 * a);

		printf("Phuong trinh co 2 nghiem la x1 = %.2f va x2 = %.2f\n", x1, x2);
	} else if(d == 0) {
		x1 = (-b / (2 * a));
		printf("Phuong trinh co nghiem kep la x1 = x2 = %.2f\n", x1);
	} else {
		printf("Phuong trinh vo nghiem\n");
	}
}
