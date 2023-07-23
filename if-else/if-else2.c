#include <stdio.h>
#include <stdlib.h>

// Kullanıcıdan alınan 2 sayının hangisinin büyük olduğunu belirle

int main() {

  int sayi1;
  int sayi2;

  printf("Lütfen ilk sayıyı giriniz\n");

  scanf("%d", &sayi1);

  printf("Lütfen ikinci sayıyı giriniz\n");

  scanf("%d", &sayi2);

  if (sayi1 > sayi2) {
    printf("Birinci sayı ikinci sayıdan buyuktur");
  } else if (sayi1 == sayi2) {
    printf("Sayılar birbirine eşittir");
  } else {
    printf("İkinci sayı sayı birinci sayıdan buyuktur");
  }

  return 0;
}