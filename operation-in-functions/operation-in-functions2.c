#include <stdio.h>
#include <stdlib.h>

// 2 adet fonksiyon yazın
// birinci fonksiyon girilen sayının ikinin katı oldugunu gosterir.
// 2. fonksiyon girilen sayının 3 katı olduğunu gosterir
// Bu iki fonksiyonu kullanarak bir C programı yazın , bu program kullanıcının
// girdiği değerin çift olup olmadığını , 3 katı olup olmadığını ,6nın katı olup
// olmadığını belirlesin ve ekrana yazdırsın. Aynı C programını fonksiyonu
// değişenin adresiyle çağırıp yazın

void divisibility(int *n) {

  if (*n % 2 == 0) {
    printf("Our number is even\n");
  }
  if (*n % 3 == 0) {
    printf("Our number is is a multiple of 3\n");
  }
  if ((*n % 2 == 0) && (*n % 3 == 0)) {
    printf("is a multiple of 6");
  }
}

int main() {

  int number;
  printf("please enter a number\n");
  scanf("%d", &number);
  divisibility(&number);

  return 0;
}