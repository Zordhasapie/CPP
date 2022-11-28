#include <stdio.h>

int main() {
  int n;

  printf("Nhap vao 1 so: ");
  scanf("%d", &n);

  printf("Cac so chan tu 1 -> %d sau khi duoc + them 1 la: \n", n);
  for(int i = 1; i <= n; i++) {
    if(i % 2 == 0) {
      printf("%d ", i + 1);
    }
  }
  printf("\n");
}
