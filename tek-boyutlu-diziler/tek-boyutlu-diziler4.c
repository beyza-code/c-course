#include <stdio.h>

// For dögüsü ile kullanıcıdan tek boyutlu sayı dizisi değeri alma ve bastırma

int main() {

  int numbers[3];
  for (int i = 0; i < 3; i++) {
    scanf("%d", &numbers[i]);
  }
  for (int i = 0; i < 3; i++) {
    printf("%d\n", numbers[i]);
  }
  return 0;
}