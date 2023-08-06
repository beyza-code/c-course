#include <stdio.h>
#include <stdlib.h>

// Kullanıcı tarafından girilen bir reel sayının aşağıda verilen f fonksiyonuna
// gore f(x) değerini hesaplayıp döndüren bir program yazınız
// f(x) = x*x*x + 13*x*x + 47*x + 5

int main() {

  float number;

  printf("Please enter a value\n");
  scanf("%f", &number);

  printf(">> f(%.3f)=%.3f", number,number * number * number + 13 * number * number + 47 * number + 5);

  return 0;
}