#include <stdio.h>
#include <stdlib.h>

// Bir üçgenin açılarını girdi olarak alan ve bu üçgenin eşitkenar, ikizkenar
// veya çeşit kenar üçgen olup olmadğını belirleyen C programını yazınız

int main() {
  int angle1, angle2, angle3;
  printf("Please enter 3 each angle\n");
  scanf("%d", &angle1, &angle2, &angle3);

  if (angle1, angle2, angle3 == 180) {

    if (angle1 == 60 && angle2 == 60 && angle3 == 60) {
      printf("This is a equilateral triangle");
    } else if (angle1 == angle2 || angle1 == angle3 || angle2 == angle3) {
      printf("This is a isosceles triangle");
    }
  } else {
    printf("This is a variegated triangular");
    
  }

  return 0;
}