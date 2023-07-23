#include <stdio.h>

main() {

  int day = 3;
  switch (day) {
  case 1:
    printf("Pazartesi");
    break;
  case 2:
    printf("Salı");
    break;
  case 3:
    printf("Çarşamba");
    break;
  case 4:
    printf("Perşembe");
    break;
  case 5:
    printf("Cuma");
    break;
  case 6:
    printf("Cumartesi");
  case 7:
    printf("Pazar");
  default:
    printf("Geçersiz gün");
  }
  return0;
}