#include <stdio.h>
#include <stdlib.h>

// Kendisi hariç pozitif tam bölenlerinin toplamı kendisine eşiit olan sayılara
// mükemmel sayı adı verilmektedir.Buna göre klavyeden girilen bir sayının
// mükemmel olup olmadığını fonksiyon kullanarak bulan C programını yazınız.

int perfectnumber(int n) {
  int i = 1;
  int total = 0;

  while (i < n) {
    if (n % i == 0) {
      total = total + i;
    }
    i++;
  }
  if (total == n) {
    return 1;
  } else {
    return 0;
  }
}

int main() {

  int number;
  int result;
  printf("Please enter a number\n");
  scanf("%d", &number);
  result = perfectnumber(number);

  if (result == 1) {
    printf("The number is perfect\n");
  } else {
    printf("The number isn't perfect\n");
  }
  return 0;
}