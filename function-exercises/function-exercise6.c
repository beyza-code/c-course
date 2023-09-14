#include <stdio.h>
#include <stdlib.h>

// Klavyeden negatif bir değer girilinceye kadar kullanıcıdan sürekli sayı
// isteyen C programını fonksiyon kullanarak yazınız.

void askfornumber() {
  int number;
  while (1) {
    printf("Please enter a number\n");
    scanf("%d", &number);
    if (number < 0) {
      break;
    }
  }
}

int main() {

  askfornumber();
  return 0;
}