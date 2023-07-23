#include <stdio.h>

// Do While Döngüsü ile kullanıcıdan tek boyutlu sayı dizisi değeri alma ve
// bastırma

int main() {

  int numbers[3];
  int i = 0;

  do {

    scanf("%d",&numbers[i]);
    i++;
  } while (i < 3);

  i = 0;
  do {
    printf("%d\n", numbers[i]);
    i++;
  } while (i < 3);
  return 0;
}