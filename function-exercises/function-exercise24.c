#include <stdio.h>
#include <stdlib.h>
// Kullanıcı tarafından saniye olarak girilen bir değerin saat: dakika
// saniye(hh:mm:ss)formatın dönüştürülmesini sağlayan C programını fonksiyon
// kullanarak yazınız.

void convertToSecond(int second) {
  int hour, min, scnd, time;
  scnd = second;
  hour = scnd / 3600;
  time = scnd % 3600;
  min = time / 60;
  scnd = time % 60;
  printf("%d:%d:%d", hour, min, scnd);
}

int main() {
  int second;
  printf("Please enter the value of second\n");
  scanf("%d", &second);
  convertToSecond(second);

  return 0;
}