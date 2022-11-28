#include <stdio.h>

int main() {
  int n;
  printf("Nhap vao 1 so: ");
  scanf("%d", &n);

  printf("Cac so le lan luot la: ");
  for(int i = 1; i <= n; i += 2) {
    printf("%d ", i);
  }
  printf("\n");
}
