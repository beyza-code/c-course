#include <stdio.h>
#include <stdlib.h>

// Kullanıcı tarafından derece olarak girilen bir değerin Fayrenayt'a, Fayrenayt
// olarak girilen bir değerin dereceye dönüştürülmesini sağlayan C programını
// fonksiyon kullanarak yazınız.
// f=(1.8*c)+32   c=(5/9)*(F-32)

float FtoC(float f) { return (0.5555) * (f - 32); }
float CtoF(float c) { return (1.8 * c) + 32; }

int main() {
  float f, c, choice;
  printf("1 Fayrenayt => Celsius\n");
  printf("2 Celsius => Fayrenayt\n");
  scanf("%f", &choice);

  if (choice == 1) {
    printf("Please enter the value of Fayrenayt\n");
    scanf("%f", &f);
    printf("%f F = %F C\n", f, FtoC(f));
  } else if (choice == 2) {
    printf("Please enter the value of Celsius\n");
    scanf("%f", &c);
    printf("%f C = %f F\n", c, CtoF);
  } else {
    printf("You entered false");
  }

  return 0;
}