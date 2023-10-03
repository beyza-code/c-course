#include <stdio.h>
#include <stdlib.h>

// Kullanıcı tarafından N elemanlı bir diziye alınan tam sayıların ortalamasının
// bulunmasını sağlayan fonksiyon prototipi aşağıda verilmiştir.Buna göre
// aşağıdaki prototipi kullanarak C programını yazınız.
// ortalama(int *dizim,int boyut)
float findAverage(int *serie, int size) {
  int i;
  int total = 0;
  for (i = 0; i < size; i++) {
    total += serie[i];
  }
  return (float)total / size;
}

int main() {

  int n;
  int i;
  float average;
  printf("How many numbers will you enter?\n");
  scanf("%d", &n);
  int serie[n];
  for (i = 0; i < n; i++) {
    printf("enter the number %d. ", i + 1);
    scanf("%d", &serie[i]);
  }
  average = findAverage(serie, n);
  printf("average of the numbers you entered is %.3f\n", average);

  return 0;
}