#include <stdio.h>
#include <stdlib.h>

// Kullanıcıdan pozitif bir tam sayıyı girdi olarak alıp bu sayının 13 veya 17
// ile bölünüp bölünemediğini bulan C programını yazınız.

int main() {
  int number;
  printf("Please enter a number\n");
  scanf("%d", &number);

  if ((number % 13 == 0) && (number % 17 == 0)) {
    printf("The input number can be divided by 13 and 17\n");
  } else if (number % 13 == 0) {
    printf("The input number can be divided by 13\n");
  } else if (number % 17 == 0) {
    printf("The input number can be divided by 17\n");
  } else {
    printf("The number can't be divided by 13 or 17\n");
  }
  return 0;
}