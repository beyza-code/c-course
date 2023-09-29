#include <stdio.h>
#include <stdlib.h>

// Bilgisayar tarafından üretilen N adet sayı bir dizide tutulmaktadır. Dizi
// içerisindeki maksimum ve minimum değerlerin iki ayrı fonksiyon kullanarak
// bulunmasını sağlayan C programını yazınız.

int biggest(int A[], int numberOfelement) {
  int i, bigst;
  bigst = A[0];
  for (i = 1; i < numberOfelement; i++) {
    if (A[i] > bigst) {
      bigst = A[i];
    }
  }
  return bigst;
}

int mostLittle(int A[], int numberOfelement) {
  int i, mostlit;
  mostlit = A[0];
  for (i = 1; i < numberOfelement; i++) {
    if (A[i] < mostlit) {
      mostlit = A[i];
    }
  }
  return mostlit;
}
int main() {

  int n, i;
  printf("How many umbers will be created?\n");
  scanf("%d", &n);
  int serie[n];
  srand(time(0));
  printf("array elements\n");
  for (i = 0; i < n; i++) {
    serie[i] = rand() % 100;
    printf("%d\n", serie[i]);
  }
  printf("\nBiggest=%d\n", biggest(serie, n));
  printf("\nSmallest=%d\n", mostLittle(serie, n));

  return 0;
}