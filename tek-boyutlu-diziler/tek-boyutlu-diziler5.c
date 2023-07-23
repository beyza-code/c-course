#include <stdio.h>

// While Döngüsü ile kullanıcıdan tek boyutlu sayı dizisi değeri alma ve
// bastırma

int main() {
  int numbers[3];
  int i;

  i = 0;
  while (i < 3) {
    scanf("%d", &numbers[i]);
    i++;
  }
  i = 0;
  while (i < 3) {
    printf("%d\n", numbers[i]);
    i++;
  }
}